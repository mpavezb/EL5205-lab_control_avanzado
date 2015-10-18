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

% Luenberger observer
A11 = [Ad(2,2) Ad(2,3);Ad(3,2) Ad(3,3)]; A12 = [Ad(2,1) Ad(2,4);Ad(3,1) Ad(3,4)];
A21 = [Ad(1,2) Ad(1,3);Ad(4,2) Ad(4,3)]; A22 = [Ad(1,1) Ad(1,4);Ad(4,1) Ad(4,4)];
B1 = [Bd(2) Bd(3)]';B2 = [Bd(1) Bd(4)]';

save('mat/obs_luenberger.mat','A11','A12','A21','A22','B1','B2','Ts');