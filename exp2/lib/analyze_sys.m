function analyze_sys(A, B, C)
    % controllability/observability matrices

    fprintf('\nControll/Observ - ability:\n');
    fprintf('------------------------------\n')

    Oo = obsv(A,C); % [ C ; C*A ; C*A*A ; C*A*A*A ]
    Co = ctrb(A,B); % [ B , A*B , A*A*B , A*A*A*B ]
    
    fprintf('\nObservability matrix Oo = \n');   disp(Oo);
    fprintf('\nControllability matrix Co = \n'); disp(Co);
    fprintf('\n');

    fprintf('Oo has rank %d\n',rank(Oo));
    fprintf('Co has rank %d\n',rank(Co));
    if rank(Co) == 4
        disp('- el sistema es controlable');
    else
        disp('- el sistema NO es controlable');
    end

    if rank(Oo) == 4
        disp('- el sistema es observable');
    else
        disp('- el sistema NO es observable');
    end
    
end