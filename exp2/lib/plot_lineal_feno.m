function [ ] = plot_lineal_feno(resp_fenom, resp_lineal, alpha, x_0, params)

    label_time_ = 'tiempo [s]';
    label_ang_  = 'angulo [rad]';
    title_ = sprintf('$$ X_0 = [\\alpha = %0.4f, \\theta = %0.4f, \\dot{\\alpha} = %0.4f, \\dot{\\theta} = %0.4f]$$',...
                x_0(params.idx_alpha),...
                x_0(params.idx_theta),...
                x_0(params.idx_dalpha),...
                x_0(params.idx_dtheta));
    
    t_ef  = resp_fenom(:,1);
    t_eld = resp_lineal(:,1);
    
    figure;
    subplot(211);
    hold on;
    plot(t_ef, resp_fenom(:, params.idx_alpha+1), '-b', 'displayname', 'Observado \alpha');
    plot(t_ef, resp_fenom(:, params.idx_theta+1), '-r', 'displayname', 'Simulado \theta');
    plot(alpha(:,1), alpha(:,2),'--c','displayname','Simulado \alpha');
    xlabel(label_time_, 'Interpreter', 'latex', 'fontsize', 12);
    ylabel(label_ang_,  'Interpreter', 'latex', 'fontsize', 12);
    title({'Simulacion Modelo Fenomenologico', title_}, 'interpreter', 'latex');
    legend(gca, 'show', 'location', 'best');
    
    subplot(212);
    hold on;
    plot(t_eld, resp_lineal(:, params.idx_alpha+1), '-b', 'displayname', '\alpha');
    plot(t_eld, resp_lineal(:, params.idx_alpha+1), '-r', 'displayname', '\theta');
    xlabel(label_time_, 'Interpreter', 'latex', 'fontsize', 12);
    ylabel(label_ang_,  'Interpreter', 'latex', 'fontsize', 12);
    title({'Simulacion Modelo Lineal Discreto', title_}, 'interpreter', 'latex');
    legend(gca, 'show', 'location', 'best');
    
end

