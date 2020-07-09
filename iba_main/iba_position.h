/*
 * File: iba_position.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 08-Jul-2020 16:05:53
 */

#ifndef IBA_POSITION_H
#define IBA_POSITION_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "iba_types.h"

/* Function Declarations */
#ifdef __cplusplus

extern "C" {

#endif

  extern void b_iba_position(double x[3000]);
  extern void iba_position(const double x[3000], double y[3000]);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for iba_position.h
 *
 * [EOF]
 */
