function run_fenom_sim(x_0)

    % sim
    sim('sim/fen_systems');

    % plot response
    figure;
    hold on;
    plot(sim_fenom.Time, sim_fenom.Data(:,1),'-b','displayname','\alpha');
    plot(sim_fenom.Time, sim_fenom.Data(:,2),'-r','displayname','\theta');
    xlabel('time [s]');
    ylabel('angle [rad]');
    title(sprintf('$$ X_0 = [\\alpha = %0.2f, \\theta = %0.2f, \\dot{\\alpha} = %0.2f, \\dot{\\theta} = %0.2f]$$', x_0),'interpreter','Latex');
    legend(gca, 'show', 'location', 'best');
    grid on;

end