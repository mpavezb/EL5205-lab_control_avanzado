function [ Ad, Bd, Cd, Dd ] = discretize_sys(A, B, C, D, Ts)

    sys = ss(A,B,C,D);
    sysd = c2d(sys, Ts);
    
    Ad = sysd.a;
    Bd = sysd.b;
    Cd = sysd.c;
    Dd = sysd.d;

    fprintf('\nDiscrete Model:\n');
    fprintf('-----------------\n');
    fprintf('\nAd = \n'); disp(Ad);
    fprintf('\nBd = \n'); disp(Bd);
    fprintf('\nCd =');    disp(Cd);
    fprintf('\nDd =');    disp(Dd);
    
    sys_poles = pole(sysd);
    sys_zeros = zero(sysd);
    
    fprintf('\n');
    fprintf('- System Poles:\n'); disp(sys_poles);
    fprintf('- System Zeros:\n'); disp(sys_zeros);
    
end

