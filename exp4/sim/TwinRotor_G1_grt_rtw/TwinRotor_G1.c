/*
 * TwinRotor_G1.c
 * 
 * Real-Time Workshop code generation for Simulink model "TwinRotor_G1.mdl".
 *
 * Model Version              : 1.421
 * Real-Time Workshop version : 6.1  (R14SP1)  05-Sep-2004
 * C source code generated on : Thu Dec 03 16:10:51 2015
 */

#include "TwinRotor_G1.h"
#include "TwinRotor_G1_private.h"

/* Block signals (auto storage) */
BlockIO_TwinRotor_G1 TwinRotor_G1_B;

/* Continuous states */
ContinuousStates_TwinRotor_G1 TwinRotor_G1_X;

/* Block states (auto storage) */
D_Work_TwinRotor_G1 TwinRotor_G1_DWork;

/* Real-time model */
rtModel_TwinRotor_G1 TwinRotor_G1_M_;
rtModel_TwinRotor_G1 *TwinRotor_G1_M = &TwinRotor_G1_M_;

/* This function implements a singletasking scheduler for a system with 2
 * rates.  This function is called by the generated step function, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
}

/* This function updates continuous states using the ODE1 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si , int_T tid)
{
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE1_IntgData *id = rtsiGetSolverData(si);
  real_T *f0 = id->f[0];
  int_T i;

  int_T nXc = 2;

  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  rtsiSetdX(si, f0);
  TwinRotor_G1_derivatives();
  rtsiSetT(si, tnew);

  for (i = 0; i < nXc; i++) {
    *x += h * f0[i];
    x++;
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model output function */
void TwinRotor_G1_output(int_T tid)
{

  /* local block i/o variables */

  real_T rtb_Normalizacion;
  real_T rtb_Normalizacion1;
  real_T rtb_Normalizacion3;
  real_T rtb_Sum2;
  real_T rtb_Sum1;
  real_T rtb_Integrator;
  real_T rtb_Derivative;
  real_T rtb_Sum;
  real_T rtb_Integrator_o;
  real_T rtb_Sum_n;
  real_T rtb_Sum_l;
  boolean_T rtb_EnvironmentSwitch;
  boolean_T rtb_EnvironmentSwitch_e;

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(TwinRotor_G1_M)) {
    TwinRotor_G1_M->Timing.t[0] = rtsiGetT(&TwinRotor_G1_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(TwinRotor_G1_M)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&TwinRotor_G1_M->solverInfo,
     ((TwinRotor_G1_M->Timing.clockTick0+1)*TwinRotor_G1_M->Timing.stepSize0));
  }                                     /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(TwinRotor_G1_M) &&
   TwinRotor_G1_M->Timing.TaskCounters.TID[1] == 0) { /* Sample time: [0.05s, 0.0s] */

    /* Level2 S-Function Block: <S5>/S-Function (STwinRotor) */
    {
      SimStruct *rts = TwinRotor_G1_M->childSfunctions[0];

      sfcnOutputs(rts, 1);
    }

    /* Fcn: '<S5>/Normalizacion' */
    rtb_Normalizacion = 1.0054270000000001 * TwinRotor_G1_B.SFunction[0] -
      8.0866509999999998;

    /* Fcn: '<S5>/Normalizacion1' */
    rtb_Normalizacion1 = 0.53855500000000001 * TwinRotor_G1_B.SFunction[1] +
      14.686419000000001;

    /* Scope: '<Root>/Scope_Vel' */
    if (rtmIsMajorTimeStep(TwinRotor_G1_M)) {
      real_T u[3];
      u[0] = TwinRotor_G1_M->Timing.t[1];
      u[1] = rtb_Normalizacion;
      u[2] = rtb_Normalizacion1;
      rt_UpdateLogVar(TwinRotor_G1_DWork.Scope_Vel_PWORK.LoggedData, u);
    }

    /* Fcn: '<S5>/Normalizacion3' */
    rtb_Normalizacion3 = (-179.250407 * TwinRotor_G1_B.SFunction[2] -
      107.191743) * 0.80357100000000004;

    /* Scope: '<Root>/Scope_rH' incorporates:
     *  Constant: '<Root>/rH'
     */
    if (rtmIsMajorTimeStep(TwinRotor_G1_M)) {
      real_T u[3];
      u[0] = TwinRotor_G1_M->Timing.t[1];
      u[1] = TwinRotor_G1_P.rH_Value;
      u[2] = rtb_Normalizacion3;
      rt_UpdateLogVar(TwinRotor_G1_DWork.Scope_rH_PWORK.LoggedData, u);
    }

    /* Sum: '<S5>/Sum2' incorporates:
     *  Fcn: '<S5>/Normalizacion2'
     *  Constant: '<S5>/Constant1'
     */
    rtb_Sum2 = -(-126.05042 * TwinRotor_G1_B.SFunction[3] + 227.899159) +
      TwinRotor_G1_P.Constant1_Value;

    /* Scope: '<Root>/Scope_rV' incorporates:
     *  Constant: '<Root>/rV'
     */
    if (rtmIsMajorTimeStep(TwinRotor_G1_M)) {
      real_T u[3];
      u[0] = TwinRotor_G1_M->Timing.t[1];
      u[1] = TwinRotor_G1_P.rV_Value;
      u[2] = rtb_Sum2;
      rt_UpdateLogVar(TwinRotor_G1_DWork.Scope_rV_PWORK.LoggedData, u);
    }

    /* Sum: '<Root>/Sum1' incorporates:
     *  Constant: '<Root>/rH'
     */
    rtb_Sum1 = TwinRotor_G1_P.rH_Value - rtb_Normalizacion3;

    /* Gain: '<S4>/Gain' */
    TwinRotor_G1_B.Gain = rtb_Sum1 * TwinRotor_G1_P.Gain_Gain;
  }

  /* Integrator: '<S4>/Integrator' */
  rtb_Integrator = TwinRotor_G1_X.Integrator_CSTATE;

  if (rtmIsMajorTimeStep(TwinRotor_G1_M) &&
   TwinRotor_G1_M->Timing.TaskCounters.TID[1] == 0) { /* Sample time: [0.05s, 0.0s] */

    /* Gain: '<S4>/Gain2' */
    TwinRotor_G1_B.Gain2 = rtb_Sum1 * TwinRotor_G1_P.Gain2_Gain;
  }

  /* Derivative Block: <S4>/Derivative */
  {
    real_T t = TwinRotor_G1_M->Timing.t[0];
    real_T timeStampA = TwinRotor_G1_DWork.Derivative_RWORK.TimeStampA;
    real_T timeStampB = TwinRotor_G1_DWork.Derivative_RWORK.TimeStampB;

    if (timeStampA >= t && timeStampB >= t) {
      rtb_Derivative = 0.0;
    } else {
      real_T deltaT;
      real_T *lastBank = &TwinRotor_G1_DWork.Derivative_RWORK.TimeStampA;
      if (timeStampA < timeStampB) {
        if (timeStampB < t) {
          lastBank += 2;
        }
      } else if (timeStampA >= t) {
        lastBank += 2;
      }
      deltaT = t - *lastBank++;
      rtb_Derivative = (TwinRotor_G1_B.Gain2 - *lastBank++) / deltaT;
    }
  }

  /* S-Function Block (sfun_manswitch): <S2>/SimValue */
  TwinRotor_G1_B.SimValue = TwinRotor_G1_P.SimValue_P1;

  /* Switch: '<S7>/Environment Switch' incorporates:
   *  Constant: '<S7>/Switch Control'
   *  Constant: '<S2>/RTWValue'
   */
  if(TwinRotor_G1_P.SwitchControl_Value) {
    rtb_EnvironmentSwitch = TwinRotor_G1_B.SimValue;
  } else {
    rtb_EnvironmentSwitch = TwinRotor_G1_P.RTWValue_Value;
  }

  /* Switch: '<S2>/Switch' incorporates:
   *  Saturate: '<S4>/Saturation'
   *  Constant: '<Root>/Constant'
   */
  if(rtb_EnvironmentSwitch) {

    /* Sum: '<S4>/Sum' */
    rtb_Sum_n = (TwinRotor_G1_B.Gain + rtb_Integrator) + rtb_Derivative;
    TwinRotor_G1_B.Switch = rt_SATURATE(rtb_Sum_n,
     TwinRotor_G1_P.Saturation_LowerSat_p, TwinRotor_G1_P.Saturation_UpperSat_n);
  } else {
    TwinRotor_G1_B.Switch = TwinRotor_G1_P.Constant_Value;
  }

  if (rtmIsMajorTimeStep(TwinRotor_G1_M) &&
   TwinRotor_G1_M->Timing.TaskCounters.TID[1] == 0) { /* Sample time: [0.05s, 0.0s] */

    /* Scope: '<Root>/uH' */
    if (rtmIsMajorTimeStep(TwinRotor_G1_M)) {
      real_T u[2];
      u[0] = TwinRotor_G1_M->Timing.t[1];
      u[1] = TwinRotor_G1_B.Switch;
      rt_UpdateLogVar(TwinRotor_G1_DWork.uH_PWORK.LoggedData, u);
    }

    /* Sum: '<Root>/Sum' incorporates:
     *  Constant: '<Root>/rV'
     */
    rtb_Sum = TwinRotor_G1_P.rV_Value - rtb_Sum2;

    /* Gain: '<S3>/Gain' */
    TwinRotor_G1_B.Gain_a = rtb_Sum * TwinRotor_G1_P.Gain_Gain_k;
  }

  /* Integrator: '<S3>/Integrator' */
  rtb_Integrator_o = TwinRotor_G1_X.Integrator_g_CSTATE;

  /* S-Function Block (sfun_manswitch): <S1>/SimValue */
  TwinRotor_G1_B.SimValue_m = TwinRotor_G1_P.SimValue_P1_g;

  /* Switch: '<S6>/Environment Switch' incorporates:
   *  Constant: '<S6>/Switch Control'
   *  Constant: '<S1>/RTWValue'
   */
  if(TwinRotor_G1_P.SwitchControl_Value_l) {
    rtb_EnvironmentSwitch_e = TwinRotor_G1_B.SimValue_m;
  } else {
    rtb_EnvironmentSwitch_e = TwinRotor_G1_P.RTWValue_Value_j;
  }

  /* Switch: '<S1>/Switch' incorporates:
   *  Saturate: '<S3>/Saturation'
   *  Constant: '<Root>/Constant1'
   */
  if(rtb_EnvironmentSwitch_e) {

    /* Sum: '<S3>/Sum' */
    rtb_Sum_l = TwinRotor_G1_B.Gain_a + rtb_Integrator_o;
    TwinRotor_G1_B.Switch_p = rt_SATURATE(rtb_Sum_l,
     TwinRotor_G1_P.Saturation_LowerSat, TwinRotor_G1_P.Saturation_UpperSat);
  } else {
    TwinRotor_G1_B.Switch_p = TwinRotor_G1_P.Constant1_Value_h;
  }

  if (rtmIsMajorTimeStep(TwinRotor_G1_M) &&
   TwinRotor_G1_M->Timing.TaskCounters.TID[1] == 0) { /* Sample time: [0.05s, 0.0s] */

    /* Scope: '<Root>/uV' */
    if (rtmIsMajorTimeStep(TwinRotor_G1_M)) {
      real_T u[2];
      u[0] = TwinRotor_G1_M->Timing.t[1];
      u[1] = TwinRotor_G1_B.Switch_p;
      rt_UpdateLogVar(TwinRotor_G1_DWork.uV_PWORK.LoggedData, u);
    }

    /* Gain: '<S3>/Gain1' */
    TwinRotor_G1_B.Gain1 = rtb_Sum * TwinRotor_G1_P.Gain1_Gain;

    /* Gain: '<S4>/Gain1' */
    TwinRotor_G1_B.Gain1_a = rtb_Sum1 * TwinRotor_G1_P.Gain1_Gain_e;
  }

  /* Level2 S-Function Block: <S5>/Timer Function (RTBlock) */
  {
    SimStruct *rts = TwinRotor_G1_M->childSfunctions[1];

    sfcnOutputs(rts, 0);
  }

  /* Fcn: '<S5>/Normalizacion 0-20' incorporates:
   *  Saturate: '<S5>/Saturation1' */
  TwinRotor_G1_B.Normalizacion020 = 2.0 * rt_SATURATE(TwinRotor_G1_B.Switch_p,
   TwinRotor_G1_P.Saturation1_LowerSat, TwinRotor_G1_P.Saturation1_UpperSat) -
  20.0;

  /* Saturate: '<S5>/Saturation2' */
  TwinRotor_G1_B.Saturation2 = rt_SATURATE(TwinRotor_G1_B.Switch,
   TwinRotor_G1_P.Saturation2_LowerSat, TwinRotor_G1_P.Saturation2_UpperSat);

  if (rtmIsMajorTimeStep(TwinRotor_G1_M) &&
   TwinRotor_G1_M->Timing.TaskCounters.TID[1] == 0) { /* Sample time: [0.05s, 0.0s] */

    /* SignalConversion: '<S5>/TmpHiddenBuffer_Feeding_S-Function_AtInput1' */
    TwinRotor_G1_B.TmpHiddenBuffer_Feeding_SFunct[0] =
      TwinRotor_G1_B.Normalizacion020;
    TwinRotor_G1_B.TmpHiddenBuffer_Feeding_SFunct[1] =
      TwinRotor_G1_B.Saturation2;
  }
}

