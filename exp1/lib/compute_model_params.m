function [c1, c2, beta, c1_std, c2_std, beta_std] = compute_model_params(h1_,h2_,h3_,K,Ts,nds_c12,nds_b)

    % Actividad 1a: c1, c2 parameters
    % dh = (c1*u + c2)*x

    u1 = 100;
    u2 = 50;

    % downsampling
    Ts_c12 = Ts*nds_c12;
    h1_ = downsample(h1_,nds_c12); %t1_ = downsample(t1_,nds_c12);
    h2_ = downsample(h2_,nds_c12); %t2_ = downsample(t2_,nds_c12);

    % adjust data
    dh1_ = diff(h1_);
    dh2_ = diff(h2_);
    h1_  = h1_(1:end-1); %t1_  = t1_(2:end);
    h2_  = h2_(1:end-1); %t2_  = t2_(2:end); 

    % multiple linear regression
    [b1, ~, r1] = regress(dh1_, Ts_c12./(K.*h1_.^2));
    [b2, ~, r2] = regress(dh2_, Ts_c12./(K.*h2_.^2));

    % compute c1, c2, errors
    % b = (c1*u + c2) => [c1;c2] = [b1;b2]*A^-1
    Ainv = [u1 1; u2 1]^-1;
    c  = Ainv*[b1 ; b2];
    c1 = c(1);
    c2 = c(2);

    a11 = Ainv(1,1); a12 = Ainv(1,2);
    a21 = Ainv(2,1); a22 = Ainv(2,2);
    b1_stdev = std(r1);
    b2_stdev = std(r2);
    b12_cov  = 0; % <-- covarianza(b1, b2)
    
    c1_std = sqrt(a11*a11*b1_stdev*b1_stdev + a12*a12*b2_stdev*b2_stdev + 2*a11*a12*b12_cov);
    c2_std = sqrt(a21*a21*b1_stdev*b1_stdev + a22*a22*b2_stdev*b2_stdev + 2*a21*a22*b12_cov);

    clear c a11 a12 a21 a22 b1_stdev b2_stdev b12_cov Ainv b1 b2 r1 r2
    clear llenado_f100 llenado_f50

    % Actividad 1b: beta parameter
    % dh = beta*x

    % downsampling
    Ts_b = Ts*nds_b;
    h3_ = downsample(h3_,nds_b); %t3_ = downsample(t3_,nds_b);

    % adjust data
    dh3_ = diff(h3_);
    h3_  = h3_(1:end-1); %t3_  = t3_(2:end);

    % multiple linear regression
    [b3, ~, r3] = regress(dh3_, -Ts_b./(K.*h3_.^(1.5)));
    beta = b3;
    beta_std = std(r3);

    clear b3 r3
    clear vaciado_v45
end