/*
 * File: EvenOrOdd.c
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

#include "EvenOrOdd.h"
#include "EvenOrOdd_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_EvenOrOdd_T EvenOrOdd_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_EvenOrOdd_T EvenOrOdd_Y;

/* Real-time model */
static RT_MODEL_EvenOrOdd_T EvenOrOdd_M_;
RT_MODEL_EvenOrOdd_T *const EvenOrOdd_M = &EvenOrOdd_M_;

/* Model step function */
void EvenOrOdd_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/DetectEvorOd' */

  /* Inport: '<Root>/In1' incorporates:
   *  Outport: '<Root>/Out1'
   */
  EvenOrOdd_DetectEvorOd(EvenOrOdd_U.In1, &EvenOrOdd_Y.Out1[0],
    &EvenOrOdd_ConstB.DetectEvorOd);

  /* End of Outputs for SubSystem: '<Root>/DetectEvorOd' */
}

/* Model initialize function */
void EvenOrOdd_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
}

/* Model terminate function */
void EvenOrOdd_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
