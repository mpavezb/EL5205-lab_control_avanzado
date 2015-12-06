clc;
clear;
close all;

load('mat/matlab_sim_tower_default.mat');


%% plot 1
figure;

h(1) = subplot(311); hold on;
plot(t, u, '-b', 'displayname', 'u');
legend(gca, 'show');
ylabel('Corriente [A]');
xlim([min(t) max(t)]);
grid;

h(2) = subplot(312); hold on;
plot(t, theta, '-b', 'displayname', '\theta');
plot(t, theta_ref, '--r', 'displayname', '\theta_{ref}');
legend(gca, 'show');
ylabel('Ángulo [deg]');
xlim([min(t) max(t)]);
grid;

h(3) = subplot(313); hold on;
plot(t, alpha, '-b', 'displayname', '\alpha');
plot(t, alpha_ref, '--r', 'displayname', '\alpha_{ref}');
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

