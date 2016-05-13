
clear;
clc;
close all;

mat56 = load('mat/matlab_mr_v56.mat');
mat57 = load('mat/matlab_mr_v57.mat');
mat58 = load('mat/matlab_mr_v58.mat');
mat59 = load('mat/matlab_mr_v59.mat');
mat60 = load('mat/matlab_mr_v60.mat');
mat61 = load('mat/matlab_mr_v61.mat');
mat62 = load('mat/matlab_mr_v62.mat');
mat63 = load('mat/matlab_mr_v63.mat');
mat64 = load('mat/matlab_mr_v64.mat');
mat65 = load('mat/matlab_mr_v65.mat');
mat66 = load('mat/matlab_mr_v66.mat');
mat67 = load('mat/matlab_mr_v67.mat');
mat68 = load('mat/matlab_mr_v68.mat');
mat69 = load('mat/matlab_mr_v69.mat');
mat70 = load('mat/matlab_mr_v70.mat');
mat71 = load('mat/matlab_mr_v71.mat');
mat72 = load('mat/matlab_mr_v72.mat');

figure;
    hold on;
    plot([0 100], [0 0],'-.k');
    plot([0 100], [3 3],'-.r','linewidth',2);
    plot(mat66.rV(:,1), mat66.rV(:,3),'k--');
%     plot(mat67.rV(:,1), mat67.rV(:,3));
    plot(mat68.rV(:,1), mat68.rV(:,3),'r--','linewidth',2);
    plot(mat69.rV(:,1), mat69.rV(:,3),'r-' ,'linewidth',2);
    plot(mat70.rV(:,1), mat70.rV(:,3),'k-');
     %plot(mat71.rV(:,1), mat71.rV(:,3),'r--');
     %plot(mat72.rV(:,1), mat72.rV(:,3),'k-');

    legend('r_V = 0 [deg]','r_V = 3 [deg]',...
        '#66',...
        '#68',...
        '#69',...
        '#70',...
        'Location','SouthEast');
    %     '#71',...
    %     '#72',...

    title('Salida del subsistema MR con MRAC. $\#66,\#68-\#70$','interpreter','Latex','fontsize',14);
    xlabel('tiempo [s]','interpreter','Latex','fontsize',12);
    ylabel('$y_p$ [deg] ','interpreter','Latex','fontsize',12);
    axis([0 30 -45 5])
    grid on;


figure;
    hold on;
    plot([0 100], [140 140],'-.k');
    plot(mat66.rH(:,1), mat66.rH(:,3),'k--');
    plot(mat68.rH(:,1), mat68.rH(:,3),'r--','linewidth',2);
    plot(mat69.rH(:,1), mat69.rH(:,3),'r-' ,'linewidth',2);
    plot(mat70.rH(:,1), mat70.rH(:,3),'k-');

    legend('r_H = 140 [deg]',...
        '#66',...
        '#68',...
        '#69',...
        '#70',...
        'Location','SouthEast');

    title('Salida del subsistema TR con MRAC. $\#66,\#68-\#70$','interpreter','Latex','fontsize',14);
    xlabel('tiempo [s]','interpreter','Latex','fontsize',12);
    ylabel('$y_p$ [deg] ','interpreter','Latex','fontsize',12);
    axis([0 30 100 180])
    grid on;

figure;
    hold on;
    plot([0 100], [-15 -15],'-.k');
    plot(mat71.rV(:,1), mat71.rV(:,3),'r--');
    plot(mat72.rV(:,1), mat72.rV(:,3),'k-');

    legend('r_V = -15 [deg]',...
        '#71',...
        '#72',...        
        'Location','SouthEast');

    title('Salida del subsistema MR con MRAC. $\#71-\#72$','interpreter','Latex','fontsize',14);
    xlabel('tiempo [s]','interpreter','Latex','fontsize',12);
    ylabel('$y_p$ [deg] ','interpreter','Latex','fontsize',12);
    axis([0 30 -45 5])
    grid on;
