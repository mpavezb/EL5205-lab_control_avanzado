/*
 * q_3d_crane_cal.h
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
#ifndef RTW_HEADER_q_3d_crane_cal_h_
#define RTW_HEADER_q_3d_crane_cal_h_
#ifndef q_3d_crane_cal_COMMON_INCLUDES_
# define q_3d_crane_cal_COMMON_INCLUDES_
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "hil.h"
#include "quanser_messages.h"
#include "math.h"
#include "quanser_sigmoid.h"
#include "quanser_time.h"
#include "quanser_extern.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#endif                                 /* q_3d_crane_cal_COMMON_INCLUDES_ */

#include "q_3d_crane_cal_types.h"

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
#define q_3d_crane_cal_rtModel         RT_MODEL_q_3d_crane_cal

/* Block states (auto storage) for system '<S7>/Reset Encoder: Tower' */
typedef struct {
  void *HILSetEncoderCounts_PWORK;     /* '<S27>/HIL Set Encoder Counts' */
  int8_T ResetEncoderTower_SubsysRanBC;/* '<S7>/Reset Encoder: Tower' */
} rtDW_ResetEncoderTower_q_3d_cra;

/* Zero-crossing (trigger) state for system '<S7>/Reset Encoder: Tower' */
typedef struct {
  ZCSigState ResetEncoderTower_Trig_ZCE;/* '<S7>/Reset Encoder: Tower' */
} rtZCE_ResetEncoderTower_q_3d_cr;

/* Block signals for system '<S53>/Triggered Sigmoid Compute' */
typedef struct {
  t_sigmoid_params SigmoidCompute_o1;  /* '<S56>/Sigmoid Compute' */
  int8_T SigmoidCompute_o2;            /* '<S56>/Sigmoid Compute' */
} rtB_TriggeredSigmoidCompute_q_3;

/* Block states (auto storage) for system '<S53>/Triggered Sigmoid Compute' */
typedef struct {
  int8_T TriggeredSigmoidCompute_SubsysR;/* '<S53>/Triggered Sigmoid Compute' */
  int8_T SigmoidCompute_Toggle;        /* '<S56>/Sigmoid Compute' */
} rtDW_TriggeredSigmoidCompute_q_;

/* Zero-crossing (trigger) state for system '<S53>/Triggered Sigmoid Compute' */
typedef struct {
  ZCSigState TriggeredSigmoidCompute_Trig_ZC;/* '<S53>/Triggered Sigmoid Compute' */
} rtZCE_TriggeredSigmoidCompute_q;

/* Block signals for system '<S60>/Triggered Sigmoid Compute' */
typedef struct {
  t_sigmoid_params SigmoidCompute_o1;  /* '<S64>/Sigmoid Compute' */
  int8_T SigmoidCompute_o2;            /* '<S64>/Sigmoid Compute' */
} rtB_TriggeredSigmoidCompute_q_p;

/* Block states (auto storage) for system '<S60>/Triggered Sigmoid Compute' */
typedef struct {
  int8_T TriggeredSigmoidCompute_SubsysR;/* '<S60>/Triggered Sigmoid Compute' */
  int8_T SigmoidCompute_Toggle;        /* '<S64>/Sigmoid Compute' */
} rtDW_TriggeredSigmoidCompute_h;

/* Zero-crossing (trigger) state for system '<S60>/Triggered Sigmoid Compute' */
typedef struct {
  ZCSigState TriggeredSigmoidCompute_Trig__a;/* '<S60>/Triggered Sigmoid Compute' */
} rtZCE_TriggeredSigmoidCompute_b;

