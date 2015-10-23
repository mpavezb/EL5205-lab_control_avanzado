
clear
close all

load('data/still.mat')

th_var = var(theta.signals.values);
da_var = var(alpha_dot.signals.values);
da_mu = mean(alpha_dot.signals.values);

fprintf('theta  var:'); disp(th_var);
fprintf('dalpha var:'); disp(da_var);
fprintf('dalpha mu:'); disp(da_mu);

figure;
t = alpha_dot.time;
adot = alpha_dot.signals.values;
t2 = theta.time;
thet = theta.signals.values;
hold on;
plot(t, adot,'r');
plot(t2, thet,'b');
xlabel('tiempo [s]','interpreter','Latex','fontsize',12);
ylabel(' $\dot{\alpha}$ [rad/s], $\theta$ [rad]','interpreter','Latex','fontsize',12);
title('Lecturas de $\theta$ y $\dot{\alpha}$ en estado estacionario','interpreter','Latex','fontsize',14);
legend('d\alpha/dt','\theta')

m = 1.2*max(abs(min(adot)), abs(max(adot)));
axis([min(t) max(t) -m m])