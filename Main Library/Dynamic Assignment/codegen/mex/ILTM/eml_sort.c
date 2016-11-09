/*
 * eml_sort.c
 *
 * Code generation for function 'eml_sort'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ILTM.h"
#include "eml_sort.h"
#include "ILTM_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "ILTM_data.h"

/* Variable Definitions */
static emlrtRSInfo qd_emlrtRSI = { 59, "eml_sort",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort.m"
};

static emlrtRSInfo rd_emlrtRSI = { 42, "eml_sort_idx",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort_idx.m"
};

static emlrtRSInfo sd_emlrtRSI = { 134, "eml_sort_idx",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort_idx.m"
};

static emlrtRSInfo td_emlrtRSI = { 138, "eml_sort_idx",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort_idx.m"
};

static emlrtRSInfo ud_emlrtRSI = { 185, "eml_sort_idx",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort_idx.m"
};

static emlrtRSInfo vd_emlrtRSI = { 194, "eml_sort_idx",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort_idx.m"
};

static emlrtRTEInfo vb_emlrtRTEI = { 27, 5, "eml_sort_idx",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort_idx.m"
};

static emlrtRTEInfo wb_emlrtRTEI = { 39, 5, "eml_sort_idx",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort_idx.m"
};

static emlrtRTEInfo xb_emlrtRTEI = { 1, 20, "eml_sort",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort.m"
};

static emlrtRTEInfo yb_emlrtRTEI = { 145, 5, "eml_sort_idx",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort_idx.m"
};

/* Function Definitions */
void eml_sort(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y,
              emxArray_int32_T *idx)
{
  uint32_T unnamed_idx_0;
  int32_T k;
  boolean_T overflow;
  emxArray_int32_T *idx0;
  int32_T i;
  int32_T i2;
  int32_T j;
  int32_T pEnd;
  int32_T p;
  int32_T q;
  int32_T qEnd;
  int32_T kEnd;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &qd_emlrtRSI;
  unnamed_idx_0 = (uint32_T)x->size[0];
  k = idx->size[0];
  idx->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(&st, (emxArray__common *)idx, k, (int32_T)sizeof(int32_T),
                    &vb_emlrtRTEI);
  k = y->size[0];
  y->size[0] = x->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &wb_emlrtRTEI);
  if (x->size[0] == 0) {
    b_st.site = &rd_emlrtRSI;
  } else {
    b_st.site = &sd_emlrtRSI;
    overflow = (x->size[0] > 2147483646);
    if (overflow) {
      c_st.site = &qb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (k = 1; k <= x->size[0]; k++) {
      idx->data[k - 1] = k;
    }

    b_st.site = &td_emlrtRSI;
    for (k = 1; k <= x->size[0] - 1; k += 2) {
      if ((x->data[k - 1] >= x->data[k]) || muDoubleScalarIsNaN(x->data[k - 1]))
      {
        overflow = true;
      } else {
        overflow = false;
      }

      if (overflow) {
      } else {
        idx->data[k - 1] = k + 1;
        idx->data[k] = k;
      }
    }

    b_emxInit_int32_T(&st, &idx0, 1, &yb_emlrtRTEI, true);
    k = idx0->size[0];
    idx0->size[0] = x->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)idx0, k, (int32_T)sizeof(int32_T),
                      &xb_emlrtRTEI);
    i = x->size[0];
    for (k = 0; k < i; k++) {
      idx0->data[k] = 1;
    }

    i = 2;
    while (i < x->size[0]) {
      i2 = i << 1;
      j = 1;
      for (pEnd = 1 + i; pEnd < x->size[0] + 1; pEnd = qEnd + i) {
        p = j - 1;
        q = pEnd;
        qEnd = j + i2;
        if (qEnd > x->size[0] + 1) {
          qEnd = x->size[0] + 1;
        }

        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          if ((x->data[idx->data[p] - 1] >= x->data[idx->data[q - 1] - 1]) ||
              muDoubleScalarIsNaN(x->data[idx->data[p] - 1])) {
            overflow = true;
          } else {
            overflow = false;
          }

          if (overflow) {
            idx0->data[k] = idx->data[p];
            p++;
            if (p + 1 == pEnd) {
              while (q < qEnd) {
                k++;
                idx0->data[k] = idx->data[q - 1];
                q++;
              }
            }
          } else {
            idx0->data[k] = idx->data[q - 1];
            q++;
            if (q == qEnd) {
              while (p + 1 < pEnd) {
                k++;
                idx0->data[k] = idx->data[p];
                p++;
              }
            }
          }

          k++;
        }

        b_st.site = &ud_emlrtRSI;
        for (k = 0; k + 1 <= kEnd; k++) {
          idx->data[(j + k) - 1] = idx0->data[k];
        }

        j = qEnd;
      }

      i = i2;
    }

    emxFree_int32_T(&idx0);
    b_st.site = &vd_emlrtRSI;
    for (k = 0; k + 1 <= x->size[0]; k++) {
      y->data[k] = x->data[idx->data[k] - 1];
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (eml_sort.c) */
