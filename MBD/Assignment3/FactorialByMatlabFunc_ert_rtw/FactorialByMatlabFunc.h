/*
 * File: FactorialByMatlabFunc.h
 *
 * Code generated for Simulink model 'FactorialByMatlabFunc'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Jan 25 22:21:46 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. RAM efficiency
 *    2. Execution efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FactorialByMatlabFunc_h_
#define RTW_HEADER_FactorialByMatlabFunc_h_
#include <math.h>
#ifndef FactorialByMatlabFunc_COMMON_INCLUDES_
#define FactorialByMatlabFunc_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                              /* FactorialByMatlabFunc_COMMON_INCLUDES_ */

#include "FactorialByMatlabFunc_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_FactorialByMatlabFunc_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T y;                            /* '<Root>/y' */
} ExtY_FactorialByMatlabFunc_T;

/* Real-time Model Data Structure */
struct tag_RTM_FactorialByMatlabFunc_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_FactorialByMatlabFunc_T FactorialByMatlabFunc_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_FactorialByMatlabFunc_T FactorialByMatlabFunc_Y;

/* Model entry point functions */
extern void FactorialByMatlabFunc_initialize(void);
extern void FactorialByMatlabFunc_step(void);
extern void FactorialByMatlabFunc_terminate(void);

/* Real-time Model object */
extern RT_MODEL_FactorialByMatlabFun_T *const FactorialByMatlabFunc_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<Root>/Display' : Unused code path elimination
 */

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
 * '<Root>' : 'FactorialByMatlabFunc'
 * '<S1>'   : 'FactorialByMatlabFunc/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_FactorialByMatlabFunc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
