
close all;
clc;

addpath('lib');

%% observability/controllability
clear;
load('mat/defs.mat');
analyze_sys(tower);


%% perfil de perturbacion
clear;
load('mat/defs.mat');

t = 0:Ts:2;
u = zeros(1,length(t));
u(1:floor(0.5/Ts)) = 0.5;
u(floor(0.5/Ts)+1:floor(1/Ts)) = -0.5;

figure;
hold on;
plot(t,u,'b');
grid on;

%% prediction
clear;
load('mat/defs.mat');

Nu = 5;
xt    = [0; 0; 0; 0];
y_est = predict_y(tower, xt, u(1:Nu));

figure;
hold on;
plot(t(1:Nu),y_est,'r');
grid on;

clear Nu xt y_est

%% control
clear;
load('mat/defs.mat');
load('mat/tower_MPC.mat');
load('mat/jib_MPC.mat');

tower_x0   = [  0;  0;  0;  0];
tower_xref = [ 60;  0;  0;  0];

jib_x0   = [   0;  0;  0;  0];
jib_xref = [ 0.2;  0;  0;  0];

