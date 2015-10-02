clear; close all;
%% Cargar datos
<<<<<<< HEAD
rango = 'bajo';
load(strcat('data/lineal/data_', rango,'_prbs_10_ts_5.mat'));
=======
load('mat/data_bajo_prbs_10_ts_5.mat');
>>>>>>> a44d25f1a30e3657242448f0d8b046624aed6bb7

% Datos del muestreo
nds = 10; % submuestreo
dt = 0.05; % muestreo original
Ts = dt*nds; % tiempo muestreo [seg]

% submuestrear
ts = downsample(t, nds); % t: tiempo
hs = downsample(h, nds); % h: altura
fs = downsample(f, nds); % u: porcentaje frecuencia
% dividir conjunto de entrenamiento (80%) y validacion (20%)
N = numel(ts); N1 = floor(N*0.2); N2 = floor(N*0.3); N3 = floor(N*0.8);
% entrenamiento
It = [1:N1 N2+1:N3]; tt = ts(It); ht = hs(It); ft = fs(It);
% validacion
Iv = [N1+1:N2 N3:N]; tv = ts(Iv); hv = hs(Iv); fv = fs(Iv);
data = iddata(ht, ft, Ts); % datos para calculo de parametros (entrenamiento)

%% Calculo mejor modelo ARX
table_data_arx = zeros(9,4);
i = 1;
modelo_arx_op = [];
h_mse_min_arx = 10^10;
for na = 1:3
    for nb = 1:3
        for nk = 1:3
            % calculo del modelo lineal
            modelo = arx(data, [na nb nk]);
            sys_ss = idss(modelo);
            X0 = findstates(sys_ss,iddata(hv, fv, Ts));
            h_sim = sim(sys_ss, fv, simOptions('InitialCondition',X0));
            h_mse = mean((h_sim - hv).^2); % Mean Square Error
            table_data_arx(i,:) = [na nb nk h_mse]; i= i + 1;
            fprintf('ARX: na:%d, nb:%d, nk:%d, mse:%f\n', ...
                na, nb, nk, h_mse);
            if(h_mse_min_arx>h_mse)
                h_mse_min_arx = h_mse;
                X0_arx = findstates(sys_ss,iddata(hs, fs, Ts));
                modelo_arx_op = modelo;
            end
        end
    end
end

figure;hold on;
sys_ss = idss(modelo_arx_op);
h_sim_arx_op = sim(sys_ss, fs, simOptions('InitialCondition',X0_arx));
plot(ts, hs,'b'); plot(ts, h_sim_arx_op,'r','LineWidth',2);
xlabel('Tiempo [s]'); ylabel('Altura [cm]');
title('Mejor Modelo ARX');

%% Calculo mejor modelo ARIX
table_data_arix = zeros(9,4);
i = 1;
modelo_arix_op = [];
h_mse_min_arix = 10^10;
for na = 1:3
    for nb = 1:3
        for nk = 1:3
            modelo = arx(data, [na nb nk], 'IntegrateNoise', ...
                true); % calculo del modelo lineal
            sys_ss = idss(modelo);
            X0 = findstates(sys_ss,iddata(hv, fv, Ts));
            h_sim = sim(sys_ss, fv, simOptions('InitialCondition',X0));
            h_mse = mean((h_sim - hv).^2); % Mean Square Error
            table_data_arix(i,:) = [na nb nk h_mse]; i= i + 1;
            fprintf('ARIX: na:%d, nb:%d, nk:%d, mse:%f\n', ...
                na, nb, nk, h_mse);
            if(h_mse_min_arix>h_mse)
                h_mse_min_arix = h_mse;
                X0_arix = findstates(sys_ss,iddata(hs, fs, Ts));
                modelo_arix_op = modelo;
            end
        end
    end
end

figure;hold on;
sys_ss = idss(modelo_arix_op);
h_sim_arix_op = sim(sys_ss, fs, simOptions('InitialCondition',X0_arix));
plot(ts, hs,'b'); plot(ts, h_sim_arix_op,'r','LineWidth',2);
xlabel('Tiempo [s]'); ylabel('Altura [cm]');
title('Mejor Modelo ARIX');


%% Calculo mejor modelo ARMAX
table_data_armax = zeros(9,5);
i = 1;
h_sim_armax_op = [];
modelo_armax_op = [];
h_mse_min_armax = 10^10;
for na = 1:3
    for nb = 1:3
        for nc = 1:3
            for nk = 1:3
                 % calculo del modelo lineal
                modelo = armax(data, [na nb nc nk]);
                sys_ss = idss(modelo);
                X0 = findstates(sys_ss,iddata(hv, fv, Ts));
                h_sim = sim(sys_ss, fv, simOptions('InitialCondition',X0));
                h_mse = mean((h_sim - hv).^2); % Mean Square Error
                table_data_armax(i,:) = [na nb nc nk h_mse]; i= i + 1;
                fprintf('ARMAX: na:%d, nb:%d, nk:%d, nk:%d, mse:%f\n', ...
                    na, nb, nc, nk, h_mse);
                if(h_mse_min_armax>h_mse)
                    h_mse_min_armax = h_mse;
                    X0_armax = findstates(sys_ss,iddata(hs, fs, Ts));
                    modelo_armax_op = modelo;
                end
            end
        end
    end
end

figure;hold on;
sys_ss = idss(modelo_armax_op);
h_sim_armax_op = sim(sys_ss, fs, simOptions('InitialCondition',X0_armax));
plot(ts, hs,'b'); plot(ts, h_sim_armax_op,'r','LineWidth',2);
xlabel('Tiempo [s]'); ylabel('Altura [cm]');
title('Mejor Modelo ARMAX');

disp('*********************\n');
fprintf('ARX: mse:%f\n', h_mse_min_arx);
fprintf('ARIX: mse:%f\n', h_mse_min_arix);
fprintf('ARMAX: mse:%f\n', h_mse_min_armax);
disp('*********************\n');


save(strcat('data/lineal/modelos/rango_', rango,'.mat'),...
    'h_mse_min_arx', 'h_mse_min_arix', 'h_mse_min_armax', ...
    'modelo_arx_op', 'modelo_arix_op', 'modelo_armax_op',...
    'X0_arx','X0_arix','X0_armax');