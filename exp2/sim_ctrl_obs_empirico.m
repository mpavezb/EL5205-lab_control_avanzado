% prepare workspace
clc;
close all;
clear all;
format shortG
format compact
addpath('lib', 'mat','sim');

load('mat/cubo.mat');
load('mat/linear_sys.mat');
load('mat/discrete_sys.mat'); Cd = [0 1 0 0;0 0 1 0];

%% Condiciones iniciales
x_0 = [pi/90, pi/90, 0, 0];

%% Controladores
% Calculo ganancia con posicionamiento de polos
r = 0; % referencia
% poles_c = real(eig(A)) - [14 0 1 0]';
% K = place(A, B,1.6*poles_c); % posicionamiento de polos
% Calculo ganancia con LQR 
Q = diag([1 1 1 1]); R = 0.5*diag(1);
K = 0.5*dlqr(Ad, Bd, Q, R);
Knoise = [0.000001 0.005]; % noise theta and d_alpha

%% Simulacion
Tt = 5; % time simulation
% sim('sim/sys_ctrl');
sim('sim/sys_ctrl_obs_empirico');
EF   = states_feno;
EF2  = [states_feno(:,1) interp1(states_feno_obs(:,1),...
    states_feno_obs(:,2:end),states_feno(:,1))];

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
e_dtheta_obs = EF(:,5) - EF2(:,5);
mse_dtheta_obs = mean(e_dtheta_obs.^2);
fprintf('mse dtheta: %0.6f\n', mse_dtheta_obs);

%% Graficos

figure; hold on;
plot(EF(:,1), EF(:,2),'-b','displayname','Observado \alpha');
plot(EF(:,1), EF(:,3),'-r','displayname','Simulado \theta');
plot(alpha(:,1), alpha(:,2),'--c','displayname','Simulado \alpha');
xlabel('Tiempo [s]'); ylabel('Angulo [rad]');
title({'Simulacion Modelo Fenomenologico',sprintf('$$ X_0 = [\\alpha = %0.4f, \\theta = %0.4f, \\dot{\\alpha} = %0.4f, \\dot{\\theta} = %0.4f]$$', x_0)},'interpreter','latex');
legend(gca, 'show', 'location', 'best');

plot_error(EF, EF2, 'Error entre Observación y Simulación');
