
%% setup workspace

% workspace
clear all;
clc;
close all;

% cd to this script folder
cd (fileparts(mfilename('fullpath')));
addpath(genpath('sym'));
addpath(genpath('lib'));

%% system configuration

Ts = 0.05; % sampling time

% data preprocessing
filter_pole = Ts/0.1; % lowpass filter pole for data smoothing (a / (1 + a z^-1))
nds_c12  = 10; % c1, c2 data downsampling
nds_beta = 40; % beta   data downsampling

% tank geometry
R = 0.345; % tank max radius [m]
H = 0.798; % tank height     [m]
K = pi*R*R/(H*H);

clear R H

%% lab data

% load data
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

% get info
tc_100_ = llenado_f100(:,1); hc_100_ = llenado_f100(:,2);
tc_50__ = llenado_f50 (:,1); hc_50__ = llenado_f50 (:,2);
tbeta__ = vaciado_v45(:,1);  hbeta__ = vaciado_v45(:,2);

% filter
hc_100_ = filter(filter_pole, [1 filter_pole-1], hc_100_);
hc_50__ = filter(filter_pole, [1 filter_pole-1], hc_50__);
%hbeta__ = filter(filter_pole, [1 filter_pole-1], hbeta__);

figure;
plot(tc_100_,hc_100_,'k')
hold on;
plot(tc_50__,hc_50__,'r')
legend('u=100%','u=50%','Location','SouthEast')
xlabel('tiempo [s]','interpreter','Latex','fontsize',12); ylabel('altura [cm]','interpreter','Latex','fontsize',12);
title('Pruebas de llenado del estanque a entrada constante','interpreter','Latex','fontsize',14);
grid on;

figure;
plot(tbeta__,hbeta__,'k');
xlabel('tiempo [s]','interpreter','Latex','fontsize',12); ylabel('altura [cm]','interpreter','Latex','fontsize',12);
title('Prueba de vaciado del estanque a entrada cero','interpreter','Latex','fontsize',14);
grid on;

clear llenado_f100 llenado_f50 vaciado_v45 filter_pole
clear tc_100_ tc_50__ tbeta__

%% Actividad 1
fprintf('Actividad 1: parametros fenomenologicos\n');

[c1, c2, beta, c1_std, c2_std, beta_std] = compute_model_params(hc_100_,hc_50__,hbeta__,K,Ts,nds_c12,nds_beta);

% results
fprintf('- c1  : %3.4f, with stdev: %g\n', c1, c1_std);
fprintf('- c2  : %3.4f, with stdev: %g\n', c2, c2_std);
fprintf('- beta: %3.4f, with stdev: %g\n', beta, beta_std);

% plot Fin model
% - - - - -  - - - - - -
u = 0:0.5:100;
Fin = c1*u + c2;
u0 = -c2/c1;

figure;
% zero axis
plot(u,zeros(length(u),1),'k');
hold on;
% Fin model
plot(u,Fin);

% zero crossing
plot(u0,0,'ro','MarkerEdgeColor','k','MarkerFaceColor','r','MarkerSize',5);
hold off;
axis([0 100 -20 400])
title('Modelo del flujo de entrada $F_{in}$','interpreter','Latex','fontsize',14);
xlabel('frecuencia de la bomba $(0-100)[\%]$','interpreter','Latex','fontsize',12);
ylabel('flujo de entrada $[cm^3/s]$','interpreter','Latex','fontsize',12);
text(u0,0,['u0 = ', num2str(round(10*u0)/10),'\rightarrow'],...
    'HorizontalAlignment','right','VerticalAlignment','bottom')
grid on;

clear c1_std c2_std beta_std nds_beta nds_c12 hc_100_ hc_50__ hbeta__
clear Fin u0 u 

% plot Fout model
% - - - - -  - - - - - -
h = 0:0.25:65;
Fout = beta*sqrt(h);

figure;
plot(h,Fout,'k');
title('Modelo del flujo de salida $F_{out}$','interpreter','Latex','fontsize',14);
xlabel('altura [cm]','interpreter','Latex','fontsize',12);
ylabel('flujo de salida $[cm^3/s]$','interpreter','Latex','fontsize',12);
grid on;

clear c1_std c2_std beta_std nds_beta nds_c12 hc_100_ hc_50__ hbeta__
clear Fin u0 u
clear Fout h

%% Actividad 2: puntos de operacion

% op. points
h_low  = 22.5; % [cm]
h_mid  = 37.5; % [cm]
h_high = 52.5; % [cm]

% required controls
u_low  = (beta*sqrt(h_low)  - c2)/c1;
u_mid  = (beta*sqrt(h_mid)  - c2)/c1;
u_high = (beta*sqrt(h_high) - c2)/c1;

fprintf('\nActividad 2: puntos de operacion\n');
fprintf('- rango bajo : (h*,u*) = (%.1f cm, %.4f %%)\n',h_low,u_low);
fprintf('- rango medio: (h*,u*) = (%.1f cm, %.4f %%)\n',h_mid,u_mid);
fprintf('- rango alto : (h*,u*) = (%.1f cm, %.4f %%)\n',h_high,u_high);

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

save('mat/model_parameters.mat',...
    'k1_low','k1_mid','k1_high','k2_low','k2_mid','k2_high',...
    'beta','c1','c2','K','Ts',...
    'u_low','u_mid','u_high','h_low','h_mid','h_high');

%% Actividad 4: 

% get test data
test_a4 = load('data/fen/test_act4.mat');
t_a4_real = test_a4.h(:,1);
u_a4_real = test_a4.h(:,2);
h_a4_real = test_a4.h(:,3);

% simulate
sim_u = [t_a4_real u_a4_real];
sim_h_real = [t_a4_real h_a4_real];
sim('sym/P1_fen_models.mdl')

% get simulation results
t_a4_sim     = sim_h.Time(:,1);
h_a4_sim_fen = sim_h.Data(:,1);
h_a4_sim_lin = sim_h.Data(:,2);

% compute performance
e_a4_sim_fen = sim_error.Data(:,1);
e_a4_sim_lin = sim_error.Data(:,2);
mse_fen = mean(e_a4_sim_fen.^2);
mse_lin = mean(e_a4_sim_lin.^2);
fprintf('\nActividad 4: Desempeno de los modelos\n');
fprintf('- modelo fenom.: mse = %.4f\n', mse_fen);
fprintf('- modelo lineal: mse = %.4f\n', mse_lin);

% plot system input
figure;
plot(t_a4_real,u_a4_real,'k');
xlabel('tiempo [s]','interpreter','Latex','fontsize',12); 
ylabel('frecuencia de la bomba $(0-100)[\%]$','interpreter','Latex','fontsize',12);
title('Entrada para la prueba de lazo abierto','interpreter','Latex','fontsize',14);
axis([0 max(t_a4_real) 0 110]);
grid on;

% plot plant and model response
figure;
plot(t_a4_real,h_a4_real,'r');
hold on;
plot(t_a4_sim,h_a4_sim_fen,'k');
plot(t_a4_sim,h_a4_sim_lin,'b');
legend('planta','modelo fen.','modelo lin.','Location','SouthEast');
xlabel('tiempo [s]','interpreter','Latex','fontsize',12);
ylabel('altura [cm]','interpreter','Latex','fontsize',12);
title('Respuesta de la planta y modelos desarrollados','interpreter','Latex','fontsize',14);
axis([0 580 0 65]);
grid on;

%clear test_a4 sim_u sim_h tout
%clear t_a4_real t_a4_sim h_a4_real h_a4_sim_fen h_a4_sim_lin u_a4_real
