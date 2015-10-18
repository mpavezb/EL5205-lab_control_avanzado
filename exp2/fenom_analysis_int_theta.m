% prepare workspace
clc;
close all;
clear all;
format shortG
format compact
addpath('lib', 'mat');

% linearization
cube = load('mat/cubo.mat');
x_op = [0; 0; 0; 0; 0];
u_op = 0;
[A, B, C, D] = linearize_sys(cube, x_op, u_op);
A = [A(:,1) A(:,2) A(:,3) zeros(4,1) A(:,4)];
A = [A(1,:);A(2,:);A(3,:);0 1 0 0 0;A(4,:)];
B = [B(1);B(2);B(3);0;B(4)];
C = [0 1 0 0 0;0 0 1 0 0;0 0 0 1 0];
D = [0;0;0];

clear cube
save('mat/linear_sys_int_theta.mat','A','B','C','D','x_op','u_op');

% controllability/observability
analyze_sys(A, B, C);

% discretization
Ts  = 0.002; % [s]
[Ad, Bd, Cd, Dd ] = discretize_sys(A, B, C, D, Ts);

save('mat/discrete_sys_int_theta.mat','Ad','Bd','Cd','Dd','Ts');

% Luenberger observer
A11 = [Ad(2,2) Ad(2,3) Ad(2,4); Ad(3,2) Ad(3,3) Ad(3,4); Ad(4,2) Ad(4,3) Ad(4,4)];
A12 = [Ad(2,1) Ad(2,5); Ad(3,1) Ad(3,5); Ad(4,1) Ad(4,5)];
A21 = [Ad(1,2) Ad(1,3) Ad(1,4); Ad(5,2) Ad(5,3) Ad(5,4)];
A22 = [Ad(1,1) Ad(1,5);Ad(5,1) Ad(5,5)];
B1 = [Bd(2) Bd(3) Bd(4)]';B2 = [Bd(1) Bd(5)]';

save('mat/obs_luenberger_int_theta.mat','A11','A12','A21','A22','B1','B2','Ts');