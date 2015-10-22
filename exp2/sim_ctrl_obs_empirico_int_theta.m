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
x_0(idx_alpha) = pi/90;
x_0(idx_theta) = pi/90;

%% Controladores
% Calculo ganancia con posicionamiento de polos
% poles_c = eig(A) - [0 0 15 0 0]';
% K = place(A, B, poles_c); % posicionamiento de polos
% Calculo ganancia con LQR 
Q = diag([1 1 1 1 1]); R = 0.5*diag(1);
K = lqrd(A, B, Q, R, Ts*0.1);
Knoise = [0.0001 0.005]; % noise theta and d_alpha


%% observer 
% Ld = [L(1,:);eye(3);L(2,:)];
% Acl = [Ad+Bd*K -Bd*K;zeros(5) Ad+Ld*Cd];
% eig(Acl)







%% Simulacion
Tt = 5; % time simulation
sim('sim/sys_ctrl_obs_empirico_int_theta');
EF   = states_feno;
EF2  = [states_feno(:,1), ...
        interp1(states_feno_obs(:,1),...
                states_feno_obs(:,2:end),...
                states_feno(:,1))];

            
            
%% Tablas
e_alpha = EF(:,idx_alpha+1);
e_theta = EF(:,idx_theta+1);
e_alpha_obs  = e_alpha - EF2(:,idx_alpha+1);
e_dtheta_obs = EF(:,idx_dtheta+1) - EF2(:,idx_dtheta+1);
mse_alpha = mean(e_alpha.^2);
mse_theta = mean(e_theta.^2);
mse_alpha_obs  = mean(e_alpha_obs.^2);
mse_dtheta_obs = mean(e_dtheta_obs.^2);

fprintf('Error seguimiento referencia:\n');
fprintf('- mse alpha: %.4f\n', mse_alpha);
fprintf('- mse theta: %.4f\n', mse_theta);
fprintf('Error Estimacion Observador:\n');
fprintf('- mse alpha : %.4f\n', mse_alpha_obs);
fprintf('- mse dtheta: %.4f\n', mse_dtheta_obs);

%% Graficos
x0 = x_0; x0(4) = [];

figure; hold on;
plot(EF(:,1), EF(:,2),'-b','displayname','Observado \alpha');
plot(EF(:,1), EF(:,3),'-r','displayname','Simulado \theta');
plot(alpha(:,1), alpha(:,2),'--c','displayname','Simulado \alpha');
xlabel('Tiempo [s]'); ylabel('Angulo [rad]');
title({'Simulacion Modelo Fenomenologico',sprintf('$$ X_0 = [\\alpha = %0.4f, \\theta = %0.4f, \\dot{\\alpha} = %0.4f, \\dot{\\theta} = %0.4f]$$', x0)},'interpreter','latex');
legend(gca, 'show', 'location', 'best');

plot_error(EF , EF2 , 'Errores en observación con modelo no-lineal', params);
