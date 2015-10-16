% prepare
clc;
close all;
clear all;
format shortG
format compact
addpath('lib', 'mat','sim');

load('mat/cubo.mat');
load('mat/linear_sys.mat');
load('mat/discrete_sys.mat');

% initial conditions:
%x = [  a,  th,  da, dth];
sim_stop_time = 5; % [s]

% sim 1: zero state
x_0 = [0.0, 0.0, 0.0, 0.0];
run_fenom_sim(x_0);

% sim 2: alpha = 0.1
x_0 = [0.1, 0.0, 0.0, 0.0];
run_fenom_sim(x_0);

% sim 3: theta = 0.1
x_0 = [0.0, 0.1, 0.0, 0.0];
run_fenom_sim(x_0);