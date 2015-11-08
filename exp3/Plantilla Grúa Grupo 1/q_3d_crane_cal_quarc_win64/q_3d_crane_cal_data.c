/*
 * q_3d_crane_cal_data.c
 *
 * Code generation for model "q_3d_crane_cal.mdl".
 *
 * Model version              : 1.65
 * Simulink Coder version : 8.1 (R2011b) 08-Jul-2011
 * C source code generated on : Mon Nov 02 10:30:59 2015
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#include "q_3d_crane_cal.h"
#include "q_3d_crane_cal_private.h"

/* Block parameters (auto storage) */
Parameters_q_3d_crane_cal q_3d_crane_cal_P = {
  0.078539816339744828,                /* Expression: const
                                        * Referenced by: '<S19>/Constant'
                                        */
  0.001,                               /* Expression: const
                                        * Referenced by: '<S20>/Constant'
                                        */
  0.02,                                /* Expression: const
                                        * Referenced by: '<S21>/Constant'
                                        */
  0.002,                               /* Expression: const
                                        * Referenced by: '<S22>/Constant'
                                        */
  0.03,                                /* Expression: const
                                        * Referenced by: '<S17>/Constant'
                                        */
  0.005,                               /* Expression: const
                                        * Referenced by: '<S18>/Constant'
                                        */

  /*  Expression: [1 1 1 1]
   * Referenced by: '<S23>/Constant: FS'
   */
  { 1.0, 1.0, 1.0, 1.0 },

  /*  Expression: [1 0 1 0]
   * Referenced by: '<S23>/Constant: PS'
   */
  { 1.0, 0.0, 1.0, 0.0 },
  -0.7,                                /* Expression: sp_home_payload
                                        * Referenced by: '<S52>/Go to Home'
                                        */
  0.05,                                /* Expression: 50e-3
                                        * Referenced by: '<S54>/Amplitude  (m//s)'
                                        */
  20.0,                                /* Expression: 20.0
                                        * Referenced by: '<S59>/Amplitude  (deg//s)'
                                        */
  0.3,                                 /* Expression: sp_home_trolley
                                        * Referenced by: '<S66>/Go to Home'
                                        */
  0.05,                                /* Expression: 50e-3
                                        * Referenced by: '<S68>/Amplitude  (m//s)'
                                        */

  /*  Expression: [1 1 1 1]
   * Referenced by: '<S71>/Constant: FS'
   */
  { 1.0, 1.0, 1.0, 1.0 },

  /*  Expression: [1 0 1 0]
   * Referenced by: '<S71>/Constant: PS'
   */
  { 1.0, 0.0, 1.0, 0.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S72>/a'
                                        */
  1.0,                                 /* Expression: gain
                                        * Referenced by: '<S73>/Slider Gain'
                                        */
  0.0,                                 /* Expression: set_other_outputs_at_start
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: set_other_outputs_at_switch_in
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: set_other_outputs_at_terminate
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: set_other_outputs_at_switch_out
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  10.0,                                /* Expression: analog_input_maximums
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  -10.0,                               /* Expression: analog_input_minimums
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  10.0,                                /* Expression: analog_output_maximums
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  -10.0,                               /* Expression: analog_output_minimums
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: initial_analog_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: final_analog_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: watchdog_analog_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  4.0E+7,                              /* Expression: encoder_filter_frequency
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  9765.625,                            /* Expression: pwm_frequency
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: pwm_leading_deadband
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: pwm_trailing_deadband
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: initial_pwm_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: final_pwm_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: watchdog_pwm_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S72>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Weighed State'
                                        */

  /*  Expression: [K_ENC_THETA, K_ENC_X, K_ENC_Z, K_ENC_ALPHA, K_ENC_GAMMA]
   * Referenced by: '<S7>/Encoder Calibration'
   */
  { 1.5339807878856413E-5, -8.379961993243243E-7, -6.9576985736241586E-7,
    0.0015339807878856412, 0.0015339807878856412 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Full-State'
                                        */
  1.0,                                 /* Expression: const
                                        * Referenced by: '<S40>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S58>/Go CW'
                                        */
  1.0,                                 /* Expression: const
                                        * Referenced by: '<S41>/Constant'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S58>/Go CCW'
                                        */
  0.001,                               /* Computed Parameter: DiscreteTimeIntegrator_gainval
                                        * Referenced by: '<S59>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S59>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S50>/x0 = v0 = 0'
                                        */
  -155.0,                              /* Expression: -sp_home_tower
                                        * Referenced by: '<S50>/Go to Home: CW'
                                        */
  0.5,                                 /* Expression: hold_off
                                        * Referenced by: '<S60>/Sigmoid Path'
                                        */
  155.0,                               /* Expression: sp_home_tower
                                        * Referenced by: '<S50>/Go to Home: CCW'
                                        */
  0.5,                                 /* Expression: hold_off
                                        * Referenced by: '<S61>/Sigmoid Path'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S57>/Gain1'
                                        */

  /*  Expression: [1, 0, 0, 0]
   * Referenced by: '<S50>/Tower Setpoint  Vector'
   */
  { 1.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S36>/Discrete Transfer Fcn'
                                        */

  /*  Expression: numz
   * Referenced by: '<S36>/Discrete Transfer Fcn'
   */
  { 271.51049632726642, -271.51049632726642 },

  /*  Expression: denz
   * Referenced by: '<S36>/Discrete Transfer Fcn'
   */
  { 1.0, -0.72848950367273368 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S35>/Discrete Transfer Fcn'
                                        */

  /*  Expression: numz
   * Referenced by: '<S35>/Discrete Transfer Fcn'
   */
  { 12.487906781949398, -12.487906781949398 },

  /*  Expression: denz
   * Referenced by: '<S35>/Discrete Transfer Fcn'
   */
  { 1.0, -0.98751209321805067 },

  /*  Expression: K_T
   * Referenced by: '<S13>/Tower Control  Gain'
   */
  { 6.3245553204836824, -8.4424293640412884, 3.7138572423140204,
    0.69586325690409012 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S2>/Motor  Direction3'
                                        */
  0.001,                               /* Computed Parameter: DiscreteTimeIntegrator_gainva_o
                                        * Referenced by: '<S68>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S68>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S51>/Initial Setpoint:  Jib'
                                        */
  0.5,                                 /* Expression: hold_off
                                        * Referenced by: '<S67>/Sigmoid Path'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S51>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S33>/Discrete Transfer Fcn'
                                        */

  /*  Expression: numz
   * Referenced by: '<S33>/Discrete Transfer Fcn'
   */
  { 0.13575524816363321, 0.13575524816363321 },

  /*  Expression: denz
   * Referenced by: '<S33>/Discrete Transfer Fcn'
   */
  { 1.0, -0.72848950367273368 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/Discrete Transfer Fcn'
                                        */

  /*  Expression: numz
   * Referenced by: '<S32>/Discrete Transfer Fcn'
   */
  { 0.0062439533909747, 0.0062439533909747 },

  /*  Expression: denz
   * Referenced by: '<S32>/Discrete Transfer Fcn'
   */
  { 1.0, -0.98751209321805067 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S31>/Discrete Transfer Fcn'
                                        */

  /*  Expression: numz
   * Referenced by: '<S31>/Discrete Transfer Fcn'
   */
  { 271.51049632726642, -271.51049632726642 },

  /*  Expression: denz
   * Referenced by: '<S31>/Discrete Transfer Fcn'
   */
  { 1.0, -0.72848950367273368 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S30>/Discrete Transfer Fcn'
                                        */

  /*  Expression: numz
   * Referenced by: '<S30>/Discrete Transfer Fcn'
   */
  { 12.487906781949398, -12.487906781949398 },

  /*  Expression: denz
   * Referenced by: '<S30>/Discrete Transfer Fcn'
   */
  { 1.0, -0.98751209321805067 },

  /*  Expression: K_J(1:4)
   * Referenced by: '<S5>/Jib Control  Gain'
   */
  { 14.071545712459823, 34.715896787567146, 10.957672097187441,
    1.4618013570058963 },
  0.001,                               /* Computed Parameter: DiscreteTimeIntegrator_gainva_f
                                        * Referenced by: '<S5>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Discrete-Time Integrator'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S5>/Discrete-Time Integrator'
                                        */
  -2.0,                                /* Expression: -2
                                        * Referenced by: '<S5>/Discrete-Time Integrator'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S2>/Motor  Direction1'
                                        */
  1.0,                                 /* Expression: const
                                        * Referenced by: '<S38>/Constant'
                                        */
  0.001,                               /* Computed Parameter: DiscreteTimeIntegrator_gainva_i
                                        * Referenced by: '<S54>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S54>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S49>/Initial Setpoint:  Trolley'
                                        */
  0.5,                                 /* Expression: hold_off
                                        * Referenced by: '<S53>/Sigmoid Path'
                                        */

  /*  Expression: [1, 0]
   * Referenced by: '<S49>/Payload Setpoint  Vector'
   */
  { 1.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S34>/Discrete Transfer Fcn'
                                        */

  /*  Expression: numz
   * Referenced by: '<S34>/Discrete Transfer Fcn'
   */
  { 271.51049632726642, -271.51049632726642 },

  /*  Expression: denz
   * Referenced by: '<S34>/Discrete Transfer Fcn'
   */
  { 1.0, -0.72848950367273368 },
  128.74758971719564,                  /* Expression: kp
                                        * Referenced by: '<S6>/Payload Proportional  Gain'
                                        */
  0.001,                               /* Computed Parameter: DiscreteTimeIntegrator_gainva_a
                                        * Referenced by: '<S6>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Discrete-Time Integrator'
                                        */
  0.78143427189149417,                 /* Expression: kv
                                        * Referenced by: '<S6>/Payload Velocity  Gain'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S2>/Motor  Direction2'
                                        */
  7.0,                                 /* Expression: IMAX_AMP
                                        * Referenced by: '<S2>/AMPAQ Current  Limit (A)'
                                        */
  -7.0,                                /* Expression: -IMAX_AMP
                                        * Referenced by: '<S2>/AMPAQ Current  Limit (A)'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S2>/Motor  Direction'
                                        */
  2.0,                                 /* Expression: 1 / Ka
                                        * Referenced by: '<S2>/Amps to Volts'
                                        */
  10.0,                                /* Expression: VMAX_DAC
                                        * Referenced by: '<S2>/DAC Limit (V)'
                                        */
  -10.0,                               /* Expression: -VMAX_DAC
                                        * Referenced by: '<S2>/DAC Limit (V)'
                                        */

  /*  Expression: [0 0 0 1]
   * Referenced by: '<S4>/Enable Amp'
   */
  { 0.0, 0.0, 0.0, 1.0 },
  1.0,                                 /* Expression: const
                                        * Referenced by: '<S39>/Constant'
                                        */
  1.0,                                 /* Expression: const
                                        * Referenced by: '<S37>/Constant'
                                        */
  57.295779513082323,                  /* Expression: 180/pi
                                        * Referenced by: '<S48>/Gain'
                                        */
  57.295779513082323,                  /* Expression: 180/pi
                                        * Referenced by: '<S46>/Gain'
                                        */
  57.295779513082323,                  /* Expression: 180/pi
                                        * Referenced by: '<S47>/Gain'
                                        */
  -0.5,                                /* Expression: -Ka
                                        * Referenced by: '<S2>/Commanded Current '
                                        */
  4.4721359549991035,                  /* Expression: K_J(5)
                                        * Referenced by: '<S5>/Jib Integral  Control Gain'
                                        */
  16.081245428925708,                  /* Expression: ki
                                        * Referenced by: '<S6>/Payload Integral  Gain'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S54>/Go to Ret'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S59>/Constant'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S68>/Go to Ret'
                                        */
  0.002,                               /* Expression: const
                                        * Referenced by: '<S42>/Constant'
                                        */

  /*  Computed Parameter: HILInitialize_CKChannels
   * Referenced by: '<S1>/HIL Initialize'
   */
  { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 },
  2,                                   /* Computed Parameter: HILInitialize_DOWatchdog
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_EIInitial
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POModes
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POConfiguration
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POAlignment
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_POPolarity
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILReadTimebase_Clock
                                        * Referenced by: '<S1>/HIL Read Timebase'
                                        */

  /*  Computed Parameter: HILInitialize_AIChannels
   * Referenced by: '<S1>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  /*  Computed Parameter: HILInitialize_AOChannels
   * Referenced by: '<S1>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  /*  Computed Parameter: HILInitialize_EIChannels
   * Referenced by: '<S1>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },
  4U,                                  /* Computed Parameter: HILInitialize_EIQuadrature
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */

  /*  Computed Parameter: HILInitialize_POChannels
   * Referenced by: '<S1>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },
  1000U,                               /* Computed Parameter: HILReadTimebase_SamplesInBuffer
                                        * Referenced by: '<S1>/HIL Read Timebase'
                                        */

  /*  Computed Parameter: HILReadTimebase_AnalogChannels
   * Referenced by: '<S1>/HIL Read Timebase'
   */
  { 0U, 1U, 2U },

  /*  Computed Parameter: HILReadTimebase_EncoderChannels
   * Referenced by: '<S1>/HIL Read Timebase'
   */
  { 0U, 1U, 2U, 3U, 4U },

  /*  Computed Parameter: HILReadTimebase_DigitalChannels
   * Referenced by: '<S1>/HIL Read Timebase'
   */
  { 8U, 9U, 10U, 11U, 12U },

  /*  Computed Parameter: HILWrite_AnalogChannels
   * Referenced by: '<S1>/HIL Write'
   */
  { 0U, 1U, 2U },

  /*  Computed Parameter: HILWrite_DigitalChannels
   * Referenced by: '<S1>/HIL Write'
   */
  { 0U, 1U, 2U, 4U },
  3,                                   /* Computed Parameter: ShowMessageonHost_MsgIcon
                                        * Referenced by: '<S14>/Show Message on Host'
                                        */
  1,                                   /* Computed Parameter: ShowMessageonHost_MsgIcon_f
                                        * Referenced by: '<S44>/Show Message on Host'
                                        */
  0U,                                  /* Computed Parameter: Memory_X0
                                        * Referenced by: '<S10>/Memory'
                                        */
  5U,                                  /* Computed Parameter: Constant_Value_l
                                        * Referenced by: '<S43>/Constant'
                                        */
  0U,                                  /* Computed Parameter: Constant_Value_jw
                                        * Referenced by: '<S45>/Constant'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_Active
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_CKPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_CKPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_CKStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_CKEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AIPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AIPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AOPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AOPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_AOStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AOEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_AOTerminate
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AOExit
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AOReset
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_DOStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_DOTerminate
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOExit
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOReset
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_EIPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_EIPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_EIStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_EIEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_POPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_POStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_POTerminate
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POExit
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POReset
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_OOReset
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_DOInitial
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_DOFinal
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILReadTimebase_Active
                                        * Referenced by: '<S1>/HIL Read Timebase'
                                        */
  0,                                   /* Computed Parameter: Memory_X0_h
                                        * Referenced by: '<S62>/Memory'
                                        */
  0,                                   /* Computed Parameter: Memory_X0_i
                                        * Referenced by: '<S63>/Memory'
                                        */
  0,                                   /* Computed Parameter: UnitDelay_X0
                                        * Referenced by: '<S51>/Unit Delay'
                                        */
  0,                                   /* Computed Parameter: Memory_X0_j
                                        * Referenced by: '<S69>/Memory'
                                        */
  0,                                   /* Computed Parameter: UnitDelay_X0_d
                                        * Referenced by: '<S52>/Unit Delay'
                                        */
  0,                                   /* Computed Parameter: Memory_X0_n
                                        * Referenced by: '<S55>/Memory'
                                        */
  0,                                   /* Computed Parameter: HILWrite_Active
                                        * Referenced by: '<S1>/HIL Write'
                                        */
  0,                                   /* Computed Parameter: UnitDelay_X0_h
                                        * Referenced by: '<S3>/Unit Delay'
                                        */
  0,                                   /* Computed Parameter: Constant_Value_e
                                        * Referenced by: '<S16>/Constant'
                                        */
  0,                                   /* Computed Parameter: UnitDelay_X0_n
                                        * Referenced by: '<S58>/Unit Delay'
                                        */

  /* Start of '<S67>/Triggered Sigmoid Compute' */
  {
    0.75,                              /* Expression: int_max_velocity
                                        * Referenced by: '<S70>/Sigmoid Compute'
                                        */
    1.5                                /* Expression: int_max_acceleration
                                        * Referenced by: '<S70>/Sigmoid Compute'
                                        */
  }
  /* End of '<S67>/Triggered Sigmoid Compute' */
  ,

  /* Start of '<S61>/Triggered Sigmoid Compute' */
  {
    75.0,                              /* Expression: int_max_velocity
                                        * Referenced by: '<S65>/Sigmoid Compute'
                                        */
    45.0                               /* Expression: int_max_acceleration
                                        * Referenced by: '<S65>/Sigmoid Compute'
                                        */
  }
  /* End of '<S61>/Triggered Sigmoid Compute' */
  ,

  /* Start of '<S60>/Triggered Sigmoid Compute' */
  {
    75.0,                              /* Expression: int_max_velocity
                                        * Referenced by: '<S64>/Sigmoid Compute'
                                        */
    45.0                               /* Expression: int_max_acceleration
                                        * Referenced by: '<S64>/Sigmoid Compute'
                                        */
  }
  /* End of '<S60>/Triggered Sigmoid Compute' */
  ,

  /* Start of '<S53>/Triggered Sigmoid Compute' */
  {
    0.25,                              /* Expression: int_max_velocity
                                        * Referenced by: '<S56>/Sigmoid Compute'
                                        */
    0.25                               /* Expression: int_max_acceleration
                                        * Referenced by: '<S56>/Sigmoid Compute'
                                        */
  }
  /* End of '<S53>/Triggered Sigmoid Compute' */
  ,

  /* Start of '<S7>/Reset Encoder:  Trolley' */
  {
    0,                                 /* Computed Parameter: HILSetEncoderCounts_Counts
                                        * Referenced by: '<S29>/HIL Set Encoder Counts'
                                        */
    1U,                                /* Computed Parameter: HILSetEncoderCounts_Channels
                                        * Referenced by: '<S29>/HIL Set Encoder Counts'
                                        */
    1                                  /* Computed Parameter: HILSetEncoderCounts_Active
                                        * Referenced by: '<S29>/HIL Set Encoder Counts'
                                        */
  }
  /* End of '<S7>/Reset Encoder:  Trolley' */
  ,

  /* Start of '<S7>/Reset Encoder:  Payload' */
  {
    0,                                 /* Computed Parameter: HILSetEncoderCounts_Counts
                                        * Referenced by: '<S28>/HIL Set Encoder Counts'
                                        */
    2U,                                /* Computed Parameter: HILSetEncoderCounts_Channels
                                        * Referenced by: '<S28>/HIL Set Encoder Counts'
                                        */
    1                                  /* Computed Parameter: HILSetEncoderCounts_Active
                                        * Referenced by: '<S28>/HIL Set Encoder Counts'
                                        */
  }
  /* End of '<S7>/Reset Encoder:  Payload' */
  ,

  /* Start of '<S7>/Reset Encoder: Tower' */
  {
    0,                                 /* Computed Parameter: HILSetEncoderCounts_Counts
                                        * Referenced by: '<S27>/HIL Set Encoder Counts'
                                        */
    0U,                                /* Computed Parameter: HILSetEncoderCounts_Channels
                                        * Referenced by: '<S27>/HIL Set Encoder Counts'
                                        */
    1                                  /* Computed Parameter: HILSetEncoderCounts_Active
                                        * Referenced by: '<S27>/HIL Set Encoder Counts'
                                        */
  }
  /* End of '<S7>/Reset Encoder: Tower' */
};
