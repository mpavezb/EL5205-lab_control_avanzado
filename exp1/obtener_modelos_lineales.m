clear; close all;
%% Cargar datos
load('mat/data_bajo_prbs_10_ts_5.mat');

% Datos del muestreo
nds = 1; % submuestreo
dt = 0.05; % muestreo original
Ts = dt*nds; % tiempo muestreo [seg]

% submuestrear
ts = downsample(t, nds); % t: tiempo
hs = downsample(h, nds); % h: altura
fs = downsample(f, nds); % u: porcentaje frecuencia
data = iddata(hs, fs, Ts);

%% Calculo mejor modelo ARX
table_data_arx = zeros(9,4);
i = 1;
h_sim_arx_op = [];
modelo_arx_op = [];
h_mse_min_arx = 10^10;
for na = 1:3
    for nb = 1:3
        for nk = 1:3
            % calculo del modelo lineal
            modelo = arx(data, [na nb nk]);
            sys_ss = idss(modelo);
            X0 = findstates(sys_ss,data);
            h_sim = sim(sys_ss, fs, simOptions('InitialCondition',X0));
            h_mse = mean((h_sim - hs).^2); % Mean Square Error
            table_data_arx(i,:) = [na nb nk h_mse]; i= i + 1;
            fprintf('ARX: na:%d, nb:%d, nk:%d, mse:%f\n', ...
                na, nb, nk, h_mse);
            if(h_mse_min_arx>h_mse)
                h_mse_min_arx = h_mse;
                h_sim_arx_op = h_sim;
                modelo_arx_op = modelo;
            end
        end
    end
end

figure;hold on;
plot(ts, hs,'b'); plot(ts, h_sim_arx_op,'r','LineWidth',2);
xlabel('Tiempo [s]'); ylabel('Altura [cm]');
title('Mejor Modelo ARX');

%% Calculo mejor modelo ARIX
table_data_arix = zeros(9,4);
i = 1;
h_sim_arix_op = [];
modelo_arix_op = [];
h_mse_min_arix = 10^10;
for na = 1:3
    for nb = 1:3
        for nk = 1:3
            modelo = arx(data, [na nb nk], 'IntegrateNoise', ...
                true); % calculo del modelo lineal
            sys_ss = idss(modelo);
            X0 = findstates(sys_ss,data);
            h_sim = sim(sys_ss, fs, simOptions('InitialCondition',X0));
            h_mse = mean((h_sim - hs).^2); % Mean Square Error
            table_data_arix(i,:) = [na nb nk h_mse]; i= i + 1;
            fprintf('ARIX: na:%d, nb:%d, nk:%d, mse:%f\n', ...
                na, nb, nk, h_mse);
            if(h_mse_min_arix>h_mse)
                h_mse_min_arix = h_mse;
                h_sim_arix_op = h_sim;
                modelo_arix_op = modelo;
            end
        end
    end
end

figure;hold on;
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
                X0 = findstates(sys_ss,data);
                h_sim = sim(sys_ss, fs, simOptions('InitialCondition',X0));
                h_mse = mean((h_sim - hs).^2); % Mean Square Error
                table_data_armax(i,:) = [na nb nc nk h_mse]; i= i + 1;
                fprintf('ARMAX: na:%d, nb:%d, nk:%d, nk:%d, mse:%f\n', ...
                    na, nb, nc, nk, h_mse);
                if(h_mse_min_armax>h_mse)
                    h_mse_min_armax = h_mse;
                    h_sim_armax_op = h_sim;
                    modelo_armax_op = modelo;
                end
            end
        end
    end
end

figure;hold on;
plot(ts, hs,'b'); plot(ts, h_sim_armax_op,'r','LineWidth',2);
xlabel('Tiempo [s]'); ylabel('Altura [cm]');
title('Mejor Modelo ARMAX');

disp('*********************\n');
fprintf('ARX: mse:%f\n', h_mse_min_arx);
fprintf('ARIX: mse:%f\n', h_mse_min_arix);
fprintf('ARMAX: mse:%f\n', h_mse_min_armax);
disp('*********************\n');


