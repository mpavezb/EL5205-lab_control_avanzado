% prepare workspace
clc;
close all;
clear all;
format shortG
format compact
addpath('lib', 'mat','sim');

load('mat/cubo.mat');
load('mat/linear_sys_int_theta.mat');
load('mat/discrete_sys_int_theta.mat'); Cd = [0 1 0 0 0;0 0 1 0 0;0 0 0 1 0];

%% Condiciones iniciales
x_0 = [pi/100, 0, 0, 0, 0];

%% Controladores
% Calculo ganancia con posicionamiento de polos
r = 0; % referencia
poles_c = real(eig(A)) - [0 0 14 1 0]';
K = place(A, B,1.6*poles_c); % posicionamiento de polos
% Calculo ganancia con LQR 
% Q =diag([pi/100 pi/100 0.5 pi/100 0.5]); R = 0.5*eye(1);
% K = lqr(A, B, Q, R);
Knoise = [0 0]; % noise theta and d_alpha

%% Filtro de Kalman
P0 = diag([0 0 0 0 0]);
Qd = diag([1e-3 1e-8 1e-2 1e-3 1e-2]);
Rd = diag([1e-8 1e-2 1e-3]);

% Ld = [L(1,:);eye(3);L(2,:)];
% Acl = [Ad+Bd*K -Bd*K;zeros(5) Ad+Ld*Cd];
% eig(Acl)

%% Simulacion
Tt = 1; % time simulation
% sim('sim/sys_ctrl');
sim('sim/sys_ctrl_obs_kalman_int_theta');
EF   = states_feno;
EF2  = states_feno_obs;
sim('sim/sys_ctrl_obs_kalman_lineal_int_theta');
ELD  = states_lineal_d_obs;
ELD2 = states_lineal_d;

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
plot_lineal_feno(EF, ELD, alpha, x0);
plot_error(EF, EF2, 'Error entre Observaci�n y Simulaci�n');
plot_error(ELD, ELD2, 'Error entre Observaci�n y Simulaci�n');


