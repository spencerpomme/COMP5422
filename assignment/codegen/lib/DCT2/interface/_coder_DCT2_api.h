/*
 * File: _coder_DCT2_api.h
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 28-Jun-2018 14:21:07
 */

#ifndef _CODER_DCT2_API_H
#define _CODER_DCT2_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_DCT2_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void DCT2(real_T origin[9], real_T z[9]);
extern void DCT2_api(const mxArray * const prhs[1], int32_T nlhs, const mxArray *
                     plhs[1]);
extern void DCT2_atexit(void);
extern void DCT2_initialize(void);
extern void DCT2_terminate(void);
extern void DCT2_xil_terminate(void);

#endif

/*
 * File trailer for _coder_DCT2_api.h
 *
 * [EOF]
 */
