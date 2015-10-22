% prepare workspace
clc;
close all;
clear;
format shortG
format compact
addpath('lib', 'mat','sim');

load('mat/cubo.mat');
load('mat/system_int_theta.mat');
load('mat/linear_sys_int_theta.mat');
load('mat/discrete_sys_int_theta.mat');

% initial conditions
x_0 = zeros(x_size, 1);
x_0(idx_alpha) = pi/45;
x_0(idx_theta) = pi/45;

%% 
Qop = [];Rop= []; Nop =[];
mse_alpha_min = 1E10;
mse_theta_min = 1E10;

A22 = Ad(1,1);
A21 = Ad(1,2:end);
A11 = Ad(2:end,2:end);
A12 = Ad(2:end,1);
B1 = Bd(2:end);
B2 = Bd(1);

% Kalman
P0 = pi/100;
Qd = 0.5;
Rd = diag([0.001 0.01 3 1]);

for qi = rand(5,15)
    for ri = 0.1:0.5:5
        Q = diag(10*qi);
        R = diag(ri);
        %% Controladores
        % Calculo ganancia con posicionamiento de polos
        r = 0; % referencia
        % poles_c = eig(A) - [0 0 15 0 0]';
        % K = place(A, B, poles_c); % posicionamiento de polos
        % Calculo ganancia con LQR 
        K = lqr(A, B, Q, R);
        Knoise = [0.0001 0.005]; % noise theta and d_alpha

        % Ld = [L(1,:);eye(3);L(2,:)];
        % Acl = [Ad+Bd*K -Bd*K;zeros(5) Ad+Ld*Cd];
        % eig(Acl)

        %% Simulacion
        Tt = 5; % time simulation
        % sim('sim/sys_ctrl');
        try
        sim('sim/sys_ctrl_obs_empirico_int_theta');
        catch ME
            continue
        end
        cEF   = states_feno;
        cEF2  = [states_feno(:,1) interp1(states_feno_obs(:,1),...
            states_feno_obs(:,2:end),states_feno(:,1))];

        e_alpha = cEF(:,2);
        mse_alpha = mean(e_alpha.^2);

        e_theta = cEF(:,3);
        mse_theta = mean(e_theta.^2);

        fprintf('mse alpha: %0.6f, mse theta: %0.6f\n', mse_alpha, mse_theta);

        if (mse_theta < mse_theta_min)
            mse_theta_min = mse_theta;
            mse_alpha_min = mse_alpha;
            Qop = Q; Rop = R;
            EF = cEF; EF2 = cEF2; 
        end
    end
end

%% Tablas
fprintf('Error seguimiento referencia:\n');
e_alpha = EF(:,2);
mse_alpha = mean(e_alpha.^2);
fprintf('mse alpha: %0.6f\n', mse_alpha);
e_theta = EF(:,3);
mse_theta = mean(e_theta.^2);
fprintf('mse theta: %0.6f\n', mse_theta);
fprintf('Error Estimacion Observador:\n');
e_alpha_obs = EF(:,2) - EF2(:,2);
mse_alpha_obs = mean(e_alpha_obs.^2);
fprintf('mse alpha: %0.6f\n', mse_alpha_obs);
e_dtheta_obs = EF(:,6) - EF2(:,6);
mse_dtheta_obs = mean(e_dtheta_obs.^2);
fprintf('mse dtheta: %0.6f\n', mse_dtheta_obs);

%% Graficos
x0 = x_0; x0(4) = [];

figure; hold on;
plot(EF(:,1), EF(:,2),'-b','displayname','Observado \alpha');
plot(EF(:,1), EF(:,3),'-r','displayname','Simulado \theta');
plot(alpha(:,1), alpha(:,2),'--c','displayname','Simulado \alpha');
xlabel('Tiempo [s]'); ylabel('Angulo [rad]');
title({'Simulacion Modelo Fenomenologico',sprintf('$$ X_0 = [\\alpha = %0.4f, \\theta = %0.4f, \\dot{\\alpha} = %0.4f, \\dot{\\theta} = %0.4f]$$', x0)},'interpreter','latex');
legend(gca, 'show', 'location', 'best');

plot_error(EF, EF2, 'Error entre Observaci�n y Simulaci�n');


