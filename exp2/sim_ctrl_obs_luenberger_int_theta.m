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
load('mat/obs_luenberger_int_theta.mat');

% initial conditions
x_0 = zeros(x_size, 1);
x_0(idx_alpha) = pi/90;
x_0(idx_theta) = pi/90;

%% Controladores
% Calculo ganancia con posicionamiento de polos
poles_c = real(eig(A)) - [0 0 14 1 0]';
K = place(A, B,1.6*poles_c); % posicionamiento de polos
% Calculo ganancia con LQR 
% Q = 0.5*diag([1 1 1 1 1]); R = 0.5*diag(1);
% K = lqr(A, B, Q, R);
Knoise = [0.0001 0.005]; % noise theta and d_alpha

%% Ganancia Observadores
ts = 0.02; % tiempo establecimiento
Mp = 0.01; % Sobrepaso maximo.
[ poles_L, Wn, damping ] = get_poles( ts, Mp, Ts );
L = place(A22',A12',poles_L)';
disp(poles_L); % show poles

% Ld = [L(1,:);eye(3);L(2,:)];
% Acl = [Ad+Bd*K -Bd*K;zeros(5) Ad+Ld*Cd];
% eig(Acl)

%% Simulacion
Tt = 5; % time simulation
% sim('sim/sys_ctrl');
sim('sim/sys_ctrl_obs_luenberger_int_theta');
EF   = states_feno;
EF2  = [states_feno(:,1) interp1(states_feno_obs(:,1),...
    states_feno_obs(:,2:end),states_feno(:,1))];
sim('sim/sys_ctrl_obs_luenberger_lineal_int_theta');
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
e_dtheta_obs = EF(:,6) - EF2(:,6);
mse_dtheta_obs = mean(e_dtheta_obs.^2);
fprintf('mse dtheta: %0.6f\n', mse_dtheta_obs);

%% Graficos
x0 = x_0; x0(4) = [];
plot_lineal_feno(EF, ELD, alpha, x0);
plot_error(EF, EF2, 'Error entre Observaci�n y Simulaci�n');
plot_error(ELD, ELD2, 'Error entre Observaci�n y Simulaci�n');