/* Block signals (auto storage) */
typedef struct {
  real_T EncoderCalibration[5];        /* '<S7>/Encoder Calibration' */
  real_T SigmoidPath_o1;               /* '<S60>/Sigmoid Path' */
  real_T SigmoidPath_o2;               /* '<S60>/Sigmoid Path' */
  real_T SigmoidPath_o3;               /* '<S60>/Sigmoid Path' */
  real_T SigmoidPath_o4;               /* '<S60>/Sigmoid Path' */
  real_T SigmoidPath_o1_i;             /* '<S61>/Sigmoid Path' */
  real_T SigmoidPath_o2_m;             /* '<S61>/Sigmoid Path' */
  real_T SigmoidPath_o3_h;             /* '<S61>/Sigmoid Path' */
  real_T SigmoidPath_o4_i;             /* '<S61>/Sigmoid Path' */
  real_T MultiportSwitch;              /* '<S66>/Multiport Switch' */
  real_T SigmoidPath_o1_l;             /* '<S67>/Sigmoid Path' */
  real_T SigmoidPath_o2_i;             /* '<S67>/Sigmoid Path' */
  real_T SigmoidPath_o3_d;             /* '<S67>/Sigmoid Path' */
  real_T SigmoidPath_o4_n;             /* '<S67>/Sigmoid Path' */
  real_T MultiportSwitch1;             /* '<S51>/Multiport Switch1' */
  real_T DiscreteTransferFcn;          /* '<S33>/Discrete Transfer Fcn' */
  real_T MultiportSwitch_h;            /* '<S52>/Multiport Switch' */
  real_T SigmoidPath_o1_c;             /* '<S53>/Sigmoid Path' */
  real_T SigmoidPath_o2_e;             /* '<S53>/Sigmoid Path' */
  real_T SigmoidPath_o3_dc;            /* '<S53>/Sigmoid Path' */
  real_T SigmoidPath_o4_nh;            /* '<S53>/Sigmoid Path' */
  real_T PayloadSetpointVector[2];     /* '<S49>/Payload Setpoint  Vector' */
  real_T Gain[2];                      /* '<S48>/Gain' */
  real_T Gain_k[2];                    /* '<S46>/Gain' */
  real_T Gain_c[2];                    /* '<S47>/Gain' */
  real_T CommandedCurrent[3];          /* '<S2>/Commanded Current ' */
  real_T JibIntegralControlGain;       /* '<S5>/Jib Integral  Control Gain' */
  real_T PayloadIntegralGain;          /* '<S6>/Payload Integral  Gain' */
  uint8_T Sum;                         /* '<S10>/Sum' */
  uint8_T Compare;                     /* '<S43>/Compare' */
  boolean_T Compare_f;                 /* '<S40>/Compare' */
  boolean_T LogicalOperator;           /* '<S62>/Logical Operator' */
  boolean_T Compare_p;                 /* '<S41>/Compare' */
  boolean_T LogicalOperator_j;         /* '<S63>/Logical Operator' */
  boolean_T LogicalOperator_d;         /* '<S69>/Logical Operator' */
  boolean_T Compare_a;                 /* '<S38>/Compare' */
  boolean_T LogicalOperator_a;         /* '<S55>/Logical Operator' */
  boolean_T UnitDelay;                 /* '<S3>/Unit Delay' */
  boolean_T SystemCalibrated;          /* '<S3>/System Calibrated' */
  boolean_T RateTransition;            /* '<S3>/Rate Transition' */
  boolean_T Compare_p5;                /* '<S39>/Compare' */
  boolean_T Compare_c;                 /* '<S37>/Compare' */
  boolean_T LogicalOperator_ao;        /* '<S58>/Logical Operator' */
  boolean_T TowerCalibrated;           /* '<S15>/Tower Calibrated' */
  boolean_T TrolleyCalibrated;         /* '<S15>/Trolley Calibrated' */
  boolean_T PayloadCalibrated;         /* '<S15>/Payload Calibrated' */
  rtB_TriggeredSigmoidCompute_q_3 TriggeredSigmoidCompute_l;/* '<S67>/Triggered Sigmoid Compute' */
  rtB_TriggeredSigmoidCompute_q_p TriggeredSigmoidCompute_e;/* '<S61>/Triggered Sigmoid Compute' */
  rtB_TriggeredSigmoidCompute_q_p TriggeredSigmoidCompute_d;/* '<S60>/Triggered Sigmoid Compute' */
  rtB_TriggeredSigmoidCompute_q_3 TriggeredSigmoidCompute;/* '<S53>/Triggered Sigmoid Compute' */
} BlockIO_q_3d_crane_cal;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  t_sigmoid_params SigmoidPath_Path;   /* '<S60>/Sigmoid Path' */
  t_sigmoid_params SigmoidPath_NewPath;/* '<S60>/Sigmoid Path' */
  t_sigmoid_params SigmoidPath_Path_m; /* '<S61>/Sigmoid Path' */
  t_sigmoid_params SigmoidPath_NewPath_j;/* '<S61>/Sigmoid Path' */
  t_sigmoid_params SigmoidPath_Path_j; /* '<S67>/Sigmoid Path' */
  t_sigmoid_params SigmoidPath_NewPath_m;/* '<S67>/Sigmoid Path' */
  t_sigmoid_params SigmoidPath_Path_c; /* '<S53>/Sigmoid Path' */
  t_sigmoid_params SigmoidPath_NewPath_c;/* '<S53>/Sigmoid Path' */
  t_timeout SampleTime_PreviousTime;   /* '<S10>/Sample Time' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S59>/Discrete-Time Integrator' */
  real_T DiscreteTransferFcn_DSTATE;   /* '<S36>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_DSTATE_p; /* '<S35>/Discrete Transfer Fcn' */
  real_T DiscreteTimeIntegrator_DSTATE_l;/* '<S68>/Discrete-Time Integrator' */
  real_T DiscreteTransferFcn_DSTATE_e; /* '<S33>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_DSTATE_h; /* '<S32>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_DSTATE_f; /* '<S31>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_DSTATE_k; /* '<S30>/Discrete Transfer Fcn' */
  real_T DiscreteTimeIntegrator_DSTATE_o;/* '<S5>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_h;/* '<S54>/Discrete-Time Integrator' */
  real_T DiscreteTransferFcn_DSTATE_kp;/* '<S34>/Discrete Transfer Fcn' */
  real_T DiscreteTimeIntegrator_DSTATE_m;/* '<S6>/Discrete-Time Integrator' */
  real_T HILInitialize_AIMinimums[8];  /* '<S1>/HIL Initialize' */
  real_T HILInitialize_AIMaximums[8];  /* '<S1>/HIL Initialize' */
  real_T HILInitialize_AOMinimums[8];  /* '<S1>/HIL Initialize' */
  real_T HILInitialize_AOMaximums[8];  /* '<S1>/HIL Initialize' */
  real_T HILInitialize_AOVoltages[8];  /* '<S1>/HIL Initialize' */
  real_T HILInitialize_FilterFrequency[8];/* '<S1>/HIL Initialize' */
  real_T HILInitialize_POSortedFreqs[8];/* '<S1>/HIL Initialize' */
  real_T HILInitialize_POValues[8];    /* '<S1>/HIL Initialize' */
  real_T DiscreteTransferFcn_tmp;      /* '<S36>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_tmp_e;    /* '<S35>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_tmp_f;    /* '<S33>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_tmp_l;    /* '<S32>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_tmp_d;    /* '<S31>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_tmp_c;    /* '<S30>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_tmp_dt;   /* '<S34>/Discrete Transfer Fcn' */
  t_card HILInitialize_Card;           /* '<S1>/HIL Initialize' */
  t_task HILReadTimebase_Task;         /* '<S1>/HIL Read Timebase' */
  struct {
    real_T Time;
  } SigmoidPath_RWORK;                 /* '<S60>/Sigmoid Path' */

  struct {
    real_T Time;
  } SigmoidPath_RWORK_p;               /* '<S61>/Sigmoid Path' */

  struct {
    real_T Time;
  } SigmoidPath_RWORK_e;               /* '<S67>/Sigmoid Path' */

  struct {
    real_T Time;
  } SigmoidPath_RWORK_h;               /* '<S53>/Sigmoid Path' */

  void *HILWrite_PWORK;                /* '<S1>/HIL Write' */
  struct {
    void *LoggedData;
  } LimitSwitches_PWORK;               /* '<Root>/Limit Switches' */

  struct {
    void *LoggedData;
  } alphadeg_PWORK;                    /* '<S11>/alpha (deg)' */

  struct {
    void *LoggedData;
  } thetadeg_PWORK;                    /* '<S11>/theta (deg)' */

  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<S11>/Scope' */

  struct {
    void *LoggedData;
  } gammadeg_PWORK;                    /* '<S11>/gamma (deg)' */

  struct {
    void *LoggedData;
  } xm_PWORK;                          /* '<S11>/x (m)' */

  struct {
    void *LoggedData;
  } zm_PWORK;                          /* '<S11>/z (m)' */

  struct {
    void *LoggedData;
  } ImA_PWORK;                         /* '<S11>/Im (A)' */

  int32_T HILInitialize_ClockModes[17];/* '<S1>/HIL Initialize' */
  int32_T HILInitialize_QuadratureModes[8];/* '<S1>/HIL Initialize' */
  int32_T HILInitialize_InitialEICounts[8];/* '<S1>/HIL Initialize' */
  int32_T HILInitialize_POModeValues[8];/* '<S1>/HIL Initialize' */
  int32_T HILInitialize_POAlignValues[8];/* '<S1>/HIL Initialize' */
  int32_T HILInitialize_POPolarityVals[8];/* '<S1>/HIL Initialize' */
  int32_T HILReadTimebase_EncoderBuffer[5];/* '<S1>/HIL Read Timebase' */
  uint32_T HILInitialize_POSortedChans[8];/* '<S1>/HIL Initialize' */
  boolean_T UnitDelay_DSTATE;          /* '<S51>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_g;        /* '<S52>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_k;        /* '<S3>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_p;        /* '<S58>/Unit Delay' */
  int8_T SigmoidPath_Toggle;           /* '<S60>/Sigmoid Path' */
  int8_T SigmoidPath_Toggle_k;         /* '<S61>/Sigmoid Path' */
  int8_T SigmoidPath_Toggle_c;         /* '<S67>/Sigmoid Path' */
  int8_T SigmoidPath_Toggle_h;         /* '<S53>/Sigmoid Path' */
  int8_T EnabledandTriggeredSubsystem_Su;/* '<S3>/Enabled and Triggered Subsystem' */
  uint8_T SigmoidPath_Flag;            /* '<S60>/Sigmoid Path' */
  uint8_T SigmoidPath_Flag_d;          /* '<S61>/Sigmoid Path' */
  uint8_T SigmoidPath_Flag_m;          /* '<S67>/Sigmoid Path' */
  uint8_T SigmoidPath_Flag_l;          /* '<S53>/Sigmoid Path' */
  uint8_T Memory_PreviousInput;        /* '<S10>/Memory' */
  boolean_T Memory_PreviousInput_h;    /* '<S62>/Memory' */
  boolean_T Memory_PreviousInput_i;    /* '<S63>/Memory' */
  boolean_T Memory_PreviousInput_e;    /* '<S69>/Memory' */
  boolean_T Memory_PreviousInput_f;    /* '<S55>/Memory' */
  t_boolean HILReadTimebase_DigitalBuffer[5];/* '<S1>/HIL Read Timebase' */
  t_boolean HILWrite_DigitalBuffer[4]; /* '<S1>/HIL Write' */
  rtDW_TriggeredSigmoidCompute_q_ TriggeredSigmoidCompute_l;/* '<S67>/Triggered Sigmoid Compute' */
  rtDW_TriggeredSigmoidCompute_h TriggeredSigmoidCompute_e;/* '<S61>/Triggered Sigmoid Compute' */
  rtDW_TriggeredSigmoidCompute_h TriggeredSigmoidCompute_d;/* '<S60>/Triggered Sigmoid Compute' */
  rtDW_TriggeredSigmoidCompute_q_ TriggeredSigmoidCompute;/* '<S53>/Triggered Sigmoid Compute' */
  rtDW_ResetEncoderTower_q_3d_cra ResetEncoderTrolley;/* '<S7>/Reset Encoder:  Trolley' */
  rtDW_ResetEncoderTower_q_3d_cra ResetEncoderPayload;/* '<S7>/Reset Encoder:  Payload' */
  rtDW_ResetEncoderTower_q_3d_cra ResetEncoderTower;/* '<S7>/Reset Encoder: Tower' */
} D_Work_q_3d_crane_cal;

