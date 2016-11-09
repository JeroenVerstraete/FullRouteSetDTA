/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ILTM.h"
#include "abs.h"
#include "ILTM_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo hb_emlrtRTEI = { 16, 5, "abs",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m" };

/* Function Definitions */
void b_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T uv1[2];
  int32_T k;
  for (k = 0; k < 2; k++) {
    uv1[k] = (uint32_T)x->size[k];
  }

  k = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = (int32_T)uv1[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &hb_emlrtRTEI);
  for (k = 0; k < x->size[1]; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

/* End of code generation (abs.c) */
