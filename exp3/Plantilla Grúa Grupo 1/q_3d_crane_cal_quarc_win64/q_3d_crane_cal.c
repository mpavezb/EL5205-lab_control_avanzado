/*
 * q_3d_crane_cal.c
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
#include "q_3d_crane_cal_dt.h"

/* Block signals (auto storage) */
BlockIO_q_3d_crane_cal q_3d_crane_cal_B;

/* Block states (auto storage) */
D_Work_q_3d_crane_cal q_3d_crane_cal_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_q_3d_crane_cal q_3d_crane_cal_PrevZCSigState;

/* Real-time model */
RT_MODEL_q_3d_crane_cal q_3d_crane_cal_M_;
RT_MODEL_q_3d_crane_cal *const q_3d_crane_cal_M = &q_3d_crane_cal_M_;
static void rate_monotonic_scheduler(void);
time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
{
  rtmSampleHitPtr[1] = rtmStepTask(q_3d_crane_cal_M, 1);
  UNUSED_PARAMETER(rtmNumSampTimes);
  UNUSED_PARAMETER(rtmTimingData);
  UNUSED_PARAMETER(rtmPerTaskSampleHits);
  return(-1);
}

/* rate_monotonic_scheduler */
static void rate_monotonic_scheduler(void)
{
  /* To ensure a deterministic data transfer between two rates,
   * data is transferred at the priority of a fast task and the frequency
   * of the slow task.  The following flags indicate when the data transfer
   * happens.  That is, a rate interaction flag is set true when both rates
   * will run, and false otherwise.
   */

  /* tid 0 shares data with slower tid rate: 1 */
  q_3d_crane_cal_M->Timing.RateInteraction.TID0_1 =
    (q_3d_crane_cal_M->Timing.TaskCounters.TID[1] == 0);

  /* update PerTaskSampleHits matrix for non-inline sfcn */
  q_3d_crane_cal_M->Timing.perTaskSampleHits[1] =
    q_3d_crane_cal_M->Timing.RateInteraction.TID0_1;

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (q_3d_crane_cal_M->Timing.TaskCounters.TID[1])++;
  if ((q_3d_crane_cal_M->Timing.TaskCounters.TID[1]) > 3999) {/* Sample time: [4.0s, 0.0s] */
    q_3d_crane_cal_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/*
 * Output and update for trigger system:
 *    '<S7>/Reset Encoder: Tower'
 *    '<S7>/Reset Encoder:  Payload'
 *    '<S7>/Reset Encoder:  Trolley'
 */
void q_3d_crane_ca_ResetEncoderTower(boolean_T rtu_0, RT_MODEL_q_3d_crane_cal *
  const q_3d_crane_cal_M, rtDW_ResetEncoderTower_q_3d_cra *localDW,
  rtP_ResetEncoderTower_q_3d_cran *localP, rtZCE_ResetEncoderTower_q_3d_cr
  *localZCE)
{
  /* Outputs for Triggered SubSystem: '<S7>/Reset Encoder: Tower' incorporates:
   *  TriggerPort: '<S27>/Trigger'
   */
  if (rtu_0 && ((localZCE->ResetEncoderTower_Trig_ZCE) != POS_ZCSIG)) {
    /* S-Function (hil_set_encoder_counts_block): '<S27>/HIL Set Encoder Counts' */

    /* S-Function Block: q_3d_crane_cal/Position Sensors - HIL/Reset Encoder: Tower/HIL Set Encoder Counts (hil_set_encoder_counts_block) */
    {
      t_error result;
      result = hil_set_encoder_counts(q_3d_crane_cal_DWork.HILInitialize_Card,
        &localP->HILSetEncoderCounts_Channels, 1,
        &localP->HILSetEncoderCounts_Counts);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
      }
    }

    localDW->ResetEncoderTower_SubsysRanBC = 4;
  }

  (localZCE->ResetEncoderTower_Trig_ZCE) = (uint8_T)(rtu_0 ? (int32_T)POS_ZCSIG :
    (int32_T)ZERO_ZCSIG);

  /* End of Outputs for SubSystem: '<S7>/Reset Encoder: Tower' */
}

/*
 * Start for trigger system:
 *    '<S53>/Triggered Sigmoid Compute'
 *    '<S67>/Triggered Sigmoid Compute'
 */
void q_TriggeredSigmoidCompute_Start(void)
{
  /* Start for S-Function (sigmoid_compute): '<S56>/Sigmoid Compute' */

  /* S-Function Block: q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Payload/Triggered Sigmoid/Triggered Sigmoid Compute/Sigmoid Compute (sigmoid_compute) */
  {
    q_3d_crane_cal_DWork.SigmoidPath_Flag_l = 0;
  }
}

/*
 * Output and update for trigger system:
 *    '<S53>/Triggered Sigmoid Compute'
 *    '<S67>/Triggered Sigmoid Compute'
 */
void q_3d_cr_TriggeredSigmoidCompute(boolean_T rtu_0, real_T rtu_x0, real_T
  rtu_xd, rtB_TriggeredSigmoidCompute_q_3 *localB,
  rtDW_TriggeredSigmoidCompute_q_ *localDW, rtP_TriggeredSigmoidCompute_q_3
  *localP, rtZCE_TriggeredSigmoidCompute_q *localZCE)
{
  /* Outputs for Triggered SubSystem: '<S53>/Triggered Sigmoid Compute' incorporates:
   *  TriggerPort: '<S56>/Trigger'
   */
  if (rtu_0 && ((localZCE->TriggeredSigmoidCompute_Trig_ZC) != POS_ZCSIG)) {
    /* S-Function (sigmoid_compute): '<S56>/Sigmoid Compute' */
    /* S-Function Block: q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Payload/Triggered Sigmoid/Triggered Sigmoid Compute/Sigmoid Compute (sigmoid_compute) */
    {
      /*  update the sigmoid_params with the new target and initial position/velocity  */
      localB->SigmoidCompute_o1.x0 = rtu_x0;
      localB->SigmoidCompute_o1.v0 = rtu_x0;
      localB->SigmoidCompute_o1.xd = rtu_xd;

      /*  Check that the initial velocity does not exceed the maximum velocity */
      if (fabs(localB->SigmoidCompute_o1.v0) > localP->SigmoidCompute_VMax) {
        return;
      }

      /*  Compute the new trajectory  */
      sigmoid_calculate_trajectory(&localB->SigmoidCompute_o1, 0,
        localB->SigmoidCompute_o1.x0,
        localB->SigmoidCompute_o1.v0, localP->SigmoidCompute_AMax,
        localP->SigmoidCompute_VMax);

      /*  Toggle the output flag  */
      if (localDW->SigmoidCompute_Toggle == 0) {
        localDW->SigmoidCompute_Toggle = 1;
      } else {
        localDW->SigmoidCompute_Toggle = 0;
      }

      localB->SigmoidCompute_o2 = localDW->SigmoidCompute_Toggle;
    }

    localDW->TriggeredSigmoidCompute_SubsysR = 4;
  }

  (localZCE->TriggeredSigmoidCompute_Trig_ZC) = (uint8_T)(rtu_0 ? (int32_T)
    POS_ZCSIG : (int32_T)ZERO_ZCSIG);

  /* End of Outputs for SubSystem: '<S53>/Triggered Sigmoid Compute' */
}

/*
 * Start for trigger system:
 *    '<S60>/Triggered Sigmoid Compute'
 *    '<S61>/Triggered Sigmoid Compute'
 */
void TriggeredSigmoidCompute_p_Start(void)
{
  /* Start for S-Function (sigmoid_compute): '<S64>/Sigmoid Compute' */

  /* S-Function Block: q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Tower/Triggered Sigmoid/Triggered Sigmoid Compute/Sigmoid Compute (sigmoid_compute) */
  {
    q_3d_crane_cal_DWork.SigmoidPath_Flag_l = 0;
  }
}

/*
 * Output and update for trigger system:
 *    '<S60>/Triggered Sigmoid Compute'
 *    '<S61>/Triggered Sigmoid Compute'
 */
void q_3d__TriggeredSigmoidCompute_d(boolean_T rtu_0, real_T rtu_x0, real_T
  rtu_xd, rtB_TriggeredSigmoidCompute_q_p *localB,
  rtDW_TriggeredSigmoidCompute_h *localDW, rtP_TriggeredSigmoidCompute_q_e
  *localP, rtZCE_TriggeredSigmoidCompute_b *localZCE)
{
  /* Outputs for Triggered SubSystem: '<S60>/Triggered Sigmoid Compute' incorporates:
   *  TriggerPort: '<S64>/Trigger'
   */
  if (rtu_0 && ((localZCE->TriggeredSigmoidCompute_Trig__a) != POS_ZCSIG)) {
    /* S-Function (sigmoid_compute): '<S64>/Sigmoid Compute' */
    /* S-Function Block: q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Tower/Triggered Sigmoid/Triggered Sigmoid Compute/Sigmoid Compute (sigmoid_compute) */
    {
      /*  update the sigmoid_params with the new target and initial position/velocity  */
      localB->SigmoidCompute_o1.x0 = rtu_x0;
      localB->SigmoidCompute_o1.v0 = rtu_x0;
      localB->SigmoidCompute_o1.xd = rtu_xd;

      /*  Check that the initial velocity does not exceed the maximum velocity */
      if (fabs(localB->SigmoidCompute_o1.v0) > localP->SigmoidCompute_VMax) {
        return;
      }

      /*  Compute the new trajectory  */
      sigmoid_calculate_trajectory(&localB->SigmoidCompute_o1, 0,
        localB->SigmoidCompute_o1.x0,
        localB->SigmoidCompute_o1.v0, localP->SigmoidCompute_AMax,
        localP->SigmoidCompute_VMax);

      /*  Toggle the output flag  */
      if (localDW->SigmoidCompute_Toggle == 0) {
        localDW->SigmoidCompute_Toggle = 1;
      } else {
        localDW->SigmoidCompute_Toggle = 0;
      }

      localB->SigmoidCompute_o2 = localDW->SigmoidCompute_Toggle;
    }

    localDW->TriggeredSigmoidCompute_SubsysR = 4;
  }

  (localZCE->TriggeredSigmoidCompute_Trig__a) = (uint8_T)(rtu_0 ? (int32_T)
    POS_ZCSIG : (int32_T)ZERO_ZCSIG);

  /* End of Outputs for SubSystem: '<S60>/Triggered Sigmoid Compute' */
}

/* Model output function for TID0 */
void q_3d_crane_cal_output0(int_T tid) /* Sample time: [0.001s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_HILReadTimebase_o1[3];
  real_T rtb_HILReadTimebase_o2[5];
  real_T rtb_HILReadTimebase_o3[5];
  real_T rtb_DACLimitV[3];
  real_T rtb_SampleTime;
  boolean_T rtb_UnitDelay_e;
  boolean_T rtb_UnitDelay_n;
  real_T rtb_MotorDirection2;
  boolean_T rtb_AllEncodersReset;
  real_T rtb_GoCW;
  real_T rtb_GoCCW;
  real_T rtb_DiscreteTimeIntegrator;
  real_T rtb_MotorDirection3;
  int32_T i;
  real_T rtb_Error_idx;
  real_T rtb_Error_idx_0;
  real_T rtb_TowerError_idx;
  real_T rtb_TowerSetpointVector_idx;
  real_T rtb_TowerSetpointVector_idx_0;
  real_T rtb_TowerError_idx_0;
  real_T rtb_MultiportSwitch_idx;
  real_T rtb_MultiportSwitch_idx_0;
  real_T rtb_MultiportSwitch_idx_1;

  {                                    /* Sample time: [0.001s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* RTWBLOCK_START_COMMENT */
  /* RTWBLOCK_START_COMMENT */
  /* RTWBLOCK_START_COMMENT */
  /* Reset subsysRan breadcrumbs */
  srClearBC(q_3d_crane_cal_DWork.EnabledandTriggeredSubsystem_Su);

  /* Reset subsysRan breadcrumbs */
  srClearBC(q_3d_crane_cal_DWork.ResetEncoderTower.ResetEncoderTower_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (q_3d_crane_cal_DWork.TriggeredSigmoidCompute.TriggeredSigmoidCompute_SubsysR);

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (q_3d_crane_cal_DWork.TriggeredSigmoidCompute_d.TriggeredSigmoidCompute_SubsysR);

  /* RTWBLOCK_START_COMMENT */

  /* S-Function (hil_read_timebase_block): '<S1>/HIL Read Timebase' */

  /* S-Function Block: q_3d_crane_cal/3-DOF Crane HIL/HIL Read Timebase (hil_read_timebase_block) */
  {
    t_error result;
    result = hil_task_read(q_3d_crane_cal_DWork.HILReadTimebase_Task, 1,
      rtb_HILReadTimebase_o1,
      &q_3d_crane_cal_DWork.HILReadTimebase_EncoderBuffer[0],
      &q_3d_crane_cal_DWork.HILReadTimebase_DigitalBuffer[0],
      NULL
      );
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
    } else {
      {
        int_T i1;
        real_T *y1 = rtb_HILReadTimebase_o2;
        int32_T *dw_EncoderBuffer =
          &q_3d_crane_cal_DWork.HILReadTimebase_EncoderBuffer[0];
        for (i1=0; i1 < 5; i1++) {
          y1[i1] = dw_EncoderBuffer[i1];
        }
      }

      {
        int_T i1;
        real_T *y2 = rtb_HILReadTimebase_o3;
        t_boolean *dw_DigitalBuffer =
          &q_3d_crane_cal_DWork.HILReadTimebase_DigitalBuffer[0];
        for (i1=0; i1 < 5; i1++) {
          y2[i1] = dw_DigitalBuffer[i1];
        }
      }
    }
  }

  /* Gain: '<S7>/Encoder Calibration' */
  for (i = 0; i < 5; i++) {
    q_3d_crane_cal_B.EncoderCalibration[i] =
      q_3d_crane_cal_P.EncoderCalibration_Gain[i] * rtb_HILReadTimebase_o2[i];
  }

  /* End of Gain: '<S7>/Encoder Calibration' */

  /* MultiPortSwitch: '<S72>/Multiport Switch' incorporates:
   *  Constant: '<Root>/Weighed State'
   *  Constant: '<S72>/Constant'
   *  Constant: '<S72>/a'
   *  Gain: '<S73>/Slider Gain'
   *  Sum: '<S72>/a-z'
   */
  if ((int32_T)q_3d_crane_cal_P.WeighedState_Value == 0) {
    rtb_MotorDirection2 = q_3d_crane_cal_P.Constant_Value_i;
  } else {
    rtb_MotorDirection2 = (q_3d_crane_cal_P.a_Value -
      q_3d_crane_cal_B.EncoderCalibration[2]) * q_3d_crane_cal_P.SliderGain_Gain;
  }

  /* End of MultiPortSwitch: '<S72>/Multiport Switch' */

  /* RelationalOperator: '<S40>/Compare' incorporates:
   *  Constant: '<S40>/Constant'
   */
  q_3d_crane_cal_B.Compare_f = (rtb_HILReadTimebase_o3[4] <
    q_3d_crane_cal_P.Constant_Value_k4);

  /* Memory: '<S62>/Memory' */
  rtb_AllEncodersReset = q_3d_crane_cal_DWork.Memory_PreviousInput_h;

  /* Logic: '<S62>/Logical Operator' */
  q_3d_crane_cal_B.LogicalOperator = (q_3d_crane_cal_B.Compare_f ||
    rtb_AllEncodersReset);

  /* Gain: '<S58>/Go CW' incorporates:
   *  DataTypeConversion: '<S58>/Data Type Conversion'
   */
  rtb_GoCW = q_3d_crane_cal_P.GoCW_Gain * (real_T)
    q_3d_crane_cal_B.LogicalOperator;

  /* RelationalOperator: '<S41>/Compare' incorporates:
   *  Constant: '<S41>/Constant'
   */
  q_3d_crane_cal_B.Compare_p = (rtb_HILReadTimebase_o3[0] <
    q_3d_crane_cal_P.Constant_Value_n);

  /* Memory: '<S63>/Memory' */
  rtb_AllEncodersReset = q_3d_crane_cal_DWork.Memory_PreviousInput_i;

  /* Logic: '<S63>/Logical Operator' */
  q_3d_crane_cal_B.LogicalOperator_j = (q_3d_crane_cal_B.Compare_p ||
    rtb_AllEncodersReset);

  /* Gain: '<S58>/Go CCW' incorporates:
   *  DataTypeConversion: '<S58>/Data Type Conversion1'
   */
  rtb_GoCCW = q_3d_crane_cal_P.GoCCW_Gain * (real_T)
    q_3d_crane_cal_B.LogicalOperator_j;

  /* DiscreteIntegrator: '<S59>/Discrete-Time Integrator' */
  rtb_DiscreteTimeIntegrator =
    q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE;

  /* S-Function (sigmoid_path): '<S60>/Sigmoid Path' */
  /* S-Function Block: q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Tower/Triggered Sigmoid/Sigmoid Path (sigmoid_path) */
  {
    if (tid == 0) {
      {
        /* Determine the correct step size for the output ports */

        /*  Check if the target position has changed or if it is the first
           simulation step, in which case we need to compute the initial
           trajectory. */
        if (q_3d_crane_cal_DWork.SigmoidPath_Flag == 1) {
          /*  Read the new sigmoid parameters and reset the flag */
          memcpy(&q_3d_crane_cal_DWork.SigmoidPath_Path,
                 &q_3d_crane_cal_DWork.SigmoidPath_NewPath, sizeof
                 (t_sigmoid_params));
          q_3d_crane_cal_DWork.SigmoidPath_Flag = 0;

          /*  Reset the relative time to one step (since the sigmoid params actually changed
             last step)  */
          q_3d_crane_cal_DWork.SigmoidPath_RWORK.Time = 0.001;

          /*  Reset the hold-off value too since we copied over it    */
          q_3d_crane_cal_DWork.SigmoidPath_Path.hold_off =
            q_3d_crane_cal_P.SigmoidPath_Hold;
        }

        /* Mark the target as not reached */
        q_3d_crane_cal_B.SigmoidPath_o4 = 0;
        if (q_3d_crane_cal_DWork.SigmoidPath_RWORK.Time == 0) {
          q_3d_crane_cal_B.SigmoidPath_o3 =
            q_3d_crane_cal_DWork.SigmoidPath_Path.ap;
          q_3d_crane_cal_B.SigmoidPath_o2 =
            q_3d_crane_cal_DWork.SigmoidPath_Path.v0;
          q_3d_crane_cal_B.SigmoidPath_o1 =
            q_3d_crane_cal_DWork.SigmoidPath_Path.x0;

          /*  Check if we are starting this trajectory at the target and the hold-off
             time is zero. If so, and the velocity and acceleration are zero, raise
             the Done signal cause we're there!  */
          if (q_3d_crane_cal_DWork.SigmoidPath_Path.x0 ==
              q_3d_crane_cal_DWork.SigmoidPath_Path.xd &&
              q_3d_crane_cal_DWork.SigmoidPath_Path.hold_off == 0
              && q_3d_crane_cal_DWork.SigmoidPath_Path.v0 == 0 &&
              q_3d_crane_cal_DWork.SigmoidPath_Path.ap == 0) {
            q_3d_crane_cal_B.SigmoidPath_o4 = 1;
          }
        } else if (q_3d_crane_cal_DWork.SigmoidPath_RWORK.Time <
                   q_3d_crane_cal_DWork.SigmoidPath_Path.t1) {
          q_3d_crane_cal_B.SigmoidPath_o3 =
            q_3d_crane_cal_DWork.SigmoidPath_Path.ap;
          q_3d_crane_cal_B.SigmoidPath_o2 =
            q_3d_crane_cal_DWork.SigmoidPath_Path.v0 +
            q_3d_crane_cal_DWork.SigmoidPath_Path.ap *
            q_3d_crane_cal_DWork.SigmoidPath_RWORK.Time;
          q_3d_crane_cal_B.SigmoidPath_o1 =
            q_3d_crane_cal_DWork.SigmoidPath_Path.x0 +
            (q_3d_crane_cal_DWork.SigmoidPath_Path.v0 + 0.5 *
             q_3d_crane_cal_DWork.SigmoidPath_Path.ap *
             q_3d_crane_cal_DWork.SigmoidPath_RWORK.Time) *
            q_3d_crane_cal_DWork.SigmoidPath_RWORK.Time;
        } else if (q_3d_crane_cal_DWork.SigmoidPath_RWORK.Time <
                   q_3d_crane_cal_DWork.SigmoidPath_Path.t2) {
          q_3d_crane_cal_B.SigmoidPath_o3 = 0;
          q_3d_crane_cal_B.SigmoidPath_o2 =
            q_3d_crane_cal_DWork.SigmoidPath_Path.vp;
          q_3d_crane_cal_B.SigmoidPath_o1 =
            q_3d_crane_cal_DWork.SigmoidPath_Path.x1 +
            q_3d_crane_cal_DWork.SigmoidPath_Path.vp *
            (q_3d_crane_cal_DWork.SigmoidPath_RWORK.Time -
             q_3d_crane_cal_DWork.SigmoidPath_Path.t1);
        } else if (q_3d_crane_cal_DWork.SigmoidPath_RWORK.Time <
                   q_3d_crane_cal_DWork.SigmoidPath_Path.t3) {
          q_3d_crane_cal_B.SigmoidPath_o3 =
            -q_3d_crane_cal_DWork.SigmoidPath_Path.ap;
          q_3d_crane_cal_B.SigmoidPath_o2 =
            q_3d_crane_cal_DWork.SigmoidPath_Path.vp -
            q_3d_crane_cal_DWork.SigmoidPath_Path.ap *
            (q_3d_crane_cal_DWork.SigmoidPath_RWORK.Time -
             q_3d_crane_cal_DWork.SigmoidPath_Path.t2);
          q_3d_crane_cal_B.SigmoidPath_o1 =
            q_3d_crane_cal_DWork.SigmoidPath_Path.x2 +
            (q_3d_crane_cal_DWork.SigmoidPath_Path.vp - 0.5 *
             q_3d_crane_cal_DWork.SigmoidPath_Path.ap *
             (q_3d_crane_cal_DWork.SigmoidPath_RWORK.Time -
              q_3d_crane_cal_DWork.SigmoidPath_Path.t2)) *
            (q_3d_crane_cal_DWork.SigmoidPath_RWORK.Time -
             q_3d_crane_cal_DWork.SigmoidPath_Path.t2);
        } else {
          q_3d_crane_cal_B.SigmoidPath_o3 = 0;
          q_3d_crane_cal_B.SigmoidPath_o2 = 0;
          q_3d_crane_cal_B.SigmoidPath_o1 =
            q_3d_crane_cal_DWork.SigmoidPath_Path.xd;/* always attainable */

          /* Mark the target as reached after the hold-off period */
          if ((q_3d_crane_cal_DWork.SigmoidPath_RWORK.Time -
               q_3d_crane_cal_DWork.SigmoidPath_Path.t3) >=
              q_3d_crane_cal_DWork.SigmoidPath_Path.hold_off)
            q_3d_crane_cal_B.SigmoidPath_o4 = 1;/* Assert Done signal */
        }

        /*  Increment the relative time RWork to the NEXT time step */
        q_3d_crane_cal_DWork.SigmoidPath_RWORK.Time += 0.001;
      }
    }
  }

  /* S-Function (sigmoid_path): '<S61>/Sigmoid Path' */
  /* S-Function Block: q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Tower/Triggered Sigmoid1/Sigmoid Path (sigmoid_path) */
  {
    if (tid == 0) {
      {
        /* Determine the correct step size for the output ports */

        /*  Check if the target position has changed or if it is the first
           simulation step, in which case we need to compute the initial
           trajectory. */
        if (q_3d_crane_cal_DWork.SigmoidPath_Flag_d == 1) {
          /*  Read the new sigmoid parameters and reset the flag */
          memcpy(&q_3d_crane_cal_DWork.SigmoidPath_Path_m,
                 &q_3d_crane_cal_DWork.SigmoidPath_NewPath_j, sizeof
                 (t_sigmoid_params));
          q_3d_crane_cal_DWork.SigmoidPath_Flag_d = 0;

          /*  Reset the relative time to one step (since the sigmoid params actually changed
             last step)  */
          q_3d_crane_cal_DWork.SigmoidPath_RWORK_p.Time = 0.001;

          /*  Reset the hold-off value too since we copied over it    */
          q_3d_crane_cal_DWork.SigmoidPath_Path_m.hold_off =
            q_3d_crane_cal_P.SigmoidPath_Hold_a;
        }

        /* Mark the target as not reached */
        q_3d_crane_cal_B.SigmoidPath_o4_i = 0;
        if (q_3d_crane_cal_DWork.SigmoidPath_RWORK_p.Time == 0) {
          q_3d_crane_cal_B.SigmoidPath_o3_h =
            q_3d_crane_cal_DWork.SigmoidPath_Path_m.ap;
          q_3d_crane_cal_B.SigmoidPath_o2_m =
            q_3d_crane_cal_DWork.SigmoidPath_Path_m.v0;
          q_3d_crane_cal_B.SigmoidPath_o1_i =
            q_3d_crane_cal_DWork.SigmoidPath_Path_m.x0;

          /*  Check if we are starting this trajectory at the target and the hold-off
             time is zero. If so, and the velocity and acceleration are zero, raise
             the Done signal cause we're there!  */
          if (q_3d_crane_cal_DWork.SigmoidPath_Path_m.x0 ==
              q_3d_crane_cal_DWork.SigmoidPath_Path_m.xd &&
              q_3d_crane_cal_DWork.SigmoidPath_Path_m.hold_off == 0
              && q_3d_crane_cal_DWork.SigmoidPath_Path_m.v0 == 0 &&
              q_3d_crane_cal_DWork.SigmoidPath_Path_m.ap == 0) {
            q_3d_crane_cal_B.SigmoidPath_o4_i = 1;
          }
        } else if (q_3d_crane_cal_DWork.SigmoidPath_RWORK_p.Time <
                   q_3d_crane_cal_DWork.SigmoidPath_Path_m.t1) {
          q_3d_crane_cal_B.SigmoidPath_o3_h =
            q_3d_crane_cal_DWork.SigmoidPath_Path_m.ap;
          q_3d_crane_cal_B.SigmoidPath_o2_m =
            q_3d_crane_cal_DWork.SigmoidPath_Path_m.v0 +
            q_3d_crane_cal_DWork.SigmoidPath_Path_m.ap *
            q_3d_crane_cal_DWork.SigmoidPath_RWORK_p.Time;
          q_3d_crane_cal_B.SigmoidPath_o1_i =
            q_3d_crane_cal_DWork.SigmoidPath_Path_m.x0 +
            (q_3d_crane_cal_DWork.SigmoidPath_Path_m.v0 + 0.5 *
             q_3d_crane_cal_DWork.SigmoidPath_Path_m.ap *
             q_3d_crane_cal_DWork.SigmoidPath_RWORK_p.Time) *
            q_3d_crane_cal_DWork.SigmoidPath_RWORK_p.Time;
        } else if (q_3d_crane_cal_DWork.SigmoidPath_RWORK_p.Time <
                   q_3d_crane_cal_DWork.SigmoidPath_Path_m.t2) {
          q_3d_crane_cal_B.SigmoidPath_o3_h = 0;
          q_3d_crane_cal_B.SigmoidPath_o2_m =
            q_3d_crane_cal_DWork.SigmoidPath_Path_m.vp;
          q_3d_crane_cal_B.SigmoidPath_o1_i =
            q_3d_crane_cal_DWork.SigmoidPath_Path_m.x1 +
            q_3d_crane_cal_DWork.SigmoidPath_Path_m.vp *
            (q_3d_crane_cal_DWork.SigmoidPath_RWORK_p.Time -
             q_3d_crane_cal_DWork.SigmoidPath_Path_m.t1);
        } else if (q_3d_crane_cal_DWork.SigmoidPath_RWORK_p.Time <
                   q_3d_crane_cal_DWork.SigmoidPath_Path_m.t3) {
          q_3d_crane_cal_B.SigmoidPath_o3_h =
            -q_3d_crane_cal_DWork.SigmoidPath_Path_m.ap;
          q_3d_crane_cal_B.SigmoidPath_o2_m =
            q_3d_crane_cal_DWork.SigmoidPath_Path_m.vp -
            q_3d_crane_cal_DWork.SigmoidPath_Path_m.ap *
            (q_3d_crane_cal_DWork.SigmoidPath_RWORK_p.Time -
             q_3d_crane_cal_DWork.SigmoidPath_Path_m.t2);
          q_3d_crane_cal_B.SigmoidPath_o1_i =
            q_3d_crane_cal_DWork.SigmoidPath_Path_m.x2 +
            (q_3d_crane_cal_DWork.SigmoidPath_Path_m.vp - 0.5 *
             q_3d_crane_cal_DWork.SigmoidPath_Path_m.ap *
             (q_3d_crane_cal_DWork.SigmoidPath_RWORK_p.Time -
              q_3d_crane_cal_DWork.SigmoidPath_Path_m.t2)) *
            (q_3d_crane_cal_DWork.SigmoidPath_RWORK_p.Time -
             q_3d_crane_cal_DWork.SigmoidPath_Path_m.t2);
        } else {
          q_3d_crane_cal_B.SigmoidPath_o3_h = 0;
          q_3d_crane_cal_B.SigmoidPath_o2_m = 0;
          q_3d_crane_cal_B.SigmoidPath_o1_i =
            q_3d_crane_cal_DWork.SigmoidPath_Path_m.xd;/* always attainable */

          /* Mark the target as reached after the hold-off period */
          if ((q_3d_crane_cal_DWork.SigmoidPath_RWORK_p.Time -
               q_3d_crane_cal_DWork.SigmoidPath_Path_m.t3) >=
              q_3d_crane_cal_DWork.SigmoidPath_Path_m.hold_off)
            q_3d_crane_cal_B.SigmoidPath_o4_i = 1;/* Assert Done signal */
        }

        /*  Increment the relative time RWork to the NEXT time step */
        q_3d_crane_cal_DWork.SigmoidPath_RWORK_p.Time += 0.001;
      }
    }
  }

  /* MultiPortSwitch: '<S50>/Multiport Switch' incorporates:
   *  Gain: '<S59>/Amplitude  (deg//s)'
   *  Sum: '<S58>/Sum'
   */
  switch ((int32_T)(rtb_GoCW + rtb_GoCCW)) {
   case 0:
    rtb_GoCCW = q_3d_crane_cal_P.Amplitudedegs_Gain * rtb_DiscreteTimeIntegrator;
    break;

   case 1:
    rtb_GoCCW = q_3d_crane_cal_B.SigmoidPath_o1;
    break;

   default:
    rtb_GoCCW = q_3d_crane_cal_B.SigmoidPath_o1_i;
    break;
  }

  /* End of MultiPortSwitch: '<S50>/Multiport Switch' */

  /* Gain: '<S57>/Gain1' */
  rtb_GoCW = q_3d_crane_cal_P.Gain1_Gain * rtb_GoCCW;

  /* Gain: '<S50>/Tower Setpoint  Vector' */
  rtb_TowerSetpointVector_idx = q_3d_crane_cal_P.TowerSetpointVector_Gain[0] *
    rtb_GoCW;
  rtb_TowerSetpointVector_idx_0 = q_3d_crane_cal_P.TowerSetpointVector_Gain[1] *
    rtb_GoCW;

  /* DiscreteTransferFcn: '<S36>/Discrete Transfer Fcn' */
  q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp =
    (q_3d_crane_cal_B.EncoderCalibration[0] -
     q_3d_crane_cal_P.DiscreteTransferFcn_Denominator[1] *
     q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE) /
    q_3d_crane_cal_P.DiscreteTransferFcn_Denominator[0];

  /* DiscreteTransferFcn: '<S35>/Discrete Transfer Fcn' */
  q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_e =
    (q_3d_crane_cal_B.EncoderCalibration[3] -
     q_3d_crane_cal_P.DiscreteTransferFcn_Denominat_a[1] *
     q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_p) /
    q_3d_crane_cal_P.DiscreteTransferFcn_Denominat_a[0];

  /* Sum: '<S13>/Tower Error' incorporates:
   *  DiscreteTransferFcn: '<S35>/Discrete Transfer Fcn'
   *  DiscreteTransferFcn: '<S36>/Discrete Transfer Fcn'
   *  Gain: '<S50>/Tower Setpoint  Vector'
   */
  rtb_TowerError_idx = rtb_TowerSetpointVector_idx -
    q_3d_crane_cal_B.EncoderCalibration[0];
  rtb_DiscreteTimeIntegrator = rtb_TowerSetpointVector_idx_0 -
    q_3d_crane_cal_B.EncoderCalibration[3];
  rtb_TowerError_idx_0 = q_3d_crane_cal_P.TowerSetpointVector_Gain[2] * rtb_GoCW
    - (q_3d_crane_cal_P.DiscreteTransferFcn_Numerator[0] *
       q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp +
       q_3d_crane_cal_P.DiscreteTransferFcn_Numerator[1] *
       q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE);
  rtb_GoCW = q_3d_crane_cal_P.TowerSetpointVector_Gain[3] * rtb_GoCW -
    (q_3d_crane_cal_P.DiscreteTransferFcn_Numerator_o[0] *
     q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_e +
     q_3d_crane_cal_P.DiscreteTransferFcn_Numerator_o[1] *
     q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_p);

  /* MultiPortSwitch: '<S71>/Multiport Switch' incorporates:
   *  Constant: '<Root>/Full-State'
   *  Constant: '<S71>/Constant: FS'
   *  Constant: '<S71>/Constant: PS'
   *  Product: '<S71>/Full-state'
   *  Product: '<S71>/Partial-state'
   */
  if ((int32_T)q_3d_crane_cal_P.FullState_Value == 0) {
    rtb_MultiportSwitch_idx = q_3d_crane_cal_P.ConstantPS_Value_c[0] *
      rtb_TowerError_idx;
    rtb_MultiportSwitch_idx_0 = q_3d_crane_cal_P.ConstantPS_Value_c[1] *
      rtb_DiscreteTimeIntegrator;
    rtb_MultiportSwitch_idx_1 = q_3d_crane_cal_P.ConstantPS_Value_c[2] *
      rtb_TowerError_idx_0;
    rtb_DiscreteTimeIntegrator = q_3d_crane_cal_P.ConstantPS_Value_c[3] *
      rtb_GoCW;
  } else {
    rtb_MultiportSwitch_idx = rtb_TowerError_idx *
      q_3d_crane_cal_P.ConstantFS_Value_o[0];
    rtb_MultiportSwitch_idx_0 = rtb_DiscreteTimeIntegrator *
      q_3d_crane_cal_P.ConstantFS_Value_o[1];
    rtb_MultiportSwitch_idx_1 = rtb_TowerError_idx_0 *
      q_3d_crane_cal_P.ConstantFS_Value_o[2];
    rtb_DiscreteTimeIntegrator = rtb_GoCW * q_3d_crane_cal_P.ConstantFS_Value_o
      [3];
  }

  /* End of MultiPortSwitch: '<S71>/Multiport Switch' */

  /* Product: '<S72>/Product' incorporates:
   *  Constant: '<S72>/Constant'
   */
  rtb_MultiportSwitch_idx *= q_3d_crane_cal_P.Constant_Value_i;
  rtb_MultiportSwitch_idx_0 *= rtb_MotorDirection2;
  rtb_MultiportSwitch_idx_1 *= q_3d_crane_cal_P.Constant_Value_i;

  /* Gain: '<S2>/Motor  Direction3' incorporates:
   *  Gain: '<S13>/Tower Control  Gain'
   *  Product: '<S72>/Product'
   */
  rtb_MotorDirection3 = (((q_3d_crane_cal_P.TowerControlGain_Gain[0] *
    rtb_MultiportSwitch_idx + q_3d_crane_cal_P.TowerControlGain_Gain[1] *
    rtb_MultiportSwitch_idx_0) + q_3d_crane_cal_P.TowerControlGain_Gain[2] *
    rtb_MultiportSwitch_idx_1) + rtb_MotorDirection2 *
    rtb_DiscreteTimeIntegrator * q_3d_crane_cal_P.TowerControlGain_Gain[3]) *
    q_3d_crane_cal_P.MotorDirection3_Gain;

  /* Memory: '<S69>/Memory' */
  rtb_AllEncodersReset = q_3d_crane_cal_DWork.Memory_PreviousInput_e;

  /* Logic: '<S69>/Logical Operator' incorporates:
   *  UnitDelay: '<S51>/Unit Delay'
   */
  q_3d_crane_cal_B.LogicalOperator_d = (q_3d_crane_cal_DWork.UnitDelay_DSTATE ||
    rtb_AllEncodersReset);

  /* MultiPortSwitch: '<S66>/Multiport Switch' incorporates:
   *  Constant: '<S66>/Go to Home'
   *  DiscreteIntegrator: '<S68>/Discrete-Time Integrator'
   *  Gain: '<S68>/Amplitude  (m//s)'
   */
  if (q_3d_crane_cal_B.LogicalOperator_d == FALSE) {
    q_3d_crane_cal_B.MultiportSwitch = q_3d_crane_cal_P.Amplitudems_Gain_f *
      q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_l;
  } else {
    q_3d_crane_cal_B.MultiportSwitch = q_3d_crane_cal_P.GotoHome_Value_n;
  }

  /* End of MultiPortSwitch: '<S66>/Multiport Switch' */

  /* S-Function (sigmoid_path): '<S67>/Sigmoid Path' */
  /* S-Function Block: q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Trolley/Triggered Sigmoid/Sigmoid Path (sigmoid_path) */
  {
    if (tid == 0) {
      {
        /* Determine the correct step size for the output ports */

        /*  Check if the target position has changed or if it is the first
           simulation step, in which case we need to compute the initial
           trajectory. */
        if (q_3d_crane_cal_DWork.SigmoidPath_Flag_m == 1) {
          /*  Read the new sigmoid parameters and reset the flag */
          memcpy(&q_3d_crane_cal_DWork.SigmoidPath_Path_j,
                 &q_3d_crane_cal_DWork.SigmoidPath_NewPath_m, sizeof
                 (t_sigmoid_params));
          q_3d_crane_cal_DWork.SigmoidPath_Flag_m = 0;

          /*  Reset the relative time to one step (since the sigmoid params actually changed
             last step)  */
          q_3d_crane_cal_DWork.SigmoidPath_RWORK_e.Time = 0.001;

          /*  Reset the hold-off value too since we copied over it    */
          q_3d_crane_cal_DWork.SigmoidPath_Path_j.hold_off =
            q_3d_crane_cal_P.SigmoidPath_Hold_b;
        }

        /* Mark the target as not reached */
        q_3d_crane_cal_B.SigmoidPath_o4_n = 0;
        if (q_3d_crane_cal_DWork.SigmoidPath_RWORK_e.Time == 0) {
          q_3d_crane_cal_B.SigmoidPath_o3_d =
            q_3d_crane_cal_DWork.SigmoidPath_Path_j.ap;
          q_3d_crane_cal_B.SigmoidPath_o2_i =
            q_3d_crane_cal_DWork.SigmoidPath_Path_j.v0;
          q_3d_crane_cal_B.SigmoidPath_o1_l =
            q_3d_crane_cal_DWork.SigmoidPath_Path_j.x0;

          /*  Check if we are starting this trajectory at the target and the hold-off
             time is zero. If so, and the velocity and acceleration are zero, raise
             the Done signal cause we're there!  */
          if (q_3d_crane_cal_DWork.SigmoidPath_Path_j.x0 ==
              q_3d_crane_cal_DWork.SigmoidPath_Path_j.xd &&
              q_3d_crane_cal_DWork.SigmoidPath_Path_j.hold_off == 0
              && q_3d_crane_cal_DWork.SigmoidPath_Path_j.v0 == 0 &&
              q_3d_crane_cal_DWork.SigmoidPath_Path_j.ap == 0) {
            q_3d_crane_cal_B.SigmoidPath_o4_n = 1;
          }
        } else if (q_3d_crane_cal_DWork.SigmoidPath_RWORK_e.Time <
                   q_3d_crane_cal_DWork.SigmoidPath_Path_j.t1) {
          q_3d_crane_cal_B.SigmoidPath_o3_d =
            q_3d_crane_cal_DWork.SigmoidPath_Path_j.ap;
          q_3d_crane_cal_B.SigmoidPath_o2_i =
            q_3d_crane_cal_DWork.SigmoidPath_Path_j.v0 +
            q_3d_crane_cal_DWork.SigmoidPath_Path_j.ap *
            q_3d_crane_cal_DWork.SigmoidPath_RWORK_e.Time;
          q_3d_crane_cal_B.SigmoidPath_o1_l =
            q_3d_crane_cal_DWork.SigmoidPath_Path_j.x0 +
            (q_3d_crane_cal_DWork.SigmoidPath_Path_j.v0 + 0.5 *
             q_3d_crane_cal_DWork.SigmoidPath_Path_j.ap *
             q_3d_crane_cal_DWork.SigmoidPath_RWORK_e.Time) *
            q_3d_crane_cal_DWork.SigmoidPath_RWORK_e.Time;
        } else if (q_3d_crane_cal_DWork.SigmoidPath_RWORK_e.Time <
                   q_3d_crane_cal_DWork.SigmoidPath_Path_j.t2) {
          q_3d_crane_cal_B.SigmoidPath_o3_d = 0;
          q_3d_crane_cal_B.SigmoidPath_o2_i =
            q_3d_crane_cal_DWork.SigmoidPath_Path_j.vp;
          q_3d_crane_cal_B.SigmoidPath_o1_l =
            q_3d_crane_cal_DWork.SigmoidPath_Path_j.x1 +
            q_3d_crane_cal_DWork.SigmoidPath_Path_j.vp *
            (q_3d_crane_cal_DWork.SigmoidPath_RWORK_e.Time -
             q_3d_crane_cal_DWork.SigmoidPath_Path_j.t1);
        } else if (q_3d_crane_cal_DWork.SigmoidPath_RWORK_e.Time <
                   q_3d_crane_cal_DWork.SigmoidPath_Path_j.t3) {
          q_3d_crane_cal_B.SigmoidPath_o3_d =
            -q_3d_crane_cal_DWork.SigmoidPath_Path_j.ap;
          q_3d_crane_cal_B.SigmoidPath_o2_i =
            q_3d_crane_cal_DWork.SigmoidPath_Path_j.vp -
            q_3d_crane_cal_DWork.SigmoidPath_Path_j.ap *
            (q_3d_crane_cal_DWork.SigmoidPath_RWORK_e.Time -
             q_3d_crane_cal_DWork.SigmoidPath_Path_j.t2);
          q_3d_crane_cal_B.SigmoidPath_o1_l =
            q_3d_crane_cal_DWork.SigmoidPath_Path_j.x2 +
            (q_3d_crane_cal_DWork.SigmoidPath_Path_j.vp - 0.5 *
             q_3d_crane_cal_DWork.SigmoidPath_Path_j.ap *
             (q_3d_crane_cal_DWork.SigmoidPath_RWORK_e.Time -
              q_3d_crane_cal_DWork.SigmoidPath_Path_j.t2)) *
            (q_3d_crane_cal_DWork.SigmoidPath_RWORK_e.Time -
             q_3d_crane_cal_DWork.SigmoidPath_Path_j.t2);
        } else {
          q_3d_crane_cal_B.SigmoidPath_o3_d = 0;
          q_3d_crane_cal_B.SigmoidPath_o2_i = 0;
          q_3d_crane_cal_B.SigmoidPath_o1_l =
            q_3d_crane_cal_DWork.SigmoidPath_Path_j.xd;/* always attainable */

          /* Mark the target as reached after the hold-off period */
          if ((q_3d_crane_cal_DWork.SigmoidPath_RWORK_e.Time -
               q_3d_crane_cal_DWork.SigmoidPath_Path_j.t3) >=
              q_3d_crane_cal_DWork.SigmoidPath_Path_j.hold_off)
            q_3d_crane_cal_B.SigmoidPath_o4_n = 1;/* Assert Done signal */
        }

        /*  Increment the relative time RWork to the NEXT time step */
        q_3d_crane_cal_DWork.SigmoidPath_RWORK_e.Time += 0.001;
      }
    }
  }

  /* MultiPortSwitch: '<S51>/Multiport Switch1' */
  if (q_3d_crane_cal_B.LogicalOperator_d == FALSE) {
    q_3d_crane_cal_B.MultiportSwitch1 = q_3d_crane_cal_B.MultiportSwitch;
  } else {
    q_3d_crane_cal_B.MultiportSwitch1 = q_3d_crane_cal_B.SigmoidPath_o1_l;
  }

  /* End of MultiPortSwitch: '<S51>/Multiport Switch1' */

  /* DiscreteTransferFcn: '<S33>/Discrete Transfer Fcn' */
  q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_f =
    (q_3d_crane_cal_B.EncoderCalibration[1] -
     q_3d_crane_cal_P.DiscreteTransferFcn_Denominat_b[1] *
     q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_e) /
    q_3d_crane_cal_P.DiscreteTransferFcn_Denominat_b[0];
  q_3d_crane_cal_B.DiscreteTransferFcn =
    q_3d_crane_cal_P.DiscreteTransferFcn_Numerator_d[0] *
    q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_f +
    q_3d_crane_cal_P.DiscreteTransferFcn_Numerator_d[1] *
    q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_e;

  /* DiscreteTransferFcn: '<S32>/Discrete Transfer Fcn' */
  q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_l =
    (q_3d_crane_cal_B.EncoderCalibration[4] -
     q_3d_crane_cal_P.DiscreteTransferFcn_Denominat_i[1] *
     q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_h) /
    q_3d_crane_cal_P.DiscreteTransferFcn_Denominat_i[0];
  rtb_GoCCW = q_3d_crane_cal_P.DiscreteTransferFcn_Numerator_n[0] *
    q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_l +
    q_3d_crane_cal_P.DiscreteTransferFcn_Numerator_n[1] *
    q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_h;

  /* DiscreteTransferFcn: '<S31>/Discrete Transfer Fcn' */
  q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_d =
    (q_3d_crane_cal_B.EncoderCalibration[1] -
     q_3d_crane_cal_P.DiscreteTransferFcn_Denominat_n[1] *
     q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_f) /
    q_3d_crane_cal_P.DiscreteTransferFcn_Denominat_n[0];

  /* DiscreteTransferFcn: '<S30>/Discrete Transfer Fcn' */
  q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_c =
    (q_3d_crane_cal_B.EncoderCalibration[4] -
     q_3d_crane_cal_P.DiscreteTransferFcn_Denomina_ny[1] *
     q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_k) /
    q_3d_crane_cal_P.DiscreteTransferFcn_Denomina_ny[0];
  rtb_SampleTime = q_3d_crane_cal_P.DiscreteTransferFcn_Numerator_g[0] *
    q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_c +
    q_3d_crane_cal_P.DiscreteTransferFcn_Numerator_g[1] *
    q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_k;

  /* Sum: '<S5>/Error' incorporates:
   *  Constant: '<S51>/Constant'
   *  DiscreteTransferFcn: '<S31>/Discrete Transfer Fcn'
   */
  rtb_Error_idx = q_3d_crane_cal_B.MultiportSwitch1 -
    q_3d_crane_cal_B.DiscreteTransferFcn;
  rtb_DiscreteTimeIntegrator = q_3d_crane_cal_P.Constant_Value_hq - rtb_GoCCW;
  rtb_Error_idx_0 = q_3d_crane_cal_B.SigmoidPath_o2_i -
    (q_3d_crane_cal_P.DiscreteTransferFcn_Numerato_ne[0] *
     q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_d +
     q_3d_crane_cal_P.DiscreteTransferFcn_Numerato_ne[1] *
     q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_f);
  rtb_GoCW = q_3d_crane_cal_P.Constant_Value_hq - rtb_SampleTime;

  /* MultiPortSwitch: '<S23>/Multiport Switch' incorporates:
   *  Constant: '<Root>/Full-State'
   *  Constant: '<S23>/Constant: FS'
   *  Constant: '<S23>/Constant: PS'
   *  Product: '<S23>/Full-state'
   *  Product: '<S23>/Partial-state'
   */
  if ((int32_T)q_3d_crane_cal_P.FullState_Value == 0) {
    rtb_MultiportSwitch_idx = q_3d_crane_cal_P.ConstantPS_Value[0] *
      rtb_Error_idx;
    rtb_MultiportSwitch_idx_0 = q_3d_crane_cal_P.ConstantPS_Value[1] *
      rtb_DiscreteTimeIntegrator;
    rtb_MultiportSwitch_idx_1 = q_3d_crane_cal_P.ConstantPS_Value[2] *
      rtb_Error_idx_0;
    rtb_DiscreteTimeIntegrator = q_3d_crane_cal_P.ConstantPS_Value[3] * rtb_GoCW;
  } else {
    rtb_MultiportSwitch_idx = rtb_Error_idx * q_3d_crane_cal_P.ConstantFS_Value
      [0];
    rtb_MultiportSwitch_idx_0 = rtb_DiscreteTimeIntegrator *
      q_3d_crane_cal_P.ConstantFS_Value[1];
    rtb_MultiportSwitch_idx_1 = rtb_Error_idx_0 *
      q_3d_crane_cal_P.ConstantFS_Value[2];
    rtb_DiscreteTimeIntegrator = rtb_GoCW * q_3d_crane_cal_P.ConstantFS_Value[3];
  }

  /* End of MultiPortSwitch: '<S23>/Multiport Switch' */

  /* Gain: '<S5>/Jib Control  Gain' */
  rtb_SampleTime = ((q_3d_crane_cal_P.JibControlGain_Gain[0] *
                     rtb_MultiportSwitch_idx +
                     q_3d_crane_cal_P.JibControlGain_Gain[1] *
                     rtb_MultiportSwitch_idx_0) +
                    q_3d_crane_cal_P.JibControlGain_Gain[2] *
                    rtb_MultiportSwitch_idx_1) +
    q_3d_crane_cal_P.JibControlGain_Gain[3] * rtb_DiscreteTimeIntegrator;

  /* Gain: '<S2>/Motor  Direction1' incorporates:
   *  DiscreteIntegrator: '<S5>/Discrete-Time Integrator'
   *  Sum: '<S5>/Add'
   */
  rtb_SampleTime = (rtb_SampleTime +
                    q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_o) *
    q_3d_crane_cal_P.MotorDirection1_Gain;

  /* UnitDelay: '<S52>/Unit Delay' */
  rtb_UnitDelay_e = q_3d_crane_cal_DWork.UnitDelay_DSTATE_g;

  /* RelationalOperator: '<S38>/Compare' incorporates:
   *  Constant: '<S38>/Constant'
   */
  q_3d_crane_cal_B.Compare_a = (rtb_HILReadTimebase_o3[3] <
    q_3d_crane_cal_P.Constant_Value_j);

  /* Memory: '<S55>/Memory' */
  rtb_AllEncodersReset = q_3d_crane_cal_DWork.Memory_PreviousInput_f;

  /* Logic: '<S55>/Logical Operator' */
  q_3d_crane_cal_B.LogicalOperator_a = (q_3d_crane_cal_B.Compare_a ||
    rtb_AllEncodersReset);

  /* MultiPortSwitch: '<S52>/Multiport Switch' incorporates:
   *  Constant: '<S52>/Go to Home'
   *  DiscreteIntegrator: '<S54>/Discrete-Time Integrator'
   *  Gain: '<S54>/Amplitude  (m//s)'
   */
  if (q_3d_crane_cal_B.LogicalOperator_a == FALSE) {
    q_3d_crane_cal_B.MultiportSwitch_h = q_3d_crane_cal_P.Amplitudems_Gain *
      q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_h;
  } else {
    q_3d_crane_cal_B.MultiportSwitch_h = q_3d_crane_cal_P.GotoHome_Value;
  }

  /* End of MultiPortSwitch: '<S52>/Multiport Switch' */

  /* S-Function (sigmoid_path): '<S53>/Sigmoid Path' */
  /* S-Function Block: q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Payload/Triggered Sigmoid/Sigmoid Path (sigmoid_path) */
  {
    if (tid == 0) {
      {
        /* Determine the correct step size for the output ports */

        /*  Check if the target position has changed or if it is the first
           simulation step, in which case we need to compute the initial
           trajectory. */
        if (q_3d_crane_cal_DWork.SigmoidPath_Flag_l == 1) {
          /*  Read the new sigmoid parameters and reset the flag */
          memcpy(&q_3d_crane_cal_DWork.SigmoidPath_Path_c,
                 &q_3d_crane_cal_DWork.SigmoidPath_NewPath_c, sizeof
                 (t_sigmoid_params));
          q_3d_crane_cal_DWork.SigmoidPath_Flag_l = 0;

          /*  Reset the relative time to one step (since the sigmoid params actually changed
             last step)  */
          q_3d_crane_cal_DWork.SigmoidPath_RWORK_h.Time = 0.001;

          /*  Reset the hold-off value too since we copied over it    */
          q_3d_crane_cal_DWork.SigmoidPath_Path_c.hold_off =
            q_3d_crane_cal_P.SigmoidPath_Hold_m;
        }

        /* Mark the target as not reached */
        q_3d_crane_cal_B.SigmoidPath_o4_nh = 0;
        if (q_3d_crane_cal_DWork.SigmoidPath_RWORK_h.Time == 0) {
          q_3d_crane_cal_B.SigmoidPath_o3_dc =
            q_3d_crane_cal_DWork.SigmoidPath_Path_c.ap;
          q_3d_crane_cal_B.SigmoidPath_o2_e =
            q_3d_crane_cal_DWork.SigmoidPath_Path_c.v0;
          q_3d_crane_cal_B.SigmoidPath_o1_c =
            q_3d_crane_cal_DWork.SigmoidPath_Path_c.x0;

          /*  Check if we are starting this trajectory at the target and the hold-off
             time is zero. If so, and the velocity and acceleration are zero, raise
             the Done signal cause we're there!  */
          if (q_3d_crane_cal_DWork.SigmoidPath_Path_c.x0 ==
              q_3d_crane_cal_DWork.SigmoidPath_Path_c.xd &&
              q_3d_crane_cal_DWork.SigmoidPath_Path_c.hold_off == 0
              && q_3d_crane_cal_DWork.SigmoidPath_Path_c.v0 == 0 &&
              q_3d_crane_cal_DWork.SigmoidPath_Path_c.ap == 0) {
            q_3d_crane_cal_B.SigmoidPath_o4_nh = 1;
          }
        } else if (q_3d_crane_cal_DWork.SigmoidPath_RWORK_h.Time <
                   q_3d_crane_cal_DWork.SigmoidPath_Path_c.t1) {
          q_3d_crane_cal_B.SigmoidPath_o3_dc =
            q_3d_crane_cal_DWork.SigmoidPath_Path_c.ap;
          q_3d_crane_cal_B.SigmoidPath_o2_e =
            q_3d_crane_cal_DWork.SigmoidPath_Path_c.v0 +
            q_3d_crane_cal_DWork.SigmoidPath_Path_c.ap *
            q_3d_crane_cal_DWork.SigmoidPath_RWORK_h.Time;
          q_3d_crane_cal_B.SigmoidPath_o1_c =
            q_3d_crane_cal_DWork.SigmoidPath_Path_c.x0 +
            (q_3d_crane_cal_DWork.SigmoidPath_Path_c.v0 + 0.5 *
             q_3d_crane_cal_DWork.SigmoidPath_Path_c.ap *
             q_3d_crane_cal_DWork.SigmoidPath_RWORK_h.Time) *
            q_3d_crane_cal_DWork.SigmoidPath_RWORK_h.Time;
        } else if (q_3d_crane_cal_DWork.SigmoidPath_RWORK_h.Time <
                   q_3d_crane_cal_DWork.SigmoidPath_Path_c.t2) {
          q_3d_crane_cal_B.SigmoidPath_o3_dc = 0;
          q_3d_crane_cal_B.SigmoidPath_o2_e =
            q_3d_crane_cal_DWork.SigmoidPath_Path_c.vp;
          q_3d_crane_cal_B.SigmoidPath_o1_c =
            q_3d_crane_cal_DWork.SigmoidPath_Path_c.x1 +
            q_3d_crane_cal_DWork.SigmoidPath_Path_c.vp *
            (q_3d_crane_cal_DWork.SigmoidPath_RWORK_h.Time -
             q_3d_crane_cal_DWork.SigmoidPath_Path_c.t1);
        } else if (q_3d_crane_cal_DWork.SigmoidPath_RWORK_h.Time <
                   q_3d_crane_cal_DWork.SigmoidPath_Path_c.t3) {
          q_3d_crane_cal_B.SigmoidPath_o3_dc =
            -q_3d_crane_cal_DWork.SigmoidPath_Path_c.ap;
          q_3d_crane_cal_B.SigmoidPath_o2_e =
            q_3d_crane_cal_DWork.SigmoidPath_Path_c.vp -
            q_3d_crane_cal_DWork.SigmoidPath_Path_c.ap *
            (q_3d_crane_cal_DWork.SigmoidPath_RWORK_h.Time -
             q_3d_crane_cal_DWork.SigmoidPath_Path_c.t2);
          q_3d_crane_cal_B.SigmoidPath_o1_c =
            q_3d_crane_cal_DWork.SigmoidPath_Path_c.x2 +
            (q_3d_crane_cal_DWork.SigmoidPath_Path_c.vp - 0.5 *
             q_3d_crane_cal_DWork.SigmoidPath_Path_c.ap *
             (q_3d_crane_cal_DWork.SigmoidPath_RWORK_h.Time -
              q_3d_crane_cal_DWork.SigmoidPath_Path_c.t2)) *
            (q_3d_crane_cal_DWork.SigmoidPath_RWORK_h.Time -
             q_3d_crane_cal_DWork.SigmoidPath_Path_c.t2);
        } else {
          q_3d_crane_cal_B.SigmoidPath_o3_dc = 0;
          q_3d_crane_cal_B.SigmoidPath_o2_e = 0;
          q_3d_crane_cal_B.SigmoidPath_o1_c =
            q_3d_crane_cal_DWork.SigmoidPath_Path_c.xd;/* always attainable */

          /* Mark the target as reached after the hold-off period */
          if ((q_3d_crane_cal_DWork.SigmoidPath_RWORK_h.Time -
               q_3d_crane_cal_DWork.SigmoidPath_Path_c.t3) >=
              q_3d_crane_cal_DWork.SigmoidPath_Path_c.hold_off)
            q_3d_crane_cal_B.SigmoidPath_o4_nh = 1;/* Assert Done signal */
        }

        /*  Increment the relative time RWork to the NEXT time step */
        q_3d_crane_cal_DWork.SigmoidPath_RWORK_h.Time += 0.001;
      }
    }
  }

  /* MultiPortSwitch: '<S49>/Multiport Switch' */
  if (rtb_UnitDelay_e == FALSE) {
    rtb_MotorDirection2 = q_3d_crane_cal_B.MultiportSwitch_h;
  } else {
    rtb_MotorDirection2 = q_3d_crane_cal_B.SigmoidPath_o1_c;
  }

  /* End of MultiPortSwitch: '<S49>/Multiport Switch' */

  /* Gain: '<S49>/Payload Setpoint  Vector' */
  q_3d_crane_cal_B.PayloadSetpointVector[0] =
    q_3d_crane_cal_P.PayloadSetpointVector_Gain[0] * rtb_MotorDirection2;
  q_3d_crane_cal_B.PayloadSetpointVector[1] =
    q_3d_crane_cal_P.PayloadSetpointVector_Gain[1] * rtb_MotorDirection2;

  /* DiscreteTransferFcn: '<S34>/Discrete Transfer Fcn' */
  q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_dt =
    (q_3d_crane_cal_B.EncoderCalibration[2] -
     q_3d_crane_cal_P.DiscreteTransferFcn_Denominat_m[1] *
     q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_kp) /
    q_3d_crane_cal_P.DiscreteTransferFcn_Denominat_m[0];

  /* Sum: '<S6>/Subtract' incorporates:
   *  DiscreteTransferFcn: '<S34>/Discrete Transfer Fcn'
   */
  rtb_DiscreteTimeIntegrator = q_3d_crane_cal_B.PayloadSetpointVector[0] -
    q_3d_crane_cal_B.EncoderCalibration[2];
  rtb_GoCW = q_3d_crane_cal_B.PayloadSetpointVector[1] -
    (q_3d_crane_cal_P.DiscreteTransferFcn_Numerator_p[0] *
     q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_dt +
     q_3d_crane_cal_P.DiscreteTransferFcn_Numerator_p[1] *
     q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_kp);

  /* Gain: '<S2>/Motor  Direction2' incorporates:
   *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator'
   *  Gain: '<S6>/Payload Proportional  Gain'
   *  Gain: '<S6>/Payload Velocity  Gain'
   *  Sum: '<S6>/Add'
   */
  rtb_MotorDirection2 = ((q_3d_crane_cal_P.PayloadProportionalGain_Gain *
    rtb_DiscreteTimeIntegrator +
    q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_m) +
    q_3d_crane_cal_P.PayloadVelocityGain_Gain * rtb_GoCW) *
    q_3d_crane_cal_P.MotorDirection2_Gain;

  /* Saturate: '<S2>/AMPAQ Current  Limit (A)' */
  rtb_DACLimitV[0] = rtb_MotorDirection3 >=
    q_3d_crane_cal_P.AMPAQCurrentLimitA_UpperSat ?
    q_3d_crane_cal_P.AMPAQCurrentLimitA_UpperSat : rtb_MotorDirection3 <=
    q_3d_crane_cal_P.AMPAQCurrentLimitA_LowerSat ?
    q_3d_crane_cal_P.AMPAQCurrentLimitA_LowerSat : rtb_MotorDirection3;
  rtb_DACLimitV[1] = rtb_SampleTime >=
    q_3d_crane_cal_P.AMPAQCurrentLimitA_UpperSat ?
    q_3d_crane_cal_P.AMPAQCurrentLimitA_UpperSat : rtb_SampleTime <=
    q_3d_crane_cal_P.AMPAQCurrentLimitA_LowerSat ?
    q_3d_crane_cal_P.AMPAQCurrentLimitA_LowerSat : rtb_SampleTime;
  rtb_DACLimitV[2] = rtb_MotorDirection2 >=
    q_3d_crane_cal_P.AMPAQCurrentLimitA_UpperSat ?
    q_3d_crane_cal_P.AMPAQCurrentLimitA_UpperSat : rtb_MotorDirection2 <=
    q_3d_crane_cal_P.AMPAQCurrentLimitA_LowerSat ?
    q_3d_crane_cal_P.AMPAQCurrentLimitA_LowerSat : rtb_MotorDirection2;

  /* Gain: '<S2>/Amps to Volts' incorporates:
   *  Gain: '<S2>/Motor  Direction'
   */
  rtb_DACLimitV[0] = q_3d_crane_cal_P.MotorDirection_Gain * rtb_DACLimitV[0] *
    q_3d_crane_cal_P.AmpstoVolts_Gain;
  rtb_DACLimitV[1] = q_3d_crane_cal_P.MotorDirection_Gain * rtb_DACLimitV[1] *
    q_3d_crane_cal_P.AmpstoVolts_Gain;
  rtb_DACLimitV[2] = q_3d_crane_cal_P.MotorDirection_Gain * rtb_DACLimitV[2] *
    q_3d_crane_cal_P.AmpstoVolts_Gain;

  /* Saturate: '<S2>/DAC Limit (V)' */
  rtb_DACLimitV[0] = rtb_DACLimitV[0] >= q_3d_crane_cal_P.DACLimitV_UpperSat ?
    q_3d_crane_cal_P.DACLimitV_UpperSat : rtb_DACLimitV[0] <=
    q_3d_crane_cal_P.DACLimitV_LowerSat ? q_3d_crane_cal_P.DACLimitV_LowerSat :
    rtb_DACLimitV[0];
  rtb_DACLimitV[1] = rtb_DACLimitV[1] >= q_3d_crane_cal_P.DACLimitV_UpperSat ?
    q_3d_crane_cal_P.DACLimitV_UpperSat : rtb_DACLimitV[1] <=
    q_3d_crane_cal_P.DACLimitV_LowerSat ? q_3d_crane_cal_P.DACLimitV_LowerSat :
    rtb_DACLimitV[1];
  rtb_DACLimitV[2] = rtb_DACLimitV[2] >= q_3d_crane_cal_P.DACLimitV_UpperSat ?
    q_3d_crane_cal_P.DACLimitV_UpperSat : rtb_DACLimitV[2] <=
    q_3d_crane_cal_P.DACLimitV_LowerSat ? q_3d_crane_cal_P.DACLimitV_LowerSat :
    rtb_DACLimitV[2];

  /* S-Function (hil_write_block): '<S1>/HIL Write' */

  /* S-Function Block: q_3d_crane_cal/3-DOF Crane HIL/HIL Write (hil_write_block) */
  {
    t_error result;
    q_3d_crane_cal_DWork.HILWrite_DigitalBuffer[0] =
      (q_3d_crane_cal_P.EnableAmp_Value[0] != 0);
    q_3d_crane_cal_DWork.HILWrite_DigitalBuffer[1] =
      (q_3d_crane_cal_P.EnableAmp_Value[1] != 0);
    q_3d_crane_cal_DWork.HILWrite_DigitalBuffer[2] =
      (q_3d_crane_cal_P.EnableAmp_Value[2] != 0);
    q_3d_crane_cal_DWork.HILWrite_DigitalBuffer[3] =
      (q_3d_crane_cal_P.EnableAmp_Value[3] != 0);
    result = hil_write(q_3d_crane_cal_DWork.HILInitialize_Card,
                       q_3d_crane_cal_P.HILWrite_AnalogChannels, 3U,
                       NULL, 0U,
                       q_3d_crane_cal_P.HILWrite_DigitalChannels, 4U,
                       NULL, 0U,
                       rtb_DACLimitV,
                       NULL,
                       &q_3d_crane_cal_DWork.HILWrite_DigitalBuffer[0],
                       NULL
                       );
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
    }
  }

  /* UnitDelay: '<S3>/Unit Delay' */
  if (q_3d_crane_cal_M->Timing.RateInteraction.TID0_1) {
    q_3d_crane_cal_B.UnitDelay = q_3d_crane_cal_DWork.UnitDelay_DSTATE_k;
  }

  /* End of UnitDelay: '<S3>/Unit Delay' */

  /* Outputs for Enabled SubSystem: '<S3>/Enabled and Triggered Subsystem' incorporates:
   *  EnablePort: '<S15>/Enable'
   */
  /* SignalConversion: '<S3>/HiddenBuf_InsertedFor_Enabled and Triggered Subsystem_at_inport_3' */
  if (q_3d_crane_cal_B.UnitDelay) {
    /* Logic: '<S15>/Tower Calibrated' incorporates:
     *  Abs: '<S15>/|th_dot_err|'
     *  Abs: '<S15>/|th_err|'
     *  Constant: '<S19>/Constant'
     *  Constant: '<S20>/Constant'
     *  RelationalOperator: '<S19>/Compare'
     *  RelationalOperator: '<S20>/Compare'
     */
    q_3d_crane_cal_B.TowerCalibrated = ((fabs(rtb_TowerError_idx) <=
      q_3d_crane_cal_P.Constant_Value) && (fabs(rtb_TowerError_idx_0) <=
      q_3d_crane_cal_P.Constant_Value_b));

    /* Logic: '<S15>/Trolley Calibrated' incorporates:
     *  Abs: '<S15>/|x_dot_err|'
     *  Abs: '<S15>/|x_err|'
     *  Constant: '<S21>/Constant'
     *  Constant: '<S22>/Constant'
     *  RelationalOperator: '<S21>/Compare'
     *  RelationalOperator: '<S22>/Compare'
     */
    q_3d_crane_cal_B.TrolleyCalibrated = ((fabs(rtb_Error_idx) <=
      q_3d_crane_cal_P.Constant_Value_m) && (fabs(rtb_Error_idx_0) <=
      q_3d_crane_cal_P.Constant_Value_h));

    /* Logic: '<S15>/Payload Calibrated' incorporates:
     *  Abs: '<S15>/|z_dot_err|'
     *  Abs: '<S15>/|z_err|'
     *  Constant: '<S17>/Constant'
     *  Constant: '<S18>/Constant'
     *  RelationalOperator: '<S17>/Compare'
     *  RelationalOperator: '<S18>/Compare'
     */
    q_3d_crane_cal_B.PayloadCalibrated = ((fabs(rtb_DiscreteTimeIntegrator) <=
      q_3d_crane_cal_P.Constant_Value_k) && (fabs(rtb_GoCW) <=
      q_3d_crane_cal_P.Constant_Value_a));
    srUpdateBC(q_3d_crane_cal_DWork.EnabledandTriggeredSubsystem_Su);
  }

  /* End of SignalConversion: '<S3>/HiddenBuf_InsertedFor_Enabled and Triggered Subsystem_at_inport_3' */
  /* End of Outputs for SubSystem: '<S3>/Enabled and Triggered Subsystem' */

  /* Logic: '<S3>/System Calibrated' */
  q_3d_crane_cal_B.SystemCalibrated = (q_3d_crane_cal_B.TowerCalibrated &&
    q_3d_crane_cal_B.TrolleyCalibrated && q_3d_crane_cal_B.PayloadCalibrated);

  /* RelationalOperator: '<S16>/Compare' incorporates:
   *  Constant: '<S16>/Constant'
   */
  rtb_AllEncodersReset = (q_3d_crane_cal_B.SystemCalibrated !=
    q_3d_crane_cal_P.Constant_Value_e);

  /* Stop: '<S14>/Stop Simulation' */
  if (rtb_AllEncodersReset) {
    rtmSetStopRequested(q_3d_crane_cal_M, 1);
  }

  /* End of Stop: '<S14>/Stop Simulation' */

  /* UnitDelay: '<S58>/Unit Delay' */
  rtb_UnitDelay_n = q_3d_crane_cal_DWork.UnitDelay_DSTATE_p;

  /* Logic: '<S3>/All Encoders  Reset' */
  rtb_AllEncodersReset = (rtb_UnitDelay_n && q_3d_crane_cal_B.LogicalOperator_d &&
    rtb_UnitDelay_e);

  /* RateTransition: '<S3>/Rate Transition' */
  if (q_3d_crane_cal_M->Timing.RateInteraction.TID0_1) {
    q_3d_crane_cal_B.RateTransition = rtb_AllEncodersReset;
  }

  /* End of RateTransition: '<S3>/Rate Transition' */

  /* RelationalOperator: '<S39>/Compare' incorporates:
   *  Constant: '<S39>/Constant'
   */
  q_3d_crane_cal_B.Compare_p5 = (rtb_HILReadTimebase_o3[1] <
    q_3d_crane_cal_P.Constant_Value_jj);

  /* RelationalOperator: '<S37>/Compare' incorporates:
   *  Constant: '<S37>/Constant'
   */
  q_3d_crane_cal_B.Compare_c = (rtb_HILReadTimebase_o3[2] <
    q_3d_crane_cal_P.Constant_Value_m1);

  /* Gain: '<S48>/Gain' */
  q_3d_crane_cal_B.Gain[0] = q_3d_crane_cal_P.Gain_Gain *
    rtb_TowerSetpointVector_idx_0;
  q_3d_crane_cal_B.Gain[1] = q_3d_crane_cal_P.Gain_Gain *
    q_3d_crane_cal_B.EncoderCalibration[3];

  /* Gain: '<S46>/Gain' */
  q_3d_crane_cal_B.Gain_k[0] = q_3d_crane_cal_P.Gain_Gain_b *
    rtb_TowerSetpointVector_idx;
  q_3d_crane_cal_B.Gain_k[1] = q_3d_crane_cal_P.Gain_Gain_b *
    q_3d_crane_cal_B.EncoderCalibration[0];

  /* Gain: '<S47>/Gain' incorporates:
   *  Constant: '<S51>/Constant'
   */
  q_3d_crane_cal_B.Gain_c[0] = q_3d_crane_cal_P.Gain_Gain_o *
    q_3d_crane_cal_P.Constant_Value_hq;
  q_3d_crane_cal_B.Gain_c[1] = q_3d_crane_cal_P.Gain_Gain_o * rtb_GoCCW;

  /* Gain: '<S2>/Commanded Current ' */
  q_3d_crane_cal_B.CommandedCurrent[0] = q_3d_crane_cal_P.CommandedCurrent_Gain *
    rtb_DACLimitV[0];
  q_3d_crane_cal_B.CommandedCurrent[1] = q_3d_crane_cal_P.CommandedCurrent_Gain *
    rtb_DACLimitV[1];
  q_3d_crane_cal_B.CommandedCurrent[2] = q_3d_crane_cal_P.CommandedCurrent_Gain *
    rtb_DACLimitV[2];

  /* Gain: '<S5>/Jib Integral  Control Gain' */
  q_3d_crane_cal_B.JibIntegralControlGain =
    q_3d_crane_cal_P.JibIntegralControlGain_Gain * rtb_Error_idx;

  /* Gain: '<S6>/Payload Integral  Gain' */
  q_3d_crane_cal_B.PayloadIntegralGain =
    q_3d_crane_cal_P.PayloadIntegralGain_Gain * rtb_DiscreteTimeIntegrator;

  /* Outputs for Triggered SubSystem: '<S7>/Reset Encoder: Tower' */
  q_3d_crane_ca_ResetEncoderTower(rtb_UnitDelay_n, q_3d_crane_cal_M,
    &q_3d_crane_cal_DWork.ResetEncoderTower, (rtP_ResetEncoderTower_q_3d_cran *)
    &q_3d_crane_cal_P.ResetEncoderTower,
    &q_3d_crane_cal_PrevZCSigState.ResetEncoderTower);

  /* End of Outputs for SubSystem: '<S7>/Reset Encoder: Tower' */

  /* Outputs for Triggered SubSystem: '<S7>/Reset Encoder:  Payload' */
  q_3d_crane_ca_ResetEncoderTower(rtb_UnitDelay_e, q_3d_crane_cal_M,
    &q_3d_crane_cal_DWork.ResetEncoderPayload, (rtP_ResetEncoderTower_q_3d_cran *)
    &q_3d_crane_cal_P.ResetEncoderPayload,
    &q_3d_crane_cal_PrevZCSigState.ResetEncoderPayload);

  /* End of Outputs for SubSystem: '<S7>/Reset Encoder:  Payload' */

  /* Outputs for Triggered SubSystem: '<S7>/Reset Encoder:  Trolley' */
  q_3d_crane_ca_ResetEncoderTower(q_3d_crane_cal_B.LogicalOperator_d,
    q_3d_crane_cal_M, &q_3d_crane_cal_DWork.ResetEncoderTrolley,
    (rtP_ResetEncoderTower_q_3d_cran *) &q_3d_crane_cal_P.ResetEncoderTrolley,
    &q_3d_crane_cal_PrevZCSigState.ResetEncoderTrolley);

  /* End of Outputs for SubSystem: '<S7>/Reset Encoder:  Trolley' */

  /* Outputs for Triggered SubSystem: '<S53>/Triggered Sigmoid Compute' */
  q_3d_cr_TriggeredSigmoidCompute(rtb_UnitDelay_e,
    q_3d_crane_cal_P.InitialSetpointTrolley_Value,
    q_3d_crane_cal_B.MultiportSwitch_h,
    &q_3d_crane_cal_B.TriggeredSigmoidCompute,
    &q_3d_crane_cal_DWork.TriggeredSigmoidCompute,
    (rtP_TriggeredSigmoidCompute_q_3 *)
    &q_3d_crane_cal_P.TriggeredSigmoidCompute,
    &q_3d_crane_cal_PrevZCSigState.TriggeredSigmoidCompute);

  /* End of Outputs for SubSystem: '<S53>/Triggered Sigmoid Compute' */

  /* Logic: '<S58>/Logical Operator' */
  q_3d_crane_cal_B.LogicalOperator_ao = (q_3d_crane_cal_B.LogicalOperator ||
    q_3d_crane_cal_B.LogicalOperator_j);

  /* Outputs for Triggered SubSystem: '<S60>/Triggered Sigmoid Compute' */
  q_3d__TriggeredSigmoidCompute_d(rtb_UnitDelay_n, q_3d_crane_cal_P.x0v00_Value,
    q_3d_crane_cal_P.GotoHomeCW_Value,
    &q_3d_crane_cal_B.TriggeredSigmoidCompute_d,
    &q_3d_crane_cal_DWork.TriggeredSigmoidCompute_d,
    (rtP_TriggeredSigmoidCompute_q_e *)
    &q_3d_crane_cal_P.TriggeredSigmoidCompute_d,
    &q_3d_crane_cal_PrevZCSigState.TriggeredSigmoidCompute_d);

  /* End of Outputs for SubSystem: '<S60>/Triggered Sigmoid Compute' */

  /* Outputs for Triggered SubSystem: '<S61>/Triggered Sigmoid Compute' */
  q_3d__TriggeredSigmoidCompute_d(rtb_UnitDelay_n, q_3d_crane_cal_P.x0v00_Value,
    q_3d_crane_cal_P.GotoHomeCCW_Value,
    &q_3d_crane_cal_B.TriggeredSigmoidCompute_e,
    &q_3d_crane_cal_DWork.TriggeredSigmoidCompute_e,
    (rtP_TriggeredSigmoidCompute_q_e *)
    &q_3d_crane_cal_P.TriggeredSigmoidCompute_e,
    &q_3d_crane_cal_PrevZCSigState.TriggeredSigmoidCompute_e);

  /* End of Outputs for SubSystem: '<S61>/Triggered Sigmoid Compute' */

  /* Outputs for Triggered SubSystem: '<S67>/Triggered Sigmoid Compute' */
  q_3d_cr_TriggeredSigmoidCompute(q_3d_crane_cal_B.LogicalOperator_d,
    q_3d_crane_cal_P.InitialSetpointJib_Value, q_3d_crane_cal_B.MultiportSwitch,
    &q_3d_crane_cal_B.TriggeredSigmoidCompute_l,
    &q_3d_crane_cal_DWork.TriggeredSigmoidCompute_l,
    (rtP_TriggeredSigmoidCompute_q_3 *)
    &q_3d_crane_cal_P.TriggeredSigmoidCompute_l,
    &q_3d_crane_cal_PrevZCSigState.TriggeredSigmoidCompute_l);

  /* End of Outputs for SubSystem: '<S67>/Triggered Sigmoid Compute' */

  /* S-Function (sample_time_block): '<S10>/Sample Time' */

  /* S-Function Block: q_3d_crane_cal/Sample Time Check/Sample Time (sample_time_block) */
  {
    t_error result;
    t_timeout current_time;
    t_timeout time_difference;
    result = timeout_get_high_resolution_time(&current_time);
    if (result == 0) {
      result = timeout_subtract(&time_difference, &current_time,
        &q_3d_crane_cal_DWork.SampleTime_PreviousTime);
      rtb_SampleTime = time_difference.seconds + time_difference.nanoseconds *
        1e-9;
      memcpy(&q_3d_crane_cal_DWork.SampleTime_PreviousTime, &current_time,
             sizeof(t_timeout));
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
      return;
    }
  }

  /* Sum: '<S10>/Sum' incorporates:
   *  Constant: '<S42>/Constant'
   *  Memory: '<S10>/Memory'
   *  RelationalOperator: '<S42>/Compare'
   */
  q_3d_crane_cal_B.Sum = (uint8_T)((uint32_T)(rtb_SampleTime >
    q_3d_crane_cal_P.Constant_Value_c) + (uint32_T)
    q_3d_crane_cal_DWork.Memory_PreviousInput);

  /* RelationalOperator: '<S43>/Compare' incorporates:
   *  Constant: '<S43>/Constant'
   */
  q_3d_crane_cal_B.Compare = (q_3d_crane_cal_B.Sum >
    q_3d_crane_cal_P.Constant_Value_l);

  /* RelationalOperator: '<S45>/Compare' incorporates:
   *  Constant: '<S45>/Constant'
   */
  rtb_AllEncodersReset = (q_3d_crane_cal_B.Compare !=
    q_3d_crane_cal_P.Constant_Value_jw);

  /* Stop: '<S44>/Stop Simulation' */
  if (rtb_AllEncodersReset) {
    rtmSetStopRequested(q_3d_crane_cal_M, 1);
  }

  /* End of Stop: '<S44>/Stop Simulation' */

  /* If subsystem generates rate grouping Output functions,
   * when tid is used in Output function for one rate,
   * all Output functions include tid as argument.
   * As result, some Output functions may have unused tid
   */
  UNUSED_PARAMETER(tid);
}

