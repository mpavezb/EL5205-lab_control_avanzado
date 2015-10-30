clear;
close all;
clc;

addpath('lib');
load('mat/defs.mat');

%% observability/controllability
analyze_sys(tower);


%% perfil de perturbacion
t = 0:Ts:2;
u = zeros(1,length(t));
u(1:floor(0.5/Ts)) = 0.5;
u(floor(0.5/Ts)+1:floor(1/Ts)) = -0.5;

figure;
hold on;
plot(t,u,'b');
grid on;

%% prediction
Nu = 5;
xt    = [0; 0; 0; 0];
y_est = predict_y(tower, xt, u(1:Nu));

figure;
hold on;
plot(t(1:Nu),y_est,'r');
grid on;

%% control

load('mat/tower_MPC.mat');

