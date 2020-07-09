/*
 * File: abs.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 08-Jul-2020 16:05:53
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "iba.h"
#include "abs.h"

/* Function Definitions */

/*
 * Arguments    : const double x_data[]
 *                const int x_size[1]
 *                double y_data[]
 *                int y_size[1]
 * Return Type  : void
 */
void b_abs(const double x_data[], const int x_size[1], double y_data[], int
           y_size[1])
{
  int k;
  y_size[0] = (short)x_size[0];
  for (k = 0; k + 1 <= x_size[0]; k++) {
    y_data[k] = fabs(x_data[k]);
  }
}

/*
 * File trailer for abs.c
 *
 * [EOF]
 */
