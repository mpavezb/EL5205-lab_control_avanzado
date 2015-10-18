% prepare workspace
clc;
close all;
clear all;
format shortG
format compact
addpath('lib', 'mat','sim');

load('mat/cubo.mat');
load('mat/linear_sys_int_theta.mat');
load('mat/discrete_sys_int_theta.mat');
load('mat/obs_luenberger_int_theta.mat');

%% Condiciones iniciales
x_0 = [pi/100, 0, 0, 0, 0];
alpha_max = 2*pi; alpha_min = -2*pi;
theta_max = 2*pi; theta_min = -2*pi;

%% Controladores
% Calculo ganancia con posicionamiento de polos
r = 0; % referencia
[ poles_c, Wn_c, dammping_c ] = get_poles( 0.2, 0.01, Ts );
K = place(A, B, [-11.5 -11.6 -11.7 -8 -23]); % posicionamiento de polos
% Calculo ganancia con LQR 
% Q =0.5*eye(4); R = eye(1);
% K = dlqr(Ad, Bd, Q, R);
Knoise = [0 0]; % noise theta and d_alpha

%% Ganancia Observadores
ts = 0.02; % tiempo establecimiento
Mp = 0.01; % Sobrepaso maximo.
[ poles, Wn, damping ] = get_poles( ts, Mp, Ts );
L = place(A22',A12',poles)';
disp(poles); % show poles

%% Simulacion
Tt = 1; % time simulation
% sim('sim/sys_ctrl');
sim('sim/sys_ctrl_obs_luenberger_int_theta');
EF   = states_feno;
EF2  = states_feno_obs;
sim('sim/sys_ctrl_obs_luenberger_lineal_int_theta');
ELD  = states_lineal_d_obs;
ELD2 = states_lineal_d;

%% Graficos
x0 = x_0; x0(4) = [];
plot_lineal_feno(EF, ELD, alpha, x0);
plot_error(EF, EF2, 'Error entre Observación y Simulación');
plot_error(ELD, ELD2, 'Error entre Observación y Simulación');
