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

%% Controladores
% Calculo ganancia con posicionamiento de polos
r = 0; % referencia
[ poles_c, Wn_c, dammping_c ] = get_poles( 0.2, 0.01, Ts );
K = place(A, B, [-11.5 -11.6 -8 -23]); % posicionamiento de polos
% Calculo ganancia con LQR 
% Q =0.5*eye(4); R = eye(1);
% K = dlqr(Ad, Bd, Q, R);
Knoise = [0 0]; % noise theta and d_alpha