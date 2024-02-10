/*
 * File: EnumAssignslx.c
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

#include "EnumAssignslx.h"
#include "EnumAssignslx_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_EnumAssignslx_T EnumAssignslx_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_EnumAssignslx_T EnumAssignslx_Y;

/* Real-time model */
static RT_MODEL_EnumAssignslx_T EnumAssignslx_M_;
RT_MODEL_EnumAssignslx_T *const EnumAssignslx_M = &EnumAssignslx_M_;

/* Model step function */
void EnumAssignslx_step(void)
{
  /* Outport: '<Root>/y' incorporates:
   *  Inport: '<Root>/In3'
   */
  EnumAssignslx_Y.y = EnumAssignslx_U.In3;

  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   */
  EnumAssignslx_Y.Out1 = EnumAssignslx_U.In1.x;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   */
  EnumAssignslx_Y.Out2 = EnumAssignslx_U.In1.y;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In2'
   */
  EnumAssignslx_Y.Out3 = EnumAssignslx_U.In2.Volt;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In2'
   */
  EnumAssignslx_Y.Out4 = EnumAssignslx_U.In2.Temp;
}

/* Model initialize function */
void EnumAssignslx_initialize(void)
{
  /* Registration code */

  /* external inputs */
  EnumAssignslx_U.In3 = ele1;

  /* external outputs */
  EnumAssignslx_Y.y = ele1;
}

/* Model terminate function */
void EnumAssignslx_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
