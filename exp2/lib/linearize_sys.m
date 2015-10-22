function [A, B, C, D] = linearize_sys(cube_params, x_op, u_op)

    a1  = cube_params.a(1);  a2  = cube_params.a(2);  a3  = cube_params.a(3);  a4  = cube_params.a(4);
    a5  = cube_params.a(5);  a6  = cube_params.a(6);  a7  = cube_params.a(7);  a8  = cube_params.a(8);
    a9  = cube_params.a(9);  a10 = cube_params.a(10); a11 = cube_params.a(11);

    b1  = cube_params.b(1);  b2  = cube_params.b(2);  b3  = cube_params.b(3);  b4  = cube_params.b(4);
    b5  = cube_params.b(5);  b6  = cube_params.b(6);  b7  = cube_params.b(7);  b8  = cube_params.b(8);
    b9  = cube_params.b(9);  b10 = cube_params.b(10); b11 = cube_params.b(11); b12 = cube_params.b(12);
    b13 = cube_params.b(13); b14 = cube_params.b(14); b15 = cube_params.b(15);

    c1  = cube_params.c(1);  c2  = cube_params.c(2);  c3  = cube_params.c(3);


    %% real non linear system

    % alpha, dalpha, theta, dtheta, u
    syms a_ da_ th_ dth_ u_

    % dynamics: cube acceleration
    dda_(a_, th_, da_, dth_, u_) = (1/((c1 + c2*cos(th_)^2)*c3))*(             ...
        (a1 + a2*cos(th_))*sin(th_)*da_^2 + a3*sin(th_)*dth_*da_               ...
        + a4*sin(th_)*dth_^2 + (a5 + a6*cos(th_))*dth_ + (a7 + a8*cos(th_))*u_ ...
        + a9*sin(a_)*cos(th_)^2 + a10*sin(a_) + a11*cos(th_)*cos(a_)*sin(th_));


    % dynamics: pendulum acceleration
    ddth_(a_, th_, da_, dth_, u_) = (1/((c1 + c2*cos(th_)^2)*c3))*(             ...
        (b1 + b2*cos(th_))*sin(th_)*da_^2 + (b3*cos(th_) + b4)*sin(th_)*dth_*da_...
        + (b5 + b6*cos(th_))*sin(th_)*dth_^2 + (b7 + b8*cos(th_))*dth_          ...
        + (b9 + b10*cos(th_))*u_ + (b11 + b12*cos(th_))*sin(a_)                 ...
        + b13*sin(a_)*cos(th_)^2 + b14*cos(a_)*sin(th_)                         ...
        + b15*cos(th_)*sin(th_)*cos(a_));

    % state x
    x = [a_, th_, da_, dth_];

    % dx(t) = f(x,u)
    f(a_, th_, da_, dth_, u_) = [ da_                             ; ...
                                  dth_                            ; ...
                                  dda_(a_, th_, da_, dth_, u_)    ; ...
                                  ddth_(a_, th_, da_, dth_, u_) ];

    % y = g(x,u)
    g(a_, th_, da_, dth_, u_) = [th_; da_];


    %% compute linearized model

    fprintf('Linearized model:\n')
    fprintf('-----------------\n\n')

    A = jacobian(f, x);
    B = jacobian(f, u_);
    C = jacobian(g, x);
    D = jacobian(g, u_);

    % operation point
    a_op   = x_op(1); da_op  = x_op(3);
    th_op  = x_op(2); dth_op = x_op(4);
    fprintf('x_op = (%.4f, %.4f, %.4f, %.4f)^T :\n', a_op, th_op, da_op, dth_op);
    fprintf('u_op = %.4f :\n', u_op);

    A = double(A(a_op, th_op, da_op, dth_op, u_op));
    B = double(B(a_op, th_op, da_op, dth_op, u_op));
    C = double(C(a_op, th_op, da_op, dth_op, u_op));
    D = double(D(a_op, th_op, da_op, dth_op, u_op));

    % display matrices
    fprintf('\nA = df/dx :\n'); disp(A);
    fprintf('\nB = df/du :\n'); disp(B);
    fprintf('\nC = dg/dx :\n'); disp(C);
    fprintf('\nD = dg/du :\n'); disp(D);

    clear a1 a2 a3 a4 a5 a6 a7 a8 a9 a10 a11
    clear b1 b2 b3 b4 b5 b6 b7 b8 b9 b10 b11 b12 b13 b14 b15
    clear c1 c2 c3
    
end