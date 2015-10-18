function [ ] = plot_lineal_feno( EF, ELD, alpha, x_0 )
%PLOT_LINEAL_FENO Summary of this function goes here
%   Detailed explanation goes here
    figure;
    subplot(211);hold on;
    plot(EF(:,1), EF(:,2),'-b','displayname','Observado \alpha');
    plot(EF(:,1), EF(:,3),'-r','displayname','Simulado \theta');
    plot(alpha(:,1), alpha(:,2),'--c','displayname','Simulado \alpha');
    xlabel('Tiempo [s]'); ylabel('Angulo [rad]');
    title({'Simulacion Modelo Fenomenologico',sprintf('$$ X_0 = [\\alpha = %0.4f, \\theta = %0.4f, \\dot{\\alpha} = %0.4f, \\dot{\\theta} = %0.4f]$$', x_0)},'interpreter','latex');
    legend(gca, 'show', 'location', 'best');
    subplot(212);hold on;
    plot(ELD(:,1), ELD(:,2),'-b','displayname','\alpha');
    plot(ELD(:,1), ELD(:,3),'-r','displayname','\theta');
    xlabel('Tiempo [s]'); ylabel('Angulo [rad]');
    title({'Simulacion Modelo Lineal Discreto',sprintf('$$ X_0 = [\\alpha = %0.4f, \\theta = %0.4f, \\dot{\\alpha} = %0.4f, \\dot{\\theta} = %0.4f]$$', x_0)},'interpreter','latex');
    legend(gca, 'show', 'location', 'best');
end

