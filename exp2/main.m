
clc;
close all;
clear all;

%% cube parameters

cube = load('mat/cubo.mat');
a1  = cube.a(1);  a2  = cube.a(2);  a3  = cube.a(3);  a4  = cube.a(4);
a5  = cube.a(5);  a6  = cube.a(6);  a7  = cube.a(7);  a8  = cube.a(8);
a9  = cube.a(9);  a10 = cube.a(10); a11 = cube.a(11);

b1  = cube.b(1);  b2  = cube.b(2);  b3  = cube.b(3);  b4  = cube.b(4);
b5  = cube.b(5);  b6  = cube.b(6);  b7  = cube.b(7);  b8  = cube.b(8);
b9  = cube.b(9);  b10 = cube.b(10); b11 = cube.b(11); b12 = cube.b(12);
b13 = cube.b(13); b14 = cube.b(14); b15 = cube.b(15);

c1  = cube.c(1);  c2  = cube.c(2);  c3  = cube.c(3);


%% real non linear system

% alpha, dalpha, theta, dtheta, u
syms a_ da_ th_ dth_ u_

% dynamics: cube acceleration
dda_(a_, da_, th_, dth_, u_) = (1/((c1 + c2*cos(th_)^2)*c3))*(             ...
    (a1 + a2*cos(th_))*sin(th_)*da_^2 + a3*sin(th_)*dth_*da_               ...
    + a4*sin(th_)*dth_^2 + (a5 + a6*cos(th_))*dth_ + (a7 + a8*cos(th_))*u_ ...
    + a9*sin(a_)*cos(th_)^2 + a10*sin(a_) + a11*cos(th_)*cos(a_)*sin(th_));


% dynamics: pendulum acceleration
ddth_(a_, da_, th_, dth_, u_) = (1/((c1 + c2*cos(th_)^2)*c3))*(             ...
    (b1 + b2*cos(th_))*sin(th_)*da_^2 + (b3*cos(th_) + b4)*sin(th_)*dth_*da_...
    + (b5 + a6*cos(th_))*sin(th_)*dth_^2 + (b7 + b8*cos(th_))*dth_          ...
    + (b9 + b10*cos(th_))*u_ + (b11 + b12*cos(th_))*sin(a_)                 ...
    + b13*sin(a_)*cos(th_)^2 + b14*cos(a_)*sin(th_)                         ...
    + b15*cos(th_)*sin(th_)*cos(a_));

% state x
x = [a_, da_, th_, dth_];

% dx(t) = f(x,u)
f(a_, da_, th_, dth_, u_) = [ da_                             ; ...
                              dth_                            ; ...
                              dda_(a_, da_, th_, dth_, u_)    ; ...
                              ddth_(a_, da_, th_, dth_, u_) ];

% y = g(x,u)
g(a_, da_, th_, dth_, u_) = a_;


%% compute linearized model

fprintf('Linearized model:\n')
fprintf('-----------------\n')

A = jacobian(f, x);
B = jacobian(f, u_);
C = jacobian(g, x);
D = jacobian(g, u_);

% operation point
a_op   = 0; da_op  = 0;
th_op  = 0; dth_op = 0;
fprintf('\nx_op = (%.4f, %.4f, %.4f, %.4f)^T :\n', a_op, da_op, th_op, dth_op);

% display matrices
fprintf('\nA = df/dx :\n')
disp(vpa(A(a_op, th_op, da_op, dth_op, u_),6));
fprintf('\nB = df/du :\n')
disp(vpa(B(a_op, th_op, da_op, dth_op, u_),6));
fprintf('\nC = dg/dx :\n')
disp(vpa(C(a_op, th_op, da_op, dth_op, u_),6));
fprintf('\nD = dg/du :\n')
disp(vpa(D(a_op, th_op, da_op, dth_op, u_),6));

clear a1 a2 a3 a4 a5 a6 a7 a8 a9 a10 a11
clear b1 b2 b3 b4 b5 b6 b7 b8 b9 b10 b11 b12 b13 b14 b15
clear c1 c2 c3

