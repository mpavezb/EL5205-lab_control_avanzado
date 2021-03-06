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
r = 0;
load('mat/test_lqr_2_empirico');
K = lqrd(A, B, Qop, Rop, Nop, Ts);

Knoise = [0.000001 0.005]; % noise theta and d_alpha


%% observer 
% Ld = [L(1,:);eye(3);L(2,:)];
% Acl = [Ad+Bd*K -Bd*K;zeros(5) Ad+Ld*Cd];
% eig(Acl)







%% Simulacion
Tt = 25; % time simulation
% sim('sim/sys_ctrl');
% e_obs_alpha_min = 1E10;
% for Add = 0.1:0.1:1
%     for Bdd = 10*(0.5 - rand(4,60));
%         Bdd = Bdd';
%         sim('sim/sys_ctrl_obs_empirico_2_int_theta');
%         e_obs_alpha = mean(e_obs(:,2).^2);
%         if(e_obs_alpha < e_obs_alpha_min)
%             e_obs_alpha_min = e_obs_alpha;
%             Add_op = Add;
%             Bdd_op = Bdd;
%         end
%     end
% end

A22 = Ad(1,1);
A21 = Ad(1,2:end);
A11 = Ad(2:end,2:end);
A12 = Ad(2:end,1);
B1 = Bd(2:end);
B2 = Bd(1);

% Kalman
P0 = pi/100;
Qd = 0.5;
Rd = diag([0.001 0.01 1 1]);

sim('sim/sys_ctrl_obs_empirico_2_int_theta');
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
