%% parameters
Ts = 0.01;
% N1 =  1;
% N2 = 60;
% Nu = 40;
% t_lambda1 = 1.0;
% t_lambda2 = 1.0;
% t_lambdau = 1.0;
% 
% max_alpha =  3;
% min_alpha = -3;
% max_gamma =  3;
% min_gamma = -3;

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
      0, 1, 0, 0; ...
      0, 0, 1, 0]; % se agrega dtheta, para incluirlo en J al minimizar
  
Dt = [0; ...
      0; ...
      0];  

sys   = ss(At, Bt, Ct, Dt);
tower = c2d(sys, Ts, 'zoh');
tower.Name = 'Tower';
tower.StateName  = {'theta','alpha','dtheta','dalpha'};
tower.StateUnit  = {'rad'  ,'rad'  ,'rad/s' ,'rad/s' };
tower.InputName  = {'t_curr'};
tower.InputUnit  = {'A'};
tower.OutputName = {'theta','alpha','dtheta'};
tower.OutputUnit = {'rad'  ,'rad'  ,'rad/s' };
tower.InputGroup.MV  = 1;
tower.OutputGroup.MO = [1 2];
tower.OutputGroup.UO = 3;

clear At Bt Ct Dt sys

%% Jib

Aj = [ 0,        0, 1, 0; ...
       0,        0, 0, 1; ...
       0,  -1.7019, 0, 0; ...
       0, -13.3301, 0, 0];

Bj = [       0; ...
             0; ...
       18.2478; ...
       21.1299];

% se agrega dx, para incluirlo en J al minimizar
Cj = [1, 0, 0, 0; ...
      0, 1, 0, 0; ...
      0, 0, 1, 0];
Dj = [0; 0; 0];

sys = ss(Aj, Bj, Cj, Dj);
jib = c2d(sys, Ts, 'zoh');
jib.Name = 'Jib';
jib.StateName  = {'x','gamma','dx' ,'dgamma'};
jib.StateUnit  = {'m','rad'  ,'m/s','rad/s' };
jib.InputName  = {'j_curr'};
jib.InputUnit  = {'A'};
jib.OutputName = {'x','gamma','dx' };
jib.OutputUnit = {'m','rad'  ,'m/s'};
jib.InputGroup.MV  = 1;
jib.OutputGroup.MO = [1 2];
jib.OutputGroup.UO = 3;

%%
clear Aj Bj Cj Dj sys


%% save
save('mat/defs.mat','tower','jib','Ts'), ...
     %'max_alpha','min_alpha','max_gamma','min_gamma')

 