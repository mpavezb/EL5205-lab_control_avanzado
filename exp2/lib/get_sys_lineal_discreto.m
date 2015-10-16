function [ Ad, Bd, Cd, Dd ] = get_sys_lineal_discreto( A, B, C, D, Ts )
%GET_SYS_LINEAL_DISCRETO Summary of this function goes here
%   Detailed explanation goes here
    sys_lin = ss(A,B,C,D);
    sysd = c2d(sys_lin, Ts); Ad = sysd.a; Bd = sysd.b; Cd = sysd.c; Dd = sysd.d;
end

