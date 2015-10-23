function run_fenom_sim(x_0, params)

    % sim
    sim('sim/fen_systems');

    tini = 0;
    tend = sim_fenom.Time(end);
    
    % plot response
    figure('name','fenomenologic models');
    hold on;
    
    
    tlimit =  linspace(tini,tend,200);
    ulimit =  linspace(pi/4,pi/4,200);
    uop_pt =  -linspace(pi,pi,200);
    h1=plot(tlimit, ulimit,'--k');
    h2=plot(tlimit,-ulimit,'--k');
    h3=plot(tlimit, uop_pt,'-k');
    h4=plot(tlimit,-uop_pt,'-k');
    
    
    h5=plot(sim_fenom.Time, sim_fenom.Data(:,1),'-b');
    h6=plot(sim_fenom.Time, sim_fenom.Data(:,2),'-r');
    h7=plot(sim_linear.Time, sim_linear.Data(:,1),'--b');
    h8=plot(sim_linear.Time, sim_linear.Data(:,2),'--r');
    
    %plot(sim_discrete.Time, sim_discrete.Data(:,1),'-.b','displayname','\alpha');
    %plot(sim_discrete.Time, sim_discrete.Data(:,2),'-.r','displayname','\theta');
    xlabel('time [s]','interpreter','Latex','fontsize',12);
    ylabel('angle [rad]','interpreter','Latex','fontsize',12);
    title(sprintf(' Lazo abierto, $$ x_0 = [\\alpha = %0.2f, \\theta = %0.2f, 0, 0]$$', x_0(params.idx_alpha), x_0(params.idx_theta)),'interpreter','Latex');
    legend([h1 h3 h5 h6 h7 h8],...
        {'physical limit','\pi line','fen \alpha','fen \theta','lin \alpha','lin \theta'},...
        'location', 'NorthEast');
    
    axis([tini tend -4.4 4.4]);
    grid on;
    
end