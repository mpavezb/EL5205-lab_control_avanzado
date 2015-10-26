function y_est = predict_y(model, state, controls)
    % asume D = 0

    A = model.A;
    B = model.B;
    C = model.C;

    % n control steps
    j = size(controls,2);
    
    % y size
    n = size(C,1);
    
    y_est = zeros(n,j);
    
    Aj = eye(size(A));
    Ai = eye(size(A));
    sum  = 0;
    for i=1:j
        Aj = Aj*A; % A^[j]
        sum = sum + Ai*B*controls(:,i);
        y_est(:,i) = C*(Aj*state +  sum);
        Ai = Ai*A; % A^[i-1]
    end
end