
%% setup workspace

% workspace
clear all;
clc;
close all;

% cd to this script folder
cd (fileparts(mfilename('fullpath')));
addpath(genpath('sym'));
addpath(genpath('lib'));

%% lab data

% load data
Ts = 0.05; % sampling time
llenado_f50  = load('data/fen/llenado_f_50.mat');
llenado_f50  = llenado_f50.llenado50;
llenado_f100 = load('data/fen/llenado_f_100.mat');
llenado_f100 = llenado_f100.altura;
vaciado_v45  = load('data/fen/vaciado_f_0_v_45.mat');
vaciado_v45  = vaciado_v45.llenado50;

% crop bad data
llenado_f100 = llenado_f100(120:3400,:);
llenado_f50  = llenado_f50(150:end,:);
vaciado_v45  = vaciado_v45(30:11110,:);
t1_ = llenado_f100(:,1); h1_ = llenado_f100(:,2);
t2_ = llenado_f50 (:,1); h2_ = llenado_f50 (:,2);
t3_ = vaciado_v45(:,1); h3_ = vaciado_v45(:,2);

% tank geometry
R = 0.345; % tank max radius [m]
H = 0.798; % tank height     [m]
K = pi*R*R/(H*H);

clear R H llenado_f100 llenado_f50 vaciado_v45

%% activity parameters 

% data downsampling
nds_c12 = 20;
nds_b   = 50;

%% Actividad 1
fprintf('Actividad 1:\n');

[c1, c2, beta, c1_std, c2_std, beta_std] = compute_model_params(h1_,h2_,h3_,K,Ts,nds_c12,nds_b);

% results
fprintf('found c1: %3.4f, with stdev: %g\n', c1, c1_std);
fprintf('found c2: %3.4f, with stdev: %g\n', c2, c2_std);
fprintf('found beta: %3.4f, with stdev: %g\n', beta, beta_std);

clear c1_std c2_std beta_std nds_b nds_c12


%% Actividad 1c: analysis

% plot
u = 0:0.5:100;
figure;

% zero axis
plot(u,zeros(length(u),1),'k');
hold on;

% show Fin = c1*u + c2 for different subsampling parameters
for nds_=1:2:20
    [c1_, c2_, ~, ~, ~, ~] = compute_model_params(...
        h1_,h2_,h3_,K,Ts,nds_,nds_);
    Fin = c1_*u + c2_;
    plot(u,Fin);
end

% zero crossing
u0 = -c2/c1;
plot(u0,0,'ro','MarkerEdgeColor','k','MarkerFaceColor','r','MarkerSize',5);
text(u0,0,['u0 = ', num2str(round(10*u0)/10),'\rightarrow'],...
    'HorizontalAlignment','right','VerticalAlignment','bottom')

hold off;
axis([0 100 -20 400])
title('Modelo del flujo de entrada','interpreter','Latex','fontsize',14);
xlabel('Frecuencia de la bomba: $u$ $(0-100)[\%]$','interpreter','Latex','fontsize',12);
ylabel('Flujo de entrada $F_{in}$ $[cm^3/s]$','interpreter','Latex','fontsize',12);

clear Fin nds_ c1_ c2_

%% Actividad 2: puntos de operacion

% op. points
h_low  = 0.225; % [m]
h_mid  = 0.375; % [m]
h_high = 0.525; % [m]

h_low_cm  = h_low*100;  % [cm]
h_mid_cm  = h_mid*100;  % [cm]
h_high_cm = h_high*100; % [cm]

% required controls
u_low  = (beta*sqrt(h_low_cm)  - c2)/c1;
u_mid  = (beta*sqrt(h_mid_cm)  - c2)/c1;
u_high = (beta*sqrt(h_high_cm) - c2)/c1;

fprintf('\nActividad 2: puntos de operacion\n');
fprintf('- rango bajo : (h*,u*) = (%.1f cm, %.4f %%)\n',h_low_cm,u_low);
fprintf('- rango medio: (h*,u*) = (%.1f cm, %.4f %%)\n',h_mid_cm,u_mid);
fprintf('- rango alto : (h*,u*) = (%.1f cm, %.4f %%)\n',h_high_cm,u_high);

%% Actividad 3: Modelos linealizados

% k1 = beta/(2K * h0^2.5)
% k2 = c1/(K * h0^2)

k1_low  = beta/(2*K*h_low^2.5);
k1_mid  = beta/(2*K*h_mid^2.5);
k1_high = beta/(2*K*h_high^2.5);

k2_low  = c1/(K*h_low^2);
k2_mid  = c1/(K*h_mid^2);
k2_high = c1/(K*h_high^2);

fprintf('\nActividad 3: Modelos linealizados Gp(s) = k2/(s+k1)\n');
fprintf('- rango bajo : (k1,k2) = (%.6f, %.6f)\n',k1_low,k2_low);
fprintf('- rango medio: (k1,k2) = (%.6f, %.6f)\n',k1_mid,k2_mid);
fprintf('- rango alto : (k1,k2) = (%.6f, %.6f)\n',k1_high,k2_high);

clear h_high h_low h_mid

save('mat/model_parameters.mat',...
    'k1_low','k1_mid','k1_high','k2_low','k2_mid','k2_high',...
    'beta','c1','c2','u0','K','Ts',...
    'u_low','u_mid','u_high','h_low_cm','h_mid_cm','h_high_cm');

%% Actividad 4: 

test_1 = load('data/fen/test_act4.mat');
test_2 = load('data/fen/test_act4_v2.mat');

% select data
t_t1 = test_1.h(:,1);
u_t1 = test_1.h(:,2);
h_t1 = test_1.h(:,3);
t_t2 = test_2.h(80:end,1);
u_t2 = test_2.h(80:end,2);
h_t2 = test_2.h(80:end,3);

sim_u = [t_t1 u_t1];                                            %#ok<NASGU>
sim('sym/fen_models.mdl')
save('mat/sim_test1.mat','sim_h','t_t1','u_t1','h_t1');

sim_u = [t_t2 u_t2];
sim('sym/fen_models.mdl')
save('mat/sim_test2.mat','sim_h','t_t2','u_t2','h_t2');


%%
sim_test1 = load('mat/sim_test1.mat');
sim_test2 = load('mat/sim_test2.mat');

figure;
plot(sim_test1.sim_h.Time,sim_test1.sim_h.Data(:,1),'b')
hold on;
plot(t_t1,h_t1,'r');

figure;
plot(sim_test2.sim_h.Time,sim_test2.sim_h.Data(:,1),'b')
hold on;
plot(t_t2,h_t2,'r');
