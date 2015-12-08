clc;
clear;
close all;

for ntest = 1:40
    load(sprintf('mat/matlab_mr_v%d.mat', ntest));

    t       = rH(:,1);
    href    = rH(:,2);
    h       = rH(:,3);
    vref    = rV(:,2);
    v       = rV(:,3);
    uv      = uV(:,2);
    uh      = uH(:,2);

    f1 = figure;
    subplot(211); hold on;
    plot(t,v,'-r','displayname','�ngulo vertical');
    plot(t,vref,'-b','displayname','Referencia');
    grid; xlabel('Tiempo [s]'); ylabel('�ngulo [deg]');
    xlim([min(t) max(t)]);
    legend(gca, 'show');
    subplot(212); hold on;
    plot(t,uv,'-r','displayname','Entrada de  vertical');
    grid; xlabel('Tiempo [s]'); ylabel('Tensi�n [V]');
    legend(gca, 'show');

    f2 = figure;
    subplot(211); hold on;
    plot(t,h,'-r','displayname','�ngulo Horizontal');
    plot(t,href,'-b','displayname','Referencia');
    grid; xlabel('Tiempo [s]'); ylabel('�ngulo [deg]');
    xlim([min(t) max(t)]);
    legend(gca, 'show');
    subplot(212); hold on;
    plot(t,uh,'-r','displayname','Entrada de control horizontal');
    grid; xlabel('Tiempo [s]'); ylabel('Tensi�n [V]');
    legend(gca, 'show');
    ylim([-5 5]); xlim([min(t) max(t)]);

    print(f1,sprintf('img/PI/test_%d_horz', ntest),'-deps');
    print(f2,sprintf('img/PID/test_%d_vert', ntest),'-deps');
    pause(1);
    close all;
end