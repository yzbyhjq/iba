/*
 * File: _coder_iba_position_api.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 08-Jul-2020 13:53:01
 */

#ifndef _CODER_IBA_POSITION_API_H
#define _CODER_IBA_POSITION_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_iba_position_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
#ifdef __cplusplus

extern "C" {

#endif

  extern real_T iba_position(real_T x, real_T z, real_T w);
  extern void iba_position_api(const mxArray * const prhs[3], const mxArray
    *plhs[1]);
  extern void iba_position_atexit(void);
  extern void iba_position_initialize(void);
  extern void iba_position_terminate(void);
  extern void iba_position_xil_terminate(void);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for _coder_iba_position_api.h
 *
 * [EOF]
 */
