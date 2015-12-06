/*
 * Planilla_3DOF_Crane_dt.h
 *
 * Code generation for model "Planilla_3DOF_Crane.mdl".
 *
 * Model version              : 1.160
 * Simulink Coder version : 8.1 (R2011b) 08-Jul-2011
 * C source code generated on : Mon Nov 02 12:01:11 2015
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
  "t_card",
  "t_task",
  "t_boolean"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&Planilla_3DOF_Crane_B.EncoderCalibration[0]), 0, 0, 534 },

  { (char_T *)(&Planilla_3DOF_Crane_B.Compare), 8, 0, 407 }
  ,

  { (char_T *)(&Planilla_3DOF_Crane_DWork.LastMVs_DSTATE), 0, 0, 82 },

  { (char_T *)(&Planilla_3DOF_Crane_DWork.HILInitialize_Card), 14, 0, 1 },

  { (char_T *)(&Planilla_3DOF_Crane_DWork.HILReadTimebase_Task), 15, 0, 1 },

  { (char_T *)(&Planilla_3DOF_Crane_DWork.HILWrite_PWORK), 11, 0, 10 },

  { (char_T *)(&Planilla_3DOF_Crane_DWork.HILInitialize_ClockModes[0]), 6, 0, 66
  },

  { (char_T *)(&Planilla_3DOF_Crane_DWork.HILInitialize_POSortedChans[0]), 7, 0,
    8 },

  { (char_T *)(&Planilla_3DOF_Crane_DWork.is_active_c4_mpclib), 3, 0, 4 },

  { (char_T *)(&Planilla_3DOF_Crane_DWork.Memory_PreviousInput_j[0]), 8, 0, 410
  },

  { (char_T *)(&Planilla_3DOF_Crane_DWork.HILReadTimebase_DigitalBuffer[0]), 16,
    0, 9 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  11U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&Planilla_3DOF_Crane_P.Constant3_Value), 0, 0, 590 },

  { (char_T *)(&Planilla_3DOF_Crane_P.HILInitialize_CKChannels[0]), 6, 0, 24 },

  { (char_T *)(&Planilla_3DOF_Crane_P.HILInitialize_AIChannels[0]), 7, 0, 54 },

  { (char_T *)(&Planilla_3DOF_Crane_P.SFunction_p9), 8, 0, 441 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  4U,
  rtPTransitions
};

/* [EOF] Planilla_3DOF_Crane_dt.h */
