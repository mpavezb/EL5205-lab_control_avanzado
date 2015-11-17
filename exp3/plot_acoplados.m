clc;
clear;
close all;

dataLab = load('mat/matlab_test34.mat');

t         = dataLab.alpha(:,1);
alpha_ref = dataLab.alpha(:,2);
alpha     = dataLab.alpha(:,3);
S_alpha   = stepinfo(alpha, t);

t         = dataLab.gamma(:,1);
gamma_ref = dataLab.gamma(:,3);
gamma     = dataLab.gamma(:,2);
S_gamma   = stepinfo(gamma, t);

theta_ref = dataLab.theta(:,2);
theta     = dataLab.theta(:,3);
S_theta   = stepinfo(theta, t);

x_ref     = dataLab.x(:,2);
x         = dataLab.x(:,3);
S_x       = stepinfo(x, t);

u_theta   = dataLab.Im(:,2);
u_x       = dataLab.Im(:,3);


%% plot 1
figure;

h(1) = subplot(3,2,1); hold on;
plot(t, u_theta, '-b', 'displayname', 'u_{theta}');
legend(gca, 'show');
xlabel('Tiempo [s]'); ylabel('Corriente [A]');
xlim([min(t) max(t)]);
title('TOWER');
grid;

h(2) = subplot(3,2,2); hold on;
plot(t, u_x, '-b', 'displayname', 'u_x');
legend(gca, 'show');
xlabel('Tiempo [s]'); ylabel('Corriente [A]');
xlim([min(t) max(t)]);
title('JIB');
grid;

h(3) = subplot(3,2,3); hold on;
plot(t, theta, '-b', 'displayname', '\theta');
plot(t, theta_ref, '--r', 'displayname', '\theta_{ref}');
legend(gca, 'show');
xlabel('Tiempo [s]'); ylabel('Ángulo [deg]');
xlim([min(t) max(t)]);
grid;

h(4) = subplot(3,2,4); hold on;
plot(t, x, '-b', 'displayname', 'x');
plot(t, x_ref, '--r', 'displayname', 'x_{ref}');legend(gca, 'show');
xlabel('Tiempo [s]'); ylabel('Distancia [m]');
xlim([min(t) max(t)]);
grid;

h(5) = subplot(3,2,5); hold on;
plot(t, alpha, '-b', 'displayname', '\alpha');
plot(t, alpha_ref, '--r', 'displayname', '\alpha_{ref}');
legend(gca, 'show');
xlabel('Tiempo [s]'); ylabel('Ángulo [deg]');
xlim([min(t) max(t)]);
grid;

h(6) = subplot(3,2,6); hold on;
plot(t, gamma, '-b', 'displayname', '\gamma');
plot(t, gamma_ref, '--r', 'displayname', '\gamma_{ref}');
legend(gca, 'show');
xlabel('Tiempo [s]'); ylabel('Ángulo [deg]');
xlim([min(t) max(t)]);
grid;

% set(h(1),'xticklabel',[]);
% set(h(2),'xticklabel',[]);
% pos=get(h,'position');
% bottom=pos{2}(2);
% top=pos{1}(2)+pos{1}(4);
% plotspace=top-bottom;
% pos{3}(4)=plotspace/2;
% pos{2}(4)=plotspace/2;
% pos{1}(4)=plotspace/2;
% pos{1}(2)=bottom+plotspace/2+0.05;
% pos{2}(2)=pos{3}(2)+plotspace/2+0.05;
% set(h(1),'position',pos{1});
% set(h(2),'position',pos{2});
% set(h(3),'position',pos{3});
linkaxes(h,'x');