/* Model update function for TID0 */
void q_3d_crane_cal_update0(int_T tid) /* Sample time: [0.001s, 0.0s] */
{
  /* Update for Memory: '<S62>/Memory' */
  q_3d_crane_cal_DWork.Memory_PreviousInput_h = q_3d_crane_cal_B.LogicalOperator;

  /* Update for Memory: '<S63>/Memory' */
  q_3d_crane_cal_DWork.Memory_PreviousInput_i =
    q_3d_crane_cal_B.LogicalOperator_j;

  /* Update for DiscreteIntegrator: '<S59>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S59>/Constant'
   */
  q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE =
    q_3d_crane_cal_P.DiscreteTimeIntegrator_gainval *
    q_3d_crane_cal_P.Constant_Value_d +
    q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE;

  /* Update for S-Function (sigmoid_path): '<S60>/Sigmoid Path' */
  if (tid == 0) {
    {
      if (q_3d_crane_cal_DWork.SigmoidPath_Toggle !=
          q_3d_crane_cal_B.TriggeredSigmoidCompute_d.SigmoidCompute_o2) {
        q_3d_crane_cal_DWork.SigmoidPath_Toggle =
          q_3d_crane_cal_B.TriggeredSigmoidCompute_d.SigmoidCompute_o2;

        /*  Update the sigmoid parameters and set the flag  */
        memcpy(&q_3d_crane_cal_DWork.SigmoidPath_NewPath,
               &q_3d_crane_cal_B.TriggeredSigmoidCompute_d.SigmoidCompute_o1,
               sizeof(t_sigmoid_params));
        q_3d_crane_cal_DWork.SigmoidPath_Flag = 1;
      }
    }
  }

  /* Update for S-Function (sigmoid_path): '<S61>/Sigmoid Path' */
  if (tid == 0) {
    {
      if (q_3d_crane_cal_DWork.SigmoidPath_Toggle_k !=
          q_3d_crane_cal_B.TriggeredSigmoidCompute_e.SigmoidCompute_o2) {
        q_3d_crane_cal_DWork.SigmoidPath_Toggle_k =
          q_3d_crane_cal_B.TriggeredSigmoidCompute_e.SigmoidCompute_o2;

        /*  Update the sigmoid parameters and set the flag  */
        memcpy(&q_3d_crane_cal_DWork.SigmoidPath_NewPath_j,
               &q_3d_crane_cal_B.TriggeredSigmoidCompute_e.SigmoidCompute_o1,
               sizeof(t_sigmoid_params));
        q_3d_crane_cal_DWork.SigmoidPath_Flag_d = 1;
      }
    }
  }

  /* Update for DiscreteTransferFcn: '<S36>/Discrete Transfer Fcn' */
  q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE =
    q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp;

  /* Update for DiscreteTransferFcn: '<S35>/Discrete Transfer Fcn' */
  q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_p =
    q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_e;

  /* Update for UnitDelay: '<S51>/Unit Delay' */
  q_3d_crane_cal_DWork.UnitDelay_DSTATE = q_3d_crane_cal_B.Compare_p5;

  /* Update for Memory: '<S69>/Memory' */
  q_3d_crane_cal_DWork.Memory_PreviousInput_e =
    q_3d_crane_cal_B.LogicalOperator_d;

  /* Update for DiscreteIntegrator: '<S68>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S68>/Go to Ret'
   */
  q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_l =
    q_3d_crane_cal_P.DiscreteTimeIntegrator_gainva_o *
    q_3d_crane_cal_P.GotoRet_Value_n +
    q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_l;

  /* Update for S-Function (sigmoid_path): '<S67>/Sigmoid Path' */
  if (tid == 0) {
    {
      if (q_3d_crane_cal_DWork.SigmoidPath_Toggle_c !=
          q_3d_crane_cal_B.TriggeredSigmoidCompute_l.SigmoidCompute_o2) {
        q_3d_crane_cal_DWork.SigmoidPath_Toggle_c =
          q_3d_crane_cal_B.TriggeredSigmoidCompute_l.SigmoidCompute_o2;

        /*  Update the sigmoid parameters and set the flag  */
        memcpy(&q_3d_crane_cal_DWork.SigmoidPath_NewPath_m,
               &q_3d_crane_cal_B.TriggeredSigmoidCompute_l.SigmoidCompute_o1,
               sizeof(t_sigmoid_params));
        q_3d_crane_cal_DWork.SigmoidPath_Flag_m = 1;
      }
    }
  }

  /* Update for DiscreteTransferFcn: '<S33>/Discrete Transfer Fcn' */
  q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_e =
    q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_f;

  /* Update for DiscreteTransferFcn: '<S32>/Discrete Transfer Fcn' */
  q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_h =
    q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_l;

  /* Update for DiscreteTransferFcn: '<S31>/Discrete Transfer Fcn' */
  q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_f =
    q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_d;

  /* Update for DiscreteTransferFcn: '<S30>/Discrete Transfer Fcn' */
  q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_k =
    q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_c;

  /* Update for DiscreteIntegrator: '<S5>/Discrete-Time Integrator' */
  q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_o =
    q_3d_crane_cal_P.DiscreteTimeIntegrator_gainva_f *
    q_3d_crane_cal_B.JibIntegralControlGain +
    q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_o;
  if (q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_o >=
      q_3d_crane_cal_P.DiscreteTimeIntegrator_UpperSat) {
    q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_o =
      q_3d_crane_cal_P.DiscreteTimeIntegrator_UpperSat;
  } else {
    if (q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_o <=
        q_3d_crane_cal_P.DiscreteTimeIntegrator_LowerSat) {
      q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_o =
        q_3d_crane_cal_P.DiscreteTimeIntegrator_LowerSat;
    }
  }

  /* End of Update for DiscreteIntegrator: '<S5>/Discrete-Time Integrator' */

  /* Update for UnitDelay: '<S52>/Unit Delay' */
  q_3d_crane_cal_DWork.UnitDelay_DSTATE_g = q_3d_crane_cal_B.LogicalOperator_a;

  /* Update for Memory: '<S55>/Memory' */
  q_3d_crane_cal_DWork.Memory_PreviousInput_f =
    q_3d_crane_cal_B.LogicalOperator_a;

  /* Update for DiscreteIntegrator: '<S54>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S54>/Go to Ret'
   */
  q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_h =
    q_3d_crane_cal_P.DiscreteTimeIntegrator_gainva_i *
    q_3d_crane_cal_P.GotoRet_Value +
    q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_h;

  /* Update for S-Function (sigmoid_path): '<S53>/Sigmoid Path' */
  if (tid == 0) {
    {
      if (q_3d_crane_cal_DWork.SigmoidPath_Toggle_h !=
          q_3d_crane_cal_B.TriggeredSigmoidCompute.SigmoidCompute_o2) {
        q_3d_crane_cal_DWork.SigmoidPath_Toggle_h =
          q_3d_crane_cal_B.TriggeredSigmoidCompute.SigmoidCompute_o2;

        /*  Update the sigmoid parameters and set the flag  */
        memcpy(&q_3d_crane_cal_DWork.SigmoidPath_NewPath_c,
               &q_3d_crane_cal_B.TriggeredSigmoidCompute.SigmoidCompute_o1,
               sizeof(t_sigmoid_params));
        q_3d_crane_cal_DWork.SigmoidPath_Flag_l = 1;
      }
    }
  }

  /* Update for DiscreteTransferFcn: '<S34>/Discrete Transfer Fcn' */
  q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_kp =
    q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_dt;

  /* Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator' */
  q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_m =
    q_3d_crane_cal_P.DiscreteTimeIntegrator_gainva_a *
    q_3d_crane_cal_B.PayloadIntegralGain +
    q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_m;

  /* Update for UnitDelay: '<S58>/Unit Delay' */
  q_3d_crane_cal_DWork.UnitDelay_DSTATE_p = q_3d_crane_cal_B.LogicalOperator_ao;

  /* Update for Memory: '<S10>/Memory' */
  q_3d_crane_cal_DWork.Memory_PreviousInput = q_3d_crane_cal_B.Sum;

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++q_3d_crane_cal_M->Timing.clockTick0)) {
    ++q_3d_crane_cal_M->Timing.clockTickH0;
  }

  q_3d_crane_cal_M->Timing.t[0] = q_3d_crane_cal_M->Timing.clockTick0 *
    q_3d_crane_cal_M->Timing.stepSize0 + q_3d_crane_cal_M->Timing.clockTickH0 *
    q_3d_crane_cal_M->Timing.stepSize0 * 4294967296.0;

  /* If subsystem generates rate grouping Update functions,
   * when tid is used in Update function for one rate,
   * all Update functions include tid as argument.
   * As result, some Update functions may have unused tid
   */
  UNUSED_PARAMETER(tid);
}

