/*
 * File: EvenOrOdd.h
 *
 * Code generated for Simulink model 'EvenOrOdd'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Jan 25 23:46:46 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. RAM efficiency
 *    2. Execution efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_EvenOrOdd_h_
#define RTW_HEADER_EvenOrOdd_h_
#ifndef EvenOrOdd_COMMON_INCLUDES_
#define EvenOrOdd_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* EvenOrOdd_COMMON_INCLUDES_ */

#include "EvenOrOdd_types.h"

/* Child system includes */
#include "DetectEvorOd.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Invariant block signals (default storage) */
typedef struct {
  ConstB_DetectEvorOd_EvenOrOdd_T DetectEvorOd;/* '<Root>/DetectEvorOd' */
} ConstB_EvenOrOdd_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_EvenOrOdd_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Out1[256];                    /* '<Root>/Out1' */
} ExtY_EvenOrOdd_T;

/* Real-time Model Data Structure */
struct tag_RTM_EvenOrOdd_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_EvenOrOdd_T EvenOrOdd_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_EvenOrOdd_T EvenOrOdd_Y;
extern const ConstB_EvenOrOdd_T EvenOrOdd_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void EvenOrOdd_initialize(void);
extern void EvenOrOdd_step(void);
extern void EvenOrOdd_terminate(void);

/* Real-time Model object */
extern RT_MODEL_EvenOrOdd_T *const EvenOrOdd_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant' : Unused code path elimination
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
 * '<Root>' : 'EvenOrOdd'
 * '<S1>'   : 'EvenOrOdd/DetectEvorOd'
 * '<S2>'   : 'EvenOrOdd/DetectEvorOd/If Action Subsystem'
 * '<S3>'   : 'EvenOrOdd/DetectEvorOd/If Action Subsystem1'
 */
#endif                                 /* RTW_HEADER_EvenOrOdd_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
