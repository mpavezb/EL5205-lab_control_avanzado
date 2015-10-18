function [ ] = plot_error( ELD, ELD2, title_plot )
%PLOT_ERROR Summary of this function goes here
%   Detailed explanation goes here
    figure; hold on;
    subplot(221);plot(ELD(:,1), ELD(:,2) - ELD2(:,2),'-r','displayname','$\alpha$'); xlabel('Tiempo [s]'); ylabel('Angulo [rad]');hlegend1 = legend(gca, 'show', 'location', 'best'); set(hlegend1,'Interpreter','latex');
    subplot(223);plot(ELD(:,1), ELD(:,3) - ELD2(:,3),'-b','displayname','$\theta$'); xlabel('Tiempo [s]'); ylabel('Angulo [rad]');hlegend1 = legend(gca, 'show', 'location', 'best'); set(hlegend1,'Interpreter','latex');
    subplot(222);plot(ELD(:,1), ELD(:,4) - ELD2(:,4),'-r','displayname','$\dot{\alpha}$'); xlabel('Tiempo [s]'); ylabel('Vel. Angular [rad/s]');hlegend1 = legend(gca, 'show', 'location', 'best'); set(hlegend1,'Interpreter','latex');
    subplot(224);plot(ELD(:,1), ELD(:,5) - ELD2(:,5),'-b','displayname','$\dot{\theta}$'); xlabel('Tiempo [s]'); ylabel('Vel. Angular [rad/s]');hlegend1 = legend(gca, 'show', 'location', 'best'); set(hlegend1,'Interpreter','latex');
    suptitle(title_plot);
end

