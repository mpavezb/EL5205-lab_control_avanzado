/*
 * Planilla_3DOF_Crane.h
 *
 * Code generation for model "Planilla_3DOF_Crane.mdl".
 *
 * Model version              : 1.165
 * Simulink Coder version : 8.1 (R2011b) 08-Jul-2011
 * C source code generated on : Fri Nov 06 13:29:08 2015
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#ifndef RTW_HEADER_Planilla_3DOF_Crane_h_
#define RTW_HEADER_Planilla_3DOF_Crane_h_
#ifndef Planilla_3DOF_Crane_COMMON_INCLUDES_
# define Planilla_3DOF_Crane_COMMON_INCLUDES_
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "hil.h"
#include "quanser_messages.h"
#include "rt_nonfinite.h"
#include "quanser_extern.h"
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include "rt_defines.h"
#endif                                 /* Planilla_3DOF_Crane_COMMON_INCLUDES_ */

#include "Planilla_3DOF_Crane_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->ModelData.blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->ModelData.blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->ModelData.constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->ModelData.constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ()
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ()
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->ModelData.defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->ModelData.defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ()
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ()
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ()
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ()
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ()
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ()
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ()
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ((rtm)->Timing.RateInteraction)
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ((rtm)->Timing.RateInteraction = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->ModelData.prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->ModelData.prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ()
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ()
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->Work.dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->Work.dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ((rtm)->Timing.TaskCounters)
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ((rtm)->Timing.TaskCounters = (val))
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->ModelData.inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->ModelData.inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->ModelData.outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->ModelData.outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->ModelData.zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->ModelData.zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->Work.dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->Work.dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTime
# define rtmGetVarNextHitTime(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTime
# define rtmSetVarNextHitTime(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) 0
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) (((rtm)->Timing.sampleTimeTaskIDPtr[sti] == (tid)))
#endif

#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define Planilla_3DOF_Crane_rtModel    RT_MODEL_Planilla_3DOF_Crane

