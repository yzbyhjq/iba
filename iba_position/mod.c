/*
 * File: mod.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 08-Jul-2020 13:53:01
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "iba_position.h"
#include "mod.h"

/* Function Declarations */
static double rt_roundd_snf(double u);

/* Function Definitions */

/*
 * Arguments    : double u
 * Return Type  : double
 */
static double rt_roundd_snf(double u)
{
  double y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/*
 * Arguments    : const double x_data[]
 *                const int x_size[2]
 *                double y
 *                double r_data[]
 *                int r_size[2]
 * Return Type  : void
 */
void b_mod(const double x_data[], const int x_size[2], double y, double r_data[],
           int r_size[2])
{
  int k;
  double r;
  r_size[0] = 1;
  r_size[1] = (signed char)x_size[1];
  k = 1;
  while (k <= x_size[1]) {
    if (y == 0.0) {
      r = x_data[0];
    } else if (y == floor(y)) {
      r = x_data[0] - floor(x_data[0] / y) * y;
    } else {
      r = x_data[0] / y;
      if (fabs(r - rt_roundd_snf(r)) <= 2.2204460492503131E-16 * fabs(r)) {
        r = 0.0;
      } else {
        r = (r - floor(r)) * y;
      }
    }

    r_data[0] = r;
    k = 2;
  }
}

/*
 * File trailer for mod.c
 *
 * [EOF]
 */