/* Model update function */
void TwinRotor_G1_update(int_T tid)
{

  if (rtmIsMajorTimeStep(TwinRotor_G1_M) &&
   TwinRotor_G1_M->Timing.TaskCounters.TID[1] == 0) { /* Sample time: [0.05s, 0.0s] */

    /* Level2 S-Function Block: <S5>/S-Function (STwinRotor) */
    {
      SimStruct *rts = TwinRotor_G1_M->childSfunctions[0];

      sfcnUpdate(rts, 1);
      if(ssGetErrorStatus(rts) != NULL) return;
    }
  }

  /* Derivative Block: <S4>/Derivative */
  {
    real_T timeStampA = TwinRotor_G1_DWork.Derivative_RWORK.TimeStampA;
    real_T timeStampB = TwinRotor_G1_DWork.Derivative_RWORK.TimeStampB;
    real_T *lastBank = &TwinRotor_G1_DWork.Derivative_RWORK.TimeStampA;

    if (timeStampA != rtInf) {
      if (timeStampB == rtInf) {
        lastBank += 2;
      } else if (timeStampA >= timeStampB) {
        lastBank += 2;
      }
    }
    *lastBank++ = TwinRotor_G1_M->Timing.t[0];
    *lastBank++ = TwinRotor_G1_B.Gain2;
  }

  /* Level2 S-Function Block: <S5>/Timer Function (RTBlock) */
  {
    SimStruct *rts = TwinRotor_G1_M->childSfunctions[1];

    sfcnUpdate(rts, 0);
    if(ssGetErrorStatus(rts) != NULL) return;
  }

  if (rtmIsMajorTimeStep(TwinRotor_G1_M)) {
    rt_ertODEUpdateContinuousStates(&TwinRotor_G1_M->solverInfo, 0);
  }

  /* Update absolute time for base rate */

  if(!(++TwinRotor_G1_M->Timing.clockTick0))
  ++TwinRotor_G1_M->Timing.clockTickH0;
  TwinRotor_G1_M->Timing.t[0] = TwinRotor_G1_M->Timing.clockTick0 *
    TwinRotor_G1_M->Timing.stepSize0 + TwinRotor_G1_M->Timing.clockTickH0 *
    TwinRotor_G1_M->Timing.stepSize0 * 4294967296.0;

  if (rtmIsMajorTimeStep(TwinRotor_G1_M) &&
   TwinRotor_G1_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update absolute timer for sample time: [0.05s, 0.0s] */

    if(!(++TwinRotor_G1_M->Timing.clockTick1))
    ++TwinRotor_G1_M->Timing.clockTickH1;
    TwinRotor_G1_M->Timing.t[1] = TwinRotor_G1_M->Timing.clockTick1 *
      TwinRotor_G1_M->Timing.stepSize1 + TwinRotor_G1_M->Timing.clockTickH1 *
      TwinRotor_G1_M->Timing.stepSize1 * 4294967296.0;
  }

  rate_scheduler();
}