/* Block signals (auto storage) */
typedef struct {
  real_T c_a_data[6724];
  real_T y_data[3321];
  real_T b_A_data[1681];
  real_T B_data[1681];
  real_T b_A_data_m[1681];
  real_T RLinv[1681];
  real_T TL[1681];
  real_T Q[1681];
  real_T D[1681];
  real_T y[1681];
  real_T h_data[1681];
  real_T c_b_data[1681];
  real_T b_y_data[1681];
  real_T e_b_data[1681];
  real_T b_a_data[1681];
  real_T TL_data[1681];
  real_T b_data[1681];
  real_T y_data_c[1681];
  real_T b_b_data[1681];
  real_T y_data_k[1681];
  real_T C_data[1681];
  real_T b_A_data_c[1681];
  real_T TmpRTBAtRelationalOperator5Inpo;
  real_T TmpRTBAtRelationalOperator4Inpo;
  real_T TmpRTBAtProduct4Inport2;
  real_T TmpRTBAtRelationalOperator6Inpo;
  real_T TmpRTBAtProduct5Inport2;
  real_T EncoderCalibration[5];        /* '<S12>/Encoder Calibration' */
  real_T CommandedCurrentA[3];         /* '<S8>/Commanded Current (A)' */
  real_T CurrentSensitivityAV[3];      /* '<S9>/Current Sensitivity (A//V)' */
  real_T Gain;                         /* '<S14>/Gain' */
  real_T Gain_c;                       /* '<S15>/Gain' */
  real_T Gain_f;                       /* '<S16>/Gain' */
  real_T x_ref;                        /* '<Root>/x_ref' */
  real_T theta_ref;                    /* '<Root>/theta_ref' */
  real_T alpha_ref;                    /* '<Root>/alpha_ref' */
  real_T gamma_ref;                    /* '<Root>/gamma_ref' */
  real_T TmpRTBAtref_and_mdInport1[2];
  real_T TmpRTBAtAdd1Inport1[2];       /* '<S25>/Gain3' */
  real_T TmpRTBAtAdd1Inport2[2];       /* '<S25>/Gain4' */
  real_T TmpRTBAtAdd1Inport3[2];       /* '<S25>/ym offset' */
  real_T TmpRTBAtGain5Inport1[2];      /* '<S25>/Add1' */
  real_T mv_bias;                      /* '<S22>/mv_bias' */
  real_T Add[4];                       /* '<S25>/Add' */
  real_T Gain3[2];                     /* '<S25>/Gain3' */
  real_T Gain4[2];                     /* '<S25>/Gain4' */
  real_T mv_bias_l;                    /* '<S26>/mv_bias' */
  real_T Add_l[5];                     /* '<S29>/Add' */
  real_T rseq[20];                     /* '<S26>/ref_and_md' */
  real_T vseq[11];                     /* '<S26>/ref_and_md' */
  real_T v;                            /* '<S26>/ref_and_md' */
  real_T next_t;                       /* '<S26>/ref_and_md' */
  real_T u;                            /* '<S26>/optimizer' */
  real_T cost;                         /* '<S26>/optimizer' */
  real_T useq[10];                     /* '<S26>/optimizer' */
  real_T status;                       /* '<S26>/optimizer' */
  real_T rseq_k[120];                  /* '<S22>/ref_and_md' */
  real_T vseq_d[61];                   /* '<S22>/ref_and_md' */
  real_T v_o;                          /* '<S22>/ref_and_md' */
  real_T next_t_a;                     /* '<S22>/ref_and_md' */
  real_T u_g;                          /* '<S22>/optimizer' */
  real_T cost_i;                       /* '<S22>/optimizer' */
  real_T useq_i[60];                   /* '<S22>/optimizer' */
  real_T status_b;                     /* '<S22>/optimizer' */
  boolean_T Compare;                   /* '<S21>/Compare' */
  boolean_T Compare_g;                 /* '<S20>/Compare' */
  boolean_T Compare_j;                 /* '<S19>/Compare' */
  boolean_T Compare_f;                 /* '<S17>/Compare' */
  boolean_T Compare_p;                 /* '<S18>/Compare' */
  boolean_T iAout[3];                  /* '<S26>/optimizer' */
  boolean_T iAout_c[441];              /* '<S22>/optimizer' */
} BlockIO_Planilla_3DOF_Crane;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T LastMVs_DSTATE;               /* '<S22>/Last MVs' */
  real_T LastMVs_DSTATE_g;             /* '<S26>/Last MVs' */
  real_T HILInitialize_AIMinimums[8];  /* '<S7>/HIL Initialize' */
  real_T HILInitialize_AIMaximums[8];  /* '<S7>/HIL Initialize' */
  real_T HILInitialize_AOMinimums[8];  /* '<S7>/HIL Initialize' */
  real_T HILInitialize_AOMaximums[8];  /* '<S7>/HIL Initialize' */
  real_T HILInitialize_AOVoltages[8];  /* '<S7>/HIL Initialize' */
  real_T HILInitialize_FilterFrequency[8];/* '<S7>/HIL Initialize' */
  real_T HILInitialize_POSortedFreqs[8];/* '<S7>/HIL Initialize' */
  real_T HILInitialize_POValues[8];    /* '<S7>/HIL Initialize' */
  real_T TmpRTBAtRelationalOperator5Inpo;/* synthesized block */
  real_T TmpRTBAtRelationalOperator4Inpo;/* synthesized block */
  real_T TmpRTBAtProduct4Inport2_Buffer0;/* synthesized block */
  real_T TmpRTBAtRelationalOperator6Inpo;/* synthesized block */
  real_T TmpRTBAtProduct5Inport2_Buffer0;/* synthesized block */
  real_T Memory1_PreviousInput;        /* '<S22>/Memory1' */
  real_T Memory_PreviousInput[4];      /* '<S25>/Memory' */
  real_T TmpRTBAtAdd1Inport1_Buffer0[2];/* synthesized block */
  real_T TmpRTBAtAdd1Inport2_Buffer0[2];/* synthesized block */
  real_T TmpRTBAtAdd1Inport3_Buffer0[2];/* synthesized block */
  real_T Memory1_PreviousInput_a;      /* '<S26>/Memory1' */
  real_T Memory_PreviousInput_m[5];    /* '<S29>/Memory' */
  t_card HILInitialize_Card;           /* '<S7>/HIL Initialize' */
  t_task HILReadTimebase_Task;         /* '<S7>/HIL Read Timebase' */
  void *HILWrite_PWORK;                /* '<S7>/HIL Write' */
  struct {
    void *LoggedData;
  } Cartm_PWORK;                       /* '<Root>/Cart (m)' */

  struct {
    void *LoggedData;
  } ImA_PWORK;                         /* '<Root>/Im (A)' */

  struct {
    void *LoggedData;
  } LimitSwitches_PWORK;               /* '<Root>/Limit Switches' */

  struct {
    void *LoggedData;
  } Payloadm_PWORK;                    /* '<Root>/Payload (m)' */

  struct {
    void *LoggedData;
  } Towerdeg_PWORK;                    /* '<Root>/Tower (deg)' */

  struct {
    void *LoggedData;
  } alphadeg_PWORK;                    /* '<Root>/alpha (deg)' */

  struct {
    void *LoggedData;
  } gammadeg_PWORK;                    /* '<Root>/gamma (deg)' */

  struct {
    void *LoggedData;
  } u_PWORK;                           /* '<Root>/u' */

  struct {
    void *LoggedData;
  } u1_PWORK;                          /* '<Root>/u1' */

  int32_T HILInitialize_ClockModes[17];/* '<S7>/HIL Initialize' */
  int32_T HILInitialize_QuadratureModes[8];/* '<S7>/HIL Initialize' */
  int32_T HILInitialize_InitialEICounts[8];/* '<S7>/HIL Initialize' */
  int32_T HILInitialize_POModeValues[8];/* '<S7>/HIL Initialize' */
  int32_T HILInitialize_POAlignValues[8];/* '<S7>/HIL Initialize' */
  int32_T HILInitialize_POPolarityVals[8];/* '<S7>/HIL Initialize' */
  int32_T HILReadTimebase_EncoderBuffer[5];/* '<S7>/HIL Read Timebase' */
  int32_T sfEvent;                     /* '<S26>/ref_and_md' */
  int32_T sfEvent_b;                   /* '<S26>/optimizer' */
  int32_T sfEvent_g;                   /* '<S22>/ref_and_md' */
  int32_T sfEvent_l;                   /* '<S22>/optimizer' */
  uint32_T HILInitialize_POSortedChans[8];/* '<S7>/HIL Initialize' */
  uint8_T is_active_c4_it6COyaovpvMoCC6OT;/* '<S26>/ref_and_md' */
  uint8_T is_active_c3_w80NEcatHKOpB0PDTg;/* '<S26>/optimizer' */
  uint8_T is_active_c4_glSqxMBNa7gPxPnMgW;/* '<S22>/ref_and_md' */
  uint8_T is_active_c3_henUYLNwaF38eGHaqe;/* '<S22>/optimizer' */
  boolean_T Memory_PreviousInput_e[441];/* '<S22>/Memory' */
  boolean_T Memory_PreviousInput_j[3]; /* '<S26>/Memory' */
  boolean_T isStable;                  /* '<S26>/ref_and_md' */
  boolean_T doneDoubleBufferReInit;    /* '<S26>/ref_and_md' */
  boolean_T isStable_m;                /* '<S26>/optimizer' */
  boolean_T doneDoubleBufferReInit_l;  /* '<S26>/optimizer' */
  boolean_T isStable_e;                /* '<S22>/ref_and_md' */
  boolean_T doneDoubleBufferReInit_g;  /* '<S22>/ref_and_md' */
  boolean_T isStable_m0;               /* '<S22>/optimizer' */
  boolean_T doneDoubleBufferReInit_c;  /* '<S22>/optimizer' */
  t_boolean HILReadTimebase_DigitalBuffer[5];/* '<S7>/HIL Read Timebase' */
  t_boolean HILWrite_DigitalBuffer[4]; /* '<S7>/HIL Write' */
} D_Work_Planilla_3DOF_Crane;

