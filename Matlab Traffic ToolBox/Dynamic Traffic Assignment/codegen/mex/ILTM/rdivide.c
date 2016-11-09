/*
 * rdivide.c
 *
 * Code generation for function 'rdivide'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ILTM.h"
#include "rdivide.h"
#include "ILTM_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo ib_emlrtRTEI = { 1, 14, "rdivide",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

/* Function Definitions */
void rdivide(const emlrtStack *sp, const emxArray_real_T *x, real_T y,
             emxArray_real_T *z)
{
  int32_T i8;
  int32_T loop_ub;
  i8 = z->size[0] * z->size[1];
  z->size[0] = 1;
  z->size[1] = x->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)z, i8, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    z->data[i8] = x->data[i8] / y;
  }
}

/* End of code generation (rdivide.c) */
