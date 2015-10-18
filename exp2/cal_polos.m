% prepare workspace
clc;
close all;
clear;
format shortG
format compact
addpath('lib', 'mat','sim');

load('mat/discrete_sys_int_theta.mat');
load('mat/obs_luenberger_int_theta.mat');

sys_d = ss(Ad, Bd, Cd, Dd, Ts); % generar sistema lineal
[poles_d,zeros_d] = pzmap(sys_d); % polos y ceros del sistema linealizado
[Wn, zeta] = damp(sys_d); % frecuencia natural y damping
tau = 1./(zeta.*Wn); % Constante de tiempo

% [ poles, Wn, dammping ] = get_poles( 0.2, 0.01, Ts );