/* Backward compatible GRT Identifiers */
#define rtB                            Planilla_3DOF_Crane_B
#define BlockIO                        BlockIO_Planilla_3DOF_Crane
#define rtXdot                         Planilla_3DOF_Crane_Xdot
#define StateDerivatives               StateDerivatives_Planilla_3DOF_
#define tXdis                          Planilla_3DOF_Crane_Xdis
#define StateDisabled                  StateDisabled_Planilla_3DOF_Cra
#define rtP                            Planilla_3DOF_Crane_P
#define Parameters                     Parameters_Planilla_3DOF_Crane
#define rtDWork                        Planilla_3DOF_Crane_DWork
#define D_Work                         D_Work_Planilla_3DOF_Crane

/* Parameters (auto storage) */
struct Parameters_Planilla_3DOF_Crane_ {
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S11>/Constant3'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S11>/Constant1'
                                        */
  real_T Constant6_Value;              /* Expression: 0
                                        * Referenced by: '<S11>/Constant6'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S11>/Constant4'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S11>/Constant'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<S11>/Constant8'
                                        */
  real_T SFunction_p1;                 /* Expression: md_from_ws
                                        * Referenced by: '<S22>/ref_and_md'
                                        */
  real_T SFunction_p2;                 /* Expression: md_preview
                                        * Referenced by: '<S22>/ref_and_md'
                                        */
  real_T SFunction_p3;                 /* Expression: md_signal
                                        * Referenced by: '<S22>/ref_and_md'
                                        */
  real_T SFunction_p4;                 /* Expression: md_temp
                                        * Referenced by: '<S22>/ref_and_md'
                                        */
  real_T SFunction_p5;                 /* Expression: no_md
                                        * Referenced by: '<S22>/ref_and_md'
                                        */
  real_T SFunction_p6;                 /* Expression: no_ref
                                        * Referenced by: '<S22>/ref_and_md'
                                        */
  real_T SFunction_p7;                 /* Expression: nv
                                        * Referenced by: '<S22>/ref_and_md'
                                        */
  real_T SFunction_p8;                 /* Expression: ny
                                        * Referenced by: '<S22>/ref_and_md'
                                        */
  real_T SFunction_p10;                /* Expression: p
                                        * Referenced by: '<S22>/ref_and_md'
                                        */
  real_T SFunction_p11[120];           /* Expression: r_temp
                                        * Referenced by: '<S22>/ref_and_md'
                                        */
  real_T SFunction_p12;                /* Expression: ref_from_ws
                                        * Referenced by: '<S22>/ref_and_md'
                                        */
  real_T SFunction_p13;                /* Expression: ref_preview
                                        * Referenced by: '<S22>/ref_and_md'
                                        */
  real_T SFunction_p14[2];             /* Expression: ref_signal
                                        * Referenced by: '<S22>/ref_and_md'
                                        */
  real_T SFunction_p15[61];            /* Expression: v_temp
                                        * Referenced by: '<S22>/ref_and_md'
                                        */
  real_T SFunction_p16;                /* Expression: voff
                                        * Referenced by: '<S22>/ref_and_md'
                                        */
  real_T SFunction_p17[2];             /* Expression: yoff
                                        * Referenced by: '<S22>/ref_and_md'
                                        */
  real_T SFunction_p1_h;               /* Expression: md_from_ws
                                        * Referenced by: '<S26>/ref_and_md'
                                        */
  real_T SFunction_p2_a;               /* Expression: md_preview
                                        * Referenced by: '<S26>/ref_and_md'
                                        */
  real_T SFunction_p3_k;               /* Expression: md_signal
                                        * Referenced by: '<S26>/ref_and_md'
                                        */
  real_T SFunction_p4_c;               /* Expression: md_temp
                                        * Referenced by: '<S26>/ref_and_md'
                                        */
  real_T SFunction_p5_g;               /* Expression: no_md
                                        * Referenced by: '<S26>/ref_and_md'
                                        */
  real_T SFunction_p6_p;               /* Expression: no_ref
                                        * Referenced by: '<S26>/ref_and_md'
                                        */
  real_T SFunction_p7_b;               /* Expression: nv
                                        * Referenced by: '<S26>/ref_and_md'
                                        */
  real_T SFunction_p8_b;               /* Expression: ny
                                        * Referenced by: '<S26>/ref_and_md'
                                        */
  real_T SFunction_p10_i;              /* Expression: p
                                        * Referenced by: '<S26>/ref_and_md'
                                        */
  real_T SFunction_p11_a[20];          /* Expression: r_temp
                                        * Referenced by: '<S26>/ref_and_md'
                                        */
  real_T SFunction_p12_k;              /* Expression: ref_from_ws
                                        * Referenced by: '<S26>/ref_and_md'
                                        */
  real_T SFunction_p13_k;              /* Expression: ref_preview
                                        * Referenced by: '<S26>/ref_and_md'
                                        */
  real_T SFunction_p14_k[2];           /* Expression: ref_signal
                                        * Referenced by: '<S26>/ref_and_md'
                                        */
  real_T SFunction_p15_m[11];          /* Expression: v_temp
                                        * Referenced by: '<S26>/ref_and_md'
                                        */
  real_T SFunction_p16_a;              /* Expression: voff
                                        * Referenced by: '<S26>/ref_and_md'
                                        */
  real_T SFunction_p17_d[2];           /* Expression: yoff
                                        * Referenced by: '<S26>/ref_and_md'
                                        */
  real_T HILInitialize_OOStart;        /* Expression: set_other_outputs_at_start
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_OOEnter;        /* Expression: set_other_outputs_at_switch_in
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_OOTerminate;    /* Expression: set_other_outputs_at_terminate
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_OOExit;         /* Expression: set_other_outputs_at_switch_out
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_AIHigh;         /* Expression: analog_input_maximums
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_AILow;          /* Expression: analog_input_minimums
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_AOHigh;         /* Expression: analog_output_maximums
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_AOLow;          /* Expression: analog_output_minimums
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_AOInitial;      /* Expression: initial_analog_outputs
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_AOFinal;        /* Expression: final_analog_outputs
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_AOWatchdog;     /* Expression: watchdog_analog_outputs
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_EIFrequency;    /* Expression: encoder_filter_frequency
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_POFrequency;    /* Expression: pwm_frequency
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_POLeading;      /* Expression: pwm_leading_deadband
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_POTrailing;     /* Expression: pwm_trailing_deadband
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_POInitial;      /* Expression: initial_pwm_outputs
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_POFinal;        /* Expression: final_pwm_outputs
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_POWatchdog;     /* Expression: watchdog_pwm_outputs
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T TmpRTBAtRelationalOperator5Inpo;/* Expression: 0
                                          * Referenced by: 'synthesized block'
                                          */
  real_T Constant5_Value;              /* Expression: 0
                                        * Referenced by: '<S11>/Constant5'
                                        */
  real_T Constant_Value_l;             /* Expression: const
                                        * Referenced by: '<S21>/Constant'
                                        */
  real_T TmpRTBAtRelationalOperator4Inpo;/* Expression: 0
                                          * Referenced by: 'synthesized block'
                                          */
  real_T TmpRTBAtProduct4Inport2_X0;   /* Expression: 0
                                        * Referenced by: 'synthesized block'
                                        */
  real_T Constant_Value_a;             /* Expression: const
                                        * Referenced by: '<S20>/Constant'
                                        */
  real_T TmpRTBAtRelationalOperator6Inpo;/* Expression: 0
                                          * Referenced by: 'synthesized block'
                                          */
  real_T TmpRTBAtProduct5Inport2_X0;   /* Expression: 0
                                        * Referenced by: 'synthesized block'
                                        */
  real_T TrolleySetpointConstant_Value;/* Expression: 1
                                        * Referenced by: '<Root>/Trolley Setpoint Constant '
                                        */
  real_T SliderGain_Gain;              /* Expression: gain
                                        * Referenced by: '<S6>/Slider Gain'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S11>/Constant2'
                                        */
  real_T Constant_Value_e;             /* Expression: const
                                        * Referenced by: '<S19>/Constant'
                                        */
  real_T Constant_Value_g;             /* Expression: const
                                        * Referenced by: '<S17>/Constant'
                                        */
  real_T PayloadSetpointConstant_Value;/* Expression: 0
                                        * Referenced by: '<Root>/Payload Setpoint Constant '
                                        */
  real_T Constant7_Value;              /* Expression: 0
                                        * Referenced by: '<S11>/Constant7'
                                        */
  real_T EncoderCalibration_Gain[5];   /* Expression: [K_ENC_THETA, K_ENC_X, K_ENC_Z, K_ENC_ALPHA, K_ENC_GAMMA]
                                        * Referenced by: '<S12>/Encoder Calibration'
                                        */
  real_T Constant_Value_j;             /* Expression: const
                                        * Referenced by: '<S18>/Constant'
                                        */
  real_T AMPAQCurrentLimitA_UpperSat;  /* Expression: IMAX_AMP
                                        * Referenced by: '<S8>/AMPAQ Current  Limit (A)'
                                        */
  real_T AMPAQCurrentLimitA_LowerSat;  /* Expression: -IMAX_AMP
                                        * Referenced by: '<S8>/AMPAQ Current  Limit (A)'
                                        */
  real_T Gain1_Gain;                   /* Expression: -1
                                        * Referenced by: '<S8>/Gain1'
                                        */
  real_T AmpstoVolts_Gain;             /* Expression: 1 / Ka
                                        * Referenced by: '<S8>/Amps to Volts'
                                        */
  real_T DACLimitV_UpperSat;           /* Expression: VMAX_DAC
                                        * Referenced by: '<S8>/DAC Limit (V)'
                                        */
  real_T DACLimitV_LowerSat;           /* Expression: -VMAX_DAC
                                        * Referenced by: '<S8>/DAC Limit (V)'
                                        */
  real_T EnableAmp_Value[4];           /* Expression: [0 0 0 1]
                                        * Referenced by: '<S10>/Enable Amp'
                                        */
  real_T CommandedCurrentA_Gain;       /* Expression:  -Ka
                                        * Referenced by: '<S8>/Commanded Current (A)'
                                        */
  real_T CurrentSensitivityAV_Gain;    /* Expression: K_CURR
                                        * Referenced by: '<S9>/Current Sensitivity (A//V)'
                                        */
  real_T Gain_Gain;                    /* Expression: 180/pi
                                        * Referenced by: '<S14>/Gain'
                                        */
  real_T Gain_Gain_p;                  /* Expression: 180/pi
                                        * Referenced by: '<S15>/Gain'
                                        */
  real_T Gain_Gain_c;                  /* Expression: 180/pi
                                        * Referenced by: '<S16>/Gain'
                                        */
  real_T x_ref_Value;                  /* Expression: jib_xref(1)
                                        * Referenced by: '<Root>/x_ref'
                                        */
  real_T theta_ref_Value;              /* Expression: tower_xref(1)
                                        * Referenced by: '<Root>/theta_ref'
                                        */
  real_T alpha_ref_Value;              /* Expression: tower_xref(2)
                                        * Referenced by: '<Root>/alpha_ref'
                                        */
  real_T gamma_ref_Value;              /* Expression: jib_xref(2)
                                        * Referenced by: '<Root>/gamma_ref'
                                        */
  real_T md_zero_Value;                /* Expression: zeros(1,1)
                                        * Referenced by: '<S4>/md_zero'
                                        */
  real_T Memory1_X0;                   /* Expression: lastt
                                        * Referenced by: '<S22>/Memory1'
                                        */
  real_T umin_zero_Value;              /* Expression: zeros(1,1)
                                        * Referenced by: '<S4>/umin_zero'
                                        */
  real_T umax_zero_Value;              /* Expression: zeros(1,1)
                                        * Referenced by: '<S4>/umax_zero'
                                        */
  real_T ymin_zero_Value[2];           /* Expression: zeros(2,1)
                                        * Referenced by: '<S4>/ymin_zero'
                                        */
  real_T ymax_zero_Value[2];           /* Expression: zeros(2,1)
                                        * Referenced by: '<S4>/ymax_zero'
                                        */
  real_T switch_zero_Value;            /* Expression: 0
                                        * Referenced by: '<S4>/switch_zero'
                                        */
  real_T Memory_X0[4];                 /* Expression: lastx
                                        * Referenced by: '<S25>/Memory'
                                        */
  real_T TmpRTBAtAdd1Inport1_X0;       /* Expression: 0
                                        * Referenced by: 'synthesized block'
                                        */
  real_T TmpRTBAtAdd1Inport2_X0;       /* Expression: 0
                                        * Referenced by: 'synthesized block'
                                        */
  real_T TmpRTBAtAdd1Inport3_X0;       /* Expression: 0
                                        * Referenced by: 'synthesized block'
                                        */
  real_T Gain5_Gain[8];                /* Expression: M
                                        * Referenced by: '<S25>/Gain5'
                                        */
  real_T LastMVs_X0;                   /* Expression: lastu
                                        * Referenced by: '<S22>/Last MVs'
                                        */
  real_T ywt_zero_Value[2];            /* Expression: zeros(2,1)
                                        * Referenced by: '<S4>/ywt_zero'
                                        */
  real_T duwt_zero_Value;              /* Expression: zeros(1,1)
                                        * Referenced by: '<S4>/duwt_zero'
                                        */
  real_T rhoeps_zero_Value;            /* Expression: 0
                                        * Referenced by: '<S4>/rhoeps_zero'
                                        */
  real_T md_zero_Value_c;              /* Expression: zeros(1,1)
                                        * Referenced by: '<S5>/md_zero'
                                        */
  real_T Memory1_X0_b;                 /* Expression: lastt
                                        * Referenced by: '<S26>/Memory1'
                                        */
  real_T umin_zero_Value_a;            /* Expression: zeros(1,1)
                                        * Referenced by: '<S5>/umin_zero'
                                        */
  real_T umax_zero_Value_k;            /* Expression: zeros(1,1)
                                        * Referenced by: '<S5>/umax_zero'
                                        */
  real_T ymin_zero_Value_m[2];         /* Expression: zeros(2,1)
                                        * Referenced by: '<S5>/ymin_zero'
                                        */
  real_T ymax_zero_Value_j[2];         /* Expression: zeros(2,1)
                                        * Referenced by: '<S5>/ymax_zero'
                                        */
  real_T switch_zero_Value_e;          /* Expression: 0
                                        * Referenced by: '<S5>/switch_zero'
                                        */
  real_T Memory_X0_a[5];               /* Expression: lastx
                                        * Referenced by: '<S29>/Memory'
                                        */
  real_T Gain3_Gain[10];               /* Expression: Cm
                                        * Referenced by: '<S29>/Gain3'
                                        */
  real_T Gain4_Gain[2];                /* Expression: Dvm
                                        * Referenced by: '<S29>/Gain4'
                                        */
  real_T ymoffset_Value[2];            /* Expression: myoff
                                        * Referenced by: '<S29>/ym offset'
                                        */
  real_T Gain5_Gain_e[10];             /* Expression: M
                                        * Referenced by: '<S29>/Gain5'
                                        */
  real_T LastMVs_X0_c;                 /* Expression: lastu
                                        * Referenced by: '<S26>/Last MVs'
                                        */
  real_T ywt_zero_Value_a[2];          /* Expression: zeros(2,1)
                                        * Referenced by: '<S5>/ywt_zero'
                                        */
  real_T duwt_zero_Value_c;            /* Expression: zeros(1,1)
                                        * Referenced by: '<S5>/duwt_zero'
                                        */
  real_T rhoeps_zero_Value_i;          /* Expression: 0
                                        * Referenced by: '<S5>/rhoeps_zero'
                                        */
  real_T mv_zero_Value;                /* Expression: zeros(1,1)
                                        * Referenced by: '<S4>/mv_zero'
                                        */
  real_T mv_inport_Value;              /* Expression: mv_inport
                                        * Referenced by: '<S22>/mv_inport'
                                        */
  real_T u_select_Threshold;           /* Expression: 0.5
                                        * Referenced by: '<S22>/u_select'
                                        */
  real_T mv_bias_Bias;                 /* Expression: -uoff
                                        * Referenced by: '<S22>/mv_bias'
                                        */
  real_T Gain_Gain_j[16];              /* Expression: A
                                        * Referenced by: '<S25>/Gain'
                                        */
  real_T Gain1_Gain_h[4];              /* Expression: Bu
                                        * Referenced by: '<S25>/Gain1'
                                        */
  real_T Gain2_Gain[4];                /* Expression: Bv
                                        * Referenced by: '<S25>/Gain2'
                                        */
  real_T Gain3_Gain_f[8];              /* Expression: Cm
                                        * Referenced by: '<S25>/Gain3'
                                        */
  real_T Gain4_Gain_j[2];              /* Expression: Dvm
                                        * Referenced by: '<S25>/Gain4'
                                        */
  real_T ymoffset_Value_o[2];          /* Expression: myoff
                                        * Referenced by: '<S25>/ym offset'
                                        */
  real_T mv_zero_Value_d;              /* Expression: zeros(1,1)
                                        * Referenced by: '<S5>/mv_zero'
                                        */
  real_T mv_inport_Value_a;            /* Expression: mv_inport
                                        * Referenced by: '<S26>/mv_inport'
                                        */
  real_T u_select_Threshold_p;         /* Expression: 0.5
                                        * Referenced by: '<S26>/u_select'
                                        */
  real_T mv_bias_Bias_c;               /* Expression: -uoff
                                        * Referenced by: '<S26>/mv_bias'
                                        */
  real_T Gain_Gain_o[25];              /* Expression: A
                                        * Referenced by: '<S29>/Gain'
                                        */
  real_T Gain1_Gain_f[5];              /* Expression: Bu
                                        * Referenced by: '<S29>/Gain1'
                                        */
  real_T Gain2_Gain_e[5];              /* Expression: Bv
                                        * Referenced by: '<S29>/Gain2'
                                        */
  int32_T HILInitialize_CKChannels[17];/* Computed Parameter: HILInitialize_CKChannels
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  int32_T HILInitialize_DOWatchdog;    /* Computed Parameter: HILInitialize_DOWatchdog
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  int32_T HILInitialize_EIInitial;     /* Computed Parameter: HILInitialize_EIInitial
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  int32_T HILInitialize_POModes;       /* Computed Parameter: HILInitialize_POModes
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  int32_T HILInitialize_POConfiguration;/* Computed Parameter: HILInitialize_POConfiguration
                                         * Referenced by: '<S7>/HIL Initialize'
                                         */
  int32_T HILInitialize_POAlignment;   /* Computed Parameter: HILInitialize_POAlignment
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  int32_T HILInitialize_POPolarity;    /* Computed Parameter: HILInitialize_POPolarity
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  int32_T HILReadTimebase_Clock;       /* Computed Parameter: HILReadTimebase_Clock
                                        * Referenced by: '<S7>/HIL Read Timebase'
                                        */
  uint32_T HILInitialize_AIChannels[8];/* Computed Parameter: HILInitialize_AIChannels
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  uint32_T HILInitialize_AOChannels[8];/* Computed Parameter: HILInitialize_AOChannels
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  uint32_T HILInitialize_EIChannels[8];/* Computed Parameter: HILInitialize_EIChannels
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  uint32_T HILInitialize_EIQuadrature; /* Computed Parameter: HILInitialize_EIQuadrature
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  uint32_T HILInitialize_POChannels[8];/* Computed Parameter: HILInitialize_POChannels
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  uint32_T HILReadTimebase_SamplesInBuffer;/* Computed Parameter: HILReadTimebase_SamplesInBuffer
                                            * Referenced by: '<S7>/HIL Read Timebase'
                                            */
  uint32_T HILReadTimebase_AnalogChannels[3];/* Computed Parameter: HILReadTimebase_AnalogChannels
                                              * Referenced by: '<S7>/HIL Read Timebase'
                                              */
  uint32_T HILReadTimebase_EncoderChannels[5];/* Computed Parameter: HILReadTimebase_EncoderChannels
                                               * Referenced by: '<S7>/HIL Read Timebase'
                                               */
  uint32_T HILReadTimebase_DigitalChannels[5];/* Computed Parameter: HILReadTimebase_DigitalChannels
                                               * Referenced by: '<S7>/HIL Read Timebase'
                                               */
  uint32_T HILWrite_AnalogChannels[3]; /* Computed Parameter: HILWrite_AnalogChannels
                                        * Referenced by: '<S7>/HIL Write'
                                        */
  uint32_T HILWrite_DigitalChannels[4];/* Computed Parameter: HILWrite_DigitalChannels
                                        * Referenced by: '<S7>/HIL Write'
                                        */
  boolean_T SFunction_p9;              /* Expression: openloopflag
                                        * Referenced by: '<S22>/ref_and_md'
                                        */
  boolean_T SFunction_p9_n;            /* Expression: openloopflag
                                        * Referenced by: '<S26>/ref_and_md'
                                        */
  boolean_T HILInitialize_Active;      /* Computed Parameter: HILInitialize_Active
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_CKPStart;    /* Computed Parameter: HILInitialize_CKPStart
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_CKPEnter;    /* Computed Parameter: HILInitialize_CKPEnter
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_CKStart;     /* Computed Parameter: HILInitialize_CKStart
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_CKEnter;     /* Computed Parameter: HILInitialize_CKEnter
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AIPStart;    /* Computed Parameter: HILInitialize_AIPStart
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AIPEnter;    /* Computed Parameter: HILInitialize_AIPEnter
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOPStart;    /* Computed Parameter: HILInitialize_AOPStart
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOPEnter;    /* Computed Parameter: HILInitialize_AOPEnter
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOStart;     /* Computed Parameter: HILInitialize_AOStart
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOEnter;     /* Computed Parameter: HILInitialize_AOEnter
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOTerminate; /* Computed Parameter: HILInitialize_AOTerminate
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOExit;      /* Computed Parameter: HILInitialize_AOExit
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOReset;     /* Computed Parameter: HILInitialize_AOReset
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOPStart;    /* Computed Parameter: HILInitialize_DOPStart
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOPEnter;    /* Computed Parameter: HILInitialize_DOPEnter
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOStart;     /* Computed Parameter: HILInitialize_DOStart
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOEnter;     /* Computed Parameter: HILInitialize_DOEnter
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOTerminate; /* Computed Parameter: HILInitialize_DOTerminate
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOExit;      /* Computed Parameter: HILInitialize_DOExit
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOReset;     /* Computed Parameter: HILInitialize_DOReset
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIPStart;    /* Computed Parameter: HILInitialize_EIPStart
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIPEnter;    /* Computed Parameter: HILInitialize_EIPEnter
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIStart;     /* Computed Parameter: HILInitialize_EIStart
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIEnter;     /* Computed Parameter: HILInitialize_EIEnter
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POPStart;    /* Computed Parameter: HILInitialize_POPStart
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POPEnter;    /* Computed Parameter: HILInitialize_POPEnter
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POStart;     /* Computed Parameter: HILInitialize_POStart
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POEnter;     /* Computed Parameter: HILInitialize_POEnter
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POTerminate; /* Computed Parameter: HILInitialize_POTerminate
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POExit;      /* Computed Parameter: HILInitialize_POExit
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POReset;     /* Computed Parameter: HILInitialize_POReset
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_OOReset;     /* Computed Parameter: HILInitialize_OOReset
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOInitial;   /* Computed Parameter: HILInitialize_DOInitial
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOFinal;     /* Computed Parameter: HILInitialize_DOFinal
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  boolean_T HILReadTimebase_Active;    /* Computed Parameter: HILReadTimebase_Active
                                        * Referenced by: '<S7>/HIL Read Timebase'
                                        */
  boolean_T HILWrite_Active;           /* Computed Parameter: HILWrite_Active
                                        * Referenced by: '<S7>/HIL Write'
                                        */
  boolean_T Memory_X0_g[441];          /* Expression: iA
                                        * Referenced by: '<S22>/Memory'
                                        */
  boolean_T Memory_X0_n[3];            /* Expression: iA
                                        * Referenced by: '<S26>/Memory'
                                        */
};

