%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Generar datos para la simulación de los modelos lineales
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
clear;
%% Rango bajo
load('data/lineal/modelos/rango_bajo');
modelo_lineal_rango_bajo = modelo_armax_op;
X0_bajo = X0_armax;

%% Rango medio
load('data/lineal/modelos/rango_medio');
modelo_lineal_rango_medio = modelo_armax_op;
X0_medio = X0_armax;

%% Rango alto
load('data/lineal/modelos/rango_alto');
modelo_lineal_rango_alto = modelo_armax_op;
X0_alto = X0_armax;

%% Cargar datos de la planta
load('mat/model_parameters.mat');

