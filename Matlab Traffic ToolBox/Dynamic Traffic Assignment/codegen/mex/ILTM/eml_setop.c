/*
 * eml_setop.c
 *
 * Code generation for function 'eml_setop'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ILTM.h"
#include "eml_setop.h"
#include "issorted.h"
#include "eml_error.h"
#include "ILTM_emxutil.h"
#include "ILTM_mexutil.h"

/* Variable Definitions */
static emlrtRSInfo vb_emlrtRSI = { 221, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
};

static emlrtRSInfo wb_emlrtRSI = { 222, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
};

static emlrtRSInfo xb_emlrtRSI = { 224, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
};

static emlrtRSInfo yb_emlrtRSI = { 225, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
};

static emlrtMCInfo h_emlrtMCI = { 389, 5, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
};

static emlrtMCInfo i_emlrtMCI = { 400, 9, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
};

static emlrtMCInfo j_emlrtMCI = { 427, 5, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
};

static emlrtRTEInfo db_emlrtRTEI = { 196, 5, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
};

static emlrtRTEInfo eb_emlrtRTEI = { 203, 9, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
};

static emlrtRTEInfo fb_emlrtRTEI = { 204, 9, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
};

static emlrtRTEInfo gb_emlrtRTEI = { 131, 22, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
};

static emlrtRSInfo he_emlrtRSI = { 427, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
};

static emlrtRSInfo ie_emlrtRSI = { 400, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
};

static emlrtRSInfo je_emlrtRSI = { 389, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
};

/* Function Declarations */
static real_T skip_to_last_equal_value(int32_T *k, const emxArray_real_T *x);

/* Function Definitions */
static real_T skip_to_last_equal_value(int32_T *k, const emxArray_real_T *x)
{
  real_T xk;
  boolean_T exitg1;
  real_T absxk;
  int32_T exponent;
  boolean_T p;
  xk = x->data[*k - 1];
  exitg1 = false;
  while ((!exitg1) && (*k < x->size[1])) {
    absxk = muDoubleScalarAbs(xk / 2.0);
    if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &exponent);
        absxk = ldexp(1.0, exponent - 53);
      }
    } else {
      absxk = rtNaN;
    }

    if ((muDoubleScalarAbs(xk - x->data[*k]) < absxk) || (muDoubleScalarIsInf
         (x->data[*k]) && muDoubleScalarIsInf(xk) && ((x->data[*k] > 0.0) == (xk
           > 0.0)))) {
      p = true;
    } else {
      p = false;
    }

    if (p) {
      (*k)++;
    } else {
      exitg1 = true;
    }
  }

  return xk;
}

