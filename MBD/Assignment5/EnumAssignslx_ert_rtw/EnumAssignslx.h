/*
 * File: EnumAssignslx.h
 *
 * Code generated for Simulink model 'EnumAssignslx'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sat Feb 10 18:25:28 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. RAM efficiency
 *    2. Execution efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_EnumAssignslx_h_
#define RTW_HEADER_EnumAssignslx_h_
#ifndef EnumAssignslx_COMMON_INCLUDES_
#define EnumAssignslx_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* EnumAssignslx_COMMON_INCLUDES_ */

#include "EnumAssignslx_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  MYstr In1;                           /* '<Root>/In1' */
  Fault In2;                           /* '<Root>/In2' */
  enum1 In3;                           /* '<Root>/In3' */
} ExtU_EnumAssignslx_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T Out1;                        /* '<Root>/Out1' */
  uint8_T Out2;                        /* '<Root>/Out2' */
  uint8_T Out3;                        /* '<Root>/Out3' */
  uint8_T Out4;                        /* '<Root>/Out4' */
  enum1 y;                             /* '<Root>/y' */
} ExtY_EnumAssignslx_T;

/* Real-time Model Data Structure */
struct tag_RTM_EnumAssignslx_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_EnumAssignslx_T EnumAssignslx_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_EnumAssignslx_T EnumAssignslx_Y;

/* Model entry point functions */
extern void EnumAssignslx_initialize(void);
extern void EnumAssignslx_step(void);
extern void EnumAssignslx_terminate(void);

/* Real-time Model object */
extern RT_MODEL_EnumAssignslx_T *const EnumAssignslx_M;

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
 * '<Root>' : 'EnumAssignslx'
 * '<S1>'   : 'EnumAssignslx/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_EnumAssignslx_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
