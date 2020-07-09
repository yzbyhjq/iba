/*
 * File: mod.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 08-Jul-2020 16:05:53
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "iba.h"
#include "mod.h"

/* Function Definitions */

/*
 * Arguments    : const double x_data[]
 *                const int x_size[1]
 *                double r_data[]
 *                int r_size[1]
 * Return Type  : void
 */
void b_mod(const double x_data[], const int x_size[1], double r_data[], int
           r_size[1])
{
  int k;
  r_size[0] = (short)x_size[0];
  for (k = 0; k + 1 <= x_size[0]; k++) {
    r_data[k] = x_data[k] - floor(x_data[k] / 200.0) * 200.0;
  }
}

/*
 * File trailer for mod.c
 *
 * [EOF]
 */
