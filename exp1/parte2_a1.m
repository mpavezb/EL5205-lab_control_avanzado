
%% setup workspace

% workspace
clear all;
clc;
close all;

% cd to this script folder
%cd (fileparts(mfilename('fullpath')));
addpath(genpath('sym'));
addpath(genpath('lib'));

%% Data

load('mat/model_parameters.mat')

%% Actividad 1.a:
% implementada en simulink

%% Actividad 1.b:

% PRBS signal parameters
TS_PRBS   = 5;
BAND_PRBS = 4;


