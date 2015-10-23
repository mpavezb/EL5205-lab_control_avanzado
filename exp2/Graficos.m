clear; close all;

msg_title = 'Observador Luenberger con integrador en $$\theta$$';
data_path = 'data/luenberger_full_int_theta';
sim_name  = 'sim/sys_ctrl_obs_luenberger_full_int_theta';
load(data_path);

t_e = estados_estimados(:,1);
alpha_e   = estados_estimados(:,2);
theta_e   = estados_estimados(:,3);

t_m = estados_medidos(:,1);
dalpha_m   = estados_medidos(:,3);
theta_m   = estados_medidos(:,2);

load('mat/cubo.mat');
load('mat/system.mat');
load('mat/linear_sys.mat');
load('mat/discrete_sys.mat');

load(data_path);

% initial conditions
x_0 = zeros(x_size, 1);
x_0(idx_alpha) = alpha_e(1);
x_0(idx_theta) = theta_m(1);

Tt = max(t_e); Knoise = [0.00001 0.005];
sim(sim_name);

states_feno  = [t_m interp1(states_feno(:,1),...
    states_feno(:,2:end),t_m)];

states_feno_obs  = [t_e interp1(states_feno_obs(:,1),...
    states_feno_obs(:,2:end),t_e)];

sim_t_e = states_feno_obs(:,1);
sim_alpha_e   = states_feno_obs(:,2);
sim_theta_e   = states_feno_obs(:,3);

sim_t_m = states_feno(:,1);
sim_dalpha_m   = states_feno(:,3);
sim_theta_m   = states_feno(:,2);

ylimits = 3*[-1 1];

figure; 
subplot(211); hold on;
title('Simulación');
plot(sim_t_e, sim_alpha_e,'-b','displayname','\alpha Simulado');
plot(sim_t_m, sim_theta_m,'-r','displayname','\theta Estimado');
xlabel('Tiempo [s]'); ylabel('Angulo [rad]'); ylim(ylimits);xlim([0 max(sim_t_e)]);
legend(gca, 'show');

subplot(212); hold on;
title('Real');
plot(t_m, theta_m,'-b','displayname','\theta Medido');
plot(t_e, alpha_e,'-r','displayname','\alpha Estimado');
xlabel('Tiempo [s]'); ylabel('Angulo [rad]'); ylim(ylimits);xlim([0 max(t_e)]);
legend(gca, 'show');
h = suptitle(msg_title);
set(h,'interpreter', 'latex');

%% Errores
e_alpha_obs  = sim_alpha_e - alpha_e;
e_theta_obs  = sim_theta_e - theta_e;
mse_alpha = mean(alpha_e.^2);
mse_theta = mean(theta_m.^2);
mse_alpha_obs  = mean(e_alpha_obs.^2);
mse_theta_obs = mean(e_theta_obs.^2);

fprintf('Cubo Real - Error seguimiento referencia:\n');
fprintf('- mse alpha: %.4f\n', mse_alpha);
fprintf('- mse theta: %.4f\n', mse_theta);
fprintf('Error Simulacion vs Real:\n');
fprintf('- mse alpha : %.4f\n', mse_alpha_obs);
fprintf('- mse theta : %.4f\n', mse_theta_obs);
fprintf('K = %s\n', mat2str(K));

