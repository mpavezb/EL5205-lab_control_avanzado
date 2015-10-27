
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
tower.x0 = [0; 0; 0; 0];

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
jib.x0 = [0; 0; 0; 0];

%% parameters
Ts = 0.01;

save('mat/defs.mat','tower','jib','Ts')
