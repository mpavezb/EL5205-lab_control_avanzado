% 2.151: LQG regulator for coupled masses
% (See handout on discrete observers).
%---------------------------------------------------------
% Enter the continuous plant model
%

% prepare workspace
clc;
close all;
clear;
format shortG
format compact
addpath('lib', 'mat','sim');

load('mat/linear_sys.mat');

%----------------------------------------------------------
% Create the LTI continuous model
%
plant = ss(A, B, C, D);
set(plant, 'StateName', {'alpha', 'theta', 'alpha_dot', 'theta_dot'})
%----------------------------------------------------------
% Create the Discrete model with a sampling time of T=0.002 s.
%
T = 0.002;
ZOH = c2d(plant, T,'zoh');
% Retrieve the matrices
[Phi, Gamma, Cd, Dd] = ssdata(ZOH);
%----------------------------------------------------------
% Design the regulator by computing the LQR Gain matrix K
% Set R = [1] arbitrarily and scale the Q matrix accordingly.
% Make Q diagonal
%
R = 1;
Q11 = 1E-8;% input('LQR controller Q_11: ');
Q22 = 2E-5;% input('LQR controller Q_22: ');
Q = diag([Q11 0 Q22 0]);
K = dlqr(Phi, Gamma, Q, R);
%----------------------------------------------------------
% Compute the Kalman filter gains
% Assume rms noise of 1% on each sensor channel
Rv = 0.01^2 * eye(2);
% Input Rw

Rw = 1E-8; %input('Enter estimator Rw: ');
sensors = [1, 2]; % d and y are sensed
known = [1]; % force u
P = ss(Phi, [Gamma Gamma], C, [D D], T);
[Observer, Ko] = kalman(P, Rw, Rv, [], sensors, known);
%-----------------------------------------------------------
% Create the regulator and the closed-loop system
%
lqg_reg = lqgreg(Observer, K, 'current');
feedin = [1]; % force u
feedout = [1, 2]; % theta, alpha_dot
Gcl = feedback(ZOH, lqg_reg, feedin, feedout, +1);
%-----------------------------------------------------------
% Compute and plot the initial condition response
x0 = zeros(8,1);
x0(1) = pi/100;
figure(1), clf
initial(Gcl, x0)
% Plot all states and compare actual values with Kalman estimates
[y, t, x] = initial(Gcl, x0, 10);
figure(2), clf
subplot(2,2,1), stairs(t,x(:, [1 5])), grid, legend('x_1=\alpha', 'x_1hat', 0)
title('Response of states and predictive estimates to x_1(0) = 1'), ...
xlabel('Time (s)')
subplot(2,2,2), stairs(t,x(:, [3 7])), grid, legend('x_2=dot \alpha', 'x_2hat', 0)
xlabel('Time (s)')
subplot(2,2,3), stairs(t,x(:, [2 6])), grid, legend('x_3=\theta', 'x_3hat', 0)
xlabel('Time (s)')
subplot(2,2,4), stairs(t,x(:, [4 8])), grid, legend('x_4=dot \theta', 'x_4hat', 0)
xlabel('Time (s)')
%---------------------------------------------------------------