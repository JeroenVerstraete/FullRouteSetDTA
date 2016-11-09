/*
 * any.c
 *
 * Code generation for function 'any'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ILTM.h"
#include "any.h"
#include "eml_int_forloop_overflow_check.h"
#include "isequal.h"
#include "ILTM_emxutil.h"
#include "ILTM_mexutil.h"
#include "ILTM_data.h"

/* Variable Definitions */
static emlrtRSInfo bc_emlrtRSI = { 12, "any",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\any.m" };

static emlrtRSInfo fd_emlrtRSI = { 15, "any",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\any.m" };

static emlrtRSInfo gd_emlrtRSI = { 117, "allOrAny",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\allOrAny.m"
};

static emlrtRTEInfo sb_emlrtRTEI = { 1, 14, "any",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\any.m" };

static emlrtBCInfo uo_emlrtBCI = { -1, -1, 131, 46, "", "allOrAny",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\allOrAny.m",
  0 };

static emlrtBCInfo vo_emlrtBCI = { -1, -1, 131, 26, "", "allOrAny",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\allOrAny.m",
  0 };

static emlrtBCInfo mq_emlrtBCI = { -1, -1, 132, 25, "", "allOrAny",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\allOrAny.m",
  0 };

/* Function Definitions */
boolean_T any(const emlrtStack *sp, const emxArray_boolean_T *x)
{
  boolean_T y;
  boolean_T overflow;
  const mxArray *b_y;
  static const int32_T iv25[2] = { 1, 41 };

  const mxArray *m3;
  char_T cv10[41];
  int32_T i;
  static const char_T cv11[41] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r',
    '_', 'a', 'n', 'y', '_', 's', 'p', 'e', 'c', 'i', 'a', 'l', 'E', 'm', 'p',
    't', 'y' };

  const mxArray *c_y;
  static const int32_T iv26[2] = { 1, 51 };

  char_T cv12[51];
  static const char_T cv13[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r',
    '_', 'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  boolean_T exitg1;
  int32_T i5;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  overflow = !isequal(x);
  b_st.site = &cc_emlrtRSI;
  if (overflow) {
  } else {
    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv25);
    for (i = 0; i < 41; i++) {
      cv10[i] = cv11[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 41, m3, cv10);
    emlrtAssign(&b_y, m3);
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
    m3 = emlrtCreateCharArray(2, iv26);
    for (i = 0; i < 51; i++) {
      cv12[i] = cv13[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 51, m3, cv12);
    emlrtAssign(&c_y, m3);
    c_st.site = &yd_emlrtRSI;
    error(&c_st, message(&c_st, c_y, &k_emlrtMCI), &k_emlrtMCI);
  }

  y = false;
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
    i5 = x->size[0];
    if (x->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i5, &vo_emlrtBCI, &st) -
        1] == 0) {
      overflow = true;
    } else {
      i5 = x->size[0];
      emlrtDynamicBoundsCheckFastR2012b(i, 1, i5, &uo_emlrtBCI, &st);
      overflow = false;
    }

    if (!overflow) {
      y = true;
      exitg1 = true;
    } else {
      i++;
    }
  }

  return y;
}

boolean_T b_any(const emlrtStack *sp, const emxArray_boolean_T *x)
{
  boolean_T y;
  boolean_T overflow;
  boolean_T p;
  int32_T i;
  int32_T exitg2;
  const mxArray *b_y;
  static const int32_T iv29[2] = { 1, 41 };

  const mxArray *m5;
  char_T cv18[41];
  static const char_T cv19[41] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r',
    '_', 'a', 'n', 'y', '_', 's', 'p', 'e', 'c', 'i', 'a', 'l', 'E', 'm', 'p',
    't', 'y' };

  const mxArray *c_y;
  static const int32_T iv30[2] = { 1, 51 };

  char_T cv20[51];
  static const char_T cv21[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r',
    '_', 'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  boolean_T exitg1;
  int32_T i7;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  overflow = false;
  p = false;
  i = 0;
  do {
    exitg2 = 0;
    if (i < 2) {
      if (x->size[i] != 0) {
        exitg2 = 1;
      } else {
        i++;
      }
    } else {
      p = true;
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  if (!p) {
  } else {
    overflow = true;
  }

  b_st.site = &cc_emlrtRSI;
  if (!overflow) {
  } else {
    b_y = NULL;
    m5 = emlrtCreateCharArray(2, iv29);
    for (i = 0; i < 41; i++) {
      cv18[i] = cv19[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 41, m5, cv18);
    emlrtAssign(&b_y, m5);
    c_st.site = &yd_emlrtRSI;
    error(&c_st, message(&c_st, b_y, &k_emlrtMCI), &k_emlrtMCI);
  }

  if ((x->size[1] == 1) || (x->size[1] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  b_st.site = &dc_emlrtRSI;
  if (overflow) {
  } else {
    c_y = NULL;
    m5 = emlrtCreateCharArray(2, iv30);
    for (i = 0; i < 51; i++) {
      cv20[i] = cv21[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 51, m5, cv20);
    emlrtAssign(&c_y, m5);
    c_st.site = &yd_emlrtRSI;
    error(&c_st, message(&c_st, c_y, &k_emlrtMCI), &k_emlrtMCI);
  }

  y = false;
  b_st.site = &ec_emlrtRSI;
  if (1 > x->size[1]) {
    overflow = false;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    c_st.site = &qb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  i = 1;
  exitg1 = false;
  while ((!exitg1) && (i <= x->size[1])) {
    i7 = x->size[1];
    if (x->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i7, &vo_emlrtBCI, &st) -
        1] == 0) {
      p = true;
    } else {
      i7 = x->size[1];
      emlrtDynamicBoundsCheckFastR2012b(i, 1, i7, &uo_emlrtBCI, &st);
      p = false;
    }

    if (!p) {
      y = true;
      exitg1 = true;
    } else {
      i++;
    }
  }

  return y;
}

void c_any(const emlrtStack *sp, const emxArray_boolean_T *x, emxArray_boolean_T
           *y)
{
  uint32_T outsize[2];
  int32_T i12;
  int32_T i2;
  int32_T iy;
  boolean_T overflow;
  int32_T i;
  int32_T i1;
  boolean_T b_i1;
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  for (i12 = 0; i12 < 2; i12++) {
    outsize[i12] = (uint32_T)x->size[i12];
  }

  i12 = y->size[0] * y->size[1];
  y->size[0] = 1;
  emxEnsureCapacity(&st, (emxArray__common *)y, i12, (int32_T)sizeof(boolean_T),
                    &sb_emlrtRTEI);
  i12 = y->size[0] * y->size[1];
  y->size[1] = (int32_T)outsize[1];
  emxEnsureCapacity(&st, (emxArray__common *)y, i12, (int32_T)sizeof(boolean_T),
                    &sb_emlrtRTEI);
  i2 = (int32_T)outsize[1];
  for (i12 = 0; i12 < i2; i12++) {
    y->data[i12] = false;
  }

  i2 = 0;
  iy = 0;
  b_st.site = &gd_emlrtRSI;
  if (1 > x->size[1]) {
    overflow = false;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    c_st.site = &qb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i = 1; i <= x->size[1]; i++) {
    i1 = i2 + 1;
    i2 += x->size[0];
    iy++;
    b_st.site = &ec_emlrtRSI;
    if (i1 > i2) {
      b_i1 = false;
    } else {
      b_i1 = (i2 > 2147483646);
    }

    if (b_i1) {
      c_st.site = &qb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    exitg1 = false;
    while ((!exitg1) && (i1 <= i2)) {
      i12 = x->size[0] * x->size[1];
      if (x->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i12, &vo_emlrtBCI,
           &st) - 1] == 0) {
        overflow = true;
      } else {
        i12 = x->size[0] * x->size[1];
        emlrtDynamicBoundsCheckFastR2012b(i1, 1, i12, &uo_emlrtBCI, &st);
        overflow = false;
      }

      if (!overflow) {
        i12 = y->size[1];
        y->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i12, &mq_emlrtBCI, &st)
          - 1] = true;
        exitg1 = true;
      } else {
        i1++;
      }
    }
  }
}

/* End of code generation (any.c) */
