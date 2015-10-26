clear;
close all;
clc;

%% Tower

At = [ 0,        0, 1, 0; ...
       0,        0, 0, 1; ...
       0,   1.3108, 0, 0; ...
       0, -12.5835, 0, 0];

Bt = [        0; ...
              0; ...
      1006.5290; ...
      -939.9211];

Ct = [1, 0, 0, 0; ...
      0, 1, 0, 0];
  
Dt = [0; ...
      0];  

  
tower = [];
tower.A = At;
tower.B = Bt;
tower.C = Ct;
tower.D = Dt;
tower.state_list = {'\theta', '\alpha', '\dot{\theta}', '\dot{\alpha}'};
  
%% Jib

Aj = [ 0,        0, 1, 0; ...
       0,        0, 0, 1; ...
       0,  -1.7019, 0, 0; ...
       0, -13.3301, 0, 0];

Bj = [       0; ...
             0; ...
       18.2478; ...
       21.1299];

Cj = [1, 0, 0, 0; ...
      0, 1, 0, 0];
  
Dj = [0; ...
      0];

jib = [];
jib.A = Aj;
jib.B = Bj;
jib.C = Cj;
jib.D = Dj;
jib.state_list = {'x', '\gamma', '\dot{x}', '\dot{\gamma}'};

%% parameters

Ts = 0.01;


%% perfil de perturbacion
t = 0:Ts:2;
u = zeros(1,length(t));
u(1:floor(0.5/Ts)) = 0.5;
u(floor(0.5/Ts)+1:floor(1/Ts)) = -0.5;

figure;
hold on;
plot(t,u,'b');
grid on;

%% prediction
Nu = 5;
xt    = [0; 0; 0; 0];
y_est = predict_y(tower, xt, u(1:Nu));

figure;
hold on;
plot(t(1:Nu),y_est,'r');
grid on;
