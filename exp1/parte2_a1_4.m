load('data/lineal/test_prbs_banda5sec');

%% Rescatar los datos de la prueba en laboratorio

lb = find(h_ref_out(:,2)>15,1):find(h_ref_out(:,2)>30,1); % rango bajo
lm = find(h_ref_out(:,2)>30,1):find(h_ref_out(:,2)>45,1); % rango medio
la = find(h_ref_out(:,2)>45,1):size(h_ref_out(:,2),1);    % rango alto

%% Generar base de datos rango Bajo
t   = h_ref_out(lb,1);  % tiempo
ref = h_ref_out(lb,3);  % referencia
h   = h_ref_out(lb,2);  % altura
f   = pi_out(lb,3);     % porcentaje frecuencia
save('mat/data_bajo_prbs_10_ts_5.mat','t','ref','h','f');

%% Generar base de datos rango Medio
t   = h_ref_out(lm,1); % tiempo
ref = h_ref_out(lm,3); % referencia
h   = h_ref_out(lm,2); % altura
f   = pi_out(lm,3);    % porcentaje frecuencia
save('mat/data_medio_prbs_10_ts_5.mat','t','ref','h','f');

%% Generar base de datos rango Alto
t   = h_ref_out(la,1);  % tiempo
ref = h_ref_out(la,3);  % referencia
h   = h_ref_out(la,2);  % altura
f   = pi_out(la,3);     % porcentaje frecuencia
save('mat/data_alto_prbs_10_ts_5.mat','t','ref','h','f');