void do_vectors(const emlrtStack *sp, const emxArray_real_T *a, const
                emxArray_real_T *b, emxArray_real_T *c, emxArray_int32_T *ia,
                emxArray_int32_T *ib)
{
  int32_T ncmax;
  int32_T iafirst;
  int32_T nc;
  int32_T nia;
  int32_T nib;
  int32_T ialast;
  int32_T ibfirst;
  int32_T iblast;
  int32_T b_ialast;
  real_T ak;
  int32_T b_iblast;
  real_T bk;
  real_T absxk;
  int32_T exponent;
  boolean_T p;
  const mxArray *y;
  const mxArray *m2;
  emxArray_int32_T *b_ia;
  const mxArray *b_y;
  emxArray_int32_T *b_ib;
  const mxArray *c_y;
  emxArray_real_T *b_c;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  ncmax = a->size[1] + b->size[1];
  iafirst = c->size[0] * c->size[1];
  c->size[0] = 1;
  c->size[1] = ncmax;
  emxEnsureCapacity(sp, (emxArray__common *)c, iafirst, (int32_T)sizeof(real_T),
                    &db_emlrtRTEI);
  iafirst = ia->size[0];
  ia->size[0] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)ia, iafirst, (int32_T)sizeof(int32_T),
                    &eb_emlrtRTEI);
  iafirst = ib->size[0];
  ib->size[0] = b->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)ib, iafirst, (int32_T)sizeof(int32_T),
                    &fb_emlrtRTEI);
  st.site = &vb_emlrtRSI;
  if (!issorted(a)) {
    st.site = &wb_emlrtRSI;
    eml_error(&st);
  }

  st.site = &xb_emlrtRSI;
  if (!issorted(b)) {
    st.site = &yb_emlrtRSI;
    b_eml_error(&st);
  }

  nc = -1;
  nia = 0;
  nib = 0;
  iafirst = 1;
  ialast = 1;
  ibfirst = 0;
  iblast = 1;
  while ((ialast <= a->size[1]) && (iblast <= b->size[1])) {
    b_ialast = ialast;
    ak = skip_to_last_equal_value(&b_ialast, a);
    ialast = b_ialast;
    b_iblast = iblast;
    bk = skip_to_last_equal_value(&b_iblast, b);
    iblast = b_iblast;
    absxk = muDoubleScalarAbs(bk / 2.0);
    if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &exponent);
        absxk = ldexp(1.0, exponent - 53);
      }
    } else {
      absxk = rtNaN;
    }

    if ((muDoubleScalarAbs(bk - ak) < absxk) || (muDoubleScalarIsInf(ak) &&
         muDoubleScalarIsInf(bk) && ((ak > 0.0) == (bk > 0.0)))) {
      p = true;
    } else {
      p = false;
    }

    if (p) {
      nc++;
      c->data[nc] = ak;
      nia++;
      ia->data[nia - 1] = iafirst;
      ialast = b_ialast + 1;
      iafirst = b_ialast + 1;
      iblast = b_iblast + 1;
      ibfirst = b_iblast;
    } else {
      if ((ak < bk) || muDoubleScalarIsNaN(bk)) {
        p = true;
      } else {
        p = false;
      }

      if (p) {
        nc++;
        nia++;
        c->data[nc] = ak;
        ia->data[nia - 1] = iafirst;
        ialast = b_ialast + 1;
        iafirst = b_ialast + 1;
      } else {
        nc++;
        nib++;
        c->data[nc] = bk;
        ib->data[nib - 1] = ibfirst + 1;
        iblast = b_iblast + 1;
        ibfirst = b_iblast;
      }
    }
  }

  while (ialast <= a->size[1]) {
    b_ialast = ialast;
    ak = skip_to_last_equal_value(&b_ialast, a);
    nc++;
    nia++;
    c->data[nc] = ak;
    ia->data[nia - 1] = ialast;
    ialast = b_ialast + 1;
  }

  while (iblast <= b->size[1]) {
    b_iblast = iblast;
    bk = skip_to_last_equal_value(&b_iblast, b);
    nc++;
    nib++;
    c->data[nc] = bk;
    ib->data[nib - 1] = iblast;
    iblast = b_iblast + 1;
  }

  if (a->size[1] > 0) {
    if (nia <= a->size[1]) {
    } else {
      y = NULL;
      m2 = emlrtCreateString("Assertion failed.");
      emlrtAssign(&y, m2);
      st.site = &je_emlrtRSI;
      error(&st, y, &h_emlrtMCI);
    }

    if (1 > nia) {
      nia = 0;
    }

    b_emxInit_int32_T(sp, &b_ia, 1, &gb_emlrtRTEI, true);
    iafirst = b_ia->size[0];
    b_ia->size[0] = nia;
    emxEnsureCapacity(sp, (emxArray__common *)b_ia, iafirst, (int32_T)sizeof
                      (int32_T), &gb_emlrtRTEI);
    for (iafirst = 0; iafirst < nia; iafirst++) {
      b_ia->data[iafirst] = ia->data[iafirst];
    }

    iafirst = ia->size[0];
    ia->size[0] = b_ia->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)ia, iafirst, (int32_T)sizeof
                      (int32_T), &gb_emlrtRTEI);
    nia = b_ia->size[0];
    for (iafirst = 0; iafirst < nia; iafirst++) {
      ia->data[iafirst] = b_ia->data[iafirst];
    }

    emxFree_int32_T(&b_ia);
  }

  if (b->size[1] > 0) {
    if (nib <= b->size[1]) {
    } else {
      b_y = NULL;
      m2 = emlrtCreateString("Assertion failed.");
      emlrtAssign(&b_y, m2);
      st.site = &ie_emlrtRSI;
      error(&st, b_y, &i_emlrtMCI);
    }

    if (1 > nib) {
      nia = 0;
    } else {
      nia = nib;
    }

    b_emxInit_int32_T(sp, &b_ib, 1, &gb_emlrtRTEI, true);
    iafirst = b_ib->size[0];
    b_ib->size[0] = nia;
    emxEnsureCapacity(sp, (emxArray__common *)b_ib, iafirst, (int32_T)sizeof
                      (int32_T), &gb_emlrtRTEI);
    for (iafirst = 0; iafirst < nia; iafirst++) {
      b_ib->data[iafirst] = ib->data[iafirst];
    }

    iafirst = ib->size[0];
    ib->size[0] = b_ib->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)ib, iafirst, (int32_T)sizeof
                      (int32_T), &gb_emlrtRTEI);
    nia = b_ib->size[0];
    for (iafirst = 0; iafirst < nia; iafirst++) {
      ib->data[iafirst] = b_ib->data[iafirst];
    }

    emxFree_int32_T(&b_ib);
  }

  if (ncmax > 0) {
    if (nc + 1 <= ncmax) {
    } else {
      c_y = NULL;
      m2 = emlrtCreateString("Assertion failed.");
      emlrtAssign(&c_y, m2);
      st.site = &he_emlrtRSI;
      error(&st, c_y, &j_emlrtMCI);
    }

    if (1 > nc + 1) {
      nia = -1;
    } else {
      nia = nc;
    }

    b_emxInit_real_T(sp, &b_c, 2, &gb_emlrtRTEI, true);
    iafirst = b_c->size[0] * b_c->size[1];
    b_c->size[0] = 1;
    b_c->size[1] = nia + 1;
    emxEnsureCapacity(sp, (emxArray__common *)b_c, iafirst, (int32_T)sizeof
                      (real_T), &gb_emlrtRTEI);
    for (iafirst = 0; iafirst <= nia; iafirst++) {
      b_c->data[b_c->size[0] * iafirst] = c->data[c->size[0] * iafirst];
    }

    iafirst = c->size[0] * c->size[1];
    c->size[0] = 1;
    c->size[1] = b_c->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)c, iafirst, (int32_T)sizeof(real_T),
                      &gb_emlrtRTEI);
    nia = b_c->size[1];
    for (iafirst = 0; iafirst < nia; iafirst++) {
      c->data[c->size[0] * iafirst] = b_c->data[b_c->size[0] * iafirst];
    }

    emxFree_real_T(&b_c);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (eml_setop.c) */
