%% cargar datos de los modelos lineales obtenidos
modelos_lineales;

load('data/p2a4_control_v1');

% c1 = 2.3141;
% c2 = -39.6534;
% beta = 8.8894;

sim('sym/P2d_salidas');

figure;
hold on;
plot(hr(:,1),hr(:,2),'b','DisplayName','Referencia');
plot(hr(:,1),hr(:,3),'r','DisplayName','Salida real');
plot(h_modelo_fenomenologico(:,1),h_modelo_fenomenologico(:,2),'g',...
    'DisplayName','Modelos fenomenologico');
plot(h_modelos_lineales(:,1),h_modelos_lineales(:,2),'c',...
    'DisplayName','Modelos Lineales');
% plot(h_modelos_linealizados(:,1),h_modelos_linealizados(:,2),'m',...
%     'DisplayName','Modelos Linealizados');
xlabel('Tiempo [seg]'); ylabel('Altura [cm]');
legend(gca, 'show', 'location', 'best');
