/*
 * File: randperm.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 08-Jul-2020 16:05:53
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "iba.h"
#include "randperm.h"
#include "rand.h"

/* Function Definitions */

/*
 * Arguments    : double p[100]
 * Return Type  : void
 */
void randperm(double p[100])
{
  int iwork[100];
  int idx[100];
  int k;
  int i;
  boolean_T b_p;
  int i2;
  int j;
  int pEnd;
  int c_p;
  int q;
  int qEnd;
  int kEnd;
  c_rand(p);
  for (k = 0; k <= 99; k += 2) {
    if ((p[k] <= p[k + 1]) || rtIsNaN(p[k + 1])) {
      b_p = true;
    } else {
      b_p = false;
    }

    if (b_p) {
      idx[k] = k + 1;
      idx[k + 1] = k + 2;
    } else {
      idx[k] = k + 2;
      idx[k + 1] = k + 1;
    }
  }

  i = 2;
  while (i < 100) {
    i2 = i << 1;
    j = 1;
    for (pEnd = 1 + i; pEnd < 101; pEnd = qEnd + i) {
      c_p = j;
      q = pEnd - 1;
      qEnd = j + i2;
      if (qEnd > 101) {
        qEnd = 101;
      }

      k = 0;
      kEnd = qEnd - j;
      while (k + 1 <= kEnd) {
        if ((p[idx[c_p - 1] - 1] <= p[idx[q] - 1]) || rtIsNaN(p[idx[q] - 1])) {
          b_p = true;
        } else {
          b_p = false;
        }

        if (b_p) {
          iwork[k] = idx[c_p - 1];
          c_p++;
          if (c_p == pEnd) {
            while (q + 1 < qEnd) {
              k++;
              iwork[k] = idx[q];
              q++;
            }
          }
        } else {
          iwork[k] = idx[q];
          q++;
          if (q + 1 == qEnd) {
            while (c_p < pEnd) {
              k++;
              iwork[k] = idx[c_p - 1];
              c_p++;
            }
          }
        }

        k++;
      }

      for (k = 0; k + 1 <= kEnd; k++) {
        idx[(j + k) - 1] = iwork[k];
      }

      j = qEnd;
    }

    i = i2;
  }

  for (k = 0; k < 100; k++) {
    p[k] = idx[k];
  }
}

/*
 * File trailer for randperm.c
 *
 * [EOF]
 */
