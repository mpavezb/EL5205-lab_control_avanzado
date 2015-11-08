  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 19;
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
    ;% Auto data (q_3d_crane_cal_P)
    ;%
      section.nData     = 116;
      section.data(116)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_P.Constant_Value
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_P.Constant_Value_b
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_3d_crane_cal_P.Constant_Value_m
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_3d_crane_cal_P.Constant_Value_h
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_3d_crane_cal_P.Constant_Value_k
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% q_3d_crane_cal_P.Constant_Value_a
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% q_3d_crane_cal_P.ConstantFS_Value
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% q_3d_crane_cal_P.ConstantPS_Value
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 10;
	
	  ;% q_3d_crane_cal_P.GotoHome_Value
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 14;
	
	  ;% q_3d_crane_cal_P.Amplitudems_Gain
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 15;
	
	  ;% q_3d_crane_cal_P.Amplitudedegs_Gain
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 16;
	
	  ;% q_3d_crane_cal_P.GotoHome_Value_n
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 17;
	
	  ;% q_3d_crane_cal_P.Amplitudems_Gain_f
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 18;
	
	  ;% q_3d_crane_cal_P.ConstantFS_Value_o
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 19;
	
	  ;% q_3d_crane_cal_P.ConstantPS_Value_c
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 23;
	
	  ;% q_3d_crane_cal_P.a_Value
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 27;
	
	  ;% q_3d_crane_cal_P.SliderGain_Gain
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 28;
	
	  ;% q_3d_crane_cal_P.HILInitialize_OOStart
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 29;
	
	  ;% q_3d_crane_cal_P.HILInitialize_OOEnter
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 30;
	
	  ;% q_3d_crane_cal_P.HILInitialize_OOTerminate
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 31;
	
	  ;% q_3d_crane_cal_P.HILInitialize_OOExit
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 32;
	
	  ;% q_3d_crane_cal_P.HILInitialize_AIHigh
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 33;
	
	  ;% q_3d_crane_cal_P.HILInitialize_AILow
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 34;
	
	  ;% q_3d_crane_cal_P.HILInitialize_AOHigh
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 35;
	
	  ;% q_3d_crane_cal_P.HILInitialize_AOLow
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 36;
	
	  ;% q_3d_crane_cal_P.HILInitialize_AOInitial
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 37;
	
	  ;% q_3d_crane_cal_P.HILInitialize_AOFinal
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 38;
	
	  ;% q_3d_crane_cal_P.HILInitialize_AOWatchdog
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 39;
	
	  ;% q_3d_crane_cal_P.HILInitialize_EIFrequency
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 40;
	
	  ;% q_3d_crane_cal_P.HILInitialize_POFrequency
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 41;
	
	  ;% q_3d_crane_cal_P.HILInitialize_POLeading
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 42;
	
	  ;% q_3d_crane_cal_P.HILInitialize_POTrailing
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 43;
	
	  ;% q_3d_crane_cal_P.HILInitialize_POInitial
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 44;
	
	  ;% q_3d_crane_cal_P.HILInitialize_POFinal
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 45;
	
	  ;% q_3d_crane_cal_P.HILInitialize_POWatchdog
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 46;
	
	  ;% q_3d_crane_cal_P.Constant_Value_i
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 47;
	
	  ;% q_3d_crane_cal_P.WeighedState_Value
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 48;
	
	  ;% q_3d_crane_cal_P.EncoderCalibration_Gain
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 49;
	
	  ;% q_3d_crane_cal_P.FullState_Value
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 54;
	
	  ;% q_3d_crane_cal_P.Constant_Value_k4
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 55;
	
	  ;% q_3d_crane_cal_P.GoCW_Gain
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 56;
	
	  ;% q_3d_crane_cal_P.Constant_Value_n
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 57;
	
	  ;% q_3d_crane_cal_P.GoCCW_Gain
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 58;
	
	  ;% q_3d_crane_cal_P.DiscreteTimeIntegrator_gainval
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 59;
	
	  ;% q_3d_crane_cal_P.DiscreteTimeIntegrator_IC
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 60;
	
	  ;% q_3d_crane_cal_P.x0v00_Value
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 61;
	
	  ;% q_3d_crane_cal_P.GotoHomeCW_Value
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 62;
	
	  ;% q_3d_crane_cal_P.SigmoidPath_Hold
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 63;
	
	  ;% q_3d_crane_cal_P.GotoHomeCCW_Value
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 64;
	
	  ;% q_3d_crane_cal_P.SigmoidPath_Hold_a
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 65;
	
	  ;% q_3d_crane_cal_P.Gain1_Gain
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 66;
	
	  ;% q_3d_crane_cal_P.TowerSetpointVector_Gain
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 67;
	
	  ;% q_3d_crane_cal_P.DiscreteTransferFcn_InitialStat
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 71;
	
	  ;% q_3d_crane_cal_P.DiscreteTransferFcn_Numerator
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 72;
	
	  ;% q_3d_crane_cal_P.DiscreteTransferFcn_Denominator
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 74;
	
	  ;% q_3d_crane_cal_P.DiscreteTransferFcn_InitialSt_n
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 76;
	
	  ;% q_3d_crane_cal_P.DiscreteTransferFcn_Numerator_o
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 77;
	
	  ;% q_3d_crane_cal_P.DiscreteTransferFcn_Denominat_a
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 79;
	
	  ;% q_3d_crane_cal_P.TowerControlGain_Gain
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 81;
	
	  ;% q_3d_crane_cal_P.MotorDirection3_Gain
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 85;
	
	  ;% q_3d_crane_cal_P.DiscreteTimeIntegrator_gainva_o
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 86;
	
	  ;% q_3d_crane_cal_P.DiscreteTimeIntegrator_IC_l
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 87;
	
	  ;% q_3d_crane_cal_P.InitialSetpointJib_Value
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 88;
	
	  ;% q_3d_crane_cal_P.SigmoidPath_Hold_b
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 89;
	
	  ;% q_3d_crane_cal_P.Constant_Value_hq
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 90;
	
	  ;% q_3d_crane_cal_P.DiscreteTransferFcn_InitialSt_f
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 91;
	
	  ;% q_3d_crane_cal_P.DiscreteTransferFcn_Numerator_d
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 92;
	
	  ;% q_3d_crane_cal_P.DiscreteTransferFcn_Denominat_b
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 94;
	
	  ;% q_3d_crane_cal_P.DiscreteTransferFcn_InitialSt_o
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 96;
	
	  ;% q_3d_crane_cal_P.DiscreteTransferFcn_Numerator_n
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 97;
	
	  ;% q_3d_crane_cal_P.DiscreteTransferFcn_Denominat_i
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 99;
	
	  ;% q_3d_crane_cal_P.DiscreteTransferFcn_InitialSt_m
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 101;
	
	  ;% q_3d_crane_cal_P.DiscreteTransferFcn_Numerato_ne
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 102;
	
	  ;% q_3d_crane_cal_P.DiscreteTransferFcn_Denominat_n
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 104;
	
	  ;% q_3d_crane_cal_P.DiscreteTransferFcn_InitialSt_a
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 106;
	
	  ;% q_3d_crane_cal_P.DiscreteTransferFcn_Numerator_g
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 107;
	
	  ;% q_3d_crane_cal_P.DiscreteTransferFcn_Denomina_ny
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 109;
	
	  ;% q_3d_crane_cal_P.JibControlGain_Gain
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 111;
	
	  ;% q_3d_crane_cal_P.DiscreteTimeIntegrator_gainva_f
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 115;
	
	  ;% q_3d_crane_cal_P.DiscreteTimeIntegrator_IC_n
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 116;
	
	  ;% q_3d_crane_cal_P.DiscreteTimeIntegrator_UpperSat
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 117;
	
	  ;% q_3d_crane_cal_P.DiscreteTimeIntegrator_LowerSat
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 118;
	
	  ;% q_3d_crane_cal_P.MotorDirection1_Gain
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 119;
	
	  ;% q_3d_crane_cal_P.Constant_Value_j
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 120;
	
	  ;% q_3d_crane_cal_P.DiscreteTimeIntegrator_gainva_i
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 121;
	
	  ;% q_3d_crane_cal_P.DiscreteTimeIntegrator_IC_e
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 122;
	
	  ;% q_3d_crane_cal_P.InitialSetpointTrolley_Value
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 123;
	
	  ;% q_3d_crane_cal_P.SigmoidPath_Hold_m
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 124;
	
	  ;% q_3d_crane_cal_P.PayloadSetpointVector_Gain
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 125;
	
	  ;% q_3d_crane_cal_P.DiscreteTransferFcn_InitialSt_l
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 127;
	
	  ;% q_3d_crane_cal_P.DiscreteTransferFcn_Numerator_p
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 128;
	
	  ;% q_3d_crane_cal_P.DiscreteTransferFcn_Denominat_m
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 130;
	
	  ;% q_3d_crane_cal_P.PayloadProportionalGain_Gain
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 132;
	
	  ;% q_3d_crane_cal_P.DiscreteTimeIntegrator_gainva_a
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 133;
	
	  ;% q_3d_crane_cal_P.DiscreteTimeIntegrator_IC_li
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 134;
	
	  ;% q_3d_crane_cal_P.PayloadVelocityGain_Gain
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 135;
	
	  ;% q_3d_crane_cal_P.MotorDirection2_Gain
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 136;
	
	  ;% q_3d_crane_cal_P.AMPAQCurrentLimitA_UpperSat
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 137;
	
	  ;% q_3d_crane_cal_P.AMPAQCurrentLimitA_LowerSat
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 138;
	
	  ;% q_3d_crane_cal_P.MotorDirection_Gain
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 139;
	
	  ;% q_3d_crane_cal_P.AmpstoVolts_Gain
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 140;
	
	  ;% q_3d_crane_cal_P.DACLimitV_UpperSat
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 141;
	
	  ;% q_3d_crane_cal_P.DACLimitV_LowerSat
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 142;
	
	  ;% q_3d_crane_cal_P.EnableAmp_Value
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 143;
	
	  ;% q_3d_crane_cal_P.Constant_Value_jj
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 147;
	
	  ;% q_3d_crane_cal_P.Constant_Value_m1
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 148;
	
	  ;% q_3d_crane_cal_P.Gain_Gain
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 149;
	
	  ;% q_3d_crane_cal_P.Gain_Gain_b
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 150;
	
	  ;% q_3d_crane_cal_P.Gain_Gain_o
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 151;
	
	  ;% q_3d_crane_cal_P.CommandedCurrent_Gain
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 152;
	
	  ;% q_3d_crane_cal_P.JibIntegralControlGain_Gain
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 153;
	
	  ;% q_3d_crane_cal_P.PayloadIntegralGain_Gain
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 154;
	
	  ;% q_3d_crane_cal_P.GotoRet_Value
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 155;
	
	  ;% q_3d_crane_cal_P.Constant_Value_d
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 156;
	
	  ;% q_3d_crane_cal_P.GotoRet_Value_n
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 157;
	
	  ;% q_3d_crane_cal_P.Constant_Value_c
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 158;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_P.HILInitialize_CKChannels
	  section.data(1).logicalSrcIdx = 116;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_P.HILInitialize_DOWatchdog
	  section.data(2).logicalSrcIdx = 117;
	  section.data(2).dtTransOffset = 17;
	
	  ;% q_3d_crane_cal_P.HILInitialize_EIInitial
	  section.data(3).logicalSrcIdx = 118;
	  section.data(3).dtTransOffset = 18;
	
	  ;% q_3d_crane_cal_P.HILInitialize_POModes
	  section.data(4).logicalSrcIdx = 119;
	  section.data(4).dtTransOffset = 19;
	
	  ;% q_3d_crane_cal_P.HILInitialize_POConfiguration
	  section.data(5).logicalSrcIdx = 120;
	  section.data(5).dtTransOffset = 20;
	
	  ;% q_3d_crane_cal_P.HILInitialize_POAlignment
	  section.data(6).logicalSrcIdx = 121;
	  section.data(6).dtTransOffset = 21;
	
	  ;% q_3d_crane_cal_P.HILInitialize_POPolarity
	  section.data(7).logicalSrcIdx = 122;
	  section.data(7).dtTransOffset = 22;
	
	  ;% q_3d_crane_cal_P.HILReadTimebase_Clock
	  section.data(8).logicalSrcIdx = 123;
	  section.data(8).dtTransOffset = 23;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 11;
      section.data(11)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_P.HILInitialize_AIChannels
	  section.data(1).logicalSrcIdx = 124;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_P.HILInitialize_AOChannels
	  section.data(2).logicalSrcIdx = 125;
	  section.data(2).dtTransOffset = 8;
	
	  ;% q_3d_crane_cal_P.HILInitialize_EIChannels
	  section.data(3).logicalSrcIdx = 126;
	  section.data(3).dtTransOffset = 16;
	
	  ;% q_3d_crane_cal_P.HILInitialize_EIQuadrature
	  section.data(4).logicalSrcIdx = 127;
	  section.data(4).dtTransOffset = 24;
	
	  ;% q_3d_crane_cal_P.HILInitialize_POChannels
	  section.data(5).logicalSrcIdx = 128;
	  section.data(5).dtTransOffset = 25;
	
	  ;% q_3d_crane_cal_P.HILReadTimebase_SamplesInBuffer
	  section.data(6).logicalSrcIdx = 129;
	  section.data(6).dtTransOffset = 33;
	
	  ;% q_3d_crane_cal_P.HILReadTimebase_AnalogChannels
	  section.data(7).logicalSrcIdx = 130;
	  section.data(7).dtTransOffset = 34;
	
	  ;% q_3d_crane_cal_P.HILReadTimebase_EncoderChannels
	  section.data(8).logicalSrcIdx = 131;
	  section.data(8).dtTransOffset = 37;
	
	  ;% q_3d_crane_cal_P.HILReadTimebase_DigitalChannels
	  section.data(9).logicalSrcIdx = 132;
	  section.data(9).dtTransOffset = 42;
	
	  ;% q_3d_crane_cal_P.HILWrite_AnalogChannels
	  section.data(10).logicalSrcIdx = 133;
	  section.data(10).dtTransOffset = 47;
	
	  ;% q_3d_crane_cal_P.HILWrite_DigitalChannels
	  section.data(11).logicalSrcIdx = 134;
	  section.data(11).dtTransOffset = 50;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_P.ShowMessageonHost_MsgIcon
	  section.data(1).logicalSrcIdx = 135;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_P.ShowMessageonHost_MsgIcon_f
	  section.data(2).logicalSrcIdx = 136;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_P.Memory_X0
	  section.data(1).logicalSrcIdx = 137;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_P.Constant_Value_l
	  section.data(2).logicalSrcIdx = 138;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_3d_crane_cal_P.Constant_Value_jw
	  section.data(3).logicalSrcIdx = 139;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 46;
      section.data(46)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_P.HILInitialize_Active
	  section.data(1).logicalSrcIdx = 140;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_P.HILInitialize_CKPStart
	  section.data(2).logicalSrcIdx = 141;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_3d_crane_cal_P.HILInitialize_CKPEnter
	  section.data(3).logicalSrcIdx = 142;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_3d_crane_cal_P.HILInitialize_CKStart
	  section.data(4).logicalSrcIdx = 143;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_3d_crane_cal_P.HILInitialize_CKEnter
	  section.data(5).logicalSrcIdx = 144;
	  section.data(5).dtTransOffset = 4;
	
	  ;% q_3d_crane_cal_P.HILInitialize_AIPStart
	  section.data(6).logicalSrcIdx = 145;
	  section.data(6).dtTransOffset = 5;
	
	  ;% q_3d_crane_cal_P.HILInitialize_AIPEnter
	  section.data(7).logicalSrcIdx = 146;
	  section.data(7).dtTransOffset = 6;
	
	  ;% q_3d_crane_cal_P.HILInitialize_AOPStart
	  section.data(8).logicalSrcIdx = 147;
	  section.data(8).dtTransOffset = 7;
	
	  ;% q_3d_crane_cal_P.HILInitialize_AOPEnter
	  section.data(9).logicalSrcIdx = 148;
	  section.data(9).dtTransOffset = 8;
	
	  ;% q_3d_crane_cal_P.HILInitialize_AOStart
	  section.data(10).logicalSrcIdx = 149;
	  section.data(10).dtTransOffset = 9;
	
	  ;% q_3d_crane_cal_P.HILInitialize_AOEnter
	  section.data(11).logicalSrcIdx = 150;
	  section.data(11).dtTransOffset = 10;
	
	  ;% q_3d_crane_cal_P.HILInitialize_AOTerminate
	  section.data(12).logicalSrcIdx = 151;
	  section.data(12).dtTransOffset = 11;
	
	  ;% q_3d_crane_cal_P.HILInitialize_AOExit
	  section.data(13).logicalSrcIdx = 152;
	  section.data(13).dtTransOffset = 12;
	
	  ;% q_3d_crane_cal_P.HILInitialize_AOReset
	  section.data(14).logicalSrcIdx = 153;
	  section.data(14).dtTransOffset = 13;
	
	  ;% q_3d_crane_cal_P.HILInitialize_DOPStart
	  section.data(15).logicalSrcIdx = 154;
	  section.data(15).dtTransOffset = 14;
	
	  ;% q_3d_crane_cal_P.HILInitialize_DOPEnter
	  section.data(16).logicalSrcIdx = 155;
	  section.data(16).dtTransOffset = 15;
	
	  ;% q_3d_crane_cal_P.HILInitialize_DOStart
	  section.data(17).logicalSrcIdx = 156;
	  section.data(17).dtTransOffset = 16;
	
	  ;% q_3d_crane_cal_P.HILInitialize_DOEnter
	  section.data(18).logicalSrcIdx = 157;
	  section.data(18).dtTransOffset = 17;
	
	  ;% q_3d_crane_cal_P.HILInitialize_DOTerminate
	  section.data(19).logicalSrcIdx = 158;
	  section.data(19).dtTransOffset = 18;
	
	  ;% q_3d_crane_cal_P.HILInitialize_DOExit
	  section.data(20).logicalSrcIdx = 159;
	  section.data(20).dtTransOffset = 19;
	
	  ;% q_3d_crane_cal_P.HILInitialize_DOReset
	  section.data(21).logicalSrcIdx = 160;
	  section.data(21).dtTransOffset = 20;
	
	  ;% q_3d_crane_cal_P.HILInitialize_EIPStart
	  section.data(22).logicalSrcIdx = 161;
	  section.data(22).dtTransOffset = 21;
	
	  ;% q_3d_crane_cal_P.HILInitialize_EIPEnter
	  section.data(23).logicalSrcIdx = 162;
	  section.data(23).dtTransOffset = 22;
	
	  ;% q_3d_crane_cal_P.HILInitialize_EIStart
	  section.data(24).logicalSrcIdx = 163;
	  section.data(24).dtTransOffset = 23;
	
	  ;% q_3d_crane_cal_P.HILInitialize_EIEnter
	  section.data(25).logicalSrcIdx = 164;
	  section.data(25).dtTransOffset = 24;
	
	  ;% q_3d_crane_cal_P.HILInitialize_POPStart
	  section.data(26).logicalSrcIdx = 165;
	  section.data(26).dtTransOffset = 25;
	
	  ;% q_3d_crane_cal_P.HILInitialize_POPEnter
	  section.data(27).logicalSrcIdx = 166;
	  section.data(27).dtTransOffset = 26;
	
	  ;% q_3d_crane_cal_P.HILInitialize_POStart
	  section.data(28).logicalSrcIdx = 167;
	  section.data(28).dtTransOffset = 27;
	
	  ;% q_3d_crane_cal_P.HILInitialize_POEnter
	  section.data(29).logicalSrcIdx = 168;
	  section.data(29).dtTransOffset = 28;
	
	  ;% q_3d_crane_cal_P.HILInitialize_POTerminate
	  section.data(30).logicalSrcIdx = 169;
	  section.data(30).dtTransOffset = 29;
	
	  ;% q_3d_crane_cal_P.HILInitialize_POExit
	  section.data(31).logicalSrcIdx = 170;
	  section.data(31).dtTransOffset = 30;
	
	  ;% q_3d_crane_cal_P.HILInitialize_POReset
	  section.data(32).logicalSrcIdx = 171;
	  section.data(32).dtTransOffset = 31;
	
	  ;% q_3d_crane_cal_P.HILInitialize_OOReset
	  section.data(33).logicalSrcIdx = 172;
	  section.data(33).dtTransOffset = 32;
	
	  ;% q_3d_crane_cal_P.HILInitialize_DOInitial
	  section.data(34).logicalSrcIdx = 173;
	  section.data(34).dtTransOffset = 33;
	
	  ;% q_3d_crane_cal_P.HILInitialize_DOFinal
	  section.data(35).logicalSrcIdx = 174;
	  section.data(35).dtTransOffset = 34;
	
	  ;% q_3d_crane_cal_P.HILReadTimebase_Active
	  section.data(36).logicalSrcIdx = 175;
	  section.data(36).dtTransOffset = 35;
	
	  ;% q_3d_crane_cal_P.Memory_X0_h
	  section.data(37).logicalSrcIdx = 176;
	  section.data(37).dtTransOffset = 36;
	
	  ;% q_3d_crane_cal_P.Memory_X0_i
	  section.data(38).logicalSrcIdx = 177;
	  section.data(38).dtTransOffset = 37;
	
	  ;% q_3d_crane_cal_P.UnitDelay_X0
	  section.data(39).logicalSrcIdx = 178;
	  section.data(39).dtTransOffset = 38;
	
	  ;% q_3d_crane_cal_P.Memory_X0_j
	  section.data(40).logicalSrcIdx = 179;
	  section.data(40).dtTransOffset = 39;
	
	  ;% q_3d_crane_cal_P.UnitDelay_X0_d
	  section.data(41).logicalSrcIdx = 180;
	  section.data(41).dtTransOffset = 40;
	
	  ;% q_3d_crane_cal_P.Memory_X0_n
	  section.data(42).logicalSrcIdx = 181;
	  section.data(42).dtTransOffset = 41;
	
	  ;% q_3d_crane_cal_P.HILWrite_Active
	  section.data(43).logicalSrcIdx = 182;
	  section.data(43).dtTransOffset = 42;
	
	  ;% q_3d_crane_cal_P.UnitDelay_X0_h
	  section.data(44).logicalSrcIdx = 183;
	  section.data(44).dtTransOffset = 43;
	
	  ;% q_3d_crane_cal_P.Constant_Value_e
	  section.data(45).logicalSrcIdx = 184;
	  section.data(45).dtTransOffset = 44;
	
	  ;% q_3d_crane_cal_P.UnitDelay_X0_n
	  section.data(46).logicalSrcIdx = 185;
	  section.data(46).dtTransOffset = 45;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_P.TriggeredSigmoidCompute_l.SigmoidCompute_VMax
	  section.data(1).logicalSrcIdx = 186;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_P.TriggeredSigmoidCompute_l.SigmoidCompute_AMax
	  section.data(2).logicalSrcIdx = 187;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(7) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_P.TriggeredSigmoidCompute_e.SigmoidCompute_VMax
	  section.data(1).logicalSrcIdx = 188;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_P.TriggeredSigmoidCompute_e.SigmoidCompute_AMax
	  section.data(2).logicalSrcIdx = 189;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(8) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_P.TriggeredSigmoidCompute_d.SigmoidCompute_VMax
	  section.data(1).logicalSrcIdx = 190;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_P.TriggeredSigmoidCompute_d.SigmoidCompute_AMax
	  section.data(2).logicalSrcIdx = 191;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(9) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_P.TriggeredSigmoidCompute.SigmoidCompute_VMax
	  section.data(1).logicalSrcIdx = 192;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_P.TriggeredSigmoidCompute.SigmoidCompute_AMax
	  section.data(2).logicalSrcIdx = 193;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_P.ResetEncoderTrolley.HILSetEncoderCounts_Counts
	  section.data(1).logicalSrcIdx = 194;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(11) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_P.ResetEncoderTrolley.HILSetEncoderCounts_Channels
	  section.data(1).logicalSrcIdx = 195;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(12) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_P.ResetEncoderTrolley.HILSetEncoderCounts_Active
	  section.data(1).logicalSrcIdx = 196;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(13) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_P.ResetEncoderPayload.HILSetEncoderCounts_Counts
	  section.data(1).logicalSrcIdx = 197;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(14) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_P.ResetEncoderPayload.HILSetEncoderCounts_Channels
	  section.data(1).logicalSrcIdx = 198;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(15) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_P.ResetEncoderPayload.HILSetEncoderCounts_Active
	  section.data(1).logicalSrcIdx = 199;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(16) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_P.ResetEncoderTower.HILSetEncoderCounts_Counts
	  section.data(1).logicalSrcIdx = 200;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(17) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_P.ResetEncoderTower.HILSetEncoderCounts_Channels
	  section.data(1).logicalSrcIdx = 201;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(18) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_P.ResetEncoderTower.HILSetEncoderCounts_Active
	  section.data(1).logicalSrcIdx = 202;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(19) = section;
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
    nTotSects     = 11;
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
    ;% Auto data (q_3d_crane_cal_B)
    ;%
      section.nData     = 28;
      section.data(28)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_B.EncoderCalibration
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_B.SigmoidPath_o1
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 5;
	
	  ;% q_3d_crane_cal_B.SigmoidPath_o2
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 6;
	
	  ;% q_3d_crane_cal_B.SigmoidPath_o3
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 7;
	
	  ;% q_3d_crane_cal_B.SigmoidPath_o4
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 8;
	
	  ;% q_3d_crane_cal_B.SigmoidPath_o1_i
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 9;
	
	  ;% q_3d_crane_cal_B.SigmoidPath_o2_m
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 10;
	
	  ;% q_3d_crane_cal_B.SigmoidPath_o3_h
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 11;
	
	  ;% q_3d_crane_cal_B.SigmoidPath_o4_i
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 12;
	
	  ;% q_3d_crane_cal_B.MultiportSwitch
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 13;
	
	  ;% q_3d_crane_cal_B.SigmoidPath_o1_l
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 14;
	
	  ;% q_3d_crane_cal_B.SigmoidPath_o2_i
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 15;
	
	  ;% q_3d_crane_cal_B.SigmoidPath_o3_d
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 16;
	
	  ;% q_3d_crane_cal_B.SigmoidPath_o4_n
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 17;
	
	  ;% q_3d_crane_cal_B.MultiportSwitch1
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 18;
	
	  ;% q_3d_crane_cal_B.DiscreteTransferFcn
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 19;
	
	  ;% q_3d_crane_cal_B.MultiportSwitch_h
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 20;
	
	  ;% q_3d_crane_cal_B.SigmoidPath_o1_c
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 21;
	
	  ;% q_3d_crane_cal_B.SigmoidPath_o2_e
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 22;
	
	  ;% q_3d_crane_cal_B.SigmoidPath_o3_dc
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 23;
	
	  ;% q_3d_crane_cal_B.SigmoidPath_o4_nh
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 24;
	
	  ;% q_3d_crane_cal_B.PayloadSetpointVector
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 25;
	
	  ;% q_3d_crane_cal_B.Gain
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 27;
	
	  ;% q_3d_crane_cal_B.Gain_k
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 29;
	
	  ;% q_3d_crane_cal_B.Gain_c
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 31;
	
	  ;% q_3d_crane_cal_B.CommandedCurrent
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 33;
	
	  ;% q_3d_crane_cal_B.JibIntegralControlGain
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 36;
	
	  ;% q_3d_crane_cal_B.PayloadIntegralGain
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 37;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_B.Sum
	  section.data(1).logicalSrcIdx = 28;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_B.Compare
	  section.data(2).logicalSrcIdx = 29;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 16;
      section.data(16)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_B.Compare_f
	  section.data(1).logicalSrcIdx = 30;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_B.LogicalOperator
	  section.data(2).logicalSrcIdx = 31;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_3d_crane_cal_B.Compare_p
	  section.data(3).logicalSrcIdx = 32;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_3d_crane_cal_B.LogicalOperator_j
	  section.data(4).logicalSrcIdx = 33;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_3d_crane_cal_B.LogicalOperator_d
	  section.data(5).logicalSrcIdx = 34;
	  section.data(5).dtTransOffset = 4;
	
	  ;% q_3d_crane_cal_B.Compare_a
	  section.data(6).logicalSrcIdx = 35;
	  section.data(6).dtTransOffset = 5;
	
	  ;% q_3d_crane_cal_B.LogicalOperator_a
	  section.data(7).logicalSrcIdx = 36;
	  section.data(7).dtTransOffset = 6;
	
	  ;% q_3d_crane_cal_B.UnitDelay
	  section.data(8).logicalSrcIdx = 37;
	  section.data(8).dtTransOffset = 7;
	
	  ;% q_3d_crane_cal_B.SystemCalibrated
	  section.data(9).logicalSrcIdx = 39;
	  section.data(9).dtTransOffset = 8;
	
	  ;% q_3d_crane_cal_B.RateTransition
	  section.data(10).logicalSrcIdx = 40;
	  section.data(10).dtTransOffset = 9;
	
	  ;% q_3d_crane_cal_B.Compare_p5
	  section.data(11).logicalSrcIdx = 41;
	  section.data(11).dtTransOffset = 10;
	
	  ;% q_3d_crane_cal_B.Compare_c
	  section.data(12).logicalSrcIdx = 42;
	  section.data(12).dtTransOffset = 11;
	
	  ;% q_3d_crane_cal_B.LogicalOperator_ao
	  section.data(13).logicalSrcIdx = 43;
	  section.data(13).dtTransOffset = 12;
	
	  ;% q_3d_crane_cal_B.TowerCalibrated
	  section.data(14).logicalSrcIdx = 44;
	  section.data(14).dtTransOffset = 13;
	
	  ;% q_3d_crane_cal_B.TrolleyCalibrated
	  section.data(15).logicalSrcIdx = 45;
	  section.data(15).dtTransOffset = 14;
	
	  ;% q_3d_crane_cal_B.PayloadCalibrated
	  section.data(16).logicalSrcIdx = 46;
	  section.data(16).dtTransOffset = 15;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_B.TriggeredSigmoidCompute_l.SigmoidCompute_o1
	  section.data(1).logicalSrcIdx = 47;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_B.TriggeredSigmoidCompute_l.SigmoidCompute_o2
	  section.data(1).logicalSrcIdx = 48;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_B.TriggeredSigmoidCompute_e.SigmoidCompute_o1
	  section.data(1).logicalSrcIdx = 49;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_B.TriggeredSigmoidCompute_e.SigmoidCompute_o2
	  section.data(1).logicalSrcIdx = 50;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_B.TriggeredSigmoidCompute_d.SigmoidCompute_o1
	  section.data(1).logicalSrcIdx = 51;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_B.TriggeredSigmoidCompute_d.SigmoidCompute_o2
	  section.data(1).logicalSrcIdx = 52;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(9) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_B.TriggeredSigmoidCompute.SigmoidCompute_o1
	  section.data(1).logicalSrcIdx = 53;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_B.TriggeredSigmoidCompute.SigmoidCompute_o2
	  section.data(1).logicalSrcIdx = 54;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(11) = section;
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
    nTotSects     = 24;
    sectIdxOffset = 11;
    
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
    ;% Auto data (q_3d_crane_cal_DWork)
    ;%
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.SigmoidPath_Path
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_DWork.SigmoidPath_NewPath
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_3d_crane_cal_DWork.SigmoidPath_Path_m
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_3d_crane_cal_DWork.SigmoidPath_NewPath_j
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_3d_crane_cal_DWork.SigmoidPath_Path_j
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% q_3d_crane_cal_DWork.SigmoidPath_NewPath_m
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% q_3d_crane_cal_DWork.SigmoidPath_Path_c
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% q_3d_crane_cal_DWork.SigmoidPath_NewPath_c
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.SampleTime_PreviousTime
	  section.data(1).logicalSrcIdx = 8;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 27;
      section.data(27)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE
	  section.data(1).logicalSrcIdx = 9;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE
	  section.data(2).logicalSrcIdx = 10;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_p
	  section.data(3).logicalSrcIdx = 11;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_l
	  section.data(4).logicalSrcIdx = 12;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_e
	  section.data(5).logicalSrcIdx = 13;
	  section.data(5).dtTransOffset = 4;
	
	  ;% q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_h
	  section.data(6).logicalSrcIdx = 14;
	  section.data(6).dtTransOffset = 5;
	
	  ;% q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_f
	  section.data(7).logicalSrcIdx = 15;
	  section.data(7).dtTransOffset = 6;
	
	  ;% q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_k
	  section.data(8).logicalSrcIdx = 16;
	  section.data(8).dtTransOffset = 7;
	
	  ;% q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_o
	  section.data(9).logicalSrcIdx = 17;
	  section.data(9).dtTransOffset = 8;
	
	  ;% q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_h
	  section.data(10).logicalSrcIdx = 18;
	  section.data(10).dtTransOffset = 9;
	
	  ;% q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_kp
	  section.data(11).logicalSrcIdx = 19;
	  section.data(11).dtTransOffset = 10;
	
	  ;% q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_m
	  section.data(12).logicalSrcIdx = 20;
	  section.data(12).dtTransOffset = 11;
	
	  ;% q_3d_crane_cal_DWork.HILInitialize_AIMinimums
	  section.data(13).logicalSrcIdx = 21;
	  section.data(13).dtTransOffset = 12;
	
	  ;% q_3d_crane_cal_DWork.HILInitialize_AIMaximums
	  section.data(14).logicalSrcIdx = 22;
	  section.data(14).dtTransOffset = 20;
	
	  ;% q_3d_crane_cal_DWork.HILInitialize_AOMinimums
	  section.data(15).logicalSrcIdx = 23;
	  section.data(15).dtTransOffset = 28;
	
	  ;% q_3d_crane_cal_DWork.HILInitialize_AOMaximums
	  section.data(16).logicalSrcIdx = 24;
	  section.data(16).dtTransOffset = 36;
	
	  ;% q_3d_crane_cal_DWork.HILInitialize_AOVoltages
	  section.data(17).logicalSrcIdx = 25;
	  section.data(17).dtTransOffset = 44;
	
	  ;% q_3d_crane_cal_DWork.HILInitialize_FilterFrequency
	  section.data(18).logicalSrcIdx = 26;
	  section.data(18).dtTransOffset = 52;
	
	  ;% q_3d_crane_cal_DWork.HILInitialize_POSortedFreqs
	  section.data(19).logicalSrcIdx = 27;
	  section.data(19).dtTransOffset = 60;
	
	  ;% q_3d_crane_cal_DWork.HILInitialize_POValues
	  section.data(20).logicalSrcIdx = 28;
	  section.data(20).dtTransOffset = 68;
	
	  ;% q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp
	  section.data(21).logicalSrcIdx = 29;
	  section.data(21).dtTransOffset = 76;
	
	  ;% q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_e
	  section.data(22).logicalSrcIdx = 30;
	  section.data(22).dtTransOffset = 77;
	
	  ;% q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_f
	  section.data(23).logicalSrcIdx = 31;
	  section.data(23).dtTransOffset = 78;
	
	  ;% q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_l
	  section.data(24).logicalSrcIdx = 32;
	  section.data(24).dtTransOffset = 79;
	
	  ;% q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_d
	  section.data(25).logicalSrcIdx = 33;
	  section.data(25).dtTransOffset = 80;
	
	  ;% q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_c
	  section.data(26).logicalSrcIdx = 34;
	  section.data(26).dtTransOffset = 81;
	
	  ;% q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_dt
	  section.data(27).logicalSrcIdx = 35;
	  section.data(27).dtTransOffset = 82;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.HILInitialize_Card
	  section.data(1).logicalSrcIdx = 36;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.HILReadTimebase_Task
	  section.data(1).logicalSrcIdx = 37;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.SigmoidPath_RWORK.Time
	  section.data(1).logicalSrcIdx = 38;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_DWork.SigmoidPath_RWORK_p.Time
	  section.data(2).logicalSrcIdx = 39;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_3d_crane_cal_DWork.SigmoidPath_RWORK_e.Time
	  section.data(3).logicalSrcIdx = 40;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_3d_crane_cal_DWork.SigmoidPath_RWORK_h.Time
	  section.data(4).logicalSrcIdx = 41;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.HILWrite_PWORK
	  section.data(1).logicalSrcIdx = 42;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_DWork.LimitSwitches_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 43;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_3d_crane_cal_DWork.alphadeg_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 44;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_3d_crane_cal_DWork.thetadeg_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 45;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_3d_crane_cal_DWork.Scope_PWORK.LoggedData
	  section.data(5).logicalSrcIdx = 46;
	  section.data(5).dtTransOffset = 4;
	
	  ;% q_3d_crane_cal_DWork.gammadeg_PWORK.LoggedData
	  section.data(6).logicalSrcIdx = 47;
	  section.data(6).dtTransOffset = 5;
	
	  ;% q_3d_crane_cal_DWork.xm_PWORK.LoggedData
	  section.data(7).logicalSrcIdx = 48;
	  section.data(7).dtTransOffset = 6;
	
	  ;% q_3d_crane_cal_DWork.zm_PWORK.LoggedData
	  section.data(8).logicalSrcIdx = 49;
	  section.data(8).dtTransOffset = 7;
	
	  ;% q_3d_crane_cal_DWork.ImA_PWORK.LoggedData
	  section.data(9).logicalSrcIdx = 50;
	  section.data(9).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.HILInitialize_ClockModes
	  section.data(1).logicalSrcIdx = 51;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_DWork.HILInitialize_QuadratureModes
	  section.data(2).logicalSrcIdx = 52;
	  section.data(2).dtTransOffset = 17;
	
	  ;% q_3d_crane_cal_DWork.HILInitialize_InitialEICounts
	  section.data(3).logicalSrcIdx = 53;
	  section.data(3).dtTransOffset = 25;
	
	  ;% q_3d_crane_cal_DWork.HILInitialize_POModeValues
	  section.data(4).logicalSrcIdx = 54;
	  section.data(4).dtTransOffset = 33;
	
	  ;% q_3d_crane_cal_DWork.HILInitialize_POAlignValues
	  section.data(5).logicalSrcIdx = 55;
	  section.data(5).dtTransOffset = 41;
	
	  ;% q_3d_crane_cal_DWork.HILInitialize_POPolarityVals
	  section.data(6).logicalSrcIdx = 56;
	  section.data(6).dtTransOffset = 49;
	
	  ;% q_3d_crane_cal_DWork.HILReadTimebase_EncoderBuffer
	  section.data(7).logicalSrcIdx = 57;
	  section.data(7).dtTransOffset = 57;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.HILInitialize_POSortedChans
	  section.data(1).logicalSrcIdx = 58;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.UnitDelay_DSTATE
	  section.data(1).logicalSrcIdx = 59;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_DWork.UnitDelay_DSTATE_g
	  section.data(2).logicalSrcIdx = 60;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_3d_crane_cal_DWork.UnitDelay_DSTATE_k
	  section.data(3).logicalSrcIdx = 61;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_3d_crane_cal_DWork.UnitDelay_DSTATE_p
	  section.data(4).logicalSrcIdx = 62;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.SigmoidPath_Toggle
	  section.data(1).logicalSrcIdx = 63;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_DWork.SigmoidPath_Toggle_k
	  section.data(2).logicalSrcIdx = 64;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_3d_crane_cal_DWork.SigmoidPath_Toggle_c
	  section.data(3).logicalSrcIdx = 65;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_3d_crane_cal_DWork.SigmoidPath_Toggle_h
	  section.data(4).logicalSrcIdx = 66;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_3d_crane_cal_DWork.EnabledandTriggeredSubsystem_Su
	  section.data(5).logicalSrcIdx = 67;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(11) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.SigmoidPath_Flag
	  section.data(1).logicalSrcIdx = 68;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_DWork.SigmoidPath_Flag_d
	  section.data(2).logicalSrcIdx = 69;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_3d_crane_cal_DWork.SigmoidPath_Flag_m
	  section.data(3).logicalSrcIdx = 70;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_3d_crane_cal_DWork.SigmoidPath_Flag_l
	  section.data(4).logicalSrcIdx = 71;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_3d_crane_cal_DWork.Memory_PreviousInput
	  section.data(5).logicalSrcIdx = 72;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(12) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.Memory_PreviousInput_h
	  section.data(1).logicalSrcIdx = 73;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_DWork.Memory_PreviousInput_i
	  section.data(2).logicalSrcIdx = 74;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_3d_crane_cal_DWork.Memory_PreviousInput_e
	  section.data(3).logicalSrcIdx = 75;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_3d_crane_cal_DWork.Memory_PreviousInput_f
	  section.data(4).logicalSrcIdx = 76;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(13) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.HILReadTimebase_DigitalBuffer
	  section.data(1).logicalSrcIdx = 77;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_DWork.HILWrite_DigitalBuffer
	  section.data(2).logicalSrcIdx = 78;
	  section.data(2).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(14) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.TriggeredSigmoidCompute_l.TriggeredSigmoidCompute_SubsysR
	  section.data(1).logicalSrcIdx = 79;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_DWork.TriggeredSigmoidCompute_l.SigmoidCompute_Toggle
	  section.data(2).logicalSrcIdx = 80;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(15) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.TriggeredSigmoidCompute_e.TriggeredSigmoidCompute_SubsysR
	  section.data(1).logicalSrcIdx = 81;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_DWork.TriggeredSigmoidCompute_e.SigmoidCompute_Toggle
	  section.data(2).logicalSrcIdx = 82;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(16) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.TriggeredSigmoidCompute_d.TriggeredSigmoidCompute_SubsysR
	  section.data(1).logicalSrcIdx = 83;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_DWork.TriggeredSigmoidCompute_d.SigmoidCompute_Toggle
	  section.data(2).logicalSrcIdx = 84;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(17) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.TriggeredSigmoidCompute.TriggeredSigmoidCompute_SubsysR
	  section.data(1).logicalSrcIdx = 85;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_3d_crane_cal_DWork.TriggeredSigmoidCompute.SigmoidCompute_Toggle
	  section.data(2).logicalSrcIdx = 86;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(18) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.ResetEncoderTrolley.HILSetEncoderCounts_PWORK
	  section.data(1).logicalSrcIdx = 87;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(19) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.ResetEncoderTrolley.ResetEncoderTower_SubsysRanBC
	  section.data(1).logicalSrcIdx = 88;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(20) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.ResetEncoderPayload.HILSetEncoderCounts_PWORK
	  section.data(1).logicalSrcIdx = 89;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(21) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.ResetEncoderPayload.ResetEncoderTower_SubsysRanBC
	  section.data(1).logicalSrcIdx = 90;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(22) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.ResetEncoderTower.HILSetEncoderCounts_PWORK
	  section.data(1).logicalSrcIdx = 91;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(23) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_3d_crane_cal_DWork.ResetEncoderTower.ResetEncoderTower_SubsysRanBC
	  section.data(1).logicalSrcIdx = 92;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(24) = section;
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


  targMap.checksum0 = 1652778766;
  targMap.checksum1 = 1492387069;
  targMap.checksum2 = 793595829;
  targMap.checksum3 = 4281633527;

