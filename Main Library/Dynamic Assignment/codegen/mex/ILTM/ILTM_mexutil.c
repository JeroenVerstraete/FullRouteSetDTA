/*
 * ILTM_mexutil.c
 *
 * Code generation for function 'ILTM_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ILTM.h"
#include "ILTM_mexutil.h"

/* Function Definitions */
void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

const mxArray *message(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
  *location)
{
  const mxArray *pArray;
  const mxArray *m16;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m16, 1, &pArray, "message", true,
    location);
}

/* End of code generation (ILTM_mexutil.c) */
