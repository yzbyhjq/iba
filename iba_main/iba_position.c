/*
 * File: iba_position.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 08-Jul-2020 16:05:53
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "iba.h"
#include "iba_position.h"
#include "mod.h"
#include "abs.h"

/* Function Definitions */

/*
 * 修改速度参数
 * Arguments    : double x[3000]
 * Return Type  : void
 */
void b_iba_position(double x[3000])
{
  int idx;
  short ii_data[3000];
  int ii;
  boolean_T exitg2;
  boolean_T guard2 = false;
  int i2;
  double B_data[3000];
  double x_data[3000];
  int tmp_data[3000];
  int x_size[1];
  int B_size[1];
  double b_tmp_data[3000];
  boolean_T exitg1;
  boolean_T guard1 = false;
  int b_x_size[1];
  idx = 0;
  ii = 1;
  exitg2 = false;
  while ((!exitg2) && (ii < 3001)) {
    guard2 = false;
    if (x[ii - 1] > 100.0) {
      idx++;
      ii_data[idx - 1] = (short)ii;
      if (idx >= 3000) {
        exitg2 = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }

    if (guard2) {
      ii++;
    }
  }

  if (1 > idx) {
    ii = 0;
  } else {
    ii = idx;
  }

  if (1 > idx) {
    idx = 0;
  }

  for (i2 = 0; i2 < idx; i2++) {
    B_data[i2] = ii_data[i2];
  }

  if (1 > ii) {
    idx = 0;
  } else {
    idx = ii;
  }

  if (1 > ii) {
    ii = 0;
  }

  for (i2 = 0; i2 < ii; i2++) {
    tmp_data[i2] = (int)B_data[i2];
  }

  x_size[0] = idx;
  for (i2 = 0; i2 < idx; i2++) {
    x_data[i2] = x[(int)B_data[i2] - 1];
  }

  b_abs(x_data, x_size, B_data, B_size);
  b_mod(B_data, B_size, x_data, x_size);
  idx = x_size[0];
  for (i2 = 0; i2 < idx; i2++) {
    b_tmp_data[i2] = -100.0 + x_data[i2];
  }

  for (i2 = 0; i2 < ii; i2++) {
    x[tmp_data[i2] - 1] = b_tmp_data[i2];
  }

  idx = 0;
  ii = 1;
  exitg1 = false;
  while ((!exitg1) && (ii < 3001)) {
    guard1 = false;
    if (x[ii - 1] < -100.0) {
      idx++;
      ii_data[idx - 1] = (short)ii;
      if (idx >= 3000) {
        exitg1 = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      ii++;
    }
  }

  if (1 > idx) {
    ii = 0;
  } else {
    ii = idx;
  }

  if (1 > idx) {
    idx = 0;
  }

  for (i2 = 0; i2 < idx; i2++) {
    B_data[i2] = ii_data[i2];
  }

  if (1 > ii) {
    idx = 0;
  } else {
    idx = ii;
  }

  if (1 > ii) {
    ii = 0;
  }

  for (i2 = 0; i2 < ii; i2++) {
    tmp_data[i2] = (int)B_data[i2];
  }

  b_x_size[0] = idx;
  for (i2 = 0; i2 < idx; i2++) {
    x_data[i2] = x[(int)B_data[i2] - 1];
  }

  b_abs(x_data, b_x_size, B_data, B_size);
  b_mod(B_data, B_size, x_data, x_size);
  idx = x_size[0];
  for (i2 = 0; i2 < idx; i2++) {
    b_tmp_data[i2] = 100.0 - x_data[i2];
  }

  for (i2 = 0; i2 < ii; i2++) {
    x[tmp_data[i2] - 1] = b_tmp_data[i2];
  }
}

/*
 * 修改速度参数
 * Arguments    : const double x[3000]
 *                double y[3000]
 * Return Type  : void
 */
void iba_position(const double x[3000], double y[3000])
{
  memcpy(&y[0], &x[0], 3000U * sizeof(double));
  b_iba_position(y);
}

/*
 * File trailer for iba_position.c
 *
 * [EOF]
 */
