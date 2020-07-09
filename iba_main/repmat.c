/*
 * File: repmat.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 08-Jul-2020 16:05:53
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "iba.h"
#include "repmat.h"

/* Function Definitions */

/*
 * Arguments    : const boolean_T a_data[]
 *                boolean_T b_data[]
 *                int b_size[2]
 * Return Type  : void
 */
void b_repmat(const boolean_T a_data[], boolean_T b_data[], int b_size[2])
{
  int jcol;
  int ibmat;
  int itilerow;
  for (jcol = 0; jcol < 2; jcol++) {
    b_size[jcol] = 30 + -28 * jcol;
    ibmat = jcol * 30;
    for (itilerow = 0; itilerow < 30; itilerow++) {
      b_data[ibmat + itilerow] = a_data[jcol];
    }
  }
}

/*
 * Arguments    : const double a[100]
 *                double b[3000]
 * Return Type  : void
 */
void repmat(const double a[100], double b[3000])
{
  int jcol;
  int ibmat;
  int itilerow;
  for (jcol = 0; jcol < 100; jcol++) {
    ibmat = jcol * 30;
    for (itilerow = 0; itilerow < 30; itilerow++) {
      b[ibmat + itilerow] = a[jcol];
    }
  }
}

/*
 * File trailer for repmat.c
 *
 * [EOF]
 */
