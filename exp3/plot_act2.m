clc;
clear;
close all;

dataLab = load('mat/matlab_test32.mat');

t         = dataLab.gamma(:,1);
gamma_ref = dataLab.gamma(:,2);
gamma     = dataLab.gamma(:,3);
S_gamma   = stepinfo(gamma, t);

theta_ref = dataLab.theta(:,2);
theta     = dataLab.theta(:,3);
S_theta   = stepinfo(theta, t);

x_ref     = dataLab.x(:,2);
x         = dataLab.x(:,3);
S_x       = stepinfo(x, t);

u         = dataLab.Im(:,3);


%% plot 1
figure;

h(1) = subplot(311); hold on;
plot(t, u, '-b', 'displayname', 'u');
legend(gca, 'show');
ylabel('Corriente [A]');
xlim([min(t) max(t)]);
grid;

h(2) = subplot(312); hold on;
plot(t, x, '-b', 'displayname', 'x');
plot(t, x_ref, '--r', 'displayname', 'x_{ref}');legend(gca, 'show');
ylabel('Distancia [m]');
xlim([min(t) max(t)]);
grid;

h(3) = subplot(313); hold on;
plot(t, gamma, '-b', 'displayname', '\gamma');
plot(t, gamma_ref, '--r', 'displayname', '\gamma_{ref}');
legend(gca, 'show');
xlabel('Tiempo [s]'); ylabel('Ángulo [deg]');
xlim([min(t) max(t)]);
grid;

set(h(1),'xticklabel',[]);
set(h(2),'xticklabel',[]);
pos=get(h,'position');
bottom=pos{2}(2);
top=pos{1}(2)+pos{1}(4);
plotspace=top-bottom;
pos{3}(4)=plotspace/2;
pos{2}(4)=plotspace/2;
pos{1}(4)=plotspace/2;
pos{1}(2)=bottom+plotspace/2+0.05;
pos{2}(2)=pos{3}(2)+plotspace/2+0.05;
set(h(1),'position',pos{1});
set(h(2),'position',pos{2});
set(h(3),'position',pos{3});
linkaxes(h,'x');