/* Zero-crossing (trigger) state */
typedef struct {
  rtZCE_TriggeredSigmoidCompute_q TriggeredSigmoidCompute_l;/* '<S53>/Triggered Sigmoid Compute' */
  rtZCE_TriggeredSigmoidCompute_b TriggeredSigmoidCompute_e;/* '<S60>/Triggered Sigmoid Compute' */
  rtZCE_TriggeredSigmoidCompute_b TriggeredSigmoidCompute_d;/* '<S60>/Triggered Sigmoid Compute' */
  rtZCE_TriggeredSigmoidCompute_q TriggeredSigmoidCompute;/* '<S53>/Triggered Sigmoid Compute' */
  rtZCE_ResetEncoderTower_q_3d_cr ResetEncoderTrolley;/* '<S7>/Reset Encoder: Tower' */
  rtZCE_ResetEncoderTower_q_3d_cr ResetEncoderPayload;/* '<S7>/Reset Encoder: Tower' */
  rtZCE_ResetEncoderTower_q_3d_cr ResetEncoderTower;/* '<S7>/Reset Encoder: Tower' */
} PrevZCSigStates_q_3d_crane_cal;

/* Backward compatible GRT Identifiers */
#define rtB                            q_3d_crane_cal_B
#define BlockIO                        BlockIO_q_3d_crane_cal
#define rtXdot                         q_3d_crane_cal_Xdot
#define StateDerivatives               StateDerivatives_q_3d_crane_cal
#define tXdis                          q_3d_crane_cal_Xdis
#define StateDisabled                  StateDisabled_q_3d_crane_cal
#define rtP                            q_3d_crane_cal_P
#define Parameters                     Parameters_q_3d_crane_cal
#define rtDWork                        q_3d_crane_cal_DWork
#define D_Work                         D_Work_q_3d_crane_cal
#define rtPrevZCSigState               q_3d_crane_cal_PrevZCSigState
#define PrevZCSigStates                PrevZCSigStates_q_3d_crane_cal

/* Parameters for system: '<S7>/Reset Encoder: Tower' */
struct rtP_ResetEncoderTower_q_3d_cran_ {
  int32_T HILSetEncoderCounts_Counts;  /* Computed Parameter: HILSetEncoderCounts_Counts
                                        * Referenced by: '<S27>/HIL Set Encoder Counts'
                                        */
  uint32_T HILSetEncoderCounts_Channels;/* Computed Parameter: HILSetEncoderCounts_Channels
                                         * Referenced by: '<S27>/HIL Set Encoder Counts'
                                         */
  boolean_T HILSetEncoderCounts_Active;/* Computed Parameter: HILSetEncoderCounts_Active
                                        * Referenced by: '<S27>/HIL Set Encoder Counts'
                                        */
};

/* Parameters for system: '<S53>/Triggered Sigmoid Compute' */
struct rtP_TriggeredSigmoidCompute_q_3_ {
  real_T SigmoidCompute_VMax;          /* Expression: int_max_velocity
                                        * Referenced by: '<S56>/Sigmoid Compute'
                                        */
  real_T SigmoidCompute_AMax;          /* Expression: int_max_acceleration
                                        * Referenced by: '<S56>/Sigmoid Compute'
                                        */
};

/* Parameters for system: '<S60>/Triggered Sigmoid Compute' */
struct rtP_TriggeredSigmoidCompute_q_e_ {
  real_T SigmoidCompute_VMax;          /* Expression: int_max_velocity
                                        * Referenced by: '<S64>/Sigmoid Compute'
                                        */
  real_T SigmoidCompute_AMax;          /* Expression: int_max_acceleration
                                        * Referenced by: '<S64>/Sigmoid Compute'
                                        */
};

