  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 4;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Planilla_3DOF_Crane_P)
    ;%
      section.nData     = 135;
      section.data(135)  = dumData; %prealloc
      
	  ;% Planilla_3DOF_Crane_P.Constant3_Value
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Planilla_3DOF_Crane_P.Constant1_Value
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Planilla_3DOF_Crane_P.Constant6_Value
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Planilla_3DOF_Crane_P.Constant4_Value
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Planilla_3DOF_Crane_P.Constant_Value
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Planilla_3DOF_Crane_P.Constant8_Value
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p1
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p2
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p3
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p4
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p5
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p6
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p7
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p8
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p10
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p11
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p12
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 135;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p13
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 136;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p14
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 137;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p15
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 139;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p16
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 200;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p17
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 201;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p1_g
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 203;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p2_d
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 204;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p3_c
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 205;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p4_n
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 206;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p5_m
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 207;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p6_e
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 208;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p7_j
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 209;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p8_m
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 210;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p10_l
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 211;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p11_c
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 212;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p12_m
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 332;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p13_n
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 333;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p14_d
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 334;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p15_b
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 336;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p16_i
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 397;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p17_e
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 398;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_OOStart
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 400;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_OOEnter
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 401;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_OOTerminate
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 402;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_OOExit
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 403;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_AIHigh
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 404;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_AILow
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 405;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_AOHigh
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 406;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_AOLow
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 407;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_AOInitial
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 408;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_AOFinal
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 409;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_AOWatchdog
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 410;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_EIFrequency
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 411;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_POFrequency
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 412;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_POLeading
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 413;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_POTrailing
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 414;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_POInitial
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 415;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_POFinal
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 416;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_POWatchdog
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 417;
	
	  ;% Planilla_3DOF_Crane_P.TowerSetpointConstant_Value
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 418;
	
	  ;% Planilla_3DOF_Crane_P.SliderGain_Gain
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 419;
	
	  ;% Planilla_3DOF_Crane_P.Constant5_Value
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 420;
	
	  ;% Planilla_3DOF_Crane_P.Constant_Value_l
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 421;
	
	  ;% Planilla_3DOF_Crane_P.Constant_Value_a
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 422;
	
	  ;% Planilla_3DOF_Crane_P.TrolleySetpointConstant_Value
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 423;
	
	  ;% Planilla_3DOF_Crane_P.SliderGain_Gain_e
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 424;
	
	  ;% Planilla_3DOF_Crane_P.Constant2_Value
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 425;
	
	  ;% Planilla_3DOF_Crane_P.Constant_Value_e
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 426;
	
	  ;% Planilla_3DOF_Crane_P.Constant_Value_g
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 427;
	
	  ;% Planilla_3DOF_Crane_P.PayloadSetpointConstant_Value
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 428;
	
	  ;% Planilla_3DOF_Crane_P.Constant7_Value
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 429;
	
	  ;% Planilla_3DOF_Crane_P.EncoderCalibration_Gain
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 430;
	
	  ;% Planilla_3DOF_Crane_P.Constant_Value_j
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 435;
	
	  ;% Planilla_3DOF_Crane_P.AMPAQCurrentLimitA_UpperSat
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 436;
	
	  ;% Planilla_3DOF_Crane_P.AMPAQCurrentLimitA_LowerSat
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 437;
	
	  ;% Planilla_3DOF_Crane_P.Gain1_Gain
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 438;
	
	  ;% Planilla_3DOF_Crane_P.AmpstoVolts_Gain
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 439;
	
	  ;% Planilla_3DOF_Crane_P.DACLimitV_UpperSat
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 440;
	
	  ;% Planilla_3DOF_Crane_P.DACLimitV_LowerSat
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 441;
	
	  ;% Planilla_3DOF_Crane_P.EnableAmp_Value
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 442;
	
	  ;% Planilla_3DOF_Crane_P.CommandedCurrentA_Gain
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 446;
	
	  ;% Planilla_3DOF_Crane_P.CurrentSensitivityAV_Gain
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 447;
	
	  ;% Planilla_3DOF_Crane_P.Gain_Gain
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 448;
	
	  ;% Planilla_3DOF_Crane_P.Gain_Gain_p
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 449;
	
	  ;% Planilla_3DOF_Crane_P.Gain_Gain_c
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 450;
	
	  ;% Planilla_3DOF_Crane_P.x_ref_Value
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 451;
	
	  ;% Planilla_3DOF_Crane_P.theta_ref_Value
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 452;
	
	  ;% Planilla_3DOF_Crane_P.alpha_ref_Value
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 453;
	
	  ;% Planilla_3DOF_Crane_P.gamma_ref_Value
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 454;
	
	  ;% Planilla_3DOF_Crane_P.md_zero_Value
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 455;
	
	  ;% Planilla_3DOF_Crane_P.Memory1_X0
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 456;
	
	  ;% Planilla_3DOF_Crane_P.umin_zero_Value
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 457;
	
	  ;% Planilla_3DOF_Crane_P.umax_zero_Value
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 458;
	
	  ;% Planilla_3DOF_Crane_P.ymin_zero_Value
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 459;
	
	  ;% Planilla_3DOF_Crane_P.ymax_zero_Value
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 461;
	
	  ;% Planilla_3DOF_Crane_P.switch_zero_Value
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 463;
	
	  ;% Planilla_3DOF_Crane_P.Memory_X0
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 464;
	
	  ;% Planilla_3DOF_Crane_P.Gain3_Gain
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 468;
	
	  ;% Planilla_3DOF_Crane_P.Gain4_Gain
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 476;
	
	  ;% Planilla_3DOF_Crane_P.ymoffset_Value
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 478;
	
	  ;% Planilla_3DOF_Crane_P.Gain5_Gain
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 480;
	
	  ;% Planilla_3DOF_Crane_P.LastMVs_X0
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 488;
	
	  ;% Planilla_3DOF_Crane_P.ywt_zero_Value
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 489;
	
	  ;% Planilla_3DOF_Crane_P.duwt_zero_Value
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 491;
	
	  ;% Planilla_3DOF_Crane_P.rhoeps_zero_Value
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 492;
	
	  ;% Planilla_3DOF_Crane_P.md_zero_Value_g
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 493;
	
	  ;% Planilla_3DOF_Crane_P.Memory1_X0_k
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 494;
	
	  ;% Planilla_3DOF_Crane_P.umin_zero_Value_j
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 495;
	
	  ;% Planilla_3DOF_Crane_P.umax_zero_Value_n
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 496;
	
	  ;% Planilla_3DOF_Crane_P.ymin_zero_Value_b
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 497;
	
	  ;% Planilla_3DOF_Crane_P.ymax_zero_Value_f
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 499;
	
	  ;% Planilla_3DOF_Crane_P.switch_zero_Value_d
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 501;
	
	  ;% Planilla_3DOF_Crane_P.Memory_X0_a
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 502;
	
	  ;% Planilla_3DOF_Crane_P.TmpRTBAtAdd1Inport1_X0
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 506;
	
	  ;% Planilla_3DOF_Crane_P.TmpRTBAtAdd1Inport2_X0
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 507;
	
	  ;% Planilla_3DOF_Crane_P.TmpRTBAtAdd1Inport3_X0
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 508;
	
	  ;% Planilla_3DOF_Crane_P.Gain5_Gain_h
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 509;
	
	  ;% Planilla_3DOF_Crane_P.LastMVs_X0_o
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 517;
	
	  ;% Planilla_3DOF_Crane_P.ywt_zero_Value_k
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 518;
	
	  ;% Planilla_3DOF_Crane_P.duwt_zero_Value_c
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 520;
	
	  ;% Planilla_3DOF_Crane_P.rhoeps_zero_Value_i
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 521;
	
	  ;% Planilla_3DOF_Crane_P.mv_zero_Value
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 522;
	
	  ;% Planilla_3DOF_Crane_P.mv_inport_Value
	  section.data(120).logicalSrcIdx = 119;
	  section.data(120).dtTransOffset = 523;
	
	  ;% Planilla_3DOF_Crane_P.u_select_Threshold
	  section.data(121).logicalSrcIdx = 120;
	  section.data(121).dtTransOffset = 524;
	
	  ;% Planilla_3DOF_Crane_P.mv_bias_Bias
	  section.data(122).logicalSrcIdx = 121;
	  section.data(122).dtTransOffset = 525;
	
	  ;% Planilla_3DOF_Crane_P.Gain_Gain_cz
	  section.data(123).logicalSrcIdx = 122;
	  section.data(123).dtTransOffset = 526;
	
	  ;% Planilla_3DOF_Crane_P.Gain1_Gain_n
	  section.data(124).logicalSrcIdx = 123;
	  section.data(124).dtTransOffset = 542;
	
	  ;% Planilla_3DOF_Crane_P.Gain2_Gain
	  section.data(125).logicalSrcIdx = 124;
	  section.data(125).dtTransOffset = 546;
	
	  ;% Planilla_3DOF_Crane_P.Gain3_Gain_h
	  section.data(126).logicalSrcIdx = 125;
	  section.data(126).dtTransOffset = 550;
	
	  ;% Planilla_3DOF_Crane_P.Gain4_Gain_a
	  section.data(127).logicalSrcIdx = 126;
	  section.data(127).dtTransOffset = 558;
	
	  ;% Planilla_3DOF_Crane_P.ymoffset_Value_f
	  section.data(128).logicalSrcIdx = 127;
	  section.data(128).dtTransOffset = 560;
	
	  ;% Planilla_3DOF_Crane_P.mv_zero_Value_n
	  section.data(129).logicalSrcIdx = 128;
	  section.data(129).dtTransOffset = 562;
	
	  ;% Planilla_3DOF_Crane_P.mv_inport_Value_p
	  section.data(130).logicalSrcIdx = 129;
	  section.data(130).dtTransOffset = 563;
	
	  ;% Planilla_3DOF_Crane_P.u_select_Threshold_j
	  section.data(131).logicalSrcIdx = 130;
	  section.data(131).dtTransOffset = 564;
	
	  ;% Planilla_3DOF_Crane_P.mv_bias_Bias_o
	  section.data(132).logicalSrcIdx = 131;
	  section.data(132).dtTransOffset = 565;
	
	  ;% Planilla_3DOF_Crane_P.Gain_Gain_b
	  section.data(133).logicalSrcIdx = 132;
	  section.data(133).dtTransOffset = 566;
	
	  ;% Planilla_3DOF_Crane_P.Gain1_Gain_c
	  section.data(134).logicalSrcIdx = 133;
	  section.data(134).dtTransOffset = 582;
	
	  ;% Planilla_3DOF_Crane_P.Gain2_Gain_j
	  section.data(135).logicalSrcIdx = 134;
	  section.data(135).dtTransOffset = 586;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% Planilla_3DOF_Crane_P.HILInitialize_CKChannels
	  section.data(1).logicalSrcIdx = 135;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_DOWatchdog
	  section.data(2).logicalSrcIdx = 136;
	  section.data(2).dtTransOffset = 17;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_EIInitial
	  section.data(3).logicalSrcIdx = 137;
	  section.data(3).dtTransOffset = 18;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_POModes
	  section.data(4).logicalSrcIdx = 138;
	  section.data(4).dtTransOffset = 19;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_POConfiguration
	  section.data(5).logicalSrcIdx = 139;
	  section.data(5).dtTransOffset = 20;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_POAlignment
	  section.data(6).logicalSrcIdx = 140;
	  section.data(6).dtTransOffset = 21;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_POPolarity
	  section.data(7).logicalSrcIdx = 141;
	  section.data(7).dtTransOffset = 22;
	
	  ;% Planilla_3DOF_Crane_P.HILReadTimebase_Clock
	  section.data(8).logicalSrcIdx = 142;
	  section.data(8).dtTransOffset = 23;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 11;
      section.data(11)  = dumData; %prealloc
      
	  ;% Planilla_3DOF_Crane_P.HILInitialize_AIChannels
	  section.data(1).logicalSrcIdx = 143;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_AOChannels
	  section.data(2).logicalSrcIdx = 144;
	  section.data(2).dtTransOffset = 8;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_EIChannels
	  section.data(3).logicalSrcIdx = 145;
	  section.data(3).dtTransOffset = 16;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_EIQuadrature
	  section.data(4).logicalSrcIdx = 146;
	  section.data(4).dtTransOffset = 24;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_POChannels
	  section.data(5).logicalSrcIdx = 147;
	  section.data(5).dtTransOffset = 25;
	
	  ;% Planilla_3DOF_Crane_P.HILReadTimebase_SamplesInBuffer
	  section.data(6).logicalSrcIdx = 148;
	  section.data(6).dtTransOffset = 33;
	
	  ;% Planilla_3DOF_Crane_P.HILReadTimebase_AnalogChannels
	  section.data(7).logicalSrcIdx = 149;
	  section.data(7).dtTransOffset = 34;
	
	  ;% Planilla_3DOF_Crane_P.HILReadTimebase_EncoderChannels
	  section.data(8).logicalSrcIdx = 150;
	  section.data(8).dtTransOffset = 37;
	
	  ;% Planilla_3DOF_Crane_P.HILReadTimebase_DigitalChannels
	  section.data(9).logicalSrcIdx = 151;
	  section.data(9).dtTransOffset = 42;
	
	  ;% Planilla_3DOF_Crane_P.HILWrite_AnalogChannels
	  section.data(10).logicalSrcIdx = 152;
	  section.data(10).dtTransOffset = 47;
	
	  ;% Planilla_3DOF_Crane_P.HILWrite_DigitalChannels
	  section.data(11).logicalSrcIdx = 153;
	  section.data(11).dtTransOffset = 50;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 41;
      section.data(41)  = dumData; %prealloc
      
	  ;% Planilla_3DOF_Crane_P.SFunction_p9
	  section.data(1).logicalSrcIdx = 154;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Planilla_3DOF_Crane_P.SFunction_p9_l
	  section.data(2).logicalSrcIdx = 155;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_Active
	  section.data(3).logicalSrcIdx = 156;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_CKPStart
	  section.data(4).logicalSrcIdx = 157;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_CKPEnter
	  section.data(5).logicalSrcIdx = 158;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_CKStart
	  section.data(6).logicalSrcIdx = 159;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_CKEnter
	  section.data(7).logicalSrcIdx = 160;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_AIPStart
	  section.data(8).logicalSrcIdx = 161;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_AIPEnter
	  section.data(9).logicalSrcIdx = 162;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_AOPStart
	  section.data(10).logicalSrcIdx = 163;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_AOPEnter
	  section.data(11).logicalSrcIdx = 164;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_AOStart
	  section.data(12).logicalSrcIdx = 165;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_AOEnter
	  section.data(13).logicalSrcIdx = 166;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_AOTerminate
	  section.data(14).logicalSrcIdx = 167;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_AOExit
	  section.data(15).logicalSrcIdx = 168;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_AOReset
	  section.data(16).logicalSrcIdx = 169;
	  section.data(16).dtTransOffset = 15;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_DOPStart
	  section.data(17).logicalSrcIdx = 170;
	  section.data(17).dtTransOffset = 16;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_DOPEnter
	  section.data(18).logicalSrcIdx = 171;
	  section.data(18).dtTransOffset = 17;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_DOStart
	  section.data(19).logicalSrcIdx = 172;
	  section.data(19).dtTransOffset = 18;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_DOEnter
	  section.data(20).logicalSrcIdx = 173;
	  section.data(20).dtTransOffset = 19;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_DOTerminate
	  section.data(21).logicalSrcIdx = 174;
	  section.data(21).dtTransOffset = 20;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_DOExit
	  section.data(22).logicalSrcIdx = 175;
	  section.data(22).dtTransOffset = 21;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_DOReset
	  section.data(23).logicalSrcIdx = 176;
	  section.data(23).dtTransOffset = 22;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_EIPStart
	  section.data(24).logicalSrcIdx = 177;
	  section.data(24).dtTransOffset = 23;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_EIPEnter
	  section.data(25).logicalSrcIdx = 178;
	  section.data(25).dtTransOffset = 24;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_EIStart
	  section.data(26).logicalSrcIdx = 179;
	  section.data(26).dtTransOffset = 25;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_EIEnter
	  section.data(27).logicalSrcIdx = 180;
	  section.data(27).dtTransOffset = 26;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_POPStart
	  section.data(28).logicalSrcIdx = 181;
	  section.data(28).dtTransOffset = 27;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_POPEnter
	  section.data(29).logicalSrcIdx = 182;
	  section.data(29).dtTransOffset = 28;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_POStart
	  section.data(30).logicalSrcIdx = 183;
	  section.data(30).dtTransOffset = 29;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_POEnter
	  section.data(31).logicalSrcIdx = 184;
	  section.data(31).dtTransOffset = 30;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_POTerminate
	  section.data(32).logicalSrcIdx = 185;
	  section.data(32).dtTransOffset = 31;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_POExit
	  section.data(33).logicalSrcIdx = 186;
	  section.data(33).dtTransOffset = 32;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_POReset
	  section.data(34).logicalSrcIdx = 187;
	  section.data(34).dtTransOffset = 33;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_OOReset
	  section.data(35).logicalSrcIdx = 188;
	  section.data(35).dtTransOffset = 34;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_DOInitial
	  section.data(36).logicalSrcIdx = 189;
	  section.data(36).dtTransOffset = 35;
	
	  ;% Planilla_3DOF_Crane_P.HILInitialize_DOFinal
	  section.data(37).logicalSrcIdx = 190;
	  section.data(37).dtTransOffset = 36;
	
	  ;% Planilla_3DOF_Crane_P.HILReadTimebase_Active
	  section.data(38).logicalSrcIdx = 191;
	  section.data(38).dtTransOffset = 37;
	
	  ;% Planilla_3DOF_Crane_P.HILWrite_Active
	  section.data(39).logicalSrcIdx = 192;
	  section.data(39).dtTransOffset = 38;
	
	  ;% Planilla_3DOF_Crane_P.Memory_X0_d
	  section.data(40).logicalSrcIdx = 193;
	  section.data(40).dtTransOffset = 39;
	
	  ;% Planilla_3DOF_Crane_P.Memory_X0_g
	  section.data(41).logicalSrcIdx = 194;
	  section.data(41).dtTransOffset = 200;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Planilla_3DOF_Crane_B)
    ;%
      section.nData     = 37;
      section.data(37)  = dumData; %prealloc
      
	  ;% Planilla_3DOF_Crane_B.EncoderCalibration
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Planilla_3DOF_Crane_B.CommandedCurrentA
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 5;
	
	  ;% Planilla_3DOF_Crane_B.CurrentSensitivityAV
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 8;
	
	  ;% Planilla_3DOF_Crane_B.Gain
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 11;
	
	  ;% Planilla_3DOF_Crane_B.Gain_c
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 12;
	
	  ;% Planilla_3DOF_Crane_B.Gain_f
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 13;
	
	  ;% Planilla_3DOF_Crane_B.x_ref
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 14;
	
	  ;% Planilla_3DOF_Crane_B.theta_ref
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 15;
	
	  ;% Planilla_3DOF_Crane_B.alpha_ref
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 16;
	
	  ;% Planilla_3DOF_Crane_B.gamma_ref
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 17;
	
	  ;% Planilla_3DOF_Crane_B.TmpRTBAtref_and_mdInport1
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 18;
	
	  ;% Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport1
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 20;
	
	  ;% Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport2
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 22;
	
	  ;% Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport3
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 24;
	
	  ;% Planilla_3DOF_Crane_B.TmpRTBAtGain5Inport1
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 26;
	
	  ;% Planilla_3DOF_Crane_B.mv_bias
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 28;
	
	  ;% Planilla_3DOF_Crane_B.Add
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 29;
	
	  ;% Planilla_3DOF_Crane_B.Gain3
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 33;
	
	  ;% Planilla_3DOF_Crane_B.Gain4
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 35;
	
	  ;% Planilla_3DOF_Crane_B.mv_bias_n
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 37;
	
	  ;% Planilla_3DOF_Crane_B.Add_b
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 38;
	
	  ;% Planilla_3DOF_Crane_B.rseq
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 42;
	
	  ;% Planilla_3DOF_Crane_B.vseq
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 162;
	
	  ;% Planilla_3DOF_Crane_B.v
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 223;
	
	  ;% Planilla_3DOF_Crane_B.next_t
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 224;
	
	  ;% Planilla_3DOF_Crane_B.u
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 225;
	
	  ;% Planilla_3DOF_Crane_B.cost
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 226;
	
	  ;% Planilla_3DOF_Crane_B.useq
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 227;
	
	  ;% Planilla_3DOF_Crane_B.status
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 287;
	
	  ;% Planilla_3DOF_Crane_B.rseq_d
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 288;
	
	  ;% Planilla_3DOF_Crane_B.vseq_f
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 408;
	
	  ;% Planilla_3DOF_Crane_B.v_g
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 469;
	
	  ;% Planilla_3DOF_Crane_B.next_t_p
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 470;
	
	  ;% Planilla_3DOF_Crane_B.u_l
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 471;
	
	  ;% Planilla_3DOF_Crane_B.cost_l
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 472;
	
	  ;% Planilla_3DOF_Crane_B.useq_n
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 473;
	
	  ;% Planilla_3DOF_Crane_B.status_j
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 533;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% Planilla_3DOF_Crane_B.Compare
	  section.data(1).logicalSrcIdx = 37;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Planilla_3DOF_Crane_B.Compare_g
	  section.data(2).logicalSrcIdx = 38;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Planilla_3DOF_Crane_B.Compare_j
	  section.data(3).logicalSrcIdx = 39;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Planilla_3DOF_Crane_B.Compare_f
	  section.data(4).logicalSrcIdx = 40;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Planilla_3DOF_Crane_B.Compare_p
	  section.data(5).logicalSrcIdx = 41;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Planilla_3DOF_Crane_B.iAout
	  section.data(6).logicalSrcIdx = 42;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Planilla_3DOF_Crane_B.iAout_d
	  section.data(7).logicalSrcIdx = 43;
	  section.data(7).dtTransOffset = 166;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 9;
    sectIdxOffset = 2;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Planilla_3DOF_Crane_DWork)
    ;%
      section.nData     = 17;
      section.data(17)  = dumData; %prealloc
      
	  ;% Planilla_3DOF_Crane_DWork.LastMVs_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Planilla_3DOF_Crane_DWork.LastMVs_DSTATE_g
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Planilla_3DOF_Crane_DWork.HILInitialize_AIMinimums
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Planilla_3DOF_Crane_DWork.HILInitialize_AIMaximums
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 10;
	
	  ;% Planilla_3DOF_Crane_DWork.HILInitialize_AOMinimums
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 18;
	
	  ;% Planilla_3DOF_Crane_DWork.HILInitialize_AOMaximums
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 26;
	
	  ;% Planilla_3DOF_Crane_DWork.HILInitialize_AOVoltages
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 34;
	
	  ;% Planilla_3DOF_Crane_DWork.HILInitialize_FilterFrequency
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 42;
	
	  ;% Planilla_3DOF_Crane_DWork.HILInitialize_POSortedFreqs
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 50;
	
	  ;% Planilla_3DOF_Crane_DWork.HILInitialize_POValues
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 58;
	
	  ;% Planilla_3DOF_Crane_DWork.Memory1_PreviousInput
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 66;
	
	  ;% Planilla_3DOF_Crane_DWork.Memory_PreviousInput
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 67;
	
	  ;% Planilla_3DOF_Crane_DWork.Memory1_PreviousInput_h
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 71;
	
	  ;% Planilla_3DOF_Crane_DWork.Memory_PreviousInput_a
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 72;
	
	  ;% Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport1_Buffer0
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 76;
	
	  ;% Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport2_Buffer0
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 78;
	
	  ;% Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport3_Buffer0
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 80;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planilla_3DOF_Crane_DWork.HILInitialize_Card
	  section.data(1).logicalSrcIdx = 17;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planilla_3DOF_Crane_DWork.HILReadTimebase_Task
	  section.data(1).logicalSrcIdx = 18;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% Planilla_3DOF_Crane_DWork.HILWrite_PWORK
	  section.data(1).logicalSrcIdx = 19;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Planilla_3DOF_Crane_DWork.Cartm_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 20;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Planilla_3DOF_Crane_DWork.ImA_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 21;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Planilla_3DOF_Crane_DWork.LimitSwitches_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 22;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Planilla_3DOF_Crane_DWork.Payloadm_PWORK.LoggedData
	  section.data(5).logicalSrcIdx = 23;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Planilla_3DOF_Crane_DWork.Towerdeg_PWORK.LoggedData
	  section.data(6).logicalSrcIdx = 24;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Planilla_3DOF_Crane_DWork.alphadeg_PWORK.LoggedData
	  section.data(7).logicalSrcIdx = 25;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Planilla_3DOF_Crane_DWork.gammadeg_PWORK.LoggedData
	  section.data(8).logicalSrcIdx = 26;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Planilla_3DOF_Crane_DWork.u_PWORK.LoggedData
	  section.data(9).logicalSrcIdx = 27;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Planilla_3DOF_Crane_DWork.u1_PWORK.LoggedData
	  section.data(10).logicalSrcIdx = 28;
	  section.data(10).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 11;
      section.data(11)  = dumData; %prealloc
      
	  ;% Planilla_3DOF_Crane_DWork.HILInitialize_ClockModes
	  section.data(1).logicalSrcIdx = 29;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Planilla_3DOF_Crane_DWork.HILInitialize_QuadratureModes
	  section.data(2).logicalSrcIdx = 30;
	  section.data(2).dtTransOffset = 17;
	
	  ;% Planilla_3DOF_Crane_DWork.HILInitialize_InitialEICounts
	  section.data(3).logicalSrcIdx = 31;
	  section.data(3).dtTransOffset = 25;
	
	  ;% Planilla_3DOF_Crane_DWork.HILInitialize_POModeValues
	  section.data(4).logicalSrcIdx = 32;
	  section.data(4).dtTransOffset = 33;
	
	  ;% Planilla_3DOF_Crane_DWork.HILInitialize_POAlignValues
	  section.data(5).logicalSrcIdx = 33;
	  section.data(5).dtTransOffset = 41;
	
	  ;% Planilla_3DOF_Crane_DWork.HILInitialize_POPolarityVals
	  section.data(6).logicalSrcIdx = 34;
	  section.data(6).dtTransOffset = 49;
	
	  ;% Planilla_3DOF_Crane_DWork.HILReadTimebase_EncoderBuffer
	  section.data(7).logicalSrcIdx = 35;
	  section.data(7).dtTransOffset = 57;
	
	  ;% Planilla_3DOF_Crane_DWork.sfEvent
	  section.data(8).logicalSrcIdx = 36;
	  section.data(8).dtTransOffset = 62;
	
	  ;% Planilla_3DOF_Crane_DWork.sfEvent_l
	  section.data(9).logicalSrcIdx = 37;
	  section.data(9).dtTransOffset = 63;
	
	  ;% Planilla_3DOF_Crane_DWork.sfEvent_b
	  section.data(10).logicalSrcIdx = 38;
	  section.data(10).dtTransOffset = 64;
	
	  ;% Planilla_3DOF_Crane_DWork.sfEvent_i
	  section.data(11).logicalSrcIdx = 39;
	  section.data(11).dtTransOffset = 65;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planilla_3DOF_Crane_DWork.HILInitialize_POSortedChans
	  section.data(1).logicalSrcIdx = 40;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% Planilla_3DOF_Crane_DWork.is_active_c4_mpclib
	  section.data(1).logicalSrcIdx = 41;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Planilla_3DOF_Crane_DWork.is_active_c3_cg3Dj4dh4X0KkDDeKm
	  section.data(2).logicalSrcIdx = 42;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Planilla_3DOF_Crane_DWork.is_active_c4_mpclib_j
	  section.data(3).logicalSrcIdx = 43;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Planilla_3DOF_Crane_DWork.is_active_c3_F4T0CTRXYduoxKk8Jd
	  section.data(4).logicalSrcIdx = 44;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% Planilla_3DOF_Crane_DWork.Memory_PreviousInput_j
	  section.data(1).logicalSrcIdx = 45;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Planilla_3DOF_Crane_DWork.Memory_PreviousInput_c
	  section.data(2).logicalSrcIdx = 46;
	  section.data(2).dtTransOffset = 161;
	
	  ;% Planilla_3DOF_Crane_DWork.isStable
	  section.data(3).logicalSrcIdx = 47;
	  section.data(3).dtTransOffset = 402;
	
	  ;% Planilla_3DOF_Crane_DWork.doneDoubleBufferReInit
	  section.data(4).logicalSrcIdx = 48;
	  section.data(4).dtTransOffset = 403;
	
	  ;% Planilla_3DOF_Crane_DWork.isStable_j
	  section.data(5).logicalSrcIdx = 49;
	  section.data(5).dtTransOffset = 404;
	
	  ;% Planilla_3DOF_Crane_DWork.doneDoubleBufferReInit_k
	  section.data(6).logicalSrcIdx = 50;
	  section.data(6).dtTransOffset = 405;
	
	  ;% Planilla_3DOF_Crane_DWork.isStable_k
	  section.data(7).logicalSrcIdx = 51;
	  section.data(7).dtTransOffset = 406;
	
	  ;% Planilla_3DOF_Crane_DWork.doneDoubleBufferReInit_o
	  section.data(8).logicalSrcIdx = 52;
	  section.data(8).dtTransOffset = 407;
	
	  ;% Planilla_3DOF_Crane_DWork.isStable_o
	  section.data(9).logicalSrcIdx = 53;
	  section.data(9).dtTransOffset = 408;
	
	  ;% Planilla_3DOF_Crane_DWork.doneDoubleBufferReInit_c
	  section.data(10).logicalSrcIdx = 54;
	  section.data(10).dtTransOffset = 409;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% Planilla_3DOF_Crane_DWork.HILReadTimebase_DigitalBuffer
	  section.data(1).logicalSrcIdx = 55;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Planilla_3DOF_Crane_DWork.HILWrite_DigitalBuffer
	  section.data(2).logicalSrcIdx = 56;
	  section.data(2).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 2467490335;
  targMap.checksum1 = 1849082148;
  targMap.checksum2 = 4211760466;
  targMap.checksum3 = 2657023067;

