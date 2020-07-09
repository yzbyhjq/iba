/*
 * File: abs.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 08-Jul-2020 13:53:01
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "iba_position.h"
#include "abs.h"

/* Function Definitions */

/*
 * Arguments    : const double x_data[]
 *                const int x_size[2]
 *                double y_data[]
 *                int y_size[2]
 * Return Type  : void
 */
void b_abs(const double x_data[], const int x_size[2], double y_data[], int
           y_size[2])
{
  int k;
  y_size[0] = 1;
  y_size[1] = (signed char)x_size[1];
  k = 1;
  while (k <= x_size[1]) {
    y_data[0] = fabs(x_data[0]);
    k = 2;
  }
}

/*
 * File trailer for abs.c
 *
 * [EOF]
 */
