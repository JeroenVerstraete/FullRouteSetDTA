/*
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ILTM.h"
#include "repmat.h"
#include "ILTM_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "NodeModel.h"
#include "ILTM_mexutil.h"
#include "ILTM_data.h"

/* Function Definitions */
void repmat(const emlrtStack *sp, const emxArray_boolean_T *a, real_T varargin_2,
            emxArray_boolean_T *b)
{
  int32_T outsize_idx_0;
  const mxArray *y;
  static const int32_T iv35[2] = { 1, 15 };

  const mxArray *m8;
  char_T cv29[15];
  static const char_T cv30[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
    'a', 'x', 's', 'i', 'z', 'e' };

  boolean_T b2;
  int32_T ibtile;
  boolean_T overflow;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &cd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  eml_assert_valid_size_arg(&st, varargin_2);
  emlrtNonNegativeCheckFastR2012b(varargin_2, &ae_emlrtDCI, sp);
  outsize_idx_0 = a->size[0];
  if (outsize_idx_0 == a->size[0]) {
  } else {
    y = NULL;
    m8 = emlrtCreateCharArray(2, iv35);
    for (outsize_idx_0 = 0; outsize_idx_0 < 15; outsize_idx_0++) {
      cv29[outsize_idx_0] = cv30[outsize_idx_0];
    }

    emlrtInitCharArrayR2013a(sp, 15, m8, cv29);
    emlrtAssign(&y, m8);
    st.site = &de_emlrtRSI;
    error(&st, y, &s_emlrtMCI);
  }

  outsize_idx_0 = b->size[0] * b->size[1];
  b->size[0] = a->size[0];
  b->size[1] = (int32_T)varargin_2;
  emxEnsureCapacity(sp, (emxArray__common *)b, outsize_idx_0, (int32_T)sizeof
                    (boolean_T), &lb_emlrtRTEI);
  outsize_idx_0 = a->size[0];
  if ((outsize_idx_0 == 0) || ((int32_T)varargin_2 == 0)) {
  } else {
    st.site = &dd_emlrtRSI;
    if (1 > (int32_T)varargin_2) {
      b2 = false;
    } else {
      b2 = ((int32_T)varargin_2 > 2147483646);
    }

    if (b2) {
      b_st.site = &qb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (outsize_idx_0 = 1; outsize_idx_0 <= (int32_T)varargin_2; outsize_idx_0
         ++) {
      ibtile = (outsize_idx_0 - 1) * a->size[0];
      st.site = &ed_emlrtRSI;
      if (1 > a->size[0]) {
        overflow = false;
      } else {
        overflow = (a->size[0] > 2147483646);
      }

      if (overflow) {
        b_st.site = &qb_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (k = 1; k <= a->size[0]; k++) {
        b->data[(ibtile + k) - 1] = a->data[k - 1];
      }
    }
  }
}

/* End of code generation (repmat.c) */
