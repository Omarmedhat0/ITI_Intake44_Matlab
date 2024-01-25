/*
 * File: FactorialUsingWhileLoop.c
 *
 * Code generated for Simulink model 'FactorialUsingWhileLoop'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Jan 25 21:09:07 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. RAM efficiency
 *    2. Execution efficiency
 * Validation result: Not run
 */

#include "FactorialUsingWhileLoop.h"
#include "FactorialUsingWhileLoop_private.h"

/* Block states (default storage) */
DW_FactorialUsingWhileLoop_T FactorialUsingWhileLoop_DW;

/* External inputs (root inport signals with default storage) */
ExtU_FactorialUsingWhileLoop_T FactorialUsingWhileLoop_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_FactorialUsingWhileLoop_T FactorialUsingWhileLoop_Y;

/* Real-time model */
static RT_MODEL_FactorialUsingWhileL_T FactorialUsingWhileLoop_M_;
RT_MODEL_FactorialUsingWhileL_T *const FactorialUsingWhileLoop_M =
  &FactorialUsingWhileLoop_M_;

/* Model step function */
void FactorialUsingWhileLoop_step(void)
{
  int32_T s1_iter;
  boolean_T loopCond;

  /* Outputs for Iterator SubSystem: '<Root>/While Iterator Subsystem1' incorporates:
   *  WhileIterator: '<S1>/While Iterator'
   */
  s1_iter = 1;

  /* Inport: '<Root>/IC' */
  loopCond = FactorialUsingWhileLoop_U.IC;
  while (loopCond) {
    /* RelationalOperator: '<S1>/LessThanOrEqual' incorporates:
     *  Delay: '<S1>/Delay1'
     *  Inport: '<Root>/In1'
     */
    loopCond = (FactorialUsingWhileLoop_DW.Delay1_DSTATE <=
                FactorialUsingWhileLoop_U.In1);

    /* Delay: '<S1>/Delay' incorporates:
     *  Delay: '<S1>/Delay1'
     */
    FactorialUsingWhileLoop_DW.Delay1_DSTATE =
      FactorialUsingWhileLoop_DW.Delay_DSTATE;

    /* Outport: '<Root>/Out1' incorporates:
     *  Delay: '<S1>/Delay1'
     *  Product: '<S1>/Product'
     */
    FactorialUsingWhileLoop_Y.Out1 = s1_iter *
      FactorialUsingWhileLoop_DW.Delay1_DSTATE;

    /* Update for Delay: '<S1>/Delay1' */
    FactorialUsingWhileLoop_DW.Delay1_DSTATE = s1_iter;

    /* Update for Delay: '<S1>/Delay' incorporates:
     *  Outport: '<Root>/Out1'
     */
    FactorialUsingWhileLoop_DW.Delay_DSTATE = FactorialUsingWhileLoop_Y.Out1;
    s1_iter++;
  }

  /* End of Outputs for SubSystem: '<Root>/While Iterator Subsystem1' */
}

/* Model initialize function */
void FactorialUsingWhileLoop_initialize(void)
{
  /* SystemInitialize for Iterator SubSystem: '<Root>/While Iterator Subsystem1' */
  /* InitializeConditions for Delay: '<S1>/Delay1' */
  FactorialUsingWhileLoop_DW.Delay1_DSTATE = 1;

  /* InitializeConditions for Delay: '<S1>/Delay' */
  FactorialUsingWhileLoop_DW.Delay_DSTATE = 1;

  /* End of SystemInitialize for SubSystem: '<Root>/While Iterator Subsystem1' */
}

/* Model terminate function */
void FactorialUsingWhileLoop_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
