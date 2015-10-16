% prepare workspace
clc;
close all;
clear all;
format shortG
format compact
addpath('lib', 'mat','sim');

load('mat/linear_sys.mat');
load('mat/discrete_sys.mat');

%% Controladores
r = 0; % referencia
Kc = place(A,B,[-1 -2 -10 -50]);
Q = 0.05*eye(4); R = 0.1*eye(1);
Kd = dlqr(Ad, Bd, Q, R);
K = Kd;

%% Observadores
A11 = [Ad(1,1) Ad(1,4);Ad(2,1) Ad(2,4)]; A12 = [Ad(1,2) Ad(1,3);Ad(2,2) Ad(2,3)];
A21 = [Ad(3,1) Ad(3,4);Ad(4,1) Ad(4,4)]; A22 = [Ad(4,2) Ad(4,3);Ad(1,2) Ad(1,3)];
B1 = [Bd(1) Bd(4)]';B2 = [Bd(2) Bd(3)]';

L = 10;

%% Simulacion
Tt = 10; sim('sim/sistema_control_observador');
EF  = estados_fenomenologico;
ELD = estados_lineal_discreto;

figure; hold on;
plot(EF(:,1), EF(:,2),'-b','displayname','\alpha');
plot(EF(:,1), EF(:,3),'-r','displayname','\theta');
xlabel('Tiempo [s]'); ylabel('Angulo [rad]');
title(sprintf('$$ X_0 = [\\alpha = %0.2f, \\theta = %0.2f, \\dot{\\alpha} = %0.2f, \\dot{\\theta} = %0.2f]$$', [x1 x2 x3 x4]),'interpreter','latex');
legend(gca, 'show', 'location', 'best');

figure; hold on;
plot(ELD(:,1), ELD(:,2),'-b','displayname','\alpha');
plot(ELD(:,1), ELD(:,3),'-r','displayname','\theta');
xlabel('Tiempo [s]'); ylabel('Angulo [rad]');
title(sprintf('$$ X_0 = [\\alpha = %0.2f, \\theta = %0.2f, \\dot{\\alpha} = %0.2f, \\dot{\\theta} = %0.2f]$$', [x1 x2 x3 x4]),'interpreter','latex');
legend(gca, 'show', 'location', 'best');
