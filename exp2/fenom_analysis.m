% prepare workspace
clc;
close all;
clear;
format shortG
format compact
addpath('lib', 'mat');

% system configuration
x_size = 4;
idx_alpha = 1;
idx_theta = 2;
idx_dalpha = 3;
idx_dtheta = 4;
%max_alpha =  pi/4; min_alpha = -pi/4;
%max_theta =  pi/4; min_theta = -pi/4;
%max_dalpha =  pi/2; min_dalpha = -pi/2;
%max_dtheta =  pi/2; min_dtheta = -pi/2;
max_alpha =  inf; min_alpha  = -inf;
max_theta =  inf; min_theta  = -inf;
max_dalpha = inf; min_dalpha = -inf;
max_dtheta = inf; min_dtheta = -inf;
params.x_size = x_size;
params.idx_alpha  = idx_alpha;
params.idx_theta  = idx_theta;
params.idx_dalpha = idx_dalpha;
params.idx_dtheta = idx_dtheta;
params.max_alpha = max_alpha; params.min_alpha = min_alpha;
params.max_theta = max_theta; params.min_theta = min_theta;
params.max_dalpha = max_dalpha; params.min_dalpha = min_dalpha;
params.max_dtheta = max_dtheta; params.min_dtheta = min_dtheta;
x_0  = zeros(x_size, 1);
save('mat/system.mat','x_size','idx_alpha','idx_theta','idx_dalpha','idx_dtheta',...
     'max_alpha','max_theta','max_dalpha','max_dtheta',...
     'min_alpha','min_theta','min_dalpha','min_dtheta',...
     'x_0','params');

% linearization
cube = load('mat/cubo.mat');
x_op = zeros(x_size, 1);
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
A11 = [Ad(2,2) Ad(2,3); ...
       Ad(3,2) Ad(3,3)];
A12 = [Ad(2,1) Ad(2,4); ...
       Ad(3,1) Ad(3,4)];
A21 = [Ad(1,2) Ad(1,3); ...
       Ad(4,2) Ad(4,3)];
A22 = [Ad(1,1) Ad(1,4); ...
       Ad(4,1) Ad(4,4)];
B1 = [Bd(2), Bd(3)]';
B2 = [Bd(1), Bd(4)]';
save('mat/obs_luenberger.mat','A11','A12','A21','A22','B1','B2','Ts');
