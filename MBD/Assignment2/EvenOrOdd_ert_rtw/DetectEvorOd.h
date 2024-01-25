/*
 * File: DetectEvorOd.h
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

#ifndef RTW_HEADER_DetectEvorOd_h_
#define RTW_HEADER_DetectEvorOd_h_
#include <float.h>
#include <math.h>
#include <string.h>
#ifndef EvenOrOdd_COMMON_INCLUDES_
#define EvenOrOdd_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* EvenOrOdd_COMMON_INCLUDES_ */

#include "EvenOrOdd_types.h"
#include "rt_nonfinite.h"

/* Invariant block signals for system '<Root>/DetectEvorOd' */
typedef struct {
  const char_T StringConstant[256];    /* '<S3>/String Constant' */
  const char_T StringConstant_g[256];  /* '<S2>/String Constant' */
} ConstB_DetectEvorOd_EvenOrOdd_T;

extern void EvenOrOdd_DetectEvorOd(real_T rtu_In1, char_T rty_Out1[256], const
  ConstB_DetectEvorOd_EvenOrOdd_T *localC);

#endif                                 /* RTW_HEADER_DetectEvorOd_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
