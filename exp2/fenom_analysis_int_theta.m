% prepare workspace
clc;
close all;
clear;
format shortG
format compact
addpath('lib', 'mat');

% system configuration
x_size = 5;
idx_alpha = 1;
idx_theta = 2;
idx_dalpha = 3;
idx_itheta = 4;
idx_dtheta = 5;
max_alpha =  pi/4; min_alpha = -pi/4;
max_theta =  pi/4; min_theta = -pi/4;
max_dalpha =  pi/2; min_dalpha = -pi/2;
max_dtheta =  pi/2; min_dtheta = -pi/2;
params.x_size = x_size;
params.idx_alpha  = idx_alpha;
params.idx_theta  = idx_theta;
params.idx_dalpha = idx_dalpha;
params.idx_dtheta = idx_dtheta;
params.idx_itheta = idx_itheta;
params.max_alpha = max_alpha; params.min_alpha = min_alpha;
params.max_theta = max_theta; params.min_theta = min_theta;
params.max_dalpha = max_dalpha; params.min_dalpha = min_dalpha;
params.max_dtheta = max_dtheta; params.min_dtheta = min_dtheta;
x_0  = zeros(x_size, 1);
save('mat/system_int_theta.mat','x_size','idx_alpha','idx_theta','idx_dalpha','idx_itheta','idx_dtheta',...
     'max_alpha','max_theta','max_dalpha','max_dtheta',...
     'min_alpha','min_theta','min_dalpha','min_dtheta',...
     'x_0','params');

% linearization
cube = load('mat/cubo.mat');
x_op = zeros(x_size, 1);
u_op = 0;
[A, B, ~, ~] = linearize_sys(cube, x_op, u_op);
A = [A(:,1), A(:,2), A(:,3), zeros(4,1), A(:,4)];
A = [A(1,:); A(2,:); A(3,:); 0 1 0 0 0 ; A(4,:)];
B = [B(1); B(2); B(3); 0; B(4)];
C = [0 1 0 0 0; 0 0 1 0 0; 0 0 0 1 0];
D = [0; 0; 0];
clear cube
save('mat/linear_sys_int_theta.mat','A','B','C','D','x_op','u_op');

% controllability/observability
analyze_sys(A, B, C);

% discretization
Ts  = 0.002; % [s]
[Ad, Bd, Cd, Dd ] = discretize_sys(A, B, C, D, Ts);
save('mat/discrete_sys_int_theta.mat','Ad','Bd','Cd','Dd','Ts');

% Luenberger observer
A11 = [Ad(2,2), Ad(2,3), Ad(2,4); ...
       Ad(3,2), Ad(3,3), Ad(3,4); ...
       Ad(4,2), Ad(4,3), Ad(4,4)];
A12 = [Ad(2,1), Ad(2,5); ...
       Ad(3,1), Ad(3,5); ...
       Ad(4,1), Ad(4,5)];
A21 = [Ad(1,2), Ad(1,3), Ad(1,4);...
       Ad(5,2), Ad(5,3), Ad(5,4)];
A22 = [Ad(1,1), Ad(1,5); ...
       Ad(5,1), Ad(5,5)];
B1 = [Bd(2), Bd(3), Bd(4)]';
B2 = [Bd(1), Bd(5)]';
save('mat/obs_luenberger_int_theta.mat','A11','A12','A21','A22','B1','B2','Ts');