/* Model output function for TID1 */
void q_3d_crane_cal_output1(int_T tid) /* Sample time: [4.0s, 0.0s] */
{
  /* (no output code required) */

  /* If subsystem generates rate grouping Output functions,
   * when tid is used in Output function for one rate,
   * all Output functions include tid as argument.
   * As result, some Output functions may have unused tid
   */
  UNUSED_PARAMETER(tid);
}

/* Model update function for TID1 */
void q_3d_crane_cal_update1(int_T tid) /* Sample time: [4.0s, 0.0s] */
{
  /* Update for UnitDelay: '<S3>/Unit Delay' */
  q_3d_crane_cal_DWork.UnitDelay_DSTATE_k = q_3d_crane_cal_B.RateTransition;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick1"
   * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++q_3d_crane_cal_M->Timing.clockTick1)) {
    ++q_3d_crane_cal_M->Timing.clockTickH1;
  }

  q_3d_crane_cal_M->Timing.t[1] = q_3d_crane_cal_M->Timing.clockTick1 *
    q_3d_crane_cal_M->Timing.stepSize1 + q_3d_crane_cal_M->Timing.clockTickH1 *
    q_3d_crane_cal_M->Timing.stepSize1 * 4294967296.0;

  /* If subsystem generates rate grouping Update functions,
   * when tid is used in Update function for one rate,
   * all Update functions include tid as argument.
   * As result, some Update functions may have unused tid
   */
  UNUSED_PARAMETER(tid);
}

