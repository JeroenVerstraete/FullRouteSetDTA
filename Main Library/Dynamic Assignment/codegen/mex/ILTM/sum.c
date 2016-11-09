/*
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ILTM.h"
#include "sum.h"
#include "eml_int_forloop_overflow_check.h"
#include "ILTM_emxutil.h"
#include "isequal.h"
#include "ILTM_mexutil.h"
#include "ILTM_data.h"

/* Variable Definitions */
static emlrtRSInfo fc_emlrtRSI = { 61, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRSInfo od_emlrtRSI = { 72, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtMCInfo l_emlrtMCI = { 18, 9, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtMCInfo m_emlrtMCI = { 17, 19, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtMCInfo n_emlrtMCI = { 23, 9, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtMCInfo o_emlrtMCI = { 20, 19, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRTEInfo ub_emlrtRTEI = { 1, 14, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRSInfo wd_emlrtRSI = { 20, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRSInfo xd_emlrtRSI = { 17, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRSInfo oe_emlrtRSI = { 23, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRSInfo pe_emlrtRSI = { 18, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

/* Function Definitions */
real_T b_sum(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  boolean_T overflow;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (x->size[1] == 0) {
    y = 0.0;
  } else {
    y = x->data[0];
    st.site = &fc_emlrtRSI;
    if (2 > x->size[1]) {
      overflow = false;
    } else {
      overflow = (x->size[1] > 2147483646);
    }

    if (overflow) {
      b_st.site = &qb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 2; k <= x->size[1]; k++) {
      y += x->data[k - 1];
    }
  }

  return y;
}

void c_sum(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T sz[2];
  int32_T iy;
  int32_T ixstart;
  boolean_T overflow;
  int32_T j;
  int32_T ix;
  real_T s;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (iy = 0; iy < 2; iy++) {
    sz[iy] = (uint32_T)x->size[iy];
  }

  iy = y->size[0];
  y->size[0] = (int32_T)sz[0];
  emxEnsureCapacity(sp, (emxArray__common *)y, iy, (int32_T)sizeof(real_T),
                    &mb_emlrtRTEI);
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    iy = y->size[0];
    y->size[0] = (int32_T)sz[0];
    emxEnsureCapacity(sp, (emxArray__common *)y, iy, (int32_T)sizeof(real_T),
                      &ub_emlrtRTEI);
    ixstart = (int32_T)sz[0];
    for (iy = 0; iy < ixstart; iy++) {
      y->data[iy] = 0.0;
    }
  } else {
    iy = -1;
    ixstart = -1;
    st.site = &od_emlrtRSI;
    overflow = (x->size[0] > 2147483646);
    if (overflow) {
      b_st.site = &qb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (j = 1; j <= x->size[0]; j++) {
      ixstart++;
      ix = ixstart;
      s = x->data[ixstart];
      st.site = &id_emlrtRSI;
      if (2 > x->size[1]) {
        overflow = false;
      } else {
        overflow = (x->size[1] > 2147483646);
      }

      if (overflow) {
        b_st.site = &qb_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (k = 2; k <= x->size[1]; k++) {
        ix += x->size[0];
        s += x->data[ix];
      }

      iy++;
      y->data[iy] = s;
    }
  }
}

real_T d_sum(const emlrtStack *sp, const emxArray_boolean_T *x)
{
  real_T y;
  boolean_T overflow;
  const mxArray *b_y;
  static const int32_T iv40[2] = { 1, 30 };

  const mxArray *m13;
  char_T cv39[30];
  int32_T i;
  static const char_T cv40[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 's', 'u', 'm', '_', 's', 'p', 'e', 'c', 'i', 'a',
    'l', 'E', 'm', 'p', 't', 'y' };

  const mxArray *c_y;
  static const int32_T iv41[2] = { 1, 36 };

  char_T cv41[36];
  static const char_T cv42[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  overflow = !isequal(x);
  if (overflow) {
  } else {
    b_y = NULL;
    m13 = emlrtCreateCharArray(2, iv40);
    for (i = 0; i < 30; i++) {
      cv39[i] = cv40[i];
    }

    emlrtInitCharArrayR2013a(sp, 30, m13, cv39);
    emlrtAssign(&b_y, m13);
    st.site = &xd_emlrtRSI;
    b_st.site = &pe_emlrtRSI;
    error(&st, message(&b_st, b_y, &l_emlrtMCI), &m_emlrtMCI);
  }

  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    c_y = NULL;
    m13 = emlrtCreateCharArray(2, iv41);
    for (i = 0; i < 36; i++) {
      cv41[i] = cv42[i];
    }

    emlrtInitCharArrayR2013a(sp, 36, m13, cv41);
    emlrtAssign(&c_y, m13);
    st.site = &wd_emlrtRSI;
    b_st.site = &oe_emlrtRSI;
    error(&st, message(&b_st, c_y, &n_emlrtMCI), &o_emlrtMCI);
  }

  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    y = x->data[0];
    st.site = &fc_emlrtRSI;
    if (2 > x->size[0]) {
      overflow = false;
    } else {
      overflow = (x->size[0] > 2147483646);
    }

    if (overflow) {
      c_st.site = &qb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (i = 2; i <= x->size[0]; i++) {
      y += (real_T)x->data[i - 1];
    }
  }

  return y;
}

real_T sum(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  boolean_T overflow;
  boolean_T p;
  int32_T i;
  int32_T exitg1;
  const mxArray *b_y;
  static const int32_T iv27[2] = { 1, 30 };

  const mxArray *m4;
  char_T cv14[30];
  static const char_T cv15[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 's', 'u', 'm', '_', 's', 'p', 'e', 'c', 'i', 'a',
    'l', 'E', 'm', 'p', 't', 'y' };

  const mxArray *c_y;
  static const int32_T iv28[2] = { 1, 36 };

  char_T cv16[36];
  static const char_T cv17[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  overflow = false;
  p = false;
  i = 0;
  do {
    exitg1 = 0;
    if (i < 2) {
      if (x->size[i] != 0) {
        exitg1 = 1;
      } else {
        i++;
      }
    } else {
      p = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (!p) {
  } else {
    overflow = true;
  }

  if (!overflow) {
  } else {
    b_y = NULL;
    m4 = emlrtCreateCharArray(2, iv27);
    for (i = 0; i < 30; i++) {
      cv14[i] = cv15[i];
    }

    emlrtInitCharArrayR2013a(sp, 30, m4, cv14);
    emlrtAssign(&b_y, m4);
    st.site = &xd_emlrtRSI;
    b_st.site = &pe_emlrtRSI;
    error(&st, message(&b_st, b_y, &l_emlrtMCI), &m_emlrtMCI);
  }

  if ((x->size[1] == 1) || (x->size[1] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    c_y = NULL;
    m4 = emlrtCreateCharArray(2, iv28);
    for (i = 0; i < 36; i++) {
      cv16[i] = cv17[i];
    }

    emlrtInitCharArrayR2013a(sp, 36, m4, cv16);
    emlrtAssign(&c_y, m4);
    st.site = &wd_emlrtRSI;
    b_st.site = &oe_emlrtRSI;
    error(&st, message(&b_st, c_y, &n_emlrtMCI), &o_emlrtMCI);
  }

  if (x->size[1] == 0) {
    y = 0.0;
  } else {
    y = x->data[0];
    st.site = &fc_emlrtRSI;
    if (2 > x->size[1]) {
      overflow = false;
    } else {
      overflow = (x->size[1] > 2147483646);
    }

    if (overflow) {
      c_st.site = &qb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (i = 2; i <= x->size[1]; i++) {
      y += x->data[i - 1];
    }
  }

  return y;
}

/* End of code generation (sum.c) */