/* Real-time Model Data Structure */
struct RT_MODEL_Planilla_3DOF_Crane {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    real_T *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    real_T *derivs;
    real_T *zcSignalValues;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    struct {
      uint8_T TID[2];
    } TaskCounters;

    struct {
      boolean_T TID0_1;
    } RateInteraction;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;

  /*
   * Work:
   * The following substructure contains information regarding
   * the work vectors in the model.
   */
  struct {
    void *dwork;
  } Work;
};

/* Block parameters (auto storage) */
extern Parameters_Planilla_3DOF_Crane Planilla_3DOF_Crane_P;

/* Block signals (auto storage) */
extern BlockIO_Planilla_3DOF_Crane Planilla_3DOF_Crane_B;

/* Block states (auto storage) */
extern D_Work_Planilla_3DOF_Crane Planilla_3DOF_Crane_DWork;

/* External function called from main */
extern time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
  ;

/* Model entry point functions */
extern void Planilla_3DOF_Crane_SetEventsForThisBaseStep(boolean_T *eventFlags);
extern void Planilla_3DOF_Crane_initialize(boolean_T firstTime);
extern void Planilla_3DOF_Crane_output(int_T tid);
extern void Planilla_3DOF_Crane_update(int_T tid);
extern void Planilla_3DOF_Crane_terminate(void);

