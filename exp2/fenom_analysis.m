% prepare workspace
clc;
close all;
clear all;
format shortG
format compact
addpath('lib', 'mat');

% linearization
cube = load('mat/cubo.mat');
x_op = [0; 0; 0; 0];
u_op = 0;
[A, B, C, D] = linearize_sys(cube, x_op, u_op);
clear cube
save('mat/linear_sys.mat','A','B','C','D','x_op','u_op');

% controllability/observability
analyze_sys(A, B, C);

% discretization
Ts  = 0.002; % [s]
[Ad, Bd, Cd, Dd ] = discretize_sys(A, B, C, D, Ts);

save('mat/discrete_sys.mat','Ad','Bd','Cd','Dd','Ts');