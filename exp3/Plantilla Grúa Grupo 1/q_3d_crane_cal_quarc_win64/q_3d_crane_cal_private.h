/*
 * q_3d_crane_cal_private.h
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
#ifndef RTW_HEADER_q_3d_crane_cal_private_h_
#define RTW_HEADER_q_3d_crane_cal_private_h_
#include "rtwtypes.h"
#ifndef __RTWTYPES_H__
#error This file requires rtwtypes.h to be included
#else
#ifdef TMWTYPES_PREVIOUSLY_INCLUDED
#error This file requires rtwtypes.h to be included before tmwtypes.h
#else

/* Check for inclusion of an incorrect version of rtwtypes.h */
#ifndef RTWTYPES_ID_C08S16I32L32N32F1
#error This code was generated with a different "rtwtypes.h" than the file included
#endif                                 /* RTWTYPES_ID_C08S16I32L32N32F1 */
#endif                                 /* TMWTYPES_PREVIOUSLY_INCLUDED */
#endif                                 /* __RTWTYPES_H__ */

/* A global buffer for storing error messages (defined in quanser_common library) */
EXTERN char _rt_error_message[512];
extern void q_3d_crane_ca_ResetEncoderTower(boolean_T rtu_0,
  RT_MODEL_q_3d_crane_cal *const q_3d_crane_cal_M,
  rtDW_ResetEncoderTower_q_3d_cra *localDW, rtP_ResetEncoderTower_q_3d_cran
  *localP, rtZCE_ResetEncoderTower_q_3d_cr *localZCE);
extern void q_TriggeredSigmoidCompute_Start(void);
extern void q_3d_cr_TriggeredSigmoidCompute(boolean_T rtu_0, real_T rtu_x0,
  real_T rtu_xd, rtB_TriggeredSigmoidCompute_q_3 *localB,
  rtDW_TriggeredSigmoidCompute_q_ *localDW, rtP_TriggeredSigmoidCompute_q_3
  *localP, rtZCE_TriggeredSigmoidCompute_q *localZCE);
extern void TriggeredSigmoidCompute_p_Start(void);
extern void q_3d__TriggeredSigmoidCompute_d(boolean_T rtu_0, real_T rtu_x0,
  real_T rtu_xd, rtB_TriggeredSigmoidCompute_q_p *localB,
  rtDW_TriggeredSigmoidCompute_h *localDW, rtP_TriggeredSigmoidCompute_q_e
  *localP, rtZCE_TriggeredSigmoidCompute_b *localZCE);
void q_3d_crane_cal_output0(int_T tid);
void q_3d_crane_cal_update0(int_T tid);
void q_3d_crane_cal_output1(int_T tid);
void q_3d_crane_cal_update1(int_T tid);

#endif                                 /* RTW_HEADER_q_3d_crane_cal_private_h_ */
