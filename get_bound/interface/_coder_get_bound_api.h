/*
 * File: _coder_get_bound_api.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 08-Jul-2020 13:49:32
 */

#ifndef _CODER_GET_BOUND_API_H
#define _CODER_GET_BOUND_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_get_bound_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
#ifdef __cplusplus

extern "C" {

#endif

  extern void get_bound(real_T x, real_T y[2]);
  extern void get_bound_api(const mxArray * const prhs[1], const mxArray *plhs[1]);
  extern void get_bound_atexit(void);
  extern void get_bound_initialize(void);
  extern void get_bound_terminate(void);
  extern void get_bound_xil_terminate(void);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for _coder_get_bound_api.h
 *
 * [EOF]
 */