/* Parameters (auto storage) */
struct Parameters_q_3d_crane_cal_ {
  real_T Constant_Value;               /* Expression: const
                                        * Referenced by: '<S19>/Constant'
                                        */
  real_T Constant_Value_b;             /* Expression: const
                                        * Referenced by: '<S20>/Constant'
                                        */
  real_T Constant_Value_m;             /* Expression: const
                                        * Referenced by: '<S21>/Constant'
                                        */
  real_T Constant_Value_h;             /* Expression: const
                                        * Referenced by: '<S22>/Constant'
                                        */
  real_T Constant_Value_k;             /* Expression: const
                                        * Referenced by: '<S17>/Constant'
                                        */
  real_T Constant_Value_a;             /* Expression: const
                                        * Referenced by: '<S18>/Constant'
                                        */
  real_T ConstantFS_Value[4];          /* Expression: [1 1 1 1]
                                        * Referenced by: '<S23>/Constant: FS'
                                        */
  real_T ConstantPS_Value[4];          /* Expression: [1 0 1 0]
                                        * Referenced by: '<S23>/Constant: PS'
                                        */
  real_T GotoHome_Value;               /* Expression: sp_home_payload
                                        * Referenced by: '<S52>/Go to Home'
                                        */
  real_T Amplitudems_Gain;             /* Expression: 50e-3
                                        * Referenced by: '<S54>/Amplitude  (m//s)'
                                        */
  real_T Amplitudedegs_Gain;           /* Expression: 20.0
                                        * Referenced by: '<S59>/Amplitude  (deg//s)'
                                        */
  real_T GotoHome_Value_n;             /* Expression: sp_home_trolley
                                        * Referenced by: '<S66>/Go to Home'
                                        */
  real_T Amplitudems_Gain_f;           /* Expression: 50e-3
                                        * Referenced by: '<S68>/Amplitude  (m//s)'
                                        */
  real_T ConstantFS_Value_o[4];        /* Expression: [1 1 1 1]
                                        * Referenced by: '<S71>/Constant: FS'
                                        */
  real_T ConstantPS_Value_c[4];        /* Expression: [1 0 1 0]
                                        * Referenced by: '<S71>/Constant: PS'
                                        */
  real_T a_Value;                      /* Expression: 1
                                        * Referenced by: '<S72>/a'
                                        */
  real_T SliderGain_Gain;              /* Expression: gain
                                        * Referenced by: '<S73>/Slider Gain'
                                        */
  real_T HILInitialize_OOStart;        /* Expression: set_other_outputs_at_start
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_OOEnter;        /* Expression: set_other_outputs_at_switch_in
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_OOTerminate;    /* Expression: set_other_outputs_at_terminate
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_OOExit;         /* Expression: set_other_outputs_at_switch_out
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_AIHigh;         /* Expression: analog_input_maximums
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_AILow;          /* Expression: analog_input_minimums
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_AOHigh;         /* Expression: analog_output_maximums
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_AOLow;          /* Expression: analog_output_minimums
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_AOInitial;      /* Expression: initial_analog_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_AOFinal;        /* Expression: final_analog_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_AOWatchdog;     /* Expression: watchdog_analog_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_EIFrequency;    /* Expression: encoder_filter_frequency
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_POFrequency;    /* Expression: pwm_frequency
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_POLeading;      /* Expression: pwm_leading_deadband
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_POTrailing;     /* Expression: pwm_trailing_deadband
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_POInitial;      /* Expression: initial_pwm_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_POFinal;        /* Expression: final_pwm_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_POWatchdog;     /* Expression: watchdog_pwm_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T Constant_Value_i;             /* Expression: 1
                                        * Referenced by: '<S72>/Constant'
                                        */
  real_T WeighedState_Value;           /* Expression: 1
                                        * Referenced by: '<Root>/Weighed State'
                                        */
  real_T EncoderCalibration_Gain[5];   /* Expression: [K_ENC_THETA, K_ENC_X, K_ENC_Z, K_ENC_ALPHA, K_ENC_GAMMA]
                                        * Referenced by: '<S7>/Encoder Calibration'
                                        */
  real_T FullState_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Full-State'
                                        */
  real_T Constant_Value_k4;            /* Expression: const
                                        * Referenced by: '<S40>/Constant'
                                        */
  real_T GoCW_Gain;                    /* Expression: 1
                                        * Referenced by: '<S58>/Go CW'
                                        */
  real_T Constant_Value_n;             /* Expression: const
                                        * Referenced by: '<S41>/Constant'
                                        */
  real_T GoCCW_Gain;                   /* Expression: 2
                                        * Referenced by: '<S58>/Go CCW'
                                        */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S59>/Discrete-Time Integrator'
                                         */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S59>/Discrete-Time Integrator'
                                        */
  real_T x0v00_Value;                  /* Expression: 0
                                        * Referenced by: '<S50>/x0 = v0 = 0'
                                        */
  real_T GotoHomeCW_Value;             /* Expression: -sp_home_tower
                                        * Referenced by: '<S50>/Go to Home: CW'
                                        */
  real_T SigmoidPath_Hold;             /* Expression: hold_off
                                        * Referenced by: '<S60>/Sigmoid Path'
                                        */
  real_T GotoHomeCCW_Value;            /* Expression: sp_home_tower
                                        * Referenced by: '<S50>/Go to Home: CCW'
                                        */
  real_T SigmoidPath_Hold_a;           /* Expression: hold_off
                                        * Referenced by: '<S61>/Sigmoid Path'
                                        */
  real_T Gain1_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<S57>/Gain1'
                                        */
  real_T TowerSetpointVector_Gain[4];  /* Expression: [1, 0, 0, 0]
                                        * Referenced by: '<S50>/Tower Setpoint  Vector'
                                        */
  real_T DiscreteTransferFcn_InitialStat;/* Expression: 0
                                          * Referenced by: '<S36>/Discrete Transfer Fcn'
                                          */
  real_T DiscreteTransferFcn_Numerator[2];/* Expression: numz
                                           * Referenced by: '<S36>/Discrete Transfer Fcn'
                                           */
  real_T DiscreteTransferFcn_Denominator[2];/* Expression: denz
                                             * Referenced by: '<S36>/Discrete Transfer Fcn'
                                             */
  real_T DiscreteTransferFcn_InitialSt_n;/* Expression: 0
                                          * Referenced by: '<S35>/Discrete Transfer Fcn'
                                          */
  real_T DiscreteTransferFcn_Numerator_o[2];/* Expression: numz
                                             * Referenced by: '<S35>/Discrete Transfer Fcn'
                                             */
  real_T DiscreteTransferFcn_Denominat_a[2];/* Expression: denz
                                             * Referenced by: '<S35>/Discrete Transfer Fcn'
                                             */
  real_T TowerControlGain_Gain[4];     /* Expression: K_T
                                        * Referenced by: '<S13>/Tower Control  Gain'
                                        */
  real_T MotorDirection3_Gain;         /* Expression: 1
                                        * Referenced by: '<S2>/Motor  Direction3'
                                        */
  real_T DiscreteTimeIntegrator_gainva_o;/* Computed Parameter: DiscreteTimeIntegrator_gainva_o
                                          * Referenced by: '<S68>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_IC_l;  /* Expression: 0
                                        * Referenced by: '<S68>/Discrete-Time Integrator'
                                        */
  real_T InitialSetpointJib_Value;     /* Expression: 0
                                        * Referenced by: '<S51>/Initial Setpoint:  Jib'
                                        */
  real_T SigmoidPath_Hold_b;           /* Expression: hold_off
                                        * Referenced by: '<S67>/Sigmoid Path'
                                        */
  real_T Constant_Value_hq;            /* Expression: 0
                                        * Referenced by: '<S51>/Constant'
                                        */
  real_T DiscreteTransferFcn_InitialSt_f;/* Expression: 0
                                          * Referenced by: '<S33>/Discrete Transfer Fcn'
                                          */
  real_T DiscreteTransferFcn_Numerator_d[2];/* Expression: numz
                                             * Referenced by: '<S33>/Discrete Transfer Fcn'
                                             */
  real_T DiscreteTransferFcn_Denominat_b[2];/* Expression: denz
                                             * Referenced by: '<S33>/Discrete Transfer Fcn'
                                             */
  real_T DiscreteTransferFcn_InitialSt_o;/* Expression: 0
                                          * Referenced by: '<S32>/Discrete Transfer Fcn'
                                          */
  real_T DiscreteTransferFcn_Numerator_n[2];/* Expression: numz
                                             * Referenced by: '<S32>/Discrete Transfer Fcn'
                                             */
  real_T DiscreteTransferFcn_Denominat_i[2];/* Expression: denz
                                             * Referenced by: '<S32>/Discrete Transfer Fcn'
                                             */
  real_T DiscreteTransferFcn_InitialSt_m;/* Expression: 0
                                          * Referenced by: '<S31>/Discrete Transfer Fcn'
                                          */
  real_T DiscreteTransferFcn_Numerato_ne[2];/* Expression: numz
                                             * Referenced by: '<S31>/Discrete Transfer Fcn'
                                             */
  real_T DiscreteTransferFcn_Denominat_n[2];/* Expression: denz
                                             * Referenced by: '<S31>/Discrete Transfer Fcn'
                                             */
  real_T DiscreteTransferFcn_InitialSt_a;/* Expression: 0
                                          * Referenced by: '<S30>/Discrete Transfer Fcn'
                                          */
  real_T DiscreteTransferFcn_Numerator_g[2];/* Expression: numz
                                             * Referenced by: '<S30>/Discrete Transfer Fcn'
                                             */
  real_T DiscreteTransferFcn_Denomina_ny[2];/* Expression: denz
                                             * Referenced by: '<S30>/Discrete Transfer Fcn'
                                             */
  real_T JibControlGain_Gain[4];       /* Expression: K_J(1:4)
                                        * Referenced by: '<S5>/Jib Control  Gain'
                                        */
  real_T DiscreteTimeIntegrator_gainva_f;/* Computed Parameter: DiscreteTimeIntegrator_gainva_f
                                          * Referenced by: '<S5>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_IC_n;  /* Expression: 0
                                        * Referenced by: '<S5>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator_UpperSat;/* Expression: 2
                                          * Referenced by: '<S5>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_LowerSat;/* Expression: -2
                                          * Referenced by: '<S5>/Discrete-Time Integrator'
                                          */
  real_T MotorDirection1_Gain;         /* Expression: 1
                                        * Referenced by: '<S2>/Motor  Direction1'
                                        */
  real_T Constant_Value_j;             /* Expression: const
                                        * Referenced by: '<S38>/Constant'
                                        */
  real_T DiscreteTimeIntegrator_gainva_i;/* Computed Parameter: DiscreteTimeIntegrator_gainva_i
                                          * Referenced by: '<S54>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_IC_e;  /* Expression: 0
                                        * Referenced by: '<S54>/Discrete-Time Integrator'
                                        */
  real_T InitialSetpointTrolley_Value; /* Expression: 0
                                        * Referenced by: '<S49>/Initial Setpoint:  Trolley'
                                        */
  real_T SigmoidPath_Hold_m;           /* Expression: hold_off
                                        * Referenced by: '<S53>/Sigmoid Path'
                                        */
  real_T PayloadSetpointVector_Gain[2];/* Expression: [1, 0]
                                        * Referenced by: '<S49>/Payload Setpoint  Vector'
                                        */
  real_T DiscreteTransferFcn_InitialSt_l;/* Expression: 0
                                          * Referenced by: '<S34>/Discrete Transfer Fcn'
                                          */
  real_T DiscreteTransferFcn_Numerator_p[2];/* Expression: numz
                                             * Referenced by: '<S34>/Discrete Transfer Fcn'
                                             */
  real_T DiscreteTransferFcn_Denominat_m[2];/* Expression: denz
                                             * Referenced by: '<S34>/Discrete Transfer Fcn'
                                             */
  real_T PayloadProportionalGain_Gain; /* Expression: kp
                                        * Referenced by: '<S6>/Payload Proportional  Gain'
                                        */
  real_T DiscreteTimeIntegrator_gainva_a;/* Computed Parameter: DiscreteTimeIntegrator_gainva_a
                                          * Referenced by: '<S6>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_IC_li; /* Expression: 0
                                        * Referenced by: '<S6>/Discrete-Time Integrator'
                                        */
  real_T PayloadVelocityGain_Gain;     /* Expression: kv
                                        * Referenced by: '<S6>/Payload Velocity  Gain'
                                        */
  real_T MotorDirection2_Gain;         /* Expression: 1
                                        * Referenced by: '<S2>/Motor  Direction2'
                                        */
  real_T AMPAQCurrentLimitA_UpperSat;  /* Expression: IMAX_AMP
                                        * Referenced by: '<S2>/AMPAQ Current  Limit (A)'
                                        */
  real_T AMPAQCurrentLimitA_LowerSat;  /* Expression: -IMAX_AMP
                                        * Referenced by: '<S2>/AMPAQ Current  Limit (A)'
                                        */
  real_T MotorDirection_Gain;          /* Expression: -1
                                        * Referenced by: '<S2>/Motor  Direction'
                                        */
  real_T AmpstoVolts_Gain;             /* Expression: 1 / Ka
                                        * Referenced by: '<S2>/Amps to Volts'
                                        */
  real_T DACLimitV_UpperSat;           /* Expression: VMAX_DAC
                                        * Referenced by: '<S2>/DAC Limit (V)'
                                        */
  real_T DACLimitV_LowerSat;           /* Expression: -VMAX_DAC
                                        * Referenced by: '<S2>/DAC Limit (V)'
                                        */
  real_T EnableAmp_Value[4];           /* Expression: [0 0 0 1]
                                        * Referenced by: '<S4>/Enable Amp'
                                        */
  real_T Constant_Value_jj;            /* Expression: const
                                        * Referenced by: '<S39>/Constant'
                                        */
  real_T Constant_Value_m1;            /* Expression: const
                                        * Referenced by: '<S37>/Constant'
                                        */
  real_T Gain_Gain;                    /* Expression: 180/pi
                                        * Referenced by: '<S48>/Gain'
                                        */
  real_T Gain_Gain_b;                  /* Expression: 180/pi
                                        * Referenced by: '<S46>/Gain'
                                        */
  real_T Gain_Gain_o;                  /* Expression: 180/pi
                                        * Referenced by: '<S47>/Gain'
                                        */
  real_T CommandedCurrent_Gain;        /* Expression: -Ka
                                        * Referenced by: '<S2>/Commanded Current '
                                        */
  real_T JibIntegralControlGain_Gain;  /* Expression: K_J(5)
                                        * Referenced by: '<S5>/Jib Integral  Control Gain'
                                        */
  real_T PayloadIntegralGain_Gain;     /* Expression: ki
                                        * Referenced by: '<S6>/Payload Integral  Gain'
                                        */
  real_T GotoRet_Value;                /* Expression: 1
                                        * Referenced by: '<S54>/Go to Ret'
                                        */
  real_T Constant_Value_d;             /* Expression: 1
                                        * Referenced by: '<S59>/Constant'
                                        */
  real_T GotoRet_Value_n;              /* Expression: -1
                                        * Referenced by: '<S68>/Go to Ret'
                                        */
  real_T Constant_Value_c;             /* Expression: const
                                        * Referenced by: '<S42>/Constant'
                                        */
  int32_T HILInitialize_CKChannels[17];/* Computed Parameter: HILInitialize_CKChannels
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  int32_T HILInitialize_DOWatchdog;    /* Computed Parameter: HILInitialize_DOWatchdog
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  int32_T HILInitialize_EIInitial;     /* Computed Parameter: HILInitialize_EIInitial
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  int32_T HILInitialize_POModes;       /* Computed Parameter: HILInitialize_POModes
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  int32_T HILInitialize_POConfiguration;/* Computed Parameter: HILInitialize_POConfiguration
                                         * Referenced by: '<S1>/HIL Initialize'
                                         */
  int32_T HILInitialize_POAlignment;   /* Computed Parameter: HILInitialize_POAlignment
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  int32_T HILInitialize_POPolarity;    /* Computed Parameter: HILInitialize_POPolarity
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  int32_T HILReadTimebase_Clock;       /* Computed Parameter: HILReadTimebase_Clock
                                        * Referenced by: '<S1>/HIL Read Timebase'
                                        */
  uint32_T HILInitialize_AIChannels[8];/* Computed Parameter: HILInitialize_AIChannels
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  uint32_T HILInitialize_AOChannels[8];/* Computed Parameter: HILInitialize_AOChannels
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  uint32_T HILInitialize_EIChannels[8];/* Computed Parameter: HILInitialize_EIChannels
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  uint32_T HILInitialize_EIQuadrature; /* Computed Parameter: HILInitialize_EIQuadrature
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  uint32_T HILInitialize_POChannels[8];/* Computed Parameter: HILInitialize_POChannels
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  uint32_T HILReadTimebase_SamplesInBuffer;/* Computed Parameter: HILReadTimebase_SamplesInBuffer
                                            * Referenced by: '<S1>/HIL Read Timebase'
                                            */
  uint32_T HILReadTimebase_AnalogChannels[3];/* Computed Parameter: HILReadTimebase_AnalogChannels
                                              * Referenced by: '<S1>/HIL Read Timebase'
                                              */
  uint32_T HILReadTimebase_EncoderChannels[5];/* Computed Parameter: HILReadTimebase_EncoderChannels
                                               * Referenced by: '<S1>/HIL Read Timebase'
                                               */
  uint32_T HILReadTimebase_DigitalChannels[5];/* Computed Parameter: HILReadTimebase_DigitalChannels
                                               * Referenced by: '<S1>/HIL Read Timebase'
                                               */
  uint32_T HILWrite_AnalogChannels[3]; /* Computed Parameter: HILWrite_AnalogChannels
                                        * Referenced by: '<S1>/HIL Write'
                                        */
  uint32_T HILWrite_DigitalChannels[4];/* Computed Parameter: HILWrite_DigitalChannels
                                        * Referenced by: '<S1>/HIL Write'
                                        */
  int8_T ShowMessageonHost_MsgIcon;    /* Computed Parameter: ShowMessageonHost_MsgIcon
                                        * Referenced by: '<S14>/Show Message on Host'
                                        */
  int8_T ShowMessageonHost_MsgIcon_f;  /* Computed Parameter: ShowMessageonHost_MsgIcon_f
                                        * Referenced by: '<S44>/Show Message on Host'
                                        */
  uint8_T Memory_X0;                   /* Computed Parameter: Memory_X0
                                        * Referenced by: '<S10>/Memory'
                                        */
  uint8_T Constant_Value_l;            /* Computed Parameter: Constant_Value_l
                                        * Referenced by: '<S43>/Constant'
                                        */
  uint8_T Constant_Value_jw;           /* Computed Parameter: Constant_Value_jw
                                        * Referenced by: '<S45>/Constant'
                                        */
  boolean_T HILInitialize_Active;      /* Computed Parameter: HILInitialize_Active
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_CKPStart;    /* Computed Parameter: HILInitialize_CKPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_CKPEnter;    /* Computed Parameter: HILInitialize_CKPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_CKStart;     /* Computed Parameter: HILInitialize_CKStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_CKEnter;     /* Computed Parameter: HILInitialize_CKEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AIPStart;    /* Computed Parameter: HILInitialize_AIPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AIPEnter;    /* Computed Parameter: HILInitialize_AIPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOPStart;    /* Computed Parameter: HILInitialize_AOPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOPEnter;    /* Computed Parameter: HILInitialize_AOPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOStart;     /* Computed Parameter: HILInitialize_AOStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOEnter;     /* Computed Parameter: HILInitialize_AOEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOTerminate; /* Computed Parameter: HILInitialize_AOTerminate
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOExit;      /* Computed Parameter: HILInitialize_AOExit
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOReset;     /* Computed Parameter: HILInitialize_AOReset
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOPStart;    /* Computed Parameter: HILInitialize_DOPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOPEnter;    /* Computed Parameter: HILInitialize_DOPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOStart;     /* Computed Parameter: HILInitialize_DOStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOEnter;     /* Computed Parameter: HILInitialize_DOEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOTerminate; /* Computed Parameter: HILInitialize_DOTerminate
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOExit;      /* Computed Parameter: HILInitialize_DOExit
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOReset;     /* Computed Parameter: HILInitialize_DOReset
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIPStart;    /* Computed Parameter: HILInitialize_EIPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIPEnter;    /* Computed Parameter: HILInitialize_EIPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIStart;     /* Computed Parameter: HILInitialize_EIStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIEnter;     /* Computed Parameter: HILInitialize_EIEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POPStart;    /* Computed Parameter: HILInitialize_POPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POPEnter;    /* Computed Parameter: HILInitialize_POPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POStart;     /* Computed Parameter: HILInitialize_POStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POEnter;     /* Computed Parameter: HILInitialize_POEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POTerminate; /* Computed Parameter: HILInitialize_POTerminate
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POExit;      /* Computed Parameter: HILInitialize_POExit
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POReset;     /* Computed Parameter: HILInitialize_POReset
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_OOReset;     /* Computed Parameter: HILInitialize_OOReset
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOInitial;   /* Computed Parameter: HILInitialize_DOInitial
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOFinal;     /* Computed Parameter: HILInitialize_DOFinal
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILReadTimebase_Active;    /* Computed Parameter: HILReadTimebase_Active
                                        * Referenced by: '<S1>/HIL Read Timebase'
                                        */
  boolean_T Memory_X0_h;               /* Computed Parameter: Memory_X0_h
                                        * Referenced by: '<S62>/Memory'
                                        */
  boolean_T Memory_X0_i;               /* Computed Parameter: Memory_X0_i
                                        * Referenced by: '<S63>/Memory'
                                        */
  boolean_T UnitDelay_X0;              /* Computed Parameter: UnitDelay_X0
                                        * Referenced by: '<S51>/Unit Delay'
                                        */
  boolean_T Memory_X0_j;               /* Computed Parameter: Memory_X0_j
                                        * Referenced by: '<S69>/Memory'
                                        */
  boolean_T UnitDelay_X0_d;            /* Computed Parameter: UnitDelay_X0_d
                                        * Referenced by: '<S52>/Unit Delay'
                                        */
  boolean_T Memory_X0_n;               /* Computed Parameter: Memory_X0_n
                                        * Referenced by: '<S55>/Memory'
                                        */
  boolean_T HILWrite_Active;           /* Computed Parameter: HILWrite_Active
                                        * Referenced by: '<S1>/HIL Write'
                                        */
  boolean_T UnitDelay_X0_h;            /* Computed Parameter: UnitDelay_X0_h
                                        * Referenced by: '<S3>/Unit Delay'
                                        */
  boolean_T Constant_Value_e;          /* Computed Parameter: Constant_Value_e
                                        * Referenced by: '<S16>/Constant'
                                        */
  boolean_T UnitDelay_X0_n;            /* Computed Parameter: UnitDelay_X0_n
                                        * Referenced by: '<S58>/Unit Delay'
                                        */
  rtP_TriggeredSigmoidCompute_q_3 TriggeredSigmoidCompute_l;/* '<S67>/Triggered Sigmoid Compute' */
  rtP_TriggeredSigmoidCompute_q_e TriggeredSigmoidCompute_e;/* '<S61>/Triggered Sigmoid Compute' */
  rtP_TriggeredSigmoidCompute_q_e TriggeredSigmoidCompute_d;/* '<S60>/Triggered Sigmoid Compute' */
  rtP_TriggeredSigmoidCompute_q_3 TriggeredSigmoidCompute;/* '<S53>/Triggered Sigmoid Compute' */
  rtP_ResetEncoderTower_q_3d_cran ResetEncoderTrolley;/* '<S7>/Reset Encoder:  Trolley' */
  rtP_ResetEncoderTower_q_3d_cran ResetEncoderPayload;/* '<S7>/Reset Encoder:  Payload' */
  rtP_ResetEncoderTower_q_3d_cran ResetEncoderTower;/* '<S7>/Reset Encoder: Tower' */
};

