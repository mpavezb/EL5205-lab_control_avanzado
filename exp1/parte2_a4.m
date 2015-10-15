%% cargar datos de los modelos lineales obtenidos
clear; close all;
modelos_lineales;
Tt = 1200;

load('data/p2a4_control_v2');

sim('sym/P2d_salidas');

figure;
hold on;
plot(hr(:,1),hr(:,2),'b','DisplayName','Referencia');
plot(hr(:,1),hr(:,3),'r','DisplayName','Salida real');
plot(h_modelo_fenomenologico(:,1),h_modelo_fenomenologico(:,2),'g',...
    'DisplayName','Modelos fenomenologico');
plot(h_modelos_lineales(:,1),h_modelos_lineales(:,2),'c',...
    'DisplayName','Modelos Lineales');
plot(h_modelos_linealizados(:,1),h_modelos_linealizados(:,2),'m',...
    'DisplayName','Modelos Linealizados');
xlabel('Tiempo [seg]'); ylabel('Altura [cm]');
legend(gca, 'show', 'location', 'best');


% Interpolacion de los datos
h_fenome = interp1(h_modelo_fenomenologico(:,1),...
    h_modelo_fenomenologico(:,2),hr(:,1));
h_lineal = interp1(h_modelos_lineales(:,1),...
    h_modelos_lineales(:,2),hr(:,1));
h_lindos = interp1(h_modelos_linealizados(:,1),...
    h_modelos_linealizados(:,2),hr(:,1));

I = 1:24001; % intervalo de interes

% calculo del error cuadratico medio 
mse_fenome = mean((hr(I,2) - h_fenome(I)).^2);
mse_lineal = mean((hr(I,2) - h_lineal(I)).^2);
mse_lindos = mean((hr(I,2) - h_lindos(I)).^2);

% ver informacion de errores
fprintf('fenomenologico:\t linealizado\t lineal\n');
fprintf('%.4f\t %.4f\t %.4f\n', ...
    mse_fenome, mse_lindos, mse_lineal);


