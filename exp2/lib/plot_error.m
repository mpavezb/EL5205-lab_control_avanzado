function [ ] = plot_error(respA, respB, fig_title, params)

    label_time_ = 'tiempo [s]';
    label_ang_  = 'angulo [rad]';
    label_vang_ = 'vel. angular [rad/s]';
    
    t = respA(:,1);
    e_alpha_  = respA(:,params.idx_alpha+1)  - respB(:,params.idx_alpha+1);
    e_theta_  = respA(:,params.idx_theta+1)  - respB(:,params.idx_theta+1);
    e_dalpha_ = respA(:,params.idx_dalpha+1) - respB(:,params.idx_dalpha+1);
    e_dtheta_ = respA(:,params.idx_dtheta+1) - respB(:,params.idx_dtheta+1);
    
    figure;
    hold on;
    
    subplot(221);
    plot(t, e_alpha_, '-r', 'displayname', '$\alpha$');
    xlabel(label_time_, 'Interpreter', 'latex','fontsize',12);
    ylabel(label_ang_,  'Interpreter', 'latex','fontsize',12);
    title('error para $\alpha$','Interpreter','latex','fontsize',14);
    hlegend = legend(gca, 'show', 'location', 'best');
    set(hlegend,'Interpreter','latex');
    
    subplot(223);
    plot(t, e_theta_, '-b', 'displayname', '$\theta$');
    xlabel(label_time_, 'Interpreter', 'latex','fontsize',12);
    ylabel(label_ang_,  'Interpreter', 'latex','fontsize',12);
    title('error para $\theta$','Interpreter','latex','fontsize',14);
    hlegend = legend(gca, 'show', 'location', 'best');
    set(hlegend,'Interpreter','latex');
    
    subplot(222);
    plot(t, e_dalpha_,'-r', 'displayname', '$\dot{\alpha}$');
    xlabel(label_time_, 'Interpreter', 'latex','fontsize',12);
    ylabel(label_vang_, 'Interpreter', 'latex','fontsize',12);
    title('error para $\dot{\alpha}$','Interpreter','latex','fontsize',14);
    hlegend = legend(gca, 'show', 'location', 'best');
    set(hlegend,'Interpreter','latex');
    
    subplot(224);
    plot(t, e_dtheta_, '-b', 'displayname', '$\dot{\theta}$');
    xlabel(label_time_, 'Interpreter', 'latex','fontsize',12);
    ylabel(label_vang_, 'Interpreter', 'latex','fontsize',12);
    title('error para $\dot{\theta}$','Interpreter','latex','fontsize',14);
    hlegend = legend(gca, 'show', 'location', 'best');
    set(hlegend,'Interpreter','latex');
    
    suptitle(fig_title);
end

