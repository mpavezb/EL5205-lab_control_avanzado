% prepare workspace
clc;
close all;
clear all;
format shortG
format compact
addpath('lib', 'mat','sim');

load('mat/cubo.mat');
load('mat/linear_sys.mat');
load('mat/discrete_sys.mat'); Cd = [0 1 0 0;0 0 1 0]; % get theta and d_alpha
load('mat/obs_luenberger.mat');

%% Condiciones iniciales
x_0 = [pi/100, 0, 0, 0];
alpha_max = 2*pi; alpha_min = -2*pi;
theta_max = 2*pi; theta_min = -2*pi;

%% Controladores
% Calculo ganancia con posicionamiento de polos
r = 0; % referencia
poles_c = real(eig(A)) - [14 0 1 0]';
K = place(A, B,1.6*poles_c); % posicionamiento de polos
% Calculo ganancia con LQR 
% Q =diag([pi/100 pi/100 0.5 0.5]); R = 0.5*eye(1);
% K = lqr(A, B, Q, R);
Knoise = [0 0]; % noise theta and d_alpha

%% Ganancia Observadores
ts = 0.02; % tiempo establecimiento
Mp = 0.01; % Sobrepaso maximo.
[ poles, Wn, damping ] = get_poles( ts, Mp, Ts );
L = place(A22',A12',poles)';
% disp(poles); % show poles

%% Simulacion
Tt = 1; % time simulation
% sim('sim/sys_ctrl');
sim('sim/sys_ctrl_obs_luenberger');
EF   = states_feno;
EF2  = states_feno_obs;
sim('sim/sys_ctrl_obs_luenberger_lineal');
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
e_dtheta_obs = EF(:,5) - EF2(:,5);
mse_dtheta_obs = mean(e_dtheta_obs.^2);
fprintf('mse dtheta: %0.6f\n', mse_dtheta_obs);

%% Graficos
plot_lineal_feno(EF, ELD, alpha, x_0);
plot_error(EF, EF2, 'Error entre Observación y Simulación');
plot_error(ELD, ELD2, 'Error entre Observación y Simulación');
