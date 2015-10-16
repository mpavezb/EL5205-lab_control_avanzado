clear; close all;
%% Cargar datos cubo
addpath('lib', 'sym', 'data', 'mat'); cubo;

%% Condicion inicial
x1 = 0; x2 = 0; x3 = 0; x4 = 0;

%% Linealizacion
[ A, B, C, D ] = get_sys_lineal( a, b, c, x1, x2, x3, x4 );

%% Discretizar
Ts = 0.002; 
[ Ad, Bd, Cd, Dd ] = get_sys_lineal_discreto( A, B, C, D, Ts );

%% Controladores
r = 0; % referencia
Kc = place(A,B,[-1 -2 -10 -50]);
Q = 5*eye(4); R = 0.1*eye(1);
Kd = dlqr(Ad, Bd, Q, R);
% Kd = [-894.5619 289.6519 -125.6704 30.0752];
K = Kd;

%% Observadores
A11 = [Ad(2,2) Ad(2,3);Ad(3,2) Ad(3,3)]; A12 = [Ad(2,1) Ad(2,4);Ad(3,1) Ad(3,4)];
A21 = [Ad(1,2) Ad(1,3);Ad(4,2) Ad(4,3)]; A22 = [Ad(1,1) Ad(1,4);Ad(4,1) Ad(4,4)];
B1 = [Bd(2) Bd(3)]';B2 = [Bd(1) Bd(4)]';

L = place(A22,A12,[0.6+0.2j 0.6-0.2j]);

%% Simulacion
Tt = 10; sim('sym/sistema_control_observador');
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