/* Real-time Model object */
extern struct RT_MODEL_Planilla_3DOF_Crane *const Planilla_3DOF_Crane_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Planilla_3DOF_Crane'
 * '<S1>'   : 'Planilla_3DOF_Crane/3DOF Crane'
 * '<S2>'   : 'Planilla_3DOF_Crane/Powered by QUARC'
 * '<S3>'   : 'Planilla_3DOF_Crane/Tower (A)'
 * '<S4>'   : 'Planilla_3DOF_Crane/Tower Controller'
 * '<S5>'   : 'Planilla_3DOF_Crane/Tower Controller1'
 * '<S6>'   : 'Planilla_3DOF_Crane/Trolley (A)'
 * '<S7>'   : 'Planilla_3DOF_Crane/3DOF Crane/3-DOF Crane HIL'
 * '<S8>'   : 'Planilla_3DOF_Crane/3DOF Crane/3D Crane Motors - HIL'
 * '<S9>'   : 'Planilla_3DOF_Crane/3DOF Crane/AMPAQ Current  Sensors'
 * '<S10>'  : 'Planilla_3DOF_Crane/3DOF Crane/Enable AMPAQ  Amplifier - HIL'
 * '<S11>'  : 'Planilla_3DOF_Crane/3DOF Crane/Limitadores'
 * '<S12>'  : 'Planilla_3DOF_Crane/3DOF Crane/Position and Current  Sensors - HIL'
 * '<S13>'  : 'Planilla_3DOF_Crane/3DOF Crane/Read Limit Switches'
 * '<S14>'  : 'Planilla_3DOF_Crane/3DOF Crane/rad to deg:  theta'
 * '<S15>'  : 'Planilla_3DOF_Crane/3DOF Crane/rad to deg: gamma'
 * '<S16>'  : 'Planilla_3DOF_Crane/3DOF Crane/rad to deg:  alpha'
 * '<S17>'  : 'Planilla_3DOF_Crane/3DOF Crane/Read Limit Switches/Goes to zero:  ext'
 * '<S18>'  : 'Planilla_3DOF_Crane/3DOF Crane/Read Limit Switches/Goes to zero:  payload'
 * '<S19>'  : 'Planilla_3DOF_Crane/3DOF Crane/Read Limit Switches/Goes to zero:  ret'
 * '<S20>'  : 'Planilla_3DOF_Crane/3DOF Crane/Read Limit Switches/Goes to zero:  tower ccw'
 * '<S21>'  : 'Planilla_3DOF_Crane/3DOF Crane/Read Limit Switches/Goes to zero:  tower cw'
 * '<S22>'  : 'Planilla_3DOF_Crane/Tower Controller/MPC'
 * '<S23>'  : 'Planilla_3DOF_Crane/Tower Controller/MPC/optimizer'
 * '<S24>'  : 'Planilla_3DOF_Crane/Tower Controller/MPC/ref_and_md'
 * '<S25>'  : 'Planilla_3DOF_Crane/Tower Controller/MPC/state estimator'
 * '<S26>'  : 'Planilla_3DOF_Crane/Tower Controller1/MPC'
 * '<S27>'  : 'Planilla_3DOF_Crane/Tower Controller1/MPC/optimizer'
 * '<S28>'  : 'Planilla_3DOF_Crane/Tower Controller1/MPC/ref_and_md'
 * '<S29>'  : 'Planilla_3DOF_Crane/Tower Controller1/MPC/state estimator'
 */
#endif                                 /* RTW_HEADER_Planilla_3DOF_Crane_h_ */
