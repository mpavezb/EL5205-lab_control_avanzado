function [ poles, Wn, damping ] = get_poles( ts, Mp, Ts )
%GET_POLES Summary of this function goes here
    d1 = log(Mp)/pi;
    damping = sqrt(d1^2 / (1+d1^2));
    Wn = (4.6 / (damping * ts));
    if(nargin == 3)
        Wn = Wn * Ts;
    end
    poles = roots([1 2*damping*Wn Wn^2]);
end

