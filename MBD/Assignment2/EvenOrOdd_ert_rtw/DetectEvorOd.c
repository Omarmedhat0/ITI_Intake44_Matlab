/*
 * File: DetectEvorOd.c
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

#include "DetectEvorOd.h"

/* Include model header file for global data */
#include "EvenOrOdd.h"
#include "EvenOrOdd_private.h"

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T q;
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (rtIsInf(u1)) {
    y = u0;
  } else if ((u1 != 0.0) && (u1 != trunc(u1))) {
    q = fabs(u0 / u1);
    if (!(fabs(q - floor(q + 0.5)) > DBL_EPSILON * q)) {
      y = 0.0 * u0;
    } else {
      y = fmod(u0, u1);
    }
  } else {
    y = fmod(u0, u1);
  }

  return y;
}

/* Output and update for atomic system: '<Root>/DetectEvorOd' */
void EvenOrOdd_DetectEvorOd(real_T rtu_In1, char_T rty_Out1[256], const
  ConstB_DetectEvorOd_EvenOrOdd_T *localC)
{
  /* If: '<S1>/If' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Math: '<S1>/Math Function'
   *  SignalConversion generated from: '<S2>/Out1'
   *  SignalConversion generated from: '<S3>/Out1'
   */
  if (rt_remd_snf(rtu_In1, 2.0) == 0.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    strncpy(&rty_Out1[0], &localC->StringConstant_g[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
    rty_Out1[255] = '\x00';
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    strncpy(&rty_Out1[0], &localC->StringConstant[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
    rty_Out1[255] = '\x00';
  }

  /* End of If: '<S1>/If' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
