
% prepare
clc;
close all;
clear all;
format shortG
format compact
addpath('lib', 'mat','sim');

load('mat/linear_sys.mat');
load('mat/discrete_sys.mat');

% Simulacion
Tt = 10;
sim('sim/sistema');

% response
EF  = estados_fenomenologico;
EL  = estados_lineal;
ELD = estados_lineal_discreto;

% plot
figure; hold on;
plot(EF(:,1), EF(:,2),'-b','displayname','\alpha');
plot(EF(:,1), EF(:,3),'-r','displayname','\theta');
xlabel('Tiempo [s]'); ylabel('Angulo [rad]');
title(sprintf('$$ X_0 = [\\alpha = %0.2f, \\theta = %0.2f, \\dot{\\alpha} = %0.2f, \\dot{\\theta} = %0.2f]$$', [x1 x2 x3 x4]),'interpreter','latex');
legend(gca, 'show', 'location', 'best');

figure; hold on;
plot(EL(:,1), EL(:,2),'-b','displayname','\alpha');
plot(EL(:,1), EL(:,3),'-r','displayname','\theta');
xlabel('Tiempo [s]'); ylabel('Angulo [rad]');
title(sprintf('$$ X_0 = [\\alpha = %0.2f, \\theta = %0.2f, \\dot{\\alpha} = %0.2f, \\dot{\\theta} = %0.2f]$$', [x1 x2 x3 x4]),'interpreter','latex');
legend(gca, 'show', 'location', 'best');

figure; hold on;
plot(ELD(:,1), ELD(:,2),'-b','displayname','\alpha');
plot(ELD(:,1), ELD(:,3),'-r','displayname','\theta');
xlabel('Tiempo [s]'); ylabel('Angulo [rad]');
title(sprintf('$$ X_0 = [\\alpha = %0.2f, \\theta = %0.2f, \\dot{\\alpha} = %0.2f, \\dot{\\theta} = %0.2f]$$', [x1 x2 x3 x4]),'interpreter','latex');
legend(gca, 'show', 'location', 'best');