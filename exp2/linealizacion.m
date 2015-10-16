clear; close all;
%% Cargar datos cubo
addpath('lib', 'sym', 'data', 'mat'); cubo;

%% Condicion inicial
x1 = 0.01; x2 = 0; x3 = 0; x4 = 0;

%% Linealizacion
[ A, B, C, D ] = get_sys_lineal( a, b, c, x1, x2, x3, x4 );

%% Discretizar
Ts = 0.002; 
[ Ad, Bd, Cd, Dd ] = get_sys_lineal_discreto( A, B, C, D, Ts );

% polos = pole(sysd); ceros = zero(sysd);
% fprintf('Polos: \n'); disp(polos);
% fprintf('Ceros: \n'); disp(ceros);

%% Simulacion
Tt = 10; sim('sym/sistema');
EF  = estados_fenomenologico;
EL  = estados_lineal;
ELD = estados_lineal_discreto;

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