/* Derivatives for root system: '<Root>' */
void TwinRotor_G1_derivatives(void)
{
  /* simstruct variables */
  StateDerivatives_TwinRotor_G1 *TwinRotor_G1_Xdot =
    (StateDerivatives_TwinRotor_G1*) TwinRotor_G1_M->ModelData.derivs;

  /* Integrator Block: <S4>/Integrator */
  {

    TwinRotor_G1_Xdot->Integrator_CSTATE = TwinRotor_G1_B.Gain1_a;
  }

  /* Integrator Block: <S3>/Integrator */
  {

    TwinRotor_G1_Xdot->Integrator_g_CSTATE = TwinRotor_G1_B.Gain1;
  }
}

/* Model initialize function */
void TwinRotor_G1_initialize(boolean_T firstTime)
{

  if (firstTime) {
    /* registration code */
    /* initialize real-time model */
    (void)memset((char_T *)TwinRotor_G1_M, 0, sizeof(rtModel_TwinRotor_G1));

    {
      /* Setup solver object */

      rtsiSetSimTimeStepPtr(&TwinRotor_G1_M->solverInfo,
       &TwinRotor_G1_M->Timing.simTimeStep);
      rtsiSetTPtr(&TwinRotor_G1_M->solverInfo, &rtmGetTPtr(TwinRotor_G1_M));
      rtsiSetStepSizePtr(&TwinRotor_G1_M->solverInfo,
       &TwinRotor_G1_M->Timing.stepSize0);
      rtsiSetdXPtr(&TwinRotor_G1_M->solverInfo,
       &TwinRotor_G1_M->ModelData.derivs);
      rtsiSetContStatesPtr(&TwinRotor_G1_M->solverInfo,
       &TwinRotor_G1_M->ModelData.contStates);
      rtsiSetNumContStatesPtr(&TwinRotor_G1_M->solverInfo,
       &TwinRotor_G1_M->Sizes.numContStates);
      rtsiSetErrorStatusPtr(&TwinRotor_G1_M->solverInfo,
       &rtmGetErrorStatus(TwinRotor_G1_M));

      rtsiSetRTModelPtr(&TwinRotor_G1_M->solverInfo, TwinRotor_G1_M);
    }
    rtsiSetSimTimeStep(&TwinRotor_G1_M->solverInfo, MAJOR_TIME_STEP);
    TwinRotor_G1_M->ModelData.intgData.f[0] = TwinRotor_G1_M->ModelData.odeF[0];
    TwinRotor_G1_M->ModelData.contStates = ((real_T *) &TwinRotor_G1_X);
    rtsiSetSolverData(&TwinRotor_G1_M->solverInfo, (void
      *)&TwinRotor_G1_M->ModelData.intgData);
    rtsiSetSolverName(&TwinRotor_G1_M->solverInfo,"ode1");
    TwinRotor_G1_M->solverInfoPtr = (&TwinRotor_G1_M->solverInfo);

    /* Initialize timing info */
    {
      int_T *mdlTsMap = TwinRotor_G1_M->Timing.sampleTimeTaskIDArray;
      mdlTsMap[0] = 0;
      mdlTsMap[1] = 1;
      TwinRotor_G1_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
      TwinRotor_G1_M->Timing.sampleTimes =
        (&TwinRotor_G1_M->Timing.sampleTimesArray[0]);
      TwinRotor_G1_M->Timing.offsetTimes =
        (&TwinRotor_G1_M->Timing.offsetTimesArray[0]);
      /* task periods */
      TwinRotor_G1_M->Timing.sampleTimes[0] = (0.0);
      TwinRotor_G1_M->Timing.sampleTimes[1] = (0.05);

      /* task offsets */
      TwinRotor_G1_M->Timing.offsetTimes[0] = (0.0);
      TwinRotor_G1_M->Timing.offsetTimes[1] = (0.0);
    }

    rtmSetTPtr(TwinRotor_G1_M, &TwinRotor_G1_M->Timing.tArray[0]);

    {
      int_T *mdlSampleHits = TwinRotor_G1_M->Timing.sampleHitArray;
      mdlSampleHits[0] = 1;
      mdlSampleHits[1] = 1;
      TwinRotor_G1_M->Timing.sampleHits = (&mdlSampleHits[0]);
    }

    rtmSetTFinal(TwinRotor_G1_M, -1);
    TwinRotor_G1_M->Timing.stepSize0 = 0.05;
    TwinRotor_G1_M->Timing.stepSize1 = 0.05;

    /* Setup for data logging */
    {
      static RTWLogInfo rt_DataLoggingInfo;

      TwinRotor_G1_M->rtwLogInfo = &rt_DataLoggingInfo;

      rtliSetLogFormat(TwinRotor_G1_M->rtwLogInfo, 0);

      rtliSetLogMaxRows(TwinRotor_G1_M->rtwLogInfo, 1000);

      rtliSetLogDecimation(TwinRotor_G1_M->rtwLogInfo, 1);

      rtliSetLogVarNameModifier(TwinRotor_G1_M->rtwLogInfo, "rt_");

      rtliSetLogT(TwinRotor_G1_M->rtwLogInfo, "tout");

      rtliSetLogX(TwinRotor_G1_M->rtwLogInfo, "");

      rtliSetLogXFinal(TwinRotor_G1_M->rtwLogInfo, "");

      rtliSetSigLog(TwinRotor_G1_M->rtwLogInfo, "");

      rtliSetLogXSignalInfo(TwinRotor_G1_M->rtwLogInfo, NULL);

      rtliSetLogXSignalPtrs(TwinRotor_G1_M->rtwLogInfo, NULL);

      rtliSetLogY(TwinRotor_G1_M->rtwLogInfo, "");

      rtliSetLogYSignalInfo(TwinRotor_G1_M->rtwLogInfo, NULL);

      rtliSetLogYSignalPtrs(TwinRotor_G1_M->rtwLogInfo, NULL);
    }

    TwinRotor_G1_M->solverInfoPtr = (&TwinRotor_G1_M->solverInfo);
    TwinRotor_G1_M->Timing.stepSize = (0.05);
    rtsiSetFixedStepSize(&TwinRotor_G1_M->solverInfo, 0.05);
    rtsiSetSolverMode(&TwinRotor_G1_M->solverInfo, SOLVER_MODE_SINGLETASKING);

    {
      /* block I/O */
      void *b = (void *) &TwinRotor_G1_B;
      TwinRotor_G1_M->ModelData.blockIO = (b);

      (void)memset(b, 0, sizeof(BlockIO_TwinRotor_G1));

      {

        int_T i;
        b =&TwinRotor_G1_B.SFunction[0];
        for (i = 0; i < 17; i++) {
          ((real_T*)b)[i] = 0.0;
        }
      }
    }
    /* parameters */
    TwinRotor_G1_M->ModelData.defaultParam = ((real_T *) &TwinRotor_G1_P);
    /* states */
    {
      real_T *x = (real_T *) &TwinRotor_G1_X;
      TwinRotor_G1_M->ModelData.contStates = (x);
      (void)memset((char_T *)x, 0, sizeof(ContinuousStates_TwinRotor_G1));
    }

    /* data type work */
    TwinRotor_G1_M->Work.dwork = ((void *) &TwinRotor_G1_DWork);
    (void)memset((char_T *) &TwinRotor_G1_DWork, 0, sizeof(D_Work_TwinRotor_G1));
    {
      int_T i;
      real_T *dwork_ptr = (real_T *) &TwinRotor_G1_DWork.SFunction_DSTATE;

      for (i = 0; i < 5; i++) {
        dwork_ptr[i] = 0.0;
      }
    }

    /* initialize non-finites */
    rt_InitInfAndNaN(sizeof(real_T));

    /* child S-Function registration */
    {
      RTWSfcnInfo *sfcnInfo = &TwinRotor_G1_M->NonInlinedSFcns.sfcnInfo;

      TwinRotor_G1_M->sfcnInfo = (sfcnInfo);

      rtssSetErrorStatusPtr(sfcnInfo, &rtmGetErrorStatus(TwinRotor_G1_M));
      rtssSetNumRootSampTimesPtr(sfcnInfo, &TwinRotor_G1_M->Sizes.numSampTimes);
      rtssSetTPtrPtr(sfcnInfo, &rtmGetTPtr(TwinRotor_G1_M));
      rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(TwinRotor_G1_M));
      rtssSetTimeOfLastOutputPtr(sfcnInfo,
       &rtmGetTimeOfLastOutput(TwinRotor_G1_M));
      rtssSetStepSizePtr(sfcnInfo, &TwinRotor_G1_M->Timing.stepSize);
      rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(TwinRotor_G1_M));
      rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
       &TwinRotor_G1_M->ModelData.derivCacheNeedsReset);
      rtssSetZCCacheNeedsResetPtr(sfcnInfo,
       &TwinRotor_G1_M->ModelData.zCCacheNeedsReset);
      rtssSetBlkStateChangePtr(sfcnInfo,
       &TwinRotor_G1_M->ModelData.blkStateChange);
      rtssSetSampleHitsPtr(sfcnInfo, &TwinRotor_G1_M->Timing.sampleHits);
      rtssSetPerTaskSampleHitsPtr(sfcnInfo,
       &TwinRotor_G1_M->Timing.perTaskSampleHits);
      rtssSetSimModePtr(sfcnInfo, &TwinRotor_G1_M->simMode);
      rtssSetSolverInfoPtr(sfcnInfo, &TwinRotor_G1_M->solverInfoPtr);
    }

    TwinRotor_G1_M->Sizes.numSFcns = (2);

    /* register each child */
    {
      (void)memset((void *)&TwinRotor_G1_M->NonInlinedSFcns.childSFunctions[0],
       0, 2*sizeof(SimStruct));
      TwinRotor_G1_M->childSfunctions =
        (&TwinRotor_G1_M->NonInlinedSFcns.childSFunctionPtrs[0]);
      TwinRotor_G1_M->childSfunctions[0] =
        (&TwinRotor_G1_M->NonInlinedSFcns.childSFunctions[0]);
      TwinRotor_G1_M->childSfunctions[1] =
        (&TwinRotor_G1_M->NonInlinedSFcns.childSFunctions[1]);

      /* Level2 S-Function Block: TwinRotor_G1/<S5>/S-Function (STwinRotor) */
      {
        SimStruct *rts = TwinRotor_G1_M->childSfunctions[0];
        /* timing info */
        time_T *sfcnPeriod = TwinRotor_G1_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
        time_T *sfcnOffset = TwinRotor_G1_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
        int_T *sfcnTsMap = TwinRotor_G1_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;

        (void)memset((void*)sfcnPeriod, 0, sizeof(time_T)*1);
        (void)memset((void*)sfcnOffset, 0, sizeof(time_T)*1);
        ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
        ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

        /* Set up the mdlInfo pointer */
        {
          ssSetBlkInfo2Ptr(rts, &TwinRotor_G1_M->NonInlinedSFcns.blkInfo2[0]);
          ssSetRTWSfcnInfo(rts, TwinRotor_G1_M->sfcnInfo);
        }

        /* Allocate memory of model methods 2 */
        {
          ssSetModelMethods2(rts, &TwinRotor_G1_M->NonInlinedSFcns.methods2[0]);
        }

        /* inputs */
        {
          _ssSetNumInputPorts(rts, 1);
          ssSetPortInfoForInputs(rts,
           &TwinRotor_G1_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);

          /* port 0 */
          {
            ssSetInputPortRequiredContiguous(rts, 0, 1);
            ssSetInputPortSignal(rts, 0,
             TwinRotor_G1_B.TmpHiddenBuffer_Feeding_SFunct);
            _ssSetInputPortNumDimensions(rts, 0, 1);
            ssSetInputPortWidth(rts, 0, 2);
          }
        }

        /* outputs */
        {
          ssSetPortInfoForOutputs(rts,
           &TwinRotor_G1_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
          _ssSetNumOutputPorts(rts, 1);
          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(rts, 0, 1);
            ssSetOutputPortWidth(rts, 0, 4);
            ssSetOutputPortSignal(rts, 0, ((real_T *) TwinRotor_G1_B.SFunction));
          }
        }

        /* states */
        ssSetDiscStates(rts, (real_T *) &TwinRotor_G1_DWork.SFunction_DSTATE);
        /* path info */
        ssSetModelName(rts, "S-Function");
        ssSetPath(rts, "TwinRotor_G1/TRMS1/S-Function");
        ssSetRTModel(rts,TwinRotor_G1_M);
        ssSetParentSS(rts, NULL);
        ssSetRootSS(rts, rts);
        ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **)
            &TwinRotor_G1_M->NonInlinedSFcns.Sfcn0.params;

          ssSetSFcnParamsCount(rts, 5);
          ssSetSFcnParamsPtr(rts, &sfcnParams[0]);

          ssSetSFcnParam(rts, 0, (mxArray*)&TwinRotor_G1_P.SFunction_P1_Size[0]);
          ssSetSFcnParam(rts, 1, (mxArray*)&TwinRotor_G1_P.SFunction_P2_Size[0]);
          ssSetSFcnParam(rts, 2, (mxArray*)&TwinRotor_G1_P.SFunction_P3_Size[0]);
          ssSetSFcnParam(rts, 3, (mxArray*)&TwinRotor_G1_P.SFunction_P4_Size[0]);
          ssSetSFcnParam(rts, 4, (mxArray*)&TwinRotor_G1_P.SFunction_P5_Size[0]);
        }

        /* work vectors */
        ssSetPWork(rts, (void **) &TwinRotor_G1_DWork.SFunction_PWORK);
        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
            &TwinRotor_G1_M->NonInlinedSFcns.Sfcn0.dWork;

          ssSetSFcnDWork(rts, dWorkRecord);
          _ssSetNumDWork(rts, 2);

          /* PWORK */
          ssSetDWorkWidth(rts, 0, 1);
          ssSetDWorkDataType(rts, 0,SS_POINTER);
          ssSetDWorkComplexSignal(rts, 0, 0);
          ssSetDWork(rts, 0, &TwinRotor_G1_DWork.SFunction_PWORK);

          /* DSTATE */
          ssSetDWorkWidth(rts, 1, 1);
          ssSetDWorkDataType(rts, 1,SS_DOUBLE);
          ssSetDWorkComplexSignal(rts, 1, 0);
          ssSetDWorkUsedAsDState(rts, 1, 1);
          ssSetDWork(rts, 1, &TwinRotor_G1_DWork.SFunction_DSTATE);
        }

        /* registration */
        STwinRotor(rts);

        sfcnInitializeSizes(rts);
        sfcnInitializeSampleTimes(rts);

        /* adjust sample time */
        ssSetSampleTime(rts, 0, 0.05);
        ssSetOffsetTime(rts, 0, 0.0);
        sfcnTsMap[0] = 1;

        /* set compiled values of dynamic vector attributes */

        ssSetNumNonsampledZCs(rts, 0);
        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(rts, 0, 1);
        _ssSetOutputPortConnected(rts, 0, 1);
        _ssSetOutputPortBeingMerged(rts, 0, 0);
        /* Update the BufferDstPort flags for each input port */
        ssSetInputPortBufferDstPort(rts, 0, -1);
      }

      /* Level2 S-Function Block: TwinRotor_G1/<S5>/Timer Function (RTBlock) */
      {
        SimStruct *rts = TwinRotor_G1_M->childSfunctions[1];
        /* timing info */
        time_T *sfcnPeriod = TwinRotor_G1_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
        time_T *sfcnOffset = TwinRotor_G1_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
        int_T *sfcnTsMap = TwinRotor_G1_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;

        (void)memset((void*)sfcnPeriod, 0, sizeof(time_T)*1);
        (void)memset((void*)sfcnOffset, 0, sizeof(time_T)*1);
        ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
        ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

        /* Set up the mdlInfo pointer */
        {
          ssSetBlkInfo2Ptr(rts, &TwinRotor_G1_M->NonInlinedSFcns.blkInfo2[1]);
          ssSetRTWSfcnInfo(rts, TwinRotor_G1_M->sfcnInfo);
        }

        /* Allocate memory of model methods 2 */
        {
          ssSetModelMethods2(rts, &TwinRotor_G1_M->NonInlinedSFcns.methods2[1]);
        }

        /* outputs */
        {
          ssSetPortInfoForOutputs(rts,
           &TwinRotor_G1_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
          _ssSetNumOutputPorts(rts, 1);
          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(rts, 0, 1);
            ssSetOutputPortWidth(rts, 0, 2);
            ssSetOutputPortSignal(rts, 0, ((real_T *)
              TwinRotor_G1_B.TimerFunction));
          }
        }
        /* path info */
        ssSetModelName(rts, "Timer Function");
        ssSetPath(rts, "TwinRotor_G1/TRMS1/Timer Function");
        ssSetRTModel(rts,TwinRotor_G1_M);
        ssSetParentSS(rts, NULL);
        ssSetRootSS(rts, rts);
        ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **)
            &TwinRotor_G1_M->NonInlinedSFcns.Sfcn1.params;

          ssSetSFcnParamsCount(rts, 3);
          ssSetSFcnParamsPtr(rts, &sfcnParams[0]);

          ssSetSFcnParam(rts, 0,
           (mxArray*)&TwinRotor_G1_P.TimerFunction_P1_Size[0]);
          ssSetSFcnParam(rts, 1,
           (mxArray*)&TwinRotor_G1_P.TimerFunction_P2_Size[0]);
          ssSetSFcnParam(rts, 2,
           (mxArray*)&TwinRotor_G1_P.TimerFunction_P3_Size[0]);
        }

        /* work vectors */
        ssSetIWork(rts, (int_T *) &TwinRotor_G1_DWork.TimerFunction_IWORK);
        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
            &TwinRotor_G1_M->NonInlinedSFcns.Sfcn1.dWork;

          ssSetSFcnDWork(rts, dWorkRecord);
          _ssSetNumDWork(rts, 1);

          /* IWORK */
          ssSetDWorkWidth(rts, 0, 1);
          ssSetDWorkDataType(rts, 0,SS_INTEGER);
          ssSetDWorkComplexSignal(rts, 0, 0);
          ssSetDWork(rts, 0, &TwinRotor_G1_DWork.TimerFunction_IWORK);
        }

        /* registration */
        RTBlock(rts);

        sfcnInitializeSizes(rts);
        sfcnInitializeSampleTimes(rts);

        /* adjust sample time */
        ssSetSampleTime(rts, 0, 0.0);
        ssSetOffsetTime(rts, 0, 0.0);
        sfcnTsMap[0] = 0;

        /* set compiled values of dynamic vector attributes */

        ssSetNumNonsampledZCs(rts, 0);
        /* Update connectivity flags for each port */
        _ssSetOutputPortConnected(rts, 0, 0);
        _ssSetOutputPortBeingMerged(rts, 0, 0);
        /* Update the BufferDstPort flags for each input port */
      }
    }
  }
}

