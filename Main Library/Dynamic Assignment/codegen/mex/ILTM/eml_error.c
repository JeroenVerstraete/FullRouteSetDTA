/*
 * eml_error.c
 *
 * Code generation for function 'eml_error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ILTM.h"
#include "eml_error.h"

/* Variable Definitions */
static emlrtRTEInfo qc_emlrtRTEI = { 20, 5, "eml_error",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_error.m"
};

/* Function Definitions */
void b_eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &qc_emlrtRTEI,
    "Coder:toolbox:eml_setop_unsortedB", 0);
}

void eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &qc_emlrtRTEI,
    "Coder:toolbox:eml_setop_unsortedA", 0);
}

/* End of code generation (eml_error.c) */
