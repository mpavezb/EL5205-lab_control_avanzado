/*
 * q_3d_crane_cal_dt.h
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

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(t_timeout),
  sizeof(t_sigmoid_params),
  sizeof(t_card),
  sizeof(t_task),
  sizeof(t_boolean)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "t_timeout",
  "t_sigmoid_params",
  "t_card",
  "t_task",
  "t_boolean"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&q_3d_crane_cal_B.EncoderCalibration[0]), 0, 0, 38 },

  { (char_T *)(&q_3d_crane_cal_B.Sum), 3, 0, 2 },

  { (char_T *)(&q_3d_crane_cal_B.Compare_f), 8, 0, 16 },

  { (char_T *)(&q_3d_crane_cal_B.TriggeredSigmoidCompute_l.SigmoidCompute_o1),
    15, 0, 1 },

  { (char_T *)(&q_3d_crane_cal_B.TriggeredSigmoidCompute_l.SigmoidCompute_o2), 2,
    0, 1 },

  { (char_T *)(&q_3d_crane_cal_B.TriggeredSigmoidCompute_e.SigmoidCompute_o1),
    15, 0, 1 },

  { (char_T *)(&q_3d_crane_cal_B.TriggeredSigmoidCompute_e.SigmoidCompute_o2), 2,
    0, 1 },

  { (char_T *)(&q_3d_crane_cal_B.TriggeredSigmoidCompute_d.SigmoidCompute_o1),
    15, 0, 1 },

  { (char_T *)(&q_3d_crane_cal_B.TriggeredSigmoidCompute_d.SigmoidCompute_o2), 2,
    0, 1 },

  { (char_T *)(&q_3d_crane_cal_B.TriggeredSigmoidCompute.SigmoidCompute_o1), 15,
    0, 1 },

  { (char_T *)(&q_3d_crane_cal_B.TriggeredSigmoidCompute.SigmoidCompute_o2), 2,
    0, 1 }
  ,

  { (char_T *)(&q_3d_crane_cal_DWork.SigmoidPath_Path), 15, 0, 8 },

  { (char_T *)(&q_3d_crane_cal_DWork.SampleTime_PreviousTime), 14, 0, 1 },

  { (char_T *)(&q_3d_crane_cal_DWork.DiscreteTimeIntegrator_DSTATE), 0, 0, 83 },

  { (char_T *)(&q_3d_crane_cal_DWork.HILInitialize_Card), 16, 0, 1 },

  { (char_T *)(&q_3d_crane_cal_DWork.HILReadTimebase_Task), 17, 0, 1 },

  { (char_T *)(&q_3d_crane_cal_DWork.SigmoidPath_RWORK.Time), 0, 0, 4 },

  { (char_T *)(&q_3d_crane_cal_DWork.HILWrite_PWORK), 11, 0, 9 },

  { (char_T *)(&q_3d_crane_cal_DWork.HILInitialize_ClockModes[0]), 6, 0, 62 },

  { (char_T *)(&q_3d_crane_cal_DWork.HILInitialize_POSortedChans[0]), 7, 0, 8 },

  { (char_T *)(&q_3d_crane_cal_DWork.UnitDelay_DSTATE), 8, 0, 4 },

  { (char_T *)(&q_3d_crane_cal_DWork.SigmoidPath_Toggle), 2, 0, 5 },

  { (char_T *)(&q_3d_crane_cal_DWork.SigmoidPath_Flag), 3, 0, 5 },

  { (char_T *)(&q_3d_crane_cal_DWork.Memory_PreviousInput_h), 8, 0, 4 },

  { (char_T *)(&q_3d_crane_cal_DWork.HILReadTimebase_DigitalBuffer[0]), 18, 0, 9
  },

  { (char_T *)
    (&q_3d_crane_cal_DWork.TriggeredSigmoidCompute_l.TriggeredSigmoidCompute_SubsysR),
    2, 0, 2 },

  { (char_T *)
    (&q_3d_crane_cal_DWork.TriggeredSigmoidCompute_e.TriggeredSigmoidCompute_SubsysR),
    2, 0, 2 },

  { (char_T *)
    (&q_3d_crane_cal_DWork.TriggeredSigmoidCompute_d.TriggeredSigmoidCompute_SubsysR),
    2, 0, 2 },

  { (char_T *)
    (&q_3d_crane_cal_DWork.TriggeredSigmoidCompute.TriggeredSigmoidCompute_SubsysR),
    2, 0, 2 },

  { (char_T *)
    (&q_3d_crane_cal_DWork.ResetEncoderTrolley.HILSetEncoderCounts_PWORK), 11, 0,
    1 },

  { (char_T *)
    (&q_3d_crane_cal_DWork.ResetEncoderTrolley.ResetEncoderTower_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)
    (&q_3d_crane_cal_DWork.ResetEncoderPayload.HILSetEncoderCounts_PWORK), 11, 0,
    1 },

  { (char_T *)
    (&q_3d_crane_cal_DWork.ResetEncoderPayload.ResetEncoderTower_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&q_3d_crane_cal_DWork.ResetEncoderTower.HILSetEncoderCounts_PWORK),
    11, 0, 1 },

  { (char_T *)
    (&q_3d_crane_cal_DWork.ResetEncoderTower.ResetEncoderTower_SubsysRanBC), 2,
    0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  35U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&q_3d_crane_cal_P.Constant_Value), 0, 0, 159 },

  { (char_T *)(&q_3d_crane_cal_P.HILInitialize_CKChannels[0]), 6, 0, 24 },

  { (char_T *)(&q_3d_crane_cal_P.HILInitialize_AIChannels[0]), 7, 0, 54 },

  { (char_T *)(&q_3d_crane_cal_P.ShowMessageonHost_MsgIcon), 2, 0, 2 },

  { (char_T *)(&q_3d_crane_cal_P.Memory_X0), 3, 0, 3 },

  { (char_T *)(&q_3d_crane_cal_P.HILInitialize_Active), 8, 0, 46 },

  { (char_T *)(&q_3d_crane_cal_P.TriggeredSigmoidCompute_l.SigmoidCompute_VMax),
    0, 0, 2 },

  { (char_T *)(&q_3d_crane_cal_P.TriggeredSigmoidCompute_e.SigmoidCompute_VMax),
    0, 0, 2 },

  { (char_T *)(&q_3d_crane_cal_P.TriggeredSigmoidCompute_d.SigmoidCompute_VMax),
    0, 0, 2 },

  { (char_T *)(&q_3d_crane_cal_P.TriggeredSigmoidCompute.SigmoidCompute_VMax), 0,
    0, 2 },

  { (char_T *)(&q_3d_crane_cal_P.ResetEncoderTrolley.HILSetEncoderCounts_Counts),
    6, 0, 1 },

  { (char_T *)
    (&q_3d_crane_cal_P.ResetEncoderTrolley.HILSetEncoderCounts_Channels), 7, 0,
    1 },

  { (char_T *)(&q_3d_crane_cal_P.ResetEncoderTrolley.HILSetEncoderCounts_Active),
    8, 0, 1 },

  { (char_T *)(&q_3d_crane_cal_P.ResetEncoderPayload.HILSetEncoderCounts_Counts),
    6, 0, 1 },

  { (char_T *)
    (&q_3d_crane_cal_P.ResetEncoderPayload.HILSetEncoderCounts_Channels), 7, 0,
    1 },

  { (char_T *)(&q_3d_crane_cal_P.ResetEncoderPayload.HILSetEncoderCounts_Active),
    8, 0, 1 },

  { (char_T *)(&q_3d_crane_cal_P.ResetEncoderTower.HILSetEncoderCounts_Counts),
    6, 0, 1 },

  { (char_T *)(&q_3d_crane_cal_P.ResetEncoderTower.HILSetEncoderCounts_Channels),
    7, 0, 1 },

  { (char_T *)(&q_3d_crane_cal_P.ResetEncoderTower.HILSetEncoderCounts_Active),
    8, 0, 1 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  19U,
  rtPTransitions
};

/* [EOF] q_3d_crane_cal_dt.h */
