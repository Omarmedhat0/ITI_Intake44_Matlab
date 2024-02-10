/*
 * File: EnumAssignslx_types.h
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

#ifndef RTW_HEADER_EnumAssignslx_types_h_
#define RTW_HEADER_EnumAssignslx_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_MYstr_
#define DEFINED_TYPEDEF_FOR_MYstr_

typedef struct {
  uint8_T x;
  uint8_T y;
} MYstr;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Fault_
#define DEFINED_TYPEDEF_FOR_Fault_

typedef struct {
  uint8_T Volt;
  uint8_T Temp;
} Fault;

#endif

#ifndef DEFINED_TYPEDEF_FOR_enum1_
#define DEFINED_TYPEDEF_FOR_enum1_

typedef enum {
  ele1 = 1,                            /* Default value */
  ele2
} enum1;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_EnumAssignslx_T RT_MODEL_EnumAssignslx_T;

#endif                                 /* RTW_HEADER_EnumAssignslx_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
