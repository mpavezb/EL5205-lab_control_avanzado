%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Primeros prueba: PRBS: 10% Ts: 5[seg]
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
load('data/lineal/control_pi_v01');

%% Rescatar los datos de la prueba en laboratorio

lb = find(hr(:,3)>22.5,1):find(hr(:,2)>22.5,1); % rango bajo
lm = find(hr(:,3)>37.5,1):find(hr(:,2)>37.5,1); % rango medio
la = find(hr(:,3)>52.5,1):size(hr(:,2),1); % rango alto

%% Generar base de datos rango Bajo
t = hr(lb,1);       % tiempo
ref = hr(lb,2);     % referencia
h = hr(lb,3);       % altura
f = u(lb,3);        % porcentaje frecuencia
save('data/lineal/data_bajo_prbs_10_ts_5.mat','t','ref','h','f');

%% Generar base de datos rango Medio
t = hr(lm,1);       % tiempo
ref = hr(lm,2);     % referencia
h = hr(lm,3);       % altura
f = u(lm,3);        % porcentaje frecuencia
save('data/lineal/data_medio_prbs_10_ts_5.mat','t','ref','h','f');

%% Generar base de datos rango Alto
t = hr(la,1);       % tiempo
ref = hr(la,2);     % referencia
h = hr(la,3);       % altura
f = u(la,3);        % porcentaje frecuencia
save('data/lineal/data_alto_prbs_10_ts_5.mat','t','ref','h','f');
clear;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Segunda prueba: PRBS: 2% Ts: 0.05[seg]
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
load('data/lineal/test_prbs_rapida');
hr = [h_ref_out(:,1) h_ref_out(:,3) h_ref_out(:,2)];
u = [pi_out(:,1) pi_out(:,3) pi_out(:,2)];

%% Rescatar los datos de la prueba en laboratorio

lb = find(hr(:,3)>22.5,1):find(hr(:,2)>22.5,1); % rango bajo
lm = find(hr(:,3)>37.5,1):find(hr(:,2)>37.5,1); % rango medio
la = find(hr(:,3)>52.5,1):size(hr(:,2),1); % rango alto

%% Generar base de datos rango Bajo
t = hr(lb,1);       % tiempo
ref = hr(lb,2);     % referencia
h = hr(lb,3);       % altura
f = u(lb,3);        % porcentaje frecuencia
save('data/lineal/data_bajo_prbs_2_ts_005.mat','t','ref','h','f');

%% Generar base de datos rango Medio
t = hr(lm,1);       % tiempo
ref = hr(lm,2);     % referencia
h = hr(lm,3);       % altura
f = u(lm,3);        % porcentaje frecuencia
save('data/lineal/data_medio_prbs_2_ts_005.mat','t','ref','h','f');

%% Generar base de datos rango Alto
t = hr(la,1);       % tiempo
ref = hr(la,2);     % referencia
h = hr(la,3);       % altura
f = u(la,3);        % porcentaje frecuencia
save('data/lineal/data_alto_prbs_2_ts_005.mat','t','ref','h','f');

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Tercera prueba: PRBS: 2% Ts: 5[seg]
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
load('data/lineal/test_prbs_banda5sec');
hr = [h_ref_out(:,1) h_ref_out(:,3) h_ref_out(:,2)];
u = [pi_out(:,1) pi_out(:,3) pi_out(:,2)];

%% Rescatar los datos de la prueba en laboratorio

lb = find(hr(:,3)>22.5,1):find(hr(:,2)>22.5,1); % rango bajo
lm = find(hr(:,3)>37.5,1):find(hr(:,2)>37.5,1); % rango medio
la = find(hr(:,3)>52.5,1):size(hr(:,2),1); % rango alto

%% Generar base de datos rango Bajo
t = hr(lb,1);       % tiempo
ref = hr(lb,2);     % referencia
h = hr(lb,3);       % altura
f = u(lb,3);        % porcentaje frecuencia
save('data/lineal/data_bajo_prbs_2_ts_5.mat','t','ref','h','f');

%% Generar base de datos rango Medio
t = hr(lm,1);       % tiempo
ref = hr(lm,2);     % referencia
h = hr(lm,3);       % altura
f = u(lm,3);        % porcentaje frecuencia
save('data/lineal/data_medio_prbs_2_ts_5.mat','t','ref','h','f');

%% Generar base de datos rango Alto
t = hr(la,1);       % tiempo
ref = hr(la,2);     % referencia
h = hr(la,3);       % altura
f = u(la,3);        % porcentaje frecuencia
save('data/lineal/data_alto_prbs_2_ts_5.mat','t','ref','h','f');


