clc;
clear;
close all;

dataLab = load('mat/matlab_test37.mat');

t         = dataLab.alpha(:,1);
alpha_ref = dataLab.alpha(:,2);
alpha     = dataLab.alpha(:,3);
S_alpha   = stepinfo(alpha, t);

theta_ref = dataLab.theta(:,2);
theta     = dataLab.theta(:,3);
S_theta   = stepinfo(theta, t);

%x_ref     = dataLab.x(:,2);
%x         = dataLab.x(:,3);
%S_x       = stepinfo(x, t);

u         = dataLab.Im(:,2);


%% plot 1
figure;

%h(1) = subplot(311); hold on;
%plot(t, u, '-b', 'displayname', 'u');
%legend(gca, 'show');
%ylabel('Corriente [A]');
%xlim([min(t) max(t)]);
%grid;

subplot(211); hold on;
plot(t, theta, '-b', 'displayname', '\theta');
plot(t, theta_ref, '--r', 'displayname', '\theta_{ref}');
legend(gca, 'show');
ylabel('angulo [deg]');
xlim([min(t) max(t)]);
grid;

subplot(212); hold on;
plot(t, alpha, '-b', 'displayname', '\alpha');
plot(t, alpha_ref, '--r', 'displayname', '\alpha_{ref}');
legend(gca, 'show');
xlabel('Tiempo [s]'); ylabel('angulo [deg]');
xlim([min(t) max(t)]);
ylim([-4 4]);
grid;

plot([min(t) max(t)],[3 3], '-.k')
plot([min(t) max(t)],[-3 -3], '-.k')