/* Real-time Model Data Structure */
struct RT_MODEL_q_3d_crane_cal {
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
      uint16_T TID[2];
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
extern Parameters_q_3d_crane_cal q_3d_crane_cal_P;

/* Block signals (auto storage) */
extern BlockIO_q_3d_crane_cal q_3d_crane_cal_B;

/* Block states (auto storage) */
extern D_Work_q_3d_crane_cal q_3d_crane_cal_DWork;

/* External function called from main */
extern time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
  ;

/* External data declarations for dependent source files */

/* Zero-crossing (trigger) state */
extern PrevZCSigStates_q_3d_crane_cal q_3d_crane_cal_PrevZCSigState;

/* Model entry point functions */
extern void q_3d_crane_cal_SetEventsForThisBaseStep(boolean_T *eventFlags);
extern void q_3d_crane_cal_initialize(boolean_T firstTime);
extern void q_3d_crane_cal_output(int_T tid);
extern void q_3d_crane_cal_update(int_T tid);
extern void q_3d_crane_cal_terminate(void);

/* Real-time Model object */
extern struct RT_MODEL_q_3d_crane_cal *const q_3d_crane_cal_M;

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
 * '<Root>' : 'q_3d_crane_cal'
 * '<S1>'   : 'q_3d_crane_cal/3-DOF Crane HIL'
 * '<S2>'   : 'q_3d_crane_cal/3D Crane Motors - HIL'
 * '<S3>'   : 'q_3d_crane_cal/Calibration Complete'
 * '<S4>'   : 'q_3d_crane_cal/Enable AMPAQ  Amplifier - HIL'
 * '<S5>'   : 'q_3d_crane_cal/Jib Control System'
 * '<S6>'   : 'q_3d_crane_cal/Payload Control System'
 * '<S7>'   : 'q_3d_crane_cal/Position Sensors - HIL'
 * '<S8>'   : 'q_3d_crane_cal/Powered by QuaRC'
 * '<S9>'   : 'q_3d_crane_cal/Read Limit Switches'
 * '<S10>'  : 'q_3d_crane_cal/Sample Time Check'
 * '<S11>'  : 'q_3d_crane_cal/Scopes'
 * '<S12>'  : 'q_3d_crane_cal/Setpoints for  Calibration'
 * '<S13>'  : 'q_3d_crane_cal/Tower Control System'
 * '<S14>'  : 'q_3d_crane_cal/Calibration Complete/Cal Done'
 * '<S15>'  : 'q_3d_crane_cal/Calibration Complete/Enabled and Triggered Subsystem'
 * '<S16>'  : 'q_3d_crane_cal/Calibration Complete/Cal Done/Compare'
 * '<S17>'  : 'q_3d_crane_cal/Calibration Complete/Enabled and Triggered Subsystem/Payload Pos Calibrated'
 * '<S18>'  : 'q_3d_crane_cal/Calibration Complete/Enabled and Triggered Subsystem/Payload Vel Calibrated'
 * '<S19>'  : 'q_3d_crane_cal/Calibration Complete/Enabled and Triggered Subsystem/Tower Pos Calibrated'
 * '<S20>'  : 'q_3d_crane_cal/Calibration Complete/Enabled and Triggered Subsystem/Tower Vel Calibrated'
 * '<S21>'  : 'q_3d_crane_cal/Calibration Complete/Enabled and Triggered Subsystem/Trolley Pos Calibrated'
 * '<S22>'  : 'q_3d_crane_cal/Calibration Complete/Enabled and Triggered Subsystem/Trolley Vel Calibrated'
 * '<S23>'  : 'q_3d_crane_cal/Jib Control System/PSF or FSF Selector'
 * '<S24>'  : 'q_3d_crane_cal/Position Sensors - HIL/Construct Jib State'
 * '<S25>'  : 'q_3d_crane_cal/Position Sensors - HIL/Construct Payload State'
 * '<S26>'  : 'q_3d_crane_cal/Position Sensors - HIL/Construct Tower State'
 * '<S27>'  : 'q_3d_crane_cal/Position Sensors - HIL/Reset Encoder: Tower'
 * '<S28>'  : 'q_3d_crane_cal/Position Sensors - HIL/Reset Encoder:  Payload'
 * '<S29>'  : 'q_3d_crane_cal/Position Sensors - HIL/Reset Encoder:  Trolley'
 * '<S30>'  : 'q_3d_crane_cal/Position Sensors - HIL/Construct Jib State/High-Pass Filter: gamma'
 * '<S31>'  : 'q_3d_crane_cal/Position Sensors - HIL/Construct Jib State/High-Pass Filter: x'
 * '<S32>'  : 'q_3d_crane_cal/Position Sensors - HIL/Construct Jib State/Low-Pass Filter: gamma'
 * '<S33>'  : 'q_3d_crane_cal/Position Sensors - HIL/Construct Jib State/Low-Pass Filter: x'
 * '<S34>'  : 'q_3d_crane_cal/Position Sensors - HIL/Construct Payload State/High-Pass Filter: z'
 * '<S35>'  : 'q_3d_crane_cal/Position Sensors - HIL/Construct Tower State/High-Pass Filter: alpha'
 * '<S36>'  : 'q_3d_crane_cal/Position Sensors - HIL/Construct Tower State/High-Pass Filter: theta'
 * '<S37>'  : 'q_3d_crane_cal/Read Limit Switches/Goes to zero:  ext'
 * '<S38>'  : 'q_3d_crane_cal/Read Limit Switches/Goes to zero:  payload'
 * '<S39>'  : 'q_3d_crane_cal/Read Limit Switches/Goes to zero:  ret'
 * '<S40>'  : 'q_3d_crane_cal/Read Limit Switches/Goes to zero:  tower ccw'
 * '<S41>'  : 'q_3d_crane_cal/Read Limit Switches/Goes to zero:  tower cw'
 * '<S42>'  : 'q_3d_crane_cal/Sample Time Check/Larger than  2x sample time?'
 * '<S43>'  : 'q_3d_crane_cal/Sample Time Check/Max Missed Samples'
 * '<S44>'  : 'q_3d_crane_cal/Sample Time Check/Stop with Message'
 * '<S45>'  : 'q_3d_crane_cal/Sample Time Check/Stop with Message/Compare'
 * '<S46>'  : 'q_3d_crane_cal/Scopes/rad to deg:  theta'
 * '<S47>'  : 'q_3d_crane_cal/Scopes/rad to deg: gamma'
 * '<S48>'  : 'q_3d_crane_cal/Scopes/rad to deg:  alpha'
 * '<S49>'  : 'q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Payload'
 * '<S50>'  : 'q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Tower'
 * '<S51>'  : 'q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Trolley'
 * '<S52>'  : 'q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Payload/Setpoint Calibration: Payload'
 * '<S53>'  : 'q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Payload/Triggered Sigmoid'
 * '<S54>'  : 'q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Payload/Setpoint Calibration: Payload/Go to Ret'
 * '<S55>'  : 'q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Payload/Setpoint Calibration: Payload/Latch Payload limit'
 * '<S56>'  : 'q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Payload/Triggered Sigmoid/Triggered Sigmoid Compute'
 * '<S57>'  : 'q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Tower/Degrees to Radians'
 * '<S58>'  : 'q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Tower/Select Setpont'
 * '<S59>'  : 'q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Tower/Start rotating CCW'
 * '<S60>'  : 'q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Tower/Triggered Sigmoid'
 * '<S61>'  : 'q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Tower/Triggered Sigmoid1'
 * '<S62>'  : 'q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Tower/Select Setpont/Latch CCW Tower Limit'
 * '<S63>'  : 'q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Tower/Select Setpont/Latch CW Tower Limit'
 * '<S64>'  : 'q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Tower/Triggered Sigmoid/Triggered Sigmoid Compute'
 * '<S65>'  : 'q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Tower/Triggered Sigmoid1/Triggered Sigmoid Compute'
 * '<S66>'  : 'q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Trolley/Setpoint Calibration: Trolley'
 * '<S67>'  : 'q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Trolley/Triggered Sigmoid'
 * '<S68>'  : 'q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Trolley/Setpoint Calibration: Trolley/Go to Ret'
 * '<S69>'  : 'q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Trolley/Setpoint Calibration: Trolley/Latch RET limit'
 * '<S70>'  : 'q_3d_crane_cal/Setpoints for  Calibration/Calibration Setpoint: Trolley/Triggered Sigmoid/Triggered Sigmoid Compute'
 * '<S71>'  : 'q_3d_crane_cal/Tower Control System/PSF or FSF Selector'
 * '<S72>'  : 'q_3d_crane_cal/Tower Control System/Weighed State'
 * '<S73>'  : 'q_3d_crane_cal/Tower Control System/Weighed State/Slider Gain'
 */
#endif                                 /* RTW_HEADER_q_3d_crane_cal_h_ */
