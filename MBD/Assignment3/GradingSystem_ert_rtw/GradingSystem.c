/*
 * File: GradingSystem.c
 *
 * Code generated for Simulink model 'GradingSystem'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Jan 25 23:22:14 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. RAM efficiency
 *    2. Execution efficiency
 * Validation result: Not run
 */

#include "GradingSystem.h"
#include "GradingSystem_private.h"

/* Block signals (default storage) */
B_GradingSystem_T GradingSystem_B;

/* External inputs (root inport signals with default storage) */
ExtU_GradingSystem_T GradingSystem_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_GradingSystem_T GradingSystem_Y;

/* Real-time model */
static RT_MODEL_GradingSystem_T GradingSystem_M_;
RT_MODEL_GradingSystem_T *const GradingSystem_M = &GradingSystem_M_;

/* Model step function */
void GradingSystem_step(void)
{
  /* If: '<S1>/If' incorporates:
   *  Inport: '<Root>/In1'
   *  Merge: '<S1>/Merge'
   *  SignalConversion generated from: '<S2>/Out1'
   *  SignalConversion generated from: '<S3>/Out1'
   *  SignalConversion generated from: '<S4>/Out1'
   *  SignalConversion generated from: '<S5>/Out1'
   *  SignalConversion generated from: '<S6>/Out1'
   */
  if ((GradingSystem_U.In1 >= 0.0) && (GradingSystem_U.In1 < 50.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    strncpy(&GradingSystem_B.Merge[0], &GradingSystem_ConstB.StringConstant[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
    GradingSystem_B.Merge[255] = '\x00';
  } else if ((GradingSystem_U.In1 >= 50.0) && (GradingSystem_U.In1 < 65.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    strncpy(&GradingSystem_B.Merge[0], &GradingSystem_ConstB.StringConstant1[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
    GradingSystem_B.Merge[255] = '\x00';
  } else if ((GradingSystem_U.In1 >= 65.0) && (GradingSystem_U.In1 < 75.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    strncpy(&GradingSystem_B.Merge[0], &GradingSystem_ConstB.StringConstant2[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem2' */
    GradingSystem_B.Merge[255] = '\x00';
  } else if ((GradingSystem_U.In1 >= 75.0) && (GradingSystem_U.In1 < 85.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    strncpy(&GradingSystem_B.Merge[0], &GradingSystem_ConstB.StringConstant3[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem3' */
    GradingSystem_B.Merge[255] = '\x00';
  } else if ((GradingSystem_U.In1 >= 85.0) && (GradingSystem_U.In1 <= 100.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    strncpy(&GradingSystem_B.Merge[0], &GradingSystem_ConstB.StringConstant4[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem4' */
    GradingSystem_B.Merge[255] = '\x00';
  }

  /* End of If: '<S1>/If' */

  /* Outport: '<Root>/Out1' */
  strncpy(&GradingSystem_Y.Out1[0], &GradingSystem_B.Merge[0], 255U);
  GradingSystem_Y.Out1[255] = '\x00';
}

/* Model initialize function */
void GradingSystem_initialize(void)
{
  /* SystemInitialize for Merge: '<S1>/Merge' */
  strncpy(&GradingSystem_B.Merge[0], &GradingSystem_ConstP.Merge_InitialOutput[0],
          255U);
  GradingSystem_B.Merge[255] = '\x00';
}

/* Model terminate function */
void GradingSystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
