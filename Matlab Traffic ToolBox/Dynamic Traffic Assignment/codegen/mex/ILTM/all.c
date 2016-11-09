/*
 * all.c
 *
 * Code generation for function 'all'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ILTM.h"
#include "all.h"
#include "eml_int_forloop_overflow_check.h"
#include "isequal.h"
#include "ILTM_mexutil.h"
#include "ILTM_data.h"

/* Variable Definitions */
static emlrtRSInfo nd_emlrtRSI = { 12, "all",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\all.m" };

static emlrtBCInfo nq_emlrtBCI = { -1, -1, 126, 24, "", "allOrAny",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\allOrAny.m",
  0 };

/* Function Definitions */
boolean_T all(const emlrtStack *sp, const emxArray_boolean_T *x)
{
  boolean_T y;
  boolean_T overflow;
  const mxArray *b_y;
  static const int32_T iv38[2] = { 1, 41 };

  const mxArray *m12;
  char_T cv35[41];
  int32_T i;
  static const char_T cv36[41] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r',
    '_', 'a', 'n', 'y', '_', 's', 'p', 'e', 'c', 'i', 'a', 'l', 'E', 'm', 'p',
    't', 'y' };

  const mxArray *c_y;
  static const int32_T iv39[2] = { 1, 51 };

  char_T cv37[51];
  static const char_T cv38[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r',
    '_', 'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  boolean_T exitg1;
  int32_T i13;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &nd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  overflow = !isequal(x);
  b_st.site = &cc_emlrtRSI;
  if (overflow) {
  } else {
    b_y = NULL;
    m12 = emlrtCreateCharArray(2, iv38);
    for (i = 0; i < 41; i++) {
      cv35[i] = cv36[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 41, m12, cv35);
    emlrtAssign(&b_y, m12);
    c_st.site = &yd_emlrtRSI;
    error(&c_st, message(&c_st, b_y, &k_emlrtMCI), &k_emlrtMCI);
  }

  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  b_st.site = &dc_emlrtRSI;
  if (overflow) {
  } else {
    c_y = NULL;
    m12 = emlrtCreateCharArray(2, iv39);
    for (i = 0; i < 51; i++) {
      cv37[i] = cv38[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 51, m12, cv37);
    emlrtAssign(&c_y, m12);
    c_st.site = &yd_emlrtRSI;
    error(&c_st, message(&c_st, c_y, &k_emlrtMCI), &k_emlrtMCI);
  }

  y = true;
  b_st.site = &ec_emlrtRSI;
  if (1 > x->size[0]) {
    overflow = false;
  } else {
    overflow = (x->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &qb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  i = 1;
  exitg1 = false;
  while ((!exitg1) && (i <= x->size[0])) {
    i13 = x->size[0];
    if (x->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i13, &nq_emlrtBCI, &st)
        - 1] == 0) {
      y = false;
      exitg1 = true;
    } else {
      i++;
    }
  }

  return y;
}

/* End of code generation (all.c) */