/* Model terminate function */
void TwinRotor_G1_terminate(void)
{

  /* Level2 S-Function Block: <S5>/S-Function (STwinRotor) */
  {
    SimStruct *rts = TwinRotor_G1_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: <S5>/Timer Function (RTBlock) */
  {
    SimStruct *rts = TwinRotor_G1_M->childSfunctions[1];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of GRT compatible call interface                                 *
 *========================================================================*/

void MdlOutputs(int_T tid) {

  TwinRotor_G1_output(tid);
}

void MdlUpdate(int_T tid) {

  TwinRotor_G1_update(tid);
}

void MdlInitializeSizes(void) {
  TwinRotor_G1_M->Sizes.numContStates = (2); /* Number of continuous states */
  TwinRotor_G1_M->Sizes.numY = (0);     /* Number of model outputs */
  TwinRotor_G1_M->Sizes.numU = (0);     /* Number of model inputs */
  TwinRotor_G1_M->Sizes.sysDirFeedThru = (0); /* The model is not direct feedthrough */
  TwinRotor_G1_M->Sizes.numSampTimes = (2); /* Number of sample times */
  TwinRotor_G1_M->Sizes.numBlocks = (47); /* Number of blocks */
  TwinRotor_G1_M->Sizes.numBlockIO = (14); /* Number of block outputs */
  TwinRotor_G1_M->Sizes.numBlockPrms = (50); /* Sum of parameter "widths" */
}

void MdlInitializeSampleTimes(void) {
}

void MdlInitialize(void) {

  /* Integrator Block: <S4>/Integrator */
  TwinRotor_G1_X.Integrator_CSTATE = TwinRotor_G1_P.Integrator_IC;

  /* Derivative Block: <S4>/Derivative */
  TwinRotor_G1_DWork.Derivative_RWORK.TimeStampA = rtInf;
  TwinRotor_G1_DWork.Derivative_RWORK.TimeStampB = rtInf;

  /* Integrator Block: <S3>/Integrator */
  TwinRotor_G1_X.Integrator_g_CSTATE = TwinRotor_G1_P.Integrator_IC_p;
}

void MdlStart(void) {

  /* Level2 S-Function Block: <S5>/S-Function (STwinRotor) */
  {
    SimStruct *rts = TwinRotor_G1_M->childSfunctions[0];
    sfcnStart(rts);
    if(ssGetErrorStatus(rts) != NULL) return;
  }

  /* Scope Block: <Root>/Scope_Vel */
  {
    volatile int_T numCols = 3;

    TwinRotor_G1_DWork.Scope_Vel_PWORK.LoggedData = rt_CreateLogVar(
      TwinRotor_G1_M->rtwLogInfo,
     rtmGetTFinal(TwinRotor_G1_M),
     TwinRotor_G1_M->Timing.stepSize0,
     &(rtmGetErrorStatus(TwinRotor_G1_M)),
     "Velocidad",
     SS_DOUBLE,
     0,
     0,
     0,
     3,
     1,
     (int_T *)&numCols,
     0,
     1,
     0.05,
     1);

    if (TwinRotor_G1_DWork.Scope_Vel_PWORK.LoggedData == NULL) return;
  }

  /* Scope Block: <Root>/Scope_rH */
  {
    volatile int_T numCols = 3;

    TwinRotor_G1_DWork.Scope_rH_PWORK.LoggedData = rt_CreateLogVar(
      TwinRotor_G1_M->rtwLogInfo,
     rtmGetTFinal(TwinRotor_G1_M),
     TwinRotor_G1_M->Timing.stepSize0,
     &(rtmGetErrorStatus(TwinRotor_G1_M)),
     "rH",
     SS_DOUBLE,
     0,
     0,
     0,
     3,
     1,
     (int_T *)&numCols,
     0,
     1,
     0.05,
     1);

    if (TwinRotor_G1_DWork.Scope_rH_PWORK.LoggedData == NULL) return;
  }

  /* Scope Block: <Root>/Scope_rV */
  {
    volatile int_T numCols = 3;

    TwinRotor_G1_DWork.Scope_rV_PWORK.LoggedData = rt_CreateLogVar(
      TwinRotor_G1_M->rtwLogInfo,
     rtmGetTFinal(TwinRotor_G1_M),
     TwinRotor_G1_M->Timing.stepSize0,
     &(rtmGetErrorStatus(TwinRotor_G1_M)),
     "rV",
     SS_DOUBLE,
     0,
     0,
     0,
     3,
     1,
     (int_T *)&numCols,
     0,
     1,
     0.05,
     1);

    if (TwinRotor_G1_DWork.Scope_rV_PWORK.LoggedData == NULL) return;
  }

  /* Scope Block: <Root>/uH */
  {
    volatile int_T numCols = 2;

    TwinRotor_G1_DWork.uH_PWORK.LoggedData = rt_CreateLogVar(
      TwinRotor_G1_M->rtwLogInfo,
     rtmGetTFinal(TwinRotor_G1_M),
     TwinRotor_G1_M->Timing.stepSize0,
     &(rtmGetErrorStatus(TwinRotor_G1_M)),
     "uH",
     SS_DOUBLE,
     0,
     0,
     0,
     2,
     1,
     (int_T *)&numCols,
     0,
     1,
     0.05,
     1);

    if (TwinRotor_G1_DWork.uH_PWORK.LoggedData == NULL) return;
  }

  /* Scope Block: <Root>/uV */
  {
    volatile int_T numCols = 2;

    TwinRotor_G1_DWork.uV_PWORK.LoggedData = rt_CreateLogVar(
      TwinRotor_G1_M->rtwLogInfo,
     rtmGetTFinal(TwinRotor_G1_M),
     TwinRotor_G1_M->Timing.stepSize0,
     &(rtmGetErrorStatus(TwinRotor_G1_M)),
     "uV",
     SS_DOUBLE,
     0,
     0,
     0,
     2,
     1,
     (int_T *)&numCols,
     0,
     1,
     0.05,
     1);

    if (TwinRotor_G1_DWork.uV_PWORK.LoggedData == NULL) return;
  }

  /* Level2 S-Function Block: <S5>/Timer Function (RTBlock) */
  {
    SimStruct *rts = TwinRotor_G1_M->childSfunctions[1];
    sfcnStart(rts);
    if(ssGetErrorStatus(rts) != NULL) return;
  }

  MdlInitialize();
}

rtModel_TwinRotor_G1 *TwinRotor_G1(void) {
  TwinRotor_G1_initialize(1);
  return TwinRotor_G1_M;
}

void MdlTerminate(void) {
  TwinRotor_G1_terminate();
}

/*========================================================================*
 * End of GRT compatible call interface                                   *
 *========================================================================*/

