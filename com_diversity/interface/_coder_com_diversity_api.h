/*
 * File: _coder_com_diversity_api.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 08-Jul-2020 14:35:05
 */

#ifndef _CODER_COM_DIVERSITY_API_H
#define _CODER_COM_DIVERSITY_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_com_diversity_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
#ifdef __cplusplus

extern "C" {

#endif

  extern real_T com_diversity(real_T x_min, real_T x_max, real_T position);
  extern void com_diversity_api(const mxArray * const prhs[3], const mxArray
    *plhs[1]);
  extern void com_diversity_atexit(void);
  extern void com_diversity_initialize(void);
  extern void com_diversity_terminate(void);
  extern void com_diversity_xil_terminate(void);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for _coder_com_diversity_api.h
 *
 * [EOF]
 */
