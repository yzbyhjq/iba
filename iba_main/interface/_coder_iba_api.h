/*
 * File: _coder_iba_api.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 08-Jul-2020 16:05:53
 */

#ifndef _CODER_IBA_API_H
#define _CODER_IBA_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_iba_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
#ifdef __cplusplus

extern "C" {

#endif

  extern void iba(void);
  extern void iba_api(void);
  extern void iba_atexit(void);
  extern void iba_initialize(void);
  extern void iba_terminate(void);
  extern void iba_xil_terminate(void);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for _coder_iba_api.h
 *
 * [EOF]
 */
