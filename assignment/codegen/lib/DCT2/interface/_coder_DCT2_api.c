/*
 * File: _coder_DCT2_api.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 28-Jun-2018 14:21:07
 */

/* Include Files */
#include "tmwtypes.h"
#include "_coder_DCT2_api.h"
#include "_coder_DCT2_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131466U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "DCT2",                              /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[9];
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[9];
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *origin,
  const char_T *identifier))[9];
static const mxArray *emlrt_marshallOut(const real_T u[9]);

/* Function Definitions */

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[9]
 */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[9]
{
  real_T (*y)[9];
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[9]
 */
  static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[9]
{
  real_T (*ret)[9];
  static const int32_T dims[2] = { 1, 9 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[9])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *origin
 *                const char_T *identifier
 * Return Type  : real_T (*)[9]
 */
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *origin,
  const char_T *identifier))[9]
{
  real_T (*y)[9];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(origin), &thisId);
  emlrtDestroyArray(&origin);
  return y;
}
/*
 * Arguments    : const real_T u[9]
 * Return Type  : const mxArray *
 */
  static const mxArray *emlrt_marshallOut(const real_T u[9])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 0, 0 };

  static const int32_T iv1[2] = { 1, 9 };

  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m0, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m0, iv1, 2);
  emlrtAssign(&y, m0);
  return y;
}

/*
 * Arguments    : const mxArray * const prhs[1]
 *                int32_T nlhs
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
void DCT2_api(const mxArray * const prhs[1], int32_T nlhs, const mxArray *plhs[1])
{
  real_T (*z)[9];
  real_T (*origin)[9];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  z = (real_T (*)[9])mxMalloc(sizeof(real_T [9]));

  /* Marshall function inputs */
  origin = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "origin");

  /* Invoke the target function */
  DCT2(*origin, *z);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*z);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void DCT2_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  DCT2_xil_terminate();
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void DCT2_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void DCT2_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * File trailer for _coder_DCT2_api.c
 *
 * [EOF]
 */
