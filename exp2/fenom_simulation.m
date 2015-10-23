% prepare workspace
clc;
close all;
clear;
format shortG
format compact
addpath('lib', 'mat','sim');

load('mat/cubo.mat');
load('mat/system.mat');
load('mat/linear_sys.mat');
load('mat/discrete_sys.mat');

% output full state!
C = eye(x_size);
D = zeros(x_size,1);
Cd = eye(x_size);
Dd = zeros(x_size,1);

%% behavior simulation
sim_stop_time = 5;

% sim 1: zero state
x_0(idx_alpha) = 0;
x_0(idx_theta) = 0;
run_fenom_sim(x_0,params);

% sim 2: alpha = 0.1
x_0(idx_alpha) = 0.1;
x_0(idx_theta) = 0.0;
run_fenom_sim(x_0,params);

% sim 3: theta = 0.1
x_0(idx_alpha) = 0.0;
x_0(idx_theta) = 0.1;
run_fenom_sim(x_0,params);


%% basic control simulation

sim_stop_time = 2; % [s]
x_0(idx_alpha) = 0.03;
x_0(idx_theta) = 0.00;

% ts = ?? [s]: TODO
p1 = -1;       p2 = -2;
p3 = -10;      p4 = -50;
K_control = place(A,B,[p1, p2, p3, p4]);
sim('sim/fen_control');
alpha_control_xx = alpha_control;

% ts = 0.5[s]?? TODO
p1 = 0.9837 + 0.0063i; p2 = conj(p1);
p3 = 0.9837 + 0.0369i; p4 = conj(p3);
K_control = place(A,B,[p1, p2, p3, p4]);
sim('sim/fen_control');
alpha_control_05 = alpha_control;

% LQR: TODO
Q = eye(4);
R = eye(1);
K_control = dlqr(Ad, Bd, Q, R);
sim('sim/fen_control');
alpha_control_LQR = alpha_control;

% plot response
figure('name','alpha fenomenologic controllers');
hold on;
plot(alpha_control_xx.Time, alpha_control_xx.Data(:,1),'-b','displayname','\alpha : t_s=??[s]');
plot(alpha_control_05.Time, alpha_control_05.Data(:,1),'-k','displayname','\alpha : t_s=??[s]');
plot(alpha_control_LQR.Time, alpha_control_LQR.Data(:,1),'-r','displayname','\alpha : LQR');
xlabel('time [s]','interpreter','Latex','fontsize',12);
ylabel('angle $\alpha$ [rad]','interpreter','Latex','fontsize',12);
title(sprintf('$$ X_0 = [\\alpha = %0.2f, \\theta = %0.2f, \\dot{\\alpha} = %0.2f, \\dot{\\theta} = %0.2f]$$', x_0),'interpreter','Latex');
legend(gca, 'show', 'location', 'NorthEast');
axis([0 alpha_control.Time(end) -pi/3 pi/3]);
grid on;

