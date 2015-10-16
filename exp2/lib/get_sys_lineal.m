function [ A, B, C, D ] = get_sys_lineal( a, b, c, x1, x2, x3, x4 )
%GET_SYS_LINEAL Summary of this function goes here
%   Detailed explanation goes here
    load('data/EL5205_Experiencia_Cubo.mat');
    %% f1 = f11 + f21 u 
    % Ecuacion completa
    % (1/((c(1)+c(2) * cos(x(2))^2) * c(3))) * ((a(1) + a(2) * cos(x(2))) * sin(x(2)) * x(3)^2  ...
    % + a(3) * sin(x(2)) * x(4) * x(3) + a(4) * sin(x(2)) * x(4)^2 + (a(5) + a(6) * cos(x(2))) * x(4) ... 
    % + (a(7) + a(8) * cos(x(2)))u + a(9) * sin(x(1)) * cos(x(2))^2 + a(10) * sin(x(1)) + a(11) * cos(x(2)) * cos(x(1)) * sin(x(2)))

    f11 = @(a,b,c,x) (1/((c(1)+c(2) * cos(x(2))^2) * c(3))) * ((a(1) + a(2) * cos(x(2))) * sin(x(2)) * x(3)^2  ...
    + a(3) * sin(x(2)) * x(4) * x(3) + a(4) * sin(x(2)) * x(4)^2 + (a(5) + a(6) * cos(x(2))) * x(4) ... 
    + a(9) * sin(x(1)) * cos(x(2))^2 + a(10) * sin(x(1)) + a(11) * cos(x(2)) * cos(x(1)) * sin(x(2)));

    f21 = @(a,b,c,x) (1/((c(1)+c(2) * cos(x(2))^2) * c(3))) * (a(7) + a(8) * cos(x(2)));

    %% f2 = f12 + f22 u 
    % Ecuacion completa
    % (1/((c(1)+c(2) * cos^2(x(2))^2) * c(3))) * ((b(1) + b(2) * cos(x(2))) * sin(x(2)) * x(3)^2 ...
    % + (b(3) * cos(x(2)) + b(4))* sin(x(2)) * x(4) * x(1) + (b(5) + b(6) * cos(x(2)))* sin(x(2)) * x(4)^2 ...
    % + (b(7) + b(8)* cos(x(2))) * x(4) + (b(9) + b(10) * cos(x(2)))u + (b(11) + b(12)* cos(x(2)))* sin(x(1)) ...
    % + b(13) * sin(x(1)) * cos(x(2))^2 + b(14) * cos(x(1)) * sin(x(2)) + b(15) * cos(x(2))* sin(x(2))* cos(x(1)))


    f12 = @(a,b,c,x) (1/((c(1)+c(2) * cos(x(2))^2) * c(3))) * ((b(1) + b(2) * cos(x(2))) * sin(x(2)) * x(3)^2 ...
    + (b(3) * cos(x(2)) + b(4))* sin(x(2)) * x(4) * x(1) + (b(5) + b(6) * cos(x(2)))* sin(x(2)) * x(4)^2 ...
    + (b(7) + b(8)* cos(x(2))) * x(4) + (b(11) + b(12)* cos(x(2)))* sin(x(1)) ...
    + b(13) * sin(x(1)) * cos(x(2))^2 + b(14) * cos(x(1)) * sin(x(2)) + b(15) * cos(x(2))* sin(x(2))* cos(x(1)));

    f22 = @(a,b,c,x) (1/((c(1)+c(2) * cos(x(2))^2) * c(3))) * (b(9) + b(10) * cos(x(2)));
    
    df11_x1 = (a(9)*cos(x1)*cos(x2)^2 - a(11)*sin(x1)*sin(x2)*cos(x2) + a(10)*cos(x1))/(c(3)*(c(2)*cos(x2)^2 + c(1)));
    df11_x2 = (2*c(2)*cos(x2)*sin(x2)*(x4*(a(5) + a(6)*cos(x2)) + a(10)*sin(x1) + x3^2*sin(x2)*(a(1) + a(2)*cos(x2)) + x4^2*a(4)*sin(x2) + a(9)*cos(x2)^2*sin(x1) + a(11)*cos(x1)*cos(x2)*sin(x2) + x3*x4*a(3)*sin(x2)))/(c(3)*(c(2)*cos(x2)^2 + c(1))^2) - (x4*a(6)*sin(x2) - x3^2*cos(x2)*(a(1) + a(2)*cos(x2)) - x4^2*a(4)*cos(x2) - a(11)*cos(x1)*cos(x2)^2 + x3^2*a(2)*sin(x2)^2 + a(11)*cos(x1)*sin(x2)^2 + 2*a(9)*cos(x2)*sin(x1)*sin(x2) - x3*x4*a(3)*cos(x2))/(c(3)*(c(2)*cos(x2)^2 + c(1)));
    df11_x3 = (2*x3*sin(x2)*(a(1) + a(2)*cos(x2)) + x4*a(3)*sin(x2))/(c(3)*(c(2)*cos(x2)^2 + c(1)));
    df11_x4 = (a(5) + a(6)*cos(x2) + x3*a(3)*sin(x2) + 2*x4*a(4)*sin(x2))/(c(3)*(c(2)*cos(x2)^2 + c(1)));

    df12_x1 = (cos(x1)*(b(11) + b(12)*cos(x2)) + x4*sin(x2)*(b(4) + b(3)*cos(x2)) - b(14)*sin(x1)*sin(x2) + b(13)*cos(x1)*cos(x2)^2 - b(15)*cos(x2)*sin(x1)*sin(x2))/(c(3)*(c(2)*cos(x2)^2 + c(1)));
    df12_x2 = (2*c(2)*cos(x2)*sin(x2)*(x4*(b(7) + b(8)*cos(x2)) + sin(x1)*(b(11) + b(12)*cos(x2)) + x3^2*sin(x2)*(b(1) + b(2)*cos(x2)) + x4^2*sin(x2)*(b(5) + b(6)*cos(x2)) + b(14)*cos(x1)*sin(x2) + b(13)*cos(x2)^2*sin(x1) + b(15)*cos(x1)*cos(x2)*sin(x2) + x1*x4*sin(x2)*(b(4) + b(3)*cos(x2))))/(c(3)*(c(2)*cos(x2)^2 + c(1))^2) - (x4*b(8)*sin(x2) - x3^2*cos(x2)*(b(1) + b(2)*cos(x2)) - x4^2*cos(x2)*(b(5) + b(6)*cos(x2)) - b(14)*cos(x1)*cos(x2) + b(12)*sin(x1)*sin(x2) - b(15)*cos(x1)*cos(x2)^2 + x3^2*b(2)*sin(x2)^2 + x4^2*b(6)*sin(x2)^2 + b(15)*cos(x1)*sin(x2)^2 + 2*b(13)*cos(x2)*sin(x1)*sin(x2) - x1*x4*cos(x2)*(b(4) + b(3)*cos(x2)) + x1*x4*b(3)*sin(x2)^2)/(c(3)*(c(2)*cos(x2)^2 + c(1)));
    df12_x3 = (2*x3*sin(x2)*(b(1) + b(2)*cos(x2)))/(c(3)*(c(2)*cos(x2)^2 + c(1)));
    df12_x4 = (b(7) + b(8)*cos(x2) + x1*sin(x2)*(b(4) + b(3)*cos(x2)) + 2*x4*sin(x2)*(b(5) + b(6)*cos(x2)))/(c(3)*(c(2)*cos(x2)^2 + c(1)));

    A = [0 0 1 0; 0 0 0 1; df11_x1 df11_x2 df11_x3 df11_x4; df12_x1 df12_x2 df12_x3 df12_x4];
    B = [0 0 f21(a,b,c,[x1 x2 x3 x4]) f22(a,b,c,[x1 x2 x3 x4])]';
    C = eye(4);
    D = zeros(4,1);

    Co = ctrb(A,B);
    Oo = obsv(A,C);
    if rank(Co) == 4
        disp('El sistema es controlable');
    else
        disp('El sistema NO es controlable');
    end

    if rank(Oo) == 4
        disp('El sistema es observable');
    else
        disp('El sistema NO es observable');
    end
end

