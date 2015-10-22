% prepare workspace
clc;
close all;
clear;
format shortG
format compact
addpath('lib', 'mat','sim');

load('mat/cubo.mat');
load('mat/system.mat');
load('mat/linear_sys.mat');
load('mat/discrete_sys.mat');


% initial conditions
x_0 = zeros(x_size, 1);
x_0(idx_alpha) = pi/90;
x_0(idx_theta) = pi/90;

%% Controladores
% Calculo ganancia con posicionamiento de polos
r = 0; % referencia
% poles_c = real(eig(A)) - [14 0 1 0]';
% K = place(A, B,1.6*poles_c); % posicionamiento de polos
% Calculo ganancia con LQR 
Q = diag([1 1 1 1]); R = 0.5*diag(1);
K = lqr(A, B, Q, R);
Knoise = [0.0001 0.05]; % noise theta and d_alpha

%% Filtro de Kalman
P0 = diag([pi/20 pi/20 0 0]);
Qd = diag([1e-2 1e-2 1e-2 1e-2]);
Rd = diag([1e-2 1e-2]);

%% Simulacion
Tt = 5; % time simulation
% sim('sim/sys_ctrl');
sim('sim/sys_ctrl_obs_kalman');
EF   = states_feno;
EF2  = [states_feno(:,1) interp1(states_feno_obs(:,1),...
    states_feno_obs(:,2:end),states_feno(:,1))];
sim('sim/sys_ctrl_obs_kalman_lineal');
ELD  = states_lineal_d;
ELD2 = [states_lineal_d(:,1) interp1(states_lineal_d_obs(:,1),...
    states_lineal_d_obs(:,2:end),states_lineal_d(:,1))];
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
plot_lineal_feno(EF, ELD, alpha, x_0);
plot_error(EF, EF2, 'Error entre Observaci�n y Simulaci�n');
plot_error(ELD, ELD2, 'Error entre Observaci�n y Simulaci�n');