void q_3d_crane_cal_output(int_T tid)
{
  switch (tid) {
   case 0 :
    q_3d_crane_cal_output0(0);
    break;

   case 1 :
    q_3d_crane_cal_output1(1);
    break;

   default :
    break;
  }
}

void q_3d_crane_cal_update(int_T tid)
{
  switch (tid) {
   case 0 :
    q_3d_crane_cal_update0(0);
    break;

   case 1 :
    q_3d_crane_cal_update1(1);
    break;

   default :
    break;
  }
}

/* Model initialize function */
void q_3d_crane_cal_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)q_3d_crane_cal_M, 0,
                sizeof(RT_MODEL_q_3d_crane_cal));

  /* Initialize timing info */
  {
    int_T *mdlTsMap = q_3d_crane_cal_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    q_3d_crane_cal_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    q_3d_crane_cal_M->Timing.sampleTimes =
      (&q_3d_crane_cal_M->Timing.sampleTimesArray[0]);
    q_3d_crane_cal_M->Timing.offsetTimes =
      (&q_3d_crane_cal_M->Timing.offsetTimesArray[0]);

    /* task periods */
    q_3d_crane_cal_M->Timing.sampleTimes[0] = (0.001);
    q_3d_crane_cal_M->Timing.sampleTimes[1] = (4.0);

    /* task offsets */
    q_3d_crane_cal_M->Timing.offsetTimes[0] = (0.0);
    q_3d_crane_cal_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(q_3d_crane_cal_M, &q_3d_crane_cal_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = q_3d_crane_cal_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits =
      q_3d_crane_cal_M->Timing.perTaskSampleHitsArray;
    q_3d_crane_cal_M->Timing.perTaskSampleHits = (&mdlPerTaskSampleHits[0]);
    mdlSampleHits[0] = 1;
    q_3d_crane_cal_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(q_3d_crane_cal_M, -1);
  q_3d_crane_cal_M->Timing.stepSize0 = 0.001;
  q_3d_crane_cal_M->Timing.stepSize1 = 4.0;

  /* external mode info */
  q_3d_crane_cal_M->Sizes.checksums[0] = (1652778766U);
  q_3d_crane_cal_M->Sizes.checksums[1] = (1492387069U);
  q_3d_crane_cal_M->Sizes.checksums[2] = (793595829U);
  q_3d_crane_cal_M->Sizes.checksums[3] = (4281633527U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[19];
    q_3d_crane_cal_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)
      &q_3d_crane_cal_DWork.EnabledandTriggeredSubsystem_Su;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = (sysRanDType *)
      &q_3d_crane_cal_DWork.ResetEncoderTower.ResetEncoderTower_SubsysRanBC;
    systemRan[5] = (sysRanDType *)
      &q_3d_crane_cal_DWork.ResetEncoderPayload.ResetEncoderTower_SubsysRanBC;
    systemRan[6] = (sysRanDType *)
      &q_3d_crane_cal_DWork.ResetEncoderTrolley.ResetEncoderTower_SubsysRanBC;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    systemRan[9] = (sysRanDType *)
      &q_3d_crane_cal_DWork.TriggeredSigmoidCompute.TriggeredSigmoidCompute_SubsysR;
    systemRan[10] = &rtAlwaysEnabled;
    systemRan[11] = (sysRanDType *)
      &q_3d_crane_cal_DWork.TriggeredSigmoidCompute_d.TriggeredSigmoidCompute_SubsysR;
    systemRan[12] = (sysRanDType *)
      &q_3d_crane_cal_DWork.TriggeredSigmoidCompute_e.TriggeredSigmoidCompute_SubsysR;
    systemRan[13] = &rtAlwaysEnabled;
    systemRan[14] = &rtAlwaysEnabled;
    systemRan[15] = (sysRanDType *)
      &q_3d_crane_cal_DWork.TriggeredSigmoidCompute_l.TriggeredSigmoidCompute_SubsysR;
    systemRan[16] = &rtAlwaysEnabled;
    systemRan[17] = &rtAlwaysEnabled;
    systemRan[18] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(q_3d_crane_cal_M->extModeInfo,
      &q_3d_crane_cal_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(q_3d_crane_cal_M->extModeInfo,
                        q_3d_crane_cal_M->Sizes.checksums);
    rteiSetTPtr(q_3d_crane_cal_M->extModeInfo, rtmGetTPtr(q_3d_crane_cal_M));
  }

  q_3d_crane_cal_M->solverInfoPtr = (&q_3d_crane_cal_M->solverInfo);
  q_3d_crane_cal_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&q_3d_crane_cal_M->solverInfo, 0.001);
  rtsiSetSolverMode(&q_3d_crane_cal_M->solverInfo, SOLVER_MODE_MULTITASKING);

  /* block I/O */
  q_3d_crane_cal_M->ModelData.blockIO = ((void *) &q_3d_crane_cal_B);
  (void) memset(((void *) &q_3d_crane_cal_B), 0,
                sizeof(BlockIO_q_3d_crane_cal));

  {
    int_T i;
    for (i = 0; i < 5; i++) {
      q_3d_crane_cal_B.EncoderCalibration[i] = 0.0;
    }

    q_3d_crane_cal_B.SigmoidPath_o1 = 0.0;
    q_3d_crane_cal_B.SigmoidPath_o2 = 0.0;
    q_3d_crane_cal_B.SigmoidPath_o3 = 0.0;
    q_3d_crane_cal_B.SigmoidPath_o4 = 0.0;
    q_3d_crane_cal_B.SigmoidPath_o1_i = 0.0;
    q_3d_crane_cal_B.SigmoidPath_o2_m = 0.0;
    q_3d_crane_cal_B.SigmoidPath_o3_h = 0.0;
    q_3d_crane_cal_B.SigmoidPath_o4_i = 0.0;
    q_3d_crane_cal_B.MultiportSwitch = 0.0;
    q_3d_crane_cal_B.SigmoidPath_o1_l = 0.0;
    q_3d_crane_cal_B.SigmoidPath_o2_i = 0.0;
    q_3d_crane_cal_B.SigmoidPath_o3_d = 0.0;
    q_3d_crane_cal_B.SigmoidPath_o4_n = 0.0;
    q_3d_crane_cal_B.MultiportSwitch1 = 0.0;
    q_3d_crane_cal_B.DiscreteTransferFcn = 0.0;
    q_3d_crane_cal_B.MultiportSwitch_h = 0.0;
    q_3d_crane_cal_B.SigmoidPath_o1_c = 0.0;
    q_3d_crane_cal_B.SigmoidPath_o2_e = 0.0;
    q_3d_crane_cal_B.SigmoidPath_o3_dc = 0.0;
    q_3d_crane_cal_B.SigmoidPath_o4_nh = 0.0;
    q_3d_crane_cal_B.PayloadSetpointVector[0] = 0.0;
    q_3d_crane_cal_B.PayloadSetpointVector[1] = 0.0;
    q_3d_crane_cal_B.Gain[0] = 0.0;
    q_3d_crane_cal_B.Gain[1] = 0.0;
    q_3d_crane_cal_B.Gain_k[0] = 0.0;
    q_3d_crane_cal_B.Gain_k[1] = 0.0;
    q_3d_crane_cal_B.Gain_c[0] = 0.0;
    q_3d_crane_cal_B.Gain_c[1] = 0.0;
    q_3d_crane_cal_B.CommandedCurrent[0] = 0.0;
    q_3d_crane_cal_B.CommandedCurrent[1] = 0.0;
    q_3d_crane_cal_B.CommandedCurrent[2] = 0.0;
    q_3d_crane_cal_B.JibIntegralControlGain = 0.0;
    q_3d_crane_cal_B.PayloadIntegralGain = 0.0;
  }

  /* parameters */
  q_3d_crane_cal_M->ModelData.defaultParam = ((real_T *)&q_3d_crane_cal_P);

  /* states (dwork) */
  q_3d_crane_cal_M->Work.dwork = ((void *) &q_3d_crane_cal_DWork);
  (void) memset((void *)&q_3d_crane_cal_DWork, 0,
                sizeof(D_Work_q_3d_crane_cal));
  q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE = 0.0;
  q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE = 0.0;
  q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_p = 0.0;
  q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_l = 0.0;
  q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_e = 0.0;
  q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_h = 0.0;
  q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_f = 0.0;
  q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_k = 0.0;
  q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_o = 0.0;
  q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_h = 0.0;
  q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_kp = 0.0;
  q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_m = 0.0;

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_3d_crane_cal_DWork.HILInitialize_AIMinimums[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_3d_crane_cal_DWork.HILInitialize_AIMaximums[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_3d_crane_cal_DWork.HILInitialize_AOMinimums[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_3d_crane_cal_DWork.HILInitialize_AOMaximums[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_3d_crane_cal_DWork.HILInitialize_AOVoltages[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_3d_crane_cal_DWork.HILInitialize_FilterFrequency[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_3d_crane_cal_DWork.HILInitialize_POSortedFreqs[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_3d_crane_cal_DWork.HILInitialize_POValues[i] = 0.0;
    }
  }

  q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp = 0.0;
  q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_e = 0.0;
  q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_f = 0.0;
  q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_l = 0.0;
  q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_d = 0.0;
  q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_c = 0.0;
  q_3d_crane_cal_DWork.DiscreteTransferFcn_tmp_dt = 0.0;
  q_3d_crane_cal_DWork.SigmoidPath_RWORK.Time = 0.0;
  q_3d_crane_cal_DWork.SigmoidPath_RWORK_p.Time = 0.0;
  q_3d_crane_cal_DWork.SigmoidPath_RWORK_e.Time = 0.0;
  q_3d_crane_cal_DWork.SigmoidPath_RWORK_h.Time = 0.0;

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    q_3d_crane_cal_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 19;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  q_3d_crane_cal_PrevZCSigState.TriggeredSigmoidCompute_l.TriggeredSigmoidCompute_Trig_ZC
    = POS_ZCSIG;
  q_3d_crane_cal_PrevZCSigState.TriggeredSigmoidCompute_e.TriggeredSigmoidCompute_Trig__a
    = POS_ZCSIG;
  q_3d_crane_cal_PrevZCSigState.TriggeredSigmoidCompute_d.TriggeredSigmoidCompute_Trig__a
    = POS_ZCSIG;
  q_3d_crane_cal_PrevZCSigState.TriggeredSigmoidCompute.TriggeredSigmoidCompute_Trig_ZC
    = POS_ZCSIG;
  q_3d_crane_cal_PrevZCSigState.ResetEncoderTrolley.ResetEncoderTower_Trig_ZCE =
    POS_ZCSIG;
  q_3d_crane_cal_PrevZCSigState.ResetEncoderPayload.ResetEncoderTower_Trig_ZCE =
    POS_ZCSIG;
  q_3d_crane_cal_PrevZCSigState.ResetEncoderTower.ResetEncoderTower_Trig_ZCE =
    POS_ZCSIG;
}

/* Model terminate function */
void q_3d_crane_cal_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<S1>/HIL Initialize' */

  /* S-Function Block: q_3d_crane_cal/3-DOF Crane HIL/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_analog_outputs = 0;
    t_uint32 num_final_pwm_outputs = 0;
    hil_task_stop_all(q_3d_crane_cal_DWork.HILInitialize_Card);
    hil_monitor_stop_all(q_3d_crane_cal_DWork.HILInitialize_Card);
    is_switching = false;
    if ((q_3d_crane_cal_P.HILInitialize_AOTerminate && !is_switching) ||
        (q_3d_crane_cal_P.HILInitialize_AOExit && is_switching)) {
      {
        int_T i1;
        real_T *dw_AOVoltages = &q_3d_crane_cal_DWork.HILInitialize_AOVoltages[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOVoltages[i1] = q_3d_crane_cal_P.HILInitialize_AOFinal;
        }
      }

      num_final_analog_outputs = 8U;
    }

    if ((q_3d_crane_cal_P.HILInitialize_POTerminate && !is_switching) ||
        (q_3d_crane_cal_P.HILInitialize_POExit && is_switching)) {
      {
        int_T i1;
        real_T *dw_POValues = &q_3d_crane_cal_DWork.HILInitialize_POValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POValues[i1] = q_3d_crane_cal_P.HILInitialize_POFinal;
        }
      }

      num_final_pwm_outputs = 8U;
    }

    if (0
        || num_final_analog_outputs > 0
        || num_final_pwm_outputs > 0
        ) {
      /* Attempt to write the final outputs atomically (due to firmware issue in old Q2-USB). Otherwise write channels individually */
      result = hil_write(q_3d_crane_cal_DWork.HILInitialize_Card
                         , q_3d_crane_cal_P.HILInitialize_AOChannels,
                         num_final_analog_outputs
                         , q_3d_crane_cal_P.HILInitialize_POChannels,
                         num_final_pwm_outputs
                         , NULL, 0
                         , NULL, 0
                         , &q_3d_crane_cal_DWork.HILInitialize_AOVoltages[0]
                         , &q_3d_crane_cal_DWork.HILInitialize_POValues[0]
                         , (t_boolean *) NULL
                         , NULL
                         );
      if (result == -QERR_HIL_WRITE_NOT_SUPPORTED) {
        t_error local_result;
        result = 0;

        /* The hil_write operation is not supported by this card. Write final outputs for each channel type */
        if (num_final_analog_outputs > 0) {
          local_result = hil_write_analog
            (q_3d_crane_cal_DWork.HILInitialize_Card,
             q_3d_crane_cal_P.HILInitialize_AOChannels, num_final_analog_outputs,
             &q_3d_crane_cal_DWork.HILInitialize_AOVoltages[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_pwm_outputs > 0) {
          local_result = hil_write_pwm(q_3d_crane_cal_DWork.HILInitialize_Card,
            q_3d_crane_cal_P.HILInitialize_POChannels, num_final_pwm_outputs,
            &q_3d_crane_cal_DWork.HILInitialize_POValues[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
        }
      }
    }

    hil_task_delete_all(q_3d_crane_cal_DWork.HILInitialize_Card);
    hil_monitor_delete_all(q_3d_crane_cal_DWork.HILInitialize_Card);
    hil_close(q_3d_crane_cal_DWork.HILInitialize_Card);
    q_3d_crane_cal_DWork.HILInitialize_Card = NULL;
  }
}

/*========================================================================*
 * Start of GRT compatible call interface                                 *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  q_3d_crane_cal_output(tid);
}

void MdlUpdate(int_T tid)
{
  q_3d_crane_cal_update(tid);
}

void MdlInitializeSizes(void)
{
  q_3d_crane_cal_M->Sizes.numContStates = (0);/* Number of continuous states */
  q_3d_crane_cal_M->Sizes.numY = (0);  /* Number of model outputs */
  q_3d_crane_cal_M->Sizes.numU = (0);  /* Number of model inputs */
  q_3d_crane_cal_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  q_3d_crane_cal_M->Sizes.numSampTimes = (2);/* Number of sample times */
  q_3d_crane_cal_M->Sizes.numBlocks = (181);/* Number of blocks */
  q_3d_crane_cal_M->Sizes.numBlockIO = (55);/* Number of block outputs */
  q_3d_crane_cal_M->Sizes.numBlockPrms = (305);/* Sum of parameter "widths" */
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
  /* InitializeConditions for Memory: '<S62>/Memory' */
  q_3d_crane_cal_DWork.Memory_PreviousInput_h = q_3d_crane_cal_P.Memory_X0_h;

  /* InitializeConditions for Memory: '<S63>/Memory' */
  q_3d_crane_cal_DWork.Memory_PreviousInput_i = q_3d_crane_cal_P.Memory_X0_i;

  /* InitializeConditions for DiscreteIntegrator: '<S59>/Discrete-Time Integrator' */
  q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE =
    q_3d_crane_cal_P.DiscreteTimeIntegrator_IC;

  /* InitializeConditions for DiscreteTransferFcn: '<S36>/Discrete Transfer Fcn' */
  q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE =
    q_3d_crane_cal_P.DiscreteTransferFcn_InitialStat;

  /* InitializeConditions for DiscreteTransferFcn: '<S35>/Discrete Transfer Fcn' */
  q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_p =
    q_3d_crane_cal_P.DiscreteTransferFcn_InitialSt_n;

  /* InitializeConditions for UnitDelay: '<S51>/Unit Delay' */
  q_3d_crane_cal_DWork.UnitDelay_DSTATE = q_3d_crane_cal_P.UnitDelay_X0;

  /* InitializeConditions for Memory: '<S69>/Memory' */
  q_3d_crane_cal_DWork.Memory_PreviousInput_e = q_3d_crane_cal_P.Memory_X0_j;

  /* InitializeConditions for DiscreteIntegrator: '<S68>/Discrete-Time Integrator' */
  q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_l =
    q_3d_crane_cal_P.DiscreteTimeIntegrator_IC_l;

  /* InitializeConditions for DiscreteTransferFcn: '<S33>/Discrete Transfer Fcn' */
  q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_e =
    q_3d_crane_cal_P.DiscreteTransferFcn_InitialSt_f;

  /* InitializeConditions for DiscreteTransferFcn: '<S32>/Discrete Transfer Fcn' */
  q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_h =
    q_3d_crane_cal_P.DiscreteTransferFcn_InitialSt_o;

  /* InitializeConditions for DiscreteTransferFcn: '<S31>/Discrete Transfer Fcn' */
  q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_f =
    q_3d_crane_cal_P.DiscreteTransferFcn_InitialSt_m;

  /* InitializeConditions for DiscreteTransferFcn: '<S30>/Discrete Transfer Fcn' */
  q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_k =
    q_3d_crane_cal_P.DiscreteTransferFcn_InitialSt_a;

  /* InitializeConditions for DiscreteIntegrator: '<S5>/Discrete-Time Integrator' */
  q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_o =
    q_3d_crane_cal_P.DiscreteTimeIntegrator_IC_n;

  /* InitializeConditions for UnitDelay: '<S52>/Unit Delay' */
  q_3d_crane_cal_DWork.UnitDelay_DSTATE_g = q_3d_crane_cal_P.UnitDelay_X0_d;

  /* InitializeConditions for Memory: '<S55>/Memory' */
  q_3d_crane_cal_DWork.Memory_PreviousInput_f = q_3d_crane_cal_P.Memory_X0_n;

  /* InitializeConditions for DiscreteIntegrator: '<S54>/Discrete-Time Integrator' */
  q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_h =
    q_3d_crane_cal_P.DiscreteTimeIntegrator_IC_e;

  /* InitializeConditions for DiscreteTransferFcn: '<S34>/Discrete Transfer Fcn' */
  q_3d_crane_cal_DWork.DiscreteTransferFcn_DSTATE_kp =
    q_3d_crane_cal_P.DiscreteTransferFcn_InitialSt_l;

  /* InitializeConditions for DiscreteIntegrator: '<S6>/Discrete-Time Integrator' */
  q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE_m =
    q_3d_crane_cal_P.DiscreteTimeIntegrator_IC_li;

  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
  q_3d_crane_cal_DWork.UnitDelay_DSTATE_k = q_3d_crane_cal_P.UnitDelay_X0_h;

  /* InitializeConditions for UnitDelay: '<S58>/Unit Delay' */
  q_3d_crane_cal_DWork.UnitDelay_DSTATE_p = q_3d_crane_cal_P.UnitDelay_X0_n;

  /* InitializeConditions for Memory: '<S10>/Memory' */
  q_3d_crane_cal_DWork.Memory_PreviousInput = q_3d_crane_cal_P.Memory_X0;
}

void MdlStart(void)
{
  /* Start for S-Function (hil_initialize_block): '<S1>/HIL Initialize' */

  /* S-Function Block: q_3d_crane_cal/3-DOF Crane HIL/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("qpid", "0", &q_3d_crane_cal_DWork.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
      return;
    }

    is_switching = false;
    result = hil_set_card_specific_options
      (q_3d_crane_cal_DWork.HILInitialize_Card,
       "enc0_dir=0;enc0_filter=1;enc0_a=1;enc0_b=1;enc0_z=0;enc0_reload=0;enc1_dir=0;enc1_filter=1;enc1_a=1;enc1_b=1;enc1_z=0;enc1_reload=0;enc2_dir=0;enc2_filter=1;enc2_a=1;enc2_b=1;enc2_z=0;enc2_reload=0;enc3_dir=0;enc3_filter=1;enc3_a=1;enc3_b=1;enc3_z=0;enc3_reload=0;enc4_dir=0;enc4_filter=1;enc4_a=1;enc4_b=1;enc4_z=0;enc4_reload=0;enc5_dir=0;enc5_filter=1;enc5_a=1;enc5_b=1;enc5_z=0;enc5_reload=0;enc6_dir=0;enc6_filter=1;enc6_a=1;enc6_b=1;enc6_z=0;enc6_reload=0;enc7_dir=0;enc7_filter=1;enc7_a=1;enc7_b=1;enc7_z=0;enc7_reload=0;ext_int_polarity=0;fuse_polarity=0;convert_polarity=0;watchdog_polarity=0;ext_int_watchdog=0;fuse_watchdog=0;trig1_watchdog=0;watchdog_to_trig1=0;watchdog_to_trig2=0;counter_to_trig0=0;trigger_adcs=0;latch_on_adc=0;pwm_immediate=0",
       759);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
      return;
    }

    result = hil_watchdog_clear(q_3d_crane_cal_DWork.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
      return;
    }

    if ((q_3d_crane_cal_P.HILInitialize_AIPStart && !is_switching) ||
        (q_3d_crane_cal_P.HILInitialize_AIPEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_AIMinimums = &q_3d_crane_cal_DWork.HILInitialize_AIMinimums[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AIMinimums[i1] = q_3d_crane_cal_P.HILInitialize_AILow;
        }
      }

      {
        int_T i1;
        real_T *dw_AIMaximums = &q_3d_crane_cal_DWork.HILInitialize_AIMaximums[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AIMaximums[i1] = q_3d_crane_cal_P.HILInitialize_AIHigh;
        }
      }

      result = hil_set_analog_input_ranges
        (q_3d_crane_cal_DWork.HILInitialize_Card,
         q_3d_crane_cal_P.HILInitialize_AIChannels, 8U,
         &q_3d_crane_cal_DWork.HILInitialize_AIMinimums[0],
         &q_3d_crane_cal_DWork.HILInitialize_AIMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
        return;
      }
    }

    if ((q_3d_crane_cal_P.HILInitialize_AOPStart && !is_switching) ||
        (q_3d_crane_cal_P.HILInitialize_AOPEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_AOMinimums = &q_3d_crane_cal_DWork.HILInitialize_AOMinimums[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOMinimums[i1] = q_3d_crane_cal_P.HILInitialize_AOLow;
        }
      }

      {
        int_T i1;
        real_T *dw_AOMaximums = &q_3d_crane_cal_DWork.HILInitialize_AOMaximums[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOMaximums[i1] = q_3d_crane_cal_P.HILInitialize_AOHigh;
        }
      }

      result = hil_set_analog_output_ranges
        (q_3d_crane_cal_DWork.HILInitialize_Card,
         q_3d_crane_cal_P.HILInitialize_AOChannels, 8U,
         &q_3d_crane_cal_DWork.HILInitialize_AOMinimums[0],
         &q_3d_crane_cal_DWork.HILInitialize_AOMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
        return;
      }
    }

    if ((q_3d_crane_cal_P.HILInitialize_AOStart && !is_switching) ||
        (q_3d_crane_cal_P.HILInitialize_AOEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_AOVoltages = &q_3d_crane_cal_DWork.HILInitialize_AOVoltages[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOVoltages[i1] = q_3d_crane_cal_P.HILInitialize_AOInitial;
        }
      }

      result = hil_write_analog(q_3d_crane_cal_DWork.HILInitialize_Card,
        q_3d_crane_cal_P.HILInitialize_AOChannels, 8U,
        &q_3d_crane_cal_DWork.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
        return;
      }
    }

    if (q_3d_crane_cal_P.HILInitialize_AOReset) {
      {
        int_T i1;
        real_T *dw_AOVoltages = &q_3d_crane_cal_DWork.HILInitialize_AOVoltages[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOVoltages[i1] = q_3d_crane_cal_P.HILInitialize_AOWatchdog;
        }
      }

      result = hil_watchdog_set_analog_expiration_state
        (q_3d_crane_cal_DWork.HILInitialize_Card,
         q_3d_crane_cal_P.HILInitialize_AOChannels, 8U,
         &q_3d_crane_cal_DWork.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
        return;
      }
    }

    if ((q_3d_crane_cal_P.HILInitialize_EIPStart && !is_switching) ||
        (q_3d_crane_cal_P.HILInitialize_EIPEnter && is_switching)) {
      {
        int_T i1;
        int32_T *dw_QuadratureModes =
          &q_3d_crane_cal_DWork.HILInitialize_QuadratureModes[0];
        for (i1=0; i1 < 8; i1++) {
          dw_QuadratureModes[i1] = q_3d_crane_cal_P.HILInitialize_EIQuadrature;
        }
      }

      result = hil_set_encoder_quadrature_mode
        (q_3d_crane_cal_DWork.HILInitialize_Card,
         q_3d_crane_cal_P.HILInitialize_EIChannels, 8U,
         (t_encoder_quadrature_mode *)
         &q_3d_crane_cal_DWork.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
        return;
      }

      {
        int_T i1;
        real_T *dw_FilterFrequency =
          &q_3d_crane_cal_DWork.HILInitialize_FilterFrequency[0];
        for (i1=0; i1 < 8; i1++) {
          dw_FilterFrequency[i1] = q_3d_crane_cal_P.HILInitialize_EIFrequency;
        }
      }

      result = hil_set_encoder_filter_frequency
        (q_3d_crane_cal_DWork.HILInitialize_Card,
         q_3d_crane_cal_P.HILInitialize_EIChannels, 8U,
         &q_3d_crane_cal_DWork.HILInitialize_FilterFrequency[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
        return;
      }
    }

    if ((q_3d_crane_cal_P.HILInitialize_EIStart && !is_switching) ||
        (q_3d_crane_cal_P.HILInitialize_EIEnter && is_switching)) {
      {
        int_T i1;
        int32_T *dw_InitialEICounts =
          &q_3d_crane_cal_DWork.HILInitialize_InitialEICounts[0];
        for (i1=0; i1 < 8; i1++) {
          dw_InitialEICounts[i1] = q_3d_crane_cal_P.HILInitialize_EIInitial;
        }
      }

      result = hil_set_encoder_counts(q_3d_crane_cal_DWork.HILInitialize_Card,
        q_3d_crane_cal_P.HILInitialize_EIChannels, 8U,
        &q_3d_crane_cal_DWork.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
        return;
      }
    }

    if ((q_3d_crane_cal_P.HILInitialize_POPStart && !is_switching) ||
        (q_3d_crane_cal_P.HILInitialize_POPEnter && is_switching)) {
      uint32_T num_duty_cycle_modes = 0;
      uint32_T num_frequency_modes = 0;

      {
        int_T i1;
        int32_T *dw_POModeValues =
          &q_3d_crane_cal_DWork.HILInitialize_POModeValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POModeValues[i1] = q_3d_crane_cal_P.HILInitialize_POModes;
        }
      }

      result = hil_set_pwm_mode(q_3d_crane_cal_DWork.HILInitialize_Card,
        q_3d_crane_cal_P.HILInitialize_POChannels, 8U, (t_pwm_mode *)
        &q_3d_crane_cal_DWork.HILInitialize_POModeValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
        return;
      }

      {
        int_T i1;
        const uint32_T *p_HILInitialize_POChannels =
          q_3d_crane_cal_P.HILInitialize_POChannels;
        int32_T *dw_POModeValues =
          &q_3d_crane_cal_DWork.HILInitialize_POModeValues[0];
        for (i1=0; i1 < 8; i1++) {
          if (dw_POModeValues[i1] == PWM_DUTY_CYCLE_MODE || dw_POModeValues[i1] ==
              PWM_ONE_SHOT_MODE || dw_POModeValues[i1] == PWM_TIME_MODE) {
            q_3d_crane_cal_DWork.HILInitialize_POSortedChans[num_duty_cycle_modes]
              = (p_HILInitialize_POChannels[i1]);
            q_3d_crane_cal_DWork.HILInitialize_POSortedFreqs[num_duty_cycle_modes]
              = q_3d_crane_cal_P.HILInitialize_POFrequency;
            num_duty_cycle_modes++;
          } else {
            q_3d_crane_cal_DWork.HILInitialize_POSortedChans[7U -
              num_frequency_modes] = (p_HILInitialize_POChannels[i1]);
            q_3d_crane_cal_DWork.HILInitialize_POSortedFreqs[7U -
              num_frequency_modes] = q_3d_crane_cal_P.HILInitialize_POFrequency;
            num_frequency_modes++;
          }
        }
      }

      if (num_duty_cycle_modes > 0) {
        result = hil_set_pwm_frequency(q_3d_crane_cal_DWork.HILInitialize_Card,
          &q_3d_crane_cal_DWork.HILInitialize_POSortedChans[0],
          num_duty_cycle_modes,
          &q_3d_crane_cal_DWork.HILInitialize_POSortedFreqs[0]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
          return;
        }
      }

      if (num_frequency_modes > 0) {
        result = hil_set_pwm_duty_cycle(q_3d_crane_cal_DWork.HILInitialize_Card,
          &q_3d_crane_cal_DWork.HILInitialize_POSortedChans[num_duty_cycle_modes],
          num_frequency_modes,
          &q_3d_crane_cal_DWork.HILInitialize_POSortedFreqs[num_duty_cycle_modes]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
          return;
        }
      }

      {
        int_T i1;
        int32_T *dw_POModeValues =
          &q_3d_crane_cal_DWork.HILInitialize_POModeValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POModeValues[i1] = q_3d_crane_cal_P.HILInitialize_POConfiguration;
        }
      }

      {
        int_T i1;
        int32_T *dw_POAlignValues =
          &q_3d_crane_cal_DWork.HILInitialize_POAlignValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POAlignValues[i1] = q_3d_crane_cal_P.HILInitialize_POAlignment;
        }
      }

      {
        int_T i1;
        int32_T *dw_POPolarityVals =
          &q_3d_crane_cal_DWork.HILInitialize_POPolarityVals[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POPolarityVals[i1] = q_3d_crane_cal_P.HILInitialize_POPolarity;
        }
      }

      result = hil_set_pwm_configuration(q_3d_crane_cal_DWork.HILInitialize_Card,
        q_3d_crane_cal_P.HILInitialize_POChannels, 8U,
        (t_pwm_configuration *)
        &q_3d_crane_cal_DWork.HILInitialize_POModeValues[0],
        (t_pwm_alignment *) &q_3d_crane_cal_DWork.HILInitialize_POAlignValues[0],
        (t_pwm_polarity *) &q_3d_crane_cal_DWork.HILInitialize_POPolarityVals[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
        return;
      }

      {
        int_T i1;
        real_T *dw_POSortedFreqs =
          &q_3d_crane_cal_DWork.HILInitialize_POSortedFreqs[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POSortedFreqs[i1] = q_3d_crane_cal_P.HILInitialize_POLeading;
        }
      }

      {
        int_T i1;
        real_T *dw_POValues = &q_3d_crane_cal_DWork.HILInitialize_POValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POValues[i1] = q_3d_crane_cal_P.HILInitialize_POTrailing;
        }
      }

      result = hil_set_pwm_deadband(q_3d_crane_cal_DWork.HILInitialize_Card,
        q_3d_crane_cal_P.HILInitialize_POChannels, 8U,
        &q_3d_crane_cal_DWork.HILInitialize_POSortedFreqs[0],
        &q_3d_crane_cal_DWork.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
        return;
      }
    }

    if ((q_3d_crane_cal_P.HILInitialize_POStart && !is_switching) ||
        (q_3d_crane_cal_P.HILInitialize_POEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_POValues = &q_3d_crane_cal_DWork.HILInitialize_POValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POValues[i1] = q_3d_crane_cal_P.HILInitialize_POInitial;
        }
      }

      result = hil_write_pwm(q_3d_crane_cal_DWork.HILInitialize_Card,
        q_3d_crane_cal_P.HILInitialize_POChannels, 8U,
        &q_3d_crane_cal_DWork.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
        return;
      }
    }

    if (q_3d_crane_cal_P.HILInitialize_POReset) {
      {
        int_T i1;
        real_T *dw_POValues = &q_3d_crane_cal_DWork.HILInitialize_POValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POValues[i1] = q_3d_crane_cal_P.HILInitialize_POWatchdog;
        }
      }

      result = hil_watchdog_set_pwm_expiration_state
        (q_3d_crane_cal_DWork.HILInitialize_Card,
         q_3d_crane_cal_P.HILInitialize_POChannels, 8U,
         &q_3d_crane_cal_DWork.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
        return;
      }
    }
  }

  /* Start for S-Function (hil_read_timebase_block): '<S1>/HIL Read Timebase' */

  /* S-Function Block: q_3d_crane_cal/3-DOF Crane HIL/HIL Read Timebase (hil_read_timebase_block) */
  {
    t_error result;
    result = hil_task_create_reader(q_3d_crane_cal_DWork.HILInitialize_Card,
      q_3d_crane_cal_P.HILReadTimebase_SamplesInBuffer,
      q_3d_crane_cal_P.HILReadTimebase_AnalogChannels, 3U,
      q_3d_crane_cal_P.HILReadTimebase_EncoderChannels, 5U,
      q_3d_crane_cal_P.HILReadTimebase_DigitalChannels, 5U,
      NULL, 0U,
      &q_3d_crane_cal_DWork.HILReadTimebase_Task);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
    }
  }

  /* Start for S-Function (sigmoid_path): '<S60>/Sigmoid Path' */

  /* S-Function Block: q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Tower/Triggered Sigmoid/Sigmoid Path (sigmoid_path) */
  {
    q_3d_crane_cal_DWork.SigmoidPath_Path.t1 = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path.t2 = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path.t3 = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path.x0 = q_3d_crane_cal_P.x0v00_Value;
    q_3d_crane_cal_DWork.SigmoidPath_Path.x1 = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path.x2 = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path.xd = q_3d_crane_cal_P.GotoHomeCW_Value;
    q_3d_crane_cal_DWork.SigmoidPath_Path.v0 = q_3d_crane_cal_P.x0v00_Value;
    q_3d_crane_cal_DWork.SigmoidPath_Path.vp = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path.ap = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path.hold_off =
      q_3d_crane_cal_P.SigmoidPath_Hold;
    q_3d_crane_cal_DWork.SigmoidPath_RWORK.Time = 0;

    /*  initialize the toggle flag to -1 so that it is toggled
       on the first trigger    */
    q_3d_crane_cal_DWork.SigmoidPath_Toggle = -1;
  }

  /* Start for S-Function (sigmoid_path): '<S61>/Sigmoid Path' */

  /* S-Function Block: q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Tower/Triggered Sigmoid1/Sigmoid Path (sigmoid_path) */
  {
    q_3d_crane_cal_DWork.SigmoidPath_Path_m.t1 = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path_m.t2 = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path_m.t3 = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path_m.x0 = q_3d_crane_cal_P.x0v00_Value;
    q_3d_crane_cal_DWork.SigmoidPath_Path_m.x1 = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path_m.x2 = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path_m.xd =
      q_3d_crane_cal_P.GotoHomeCCW_Value;
    q_3d_crane_cal_DWork.SigmoidPath_Path_m.v0 = q_3d_crane_cal_P.x0v00_Value;
    q_3d_crane_cal_DWork.SigmoidPath_Path_m.vp = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path_m.ap = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path_m.hold_off =
      q_3d_crane_cal_P.SigmoidPath_Hold_a;
    q_3d_crane_cal_DWork.SigmoidPath_RWORK_p.Time = 0;

    /*  initialize the toggle flag to -1 so that it is toggled
       on the first trigger    */
    q_3d_crane_cal_DWork.SigmoidPath_Toggle_k = -1;
  }

  /* Start for S-Function (sigmoid_path): '<S67>/Sigmoid Path' */

  /* S-Function Block: q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Trolley/Triggered Sigmoid/Sigmoid Path (sigmoid_path) */
  {
    q_3d_crane_cal_DWork.SigmoidPath_Path_j.t1 = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path_j.t2 = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path_j.t3 = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path_j.x0 =
      q_3d_crane_cal_P.InitialSetpointJib_Value;
    q_3d_crane_cal_DWork.SigmoidPath_Path_j.x1 = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path_j.x2 = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path_j.xd =
      q_3d_crane_cal_B.MultiportSwitch;
    q_3d_crane_cal_DWork.SigmoidPath_Path_j.v0 =
      q_3d_crane_cal_P.InitialSetpointJib_Value;
    q_3d_crane_cal_DWork.SigmoidPath_Path_j.vp = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path_j.ap = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path_j.hold_off =
      q_3d_crane_cal_P.SigmoidPath_Hold_b;
    q_3d_crane_cal_DWork.SigmoidPath_RWORK_e.Time = 0;

    /*  initialize the toggle flag to -1 so that it is toggled
       on the first trigger    */
    q_3d_crane_cal_DWork.SigmoidPath_Toggle_c = -1;
  }

  /* Start for S-Function (sigmoid_path): '<S53>/Sigmoid Path' */

  /* S-Function Block: q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Payload/Triggered Sigmoid/Sigmoid Path (sigmoid_path) */
  {
    q_3d_crane_cal_DWork.SigmoidPath_Path_c.t1 = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path_c.t2 = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path_c.t3 = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path_c.x0 =
      q_3d_crane_cal_P.InitialSetpointTrolley_Value;
    q_3d_crane_cal_DWork.SigmoidPath_Path_c.x1 = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path_c.x2 = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path_c.xd =
      q_3d_crane_cal_B.MultiportSwitch_h;
    q_3d_crane_cal_DWork.SigmoidPath_Path_c.v0 =
      q_3d_crane_cal_P.InitialSetpointTrolley_Value;
    q_3d_crane_cal_DWork.SigmoidPath_Path_c.vp = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path_c.ap = 0;
    q_3d_crane_cal_DWork.SigmoidPath_Path_c.hold_off =
      q_3d_crane_cal_P.SigmoidPath_Hold_m;
    q_3d_crane_cal_DWork.SigmoidPath_RWORK_h.Time = 0;

    /*  initialize the toggle flag to -1 so that it is toggled
       on the first trigger    */
    q_3d_crane_cal_DWork.SigmoidPath_Toggle_h = -1;
  }

  /* Start for UnitDelay: '<S3>/Unit Delay' */
  q_3d_crane_cal_B.UnitDelay = q_3d_crane_cal_P.UnitDelay_X0_h;

  /* Start for Triggered SubSystem: '<S53>/Triggered Sigmoid Compute' */
  q_TriggeredSigmoidCompute_Start();

  /* End of Start for SubSystem: '<S53>/Triggered Sigmoid Compute' */

  /* Start for Triggered SubSystem: '<S60>/Triggered Sigmoid Compute' */
  TriggeredSigmoidCompute_p_Start();

  /* End of Start for SubSystem: '<S60>/Triggered Sigmoid Compute' */

  /* Start for Triggered SubSystem: '<S61>/Triggered Sigmoid Compute' */
  TriggeredSigmoidCompute_p_Start();

  /* End of Start for SubSystem: '<S61>/Triggered Sigmoid Compute' */

  /* Start for Triggered SubSystem: '<S67>/Triggered Sigmoid Compute' */
  q_TriggeredSigmoidCompute_Start();

  /* End of Start for SubSystem: '<S67>/Triggered Sigmoid Compute' */

  /* Start for S-Function (sample_time_block): '<S10>/Sample Time' */

  /* S-Function Block: q_3d_crane_cal/Sample Time Check/Sample Time (sample_time_block) */
  {
    t_error result;
    result = timeout_get_high_resolution_time
      (&q_3d_crane_cal_DWork.SampleTime_PreviousTime);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_3d_crane_cal_M, _rt_error_message);
      return;
    }
  }

  MdlInitialize();
}

void MdlTerminate(void)
{
  q_3d_crane_cal_terminate();
}

RT_MODEL_q_3d_crane_cal *q_3d_crane_cal(void)
{
  q_3d_crane_cal_initialize(1);
  return q_3d_crane_cal_M;
}

/*========================================================================*
 * End of GRT compatible call interface                                   *
 *========================================================================*/
