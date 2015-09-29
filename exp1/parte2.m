
%% setup workspace

% workspace
clear all;
clc;
close all;

% cd to this script folder
%cd (fileparts(mfilename('fullpath')));
addpath(genpath('data'));
addpath(genpath('sym'));
addpath(genpath('lib'));

%% Data

load('model_parameters.mat')

%nds = 50;  % subsampling
%Ts  = Ts*nds;


%% Actividad 1:

% implementada en simulink
% sim('...')

%% Actividad 2:

% PRBS signal parameters
TS_PRBS   = 5;
BAND_PRBS = 4;

% sim('...')

% % salida referencia
% figure; hold all;
% plot(hr(:,1),hr(:,2));
% plot(hr(:,1),hr(:,3));
% xlabel('tiempo [seg]');
% ylabel('altura [cm]');
% legend('referencia','salida planta');
% 
% % perturbacion
% figure; hold all;
% plot(prbs(:,1),prbs(:,2));
% xlabel('tiempo [seg]');
% ylabel('altura [cm]');