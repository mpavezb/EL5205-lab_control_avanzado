function run_fenom_sim(x_0)

    % sim
    sim('sim/fen_systems');

    % plot response
    figure('name','fenomenologic models');
    hold on;
    plot(sim_fenom.Time, sim_fenom.Data(:,1),'-b','displayname','fen \alpha');
    plot(sim_fenom.Time, sim_fenom.Data(:,2),'-r','displayname','fen \theta');
    plot(sim_linear.Time, sim_linear.Data(:,1),'--b','displayname','lin \alpha');
    plot(sim_linear.Time, sim_linear.Data(:,2),'--r','displayname','lin \theta');
    %plot(sim_discrete.Time, sim_discrete.Data(:,1),'-.b','displayname','\alpha');
    %plot(sim_discrete.Time, sim_discrete.Data(:,2),'-.r','displayname','\theta');
    xlabel('time [s]','interpreter','Latex','fontsize',12);
    ylabel('angle [rad]','interpreter','Latex','fontsize',12);
    title(sprintf('$$ X_0 = [\\alpha = %0.2f, \\theta = %0.2f, \\dot{\\alpha} = %0.2f, \\dot{\\theta} = %0.2f]$$', x_0),'interpreter','Latex');
    legend(gca, 'show', 'location', 'NorthEast');
    
    axis([0 sim_fenom.Time(end) -2*pi 2*pi]);
    grid on;
    
end