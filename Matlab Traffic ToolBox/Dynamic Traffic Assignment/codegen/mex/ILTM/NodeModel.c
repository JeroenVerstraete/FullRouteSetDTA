/*
 * NodeModel.c
 *
 * Code generation for function 'NodeModel'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ILTM.h"
#include "NodeModel.h"
#include "ILTM_emxutil.h"
#include "all.h"
#include "any.h"
#include "eml_int_forloop_overflow_check.h"
#include "repmat.h"
#include "ILTM_mexutil.h"
#include "ILTM_data.h"

/* Variable Definitions */
static emlrtRSInfo qc_emlrtRSI = { 31, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtRSInfo rc_emlrtRSI = { 32, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtRSInfo sc_emlrtRSI = { 33, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtRSInfo tc_emlrtRSI = { 35, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtRSInfo uc_emlrtRSI = { 38, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtRSInfo vc_emlrtRSI = { 39, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtRSInfo wc_emlrtRSI = { 40, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtRSInfo xc_emlrtRSI = { 41, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtRSInfo yc_emlrtRSI = { 42, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtRSInfo ad_emlrtRSI = { 51, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtRSInfo bd_emlrtRSI = { 67, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtRSInfo hd_emlrtRSI = { 70, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRSInfo jd_emlrtRSI = { 15, "rdivide",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

static emlrtRSInfo kd_emlrtRSI = { 9, "eml_div",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_div.m"
};

static emlrtRSInfo ld_emlrtRSI = { 18, "min",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"
};

static emlrtRSInfo md_emlrtRSI = { 15, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtMCInfo t_emlrtMCI = { 51, 13, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtMCInfo u_emlrtMCI = { 50, 23, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtMCInfo v_emlrtMCI = { 57, 5, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtMCInfo w_emlrtMCI = { 56, 15, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtMCInfo x_emlrtMCI = { 14, 5, "rdivide",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

static emlrtMCInfo y_emlrtMCI = { 13, 15, "rdivide",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

static emlrtRTEInfo jb_emlrtRTEI = { 20, 9, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtRTEInfo kb_emlrtRTEI = { 1, 24, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtRTEInfo nb_emlrtRTEI = { 30, 1, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtRTEInfo ob_emlrtRTEI = { 31, 1, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtRTEInfo pb_emlrtRTEI = { 33, 1, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtRTEInfo qb_emlrtRTEI = { 35, 1, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtRTEInfo rb_emlrtRTEI = { 39, 5, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtDCInfo yd_emlrtDCI = { 20, 34, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m",
  4 };

static emlrtECInfo ac_emlrtECI = { 2, 35, 16, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtECInfo bc_emlrtECI = { 2, 39, 38, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtBCInfo wo_emlrtBCI = { -1, -1, 42, 41, "competingLinks", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo xo_emlrtBCI = { -1, -1, 42, 96, "competingLinks", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtECInfo cc_emlrtECI = { -1, 42, 12, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtRTEInfo rc_emlrtRTEI = { 43, 9, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtRTEInfo sc_emlrtRTEI = { 46, 21, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtBCInfo yo_emlrtBCI = { -1, -1, 51, 54, "competingLinks", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtRTEInfo tc_emlrtRTEI = { 60, 9, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtRTEInfo uc_emlrtRTEI = { 62, 17, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m"
};

static emlrtBCInfo ap_emlrtBCI = { -1, -1, 67, 50, "competingLinks", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtECInfo dc_emlrtECI = { -1, 1, 1, "div",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\div.p"
};

static emlrtDCInfo be_emlrtDCI = { 36, 19, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  1 };

static emlrtDCInfo ce_emlrtDCI = { 36, 19, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  4 };

static emlrtDCInfo de_emlrtDCI = { 36, 35, "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  1 };

static emlrtBCInfo bp_emlrtBCI = { -1, -1, 32, 1, "competingLinks", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo cp_emlrtBCI = { -1, -1, 40, 5, "alpha", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo dp_emlrtBCI = { -1, -1, 42, 12, "sendingFlow", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo ep_emlrtBCI = { -1, -1, 42, 56, "incomingLinks_capacity",
  "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo fp_emlrtBCI = { -1, -1, 74, 9, "activeOutLinks", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo gp_emlrtBCI = { -1, -1, 61, 31, "competingLinks", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo hp_emlrtBCI = { -1, -1, 61, 33, "competingLinks", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo ip_emlrtBCI = { -1, -1, 63, 23, "activeOutLinks", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo jp_emlrtBCI = { -1, -1, 64, 35, "TurnFlows", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo kp_emlrtBCI = { -1, -1, 64, 37, "TurnFlows", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo lp_emlrtBCI = { -1, -1, 64, 63, "distrFactors", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo mp_emlrtBCI = { -1, -1, 64, 65, "distrFactors", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo np_emlrtBCI = { -1, -1, 65, 25, "adjustedReceivingFlow",
  "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo op_emlrtBCI = { -1, -1, 65, 50, "adjustedReceivingFlow",
  "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo pp_emlrtBCI = { -1, -1, 65, 85, "TurnFlows", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo qp_emlrtBCI = { -1, -1, 65, 87, "TurnFlows", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo rp_emlrtBCI = { -1, -1, 66, 40, "competingLinks", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo sp_emlrtBCI = { -1, -1, 66, 42, "competingLinks", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo tp_emlrtBCI = { -1, -1, 68, 29, "activeOutLinks", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo up_emlrtBCI = { -1, -1, 44, 31, "competingLinks", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo vp_emlrtBCI = { -1, -1, 44, 33, "competingLinks", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo wp_emlrtBCI = { -1, -1, 45, 20, "sendingFlow", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo xp_emlrtBCI = { -1, -1, 45, 46, "incomingLinks_capacity",
  "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo yp_emlrtBCI = { -1, -1, 47, 30, "activeOutLinks", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo aq_emlrtBCI = { -1, -1, 48, 39, "TurnFlows", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo bq_emlrtBCI = { -1, -1, 48, 41, "TurnFlows", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo cq_emlrtBCI = { -1, -1, 48, 61, "turningFractions",
  "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo dq_emlrtBCI = { -1, -1, 48, 63, "turningFractions",
  "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo eq_emlrtBCI = { -1, -1, 48, 66, "sendingFlow", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo fq_emlrtBCI = { -1, -1, 49, 29, "adjustedReceivingFlow",
  "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo gq_emlrtBCI = { -1, -1, 49, 54, "adjustedReceivingFlow",
  "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo hq_emlrtBCI = { -1, -1, 49, 89, "TurnFlows", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo iq_emlrtBCI = { -1, -1, 49, 91, "TurnFlows", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo jq_emlrtBCI = { -1, -1, 50, 44, "competingLinks", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo kq_emlrtBCI = { -1, -1, 50, 46, "competingLinks", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtBCInfo lq_emlrtBCI = { -1, -1, 52, 33, "activeOutLinks", "NodeModel",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\NodeModel.m",
  0 };

static emlrtRSInfo be_emlrtRSI = { 56, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtRSInfo ce_emlrtRSI = { 50, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtRSInfo ge_emlrtRSI = { 13, "rdivide",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

static emlrtRSInfo qe_emlrtRSI = { 57, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtRSInfo te_emlrtRSI = { 14, "rdivide",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

static emlrtRSInfo ve_emlrtRSI = { 51, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

/* Function Declarations */
static void c_eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y);
static const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);

/* Function Definitions */
static void c_eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y)
{
  int32_T k;
  boolean_T overflow;
  int32_T i;
  const mxArray *b_y;
  const mxArray *m11;
  int32_T j;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &nc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  k = 0;
  b_st.site = &pc_emlrtRSI;
  if (1 > x->size[0]) {
    overflow = false;
  } else {
    overflow = (x->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &qb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i = 1; i <= x->size[0]; i++) {
    if (x->data[i - 1]) {
      k++;
    }
  }

  if (k <= x->size[0]) {
  } else {
    b_y = NULL;
    m11 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m11);
    st.site = &ae_emlrtRSI;
    error(&st, b_y, &r_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &yd_emlrtDCI, sp);
  j = y->size[0];
  y->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &jb_emlrtRTEI);
  j = 0;
  st.site = &oc_emlrtRSI;
  for (i = 1; i <= x->size[0]; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      j++;
    }
  }
}

static const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m18;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m18, 3, pArrays, "message", true,
    location);
}

void NodeModel(const emlrtStack *sp, real_T nbIncomingLinks, real_T
               nbOutgoingLinks, const emxArray_real_T *sendingFlow, const
               emxArray_real_T *turningFractions, const emxArray_real_T
               *receivingFlow, const emxArray_real_T *incomingLinks_capacity,
               emxArray_real_T *TurnFlows)
{
  emxArray_real_T *adjustedReceivingFlow;
  int32_T i9;
  int32_T loop_ub;
  emxArray_boolean_T *b_sendingFlow;
  emxArray_boolean_T *competingLinks;
  emxArray_boolean_T *b_turningFractions;
  emxArray_int32_T *r6;
  int32_T outsize_idx_0;
  int32_T ibtile;
  int32_T i10;
  int32_T i11;
  emxArray_boolean_T *activeOutLinks;
  const mxArray *y;
  static const int32_T iv31[2] = { 1, 15 };

  const mxArray *m7;
  char_T cv22[15];
  static const char_T cv23[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
    'a', 'x', 's', 'i', 'z', 'e' };

  emxArray_real_T *distrFactors;
  boolean_T b1;
  boolean_T overflow;
  int32_T ixstart;
  int32_T c_turningFractions[2];
  int32_T b_distrFactors[2];
  real_T s;
  emxArray_real_T *alpha;
  emxArray_int32_T *r7;
  emxArray_real_T *b_y;
  emxArray_real_T *x;
  emxArray_real_T *b;
  emxArray_boolean_T *b_competingLinks;
  emxArray_boolean_T *b_alpha;
  emxArray_boolean_T *c_competingLinks;
  emxArray_boolean_T *d_competingLinks;
  emxArray_boolean_T *b_activeOutLinks;
  emxArray_boolean_T *e_competingLinks;
  uint32_T sz[2];
  int32_T ix;
  uint32_T varargin_2[2];
  boolean_T p;
  boolean_T exitg2;
  const mxArray *c_y;
  static const int32_T iv32[2] = { 1, 15 };

  static const char_T cv24[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i',
    'm', 'a', 'g', 'r', 'e', 'e' };

  const mxArray *d_y;
  static const int32_T iv33[2] = { 1, 36 };

  char_T cv25[36];
  static const char_T cv26[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *e_y;
  static const int32_T iv34[2] = { 1, 39 };

  char_T cv27[39];
  static const char_T cv28[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  int32_T itmp;
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  int32_T exitg11;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &st;
  d_st.tls = st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  f_st.prev = &c_st;
  f_st.tls = c_st.tls;
  g_st.prev = &e_st;
  g_st.tls = e_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &adjustedReceivingFlow, 1, &nb_emlrtRTEI, true);

  /* coder.inline('never'); */
  /* Node model */
  /*  */
  /* SYNTAX */
  /*    [flowIncomingLinks,flowOutgoingLinks] = NodeModel(incomingLinks,outgoingLinks,sendingFlow,turningFractions,receivingFlow,caps,timeInterval) */
  /*  */
  /* DESCRIPTION */
  /*    returns the transfer flow over a node */
  /*  */
  /* INPUTS */
  /*    incomingLinks: id of the incoming links */
  /*    outgoingLinks: id of the outgoing links */
  /*    sendingFlow: the sending flow */
  /*    turningFractions: turning fractions at the node */
  /*    receivingFlow: the receiving flow */
  /*    links: list of all the links in the network */
  /*    Each entry of the list represents one link. Each link is a structure that */
  /*    has at least a link ID and an upstream and downstream node. */
  /*    timeInterval: updating interval */
  /* STATIC INITIALIZATION WITH MAX 7 IN- AND OUTGOING LINKS */
  /* check also here dynamic initialization based on actual number of incoming */
  /* and outgoing links */
  /* initialize */
  i9 = adjustedReceivingFlow->size[0];
  adjustedReceivingFlow->size[0] = receivingFlow->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)adjustedReceivingFlow, i9, (int32_T)
                    sizeof(real_T), &kb_emlrtRTEI);
  loop_ub = receivingFlow->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    adjustedReceivingFlow->data[i9] = receivingFlow->data[i9];
  }

  b_emxInit_boolean_T(sp, &b_sendingFlow, 1, &kb_emlrtRTEI, true);

  /*  adjusted receiving flow */
  i9 = b_sendingFlow->size[0];
  b_sendingFlow->size[0] = sendingFlow->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b_sendingFlow, i9, (int32_T)sizeof
                    (boolean_T), &kb_emlrtRTEI);
  loop_ub = sendingFlow->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    b_sendingFlow->data[i9] = (sendingFlow->data[i9] > 0.0);
  }

  emxInit_boolean_T(sp, &competingLinks, 2, &ob_emlrtRTEI, true);
  emxInit_boolean_T(sp, &b_turningFractions, 2, &kb_emlrtRTEI, true);
  st.site = &qc_emlrtRSI;
  repmat(&st, b_sendingFlow, nbOutgoingLinks, competingLinks);
  i9 = b_turningFractions->size[0] * b_turningFractions->size[1];
  b_turningFractions->size[0] = turningFractions->size[0];
  b_turningFractions->size[1] = turningFractions->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_turningFractions, i9, (int32_T)
                    sizeof(boolean_T), &kb_emlrtRTEI);
  loop_ub = turningFractions->size[0] * turningFractions->size[1];
  emxFree_boolean_T(&b_sendingFlow);
  for (i9 = 0; i9 < loop_ub; i9++) {
    b_turningFractions->data[i9] = (turningFractions->data[i9] == 0.0);
  }

  b_emxInit_int32_T(sp, &r6, 1, &kb_emlrtRTEI, true);
  st.site = &rc_emlrtRSI;
  eml_li_find(&st, b_turningFractions, r6);
  outsize_idx_0 = competingLinks->size[0];
  ibtile = competingLinks->size[1];
  loop_ub = r6->size[0];
  emxFree_boolean_T(&b_turningFractions);
  for (i9 = 0; i9 < loop_ub; i9++) {
    i10 = outsize_idx_0 * ibtile;
    i11 = r6->data[i9];
    competingLinks->data[emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10,
      &bp_emlrtBCI, sp) - 1] = false;
  }

  emxInit_boolean_T(sp, &activeOutLinks, 2, &pb_emlrtRTEI, true);

  /*  competing links */
  st.site = &sc_emlrtRSI;
  c_any(&st, competingLinks, activeOutLinks);

  /*  active outgoing links */
  st.site = &tc_emlrtRSI;
  b_st.site = &cd_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, nbOutgoingLinks);
  emlrtNonNegativeCheckFastR2012b(nbOutgoingLinks, &ae_emlrtDCI, &st);
  outsize_idx_0 = incomingLinks_capacity->size[0];
  if (outsize_idx_0 == incomingLinks_capacity->size[0]) {
  } else {
    y = NULL;
    m7 = emlrtCreateCharArray(2, iv31);
    for (outsize_idx_0 = 0; outsize_idx_0 < 15; outsize_idx_0++) {
      cv22[outsize_idx_0] = cv23[outsize_idx_0];
    }

    emlrtInitCharArrayR2013a(&st, 15, m7, cv22);
    emlrtAssign(&y, m7);
    b_st.site = &de_emlrtRSI;
    error(&b_st, y, &s_emlrtMCI);
  }

  b_emxInit_real_T(&st, &distrFactors, 2, &qb_emlrtRTEI, true);
  i9 = distrFactors->size[0] * distrFactors->size[1];
  distrFactors->size[0] = incomingLinks_capacity->size[0];
  distrFactors->size[1] = (int32_T)nbOutgoingLinks;
  emxEnsureCapacity(&st, (emxArray__common *)distrFactors, i9, (int32_T)sizeof
                    (real_T), &lb_emlrtRTEI);
  outsize_idx_0 = incomingLinks_capacity->size[0];
  if ((outsize_idx_0 == 0) || ((int32_T)nbOutgoingLinks == 0)) {
  } else {
    b_st.site = &dd_emlrtRSI;
    if (1 > (int32_T)nbOutgoingLinks) {
      b1 = false;
    } else {
      b1 = ((int32_T)nbOutgoingLinks > 2147483646);
    }

    if (b1) {
      c_st.site = &qb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (outsize_idx_0 = 1; outsize_idx_0 <= (int32_T)nbOutgoingLinks;
         outsize_idx_0++) {
      ibtile = (outsize_idx_0 - 1) * incomingLinks_capacity->size[0];
      b_st.site = &ed_emlrtRSI;
      if (1 > incomingLinks_capacity->size[0]) {
        overflow = false;
      } else {
        overflow = (incomingLinks_capacity->size[0] > 2147483646);
      }

      if (overflow) {
        c_st.site = &qb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (ixstart = 1; ixstart <= incomingLinks_capacity->size[0]; ixstart++) {
        distrFactors->data[(ibtile + ixstart) - 1] =
          incomingLinks_capacity->data[ixstart - 1];
      }
    }
  }

  for (i9 = 0; i9 < 2; i9++) {
    c_turningFractions[i9] = turningFractions->size[i9];
  }

  for (i9 = 0; i9 < 2; i9++) {
    b_distrFactors[i9] = distrFactors->size[i9];
  }

  emlrtSizeEqCheck2DFastR2012b(c_turningFractions, b_distrFactors, &ac_emlrtECI,
    sp);
  i9 = distrFactors->size[0] * distrFactors->size[1];
  distrFactors->size[0] = turningFractions->size[0];
  distrFactors->size[1] = turningFractions->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)distrFactors, i9, (int32_T)sizeof
                    (real_T), &kb_emlrtRTEI);
  loop_ub = turningFractions->size[0] * turningFractions->size[1];
  for (i9 = 0; i9 < loop_ub; i9++) {
    distrFactors->data[i9] *= turningFractions->data[i9];
  }

  /* oriented capacity proportional */
  i9 = TurnFlows->size[0] * TurnFlows->size[1];
  s = emlrtNonNegativeCheckFastR2012b(nbIncomingLinks, &ce_emlrtDCI, sp);
  TurnFlows->size[0] = (int32_T)emlrtIntegerCheckFastR2012b(s, &be_emlrtDCI, sp);
  TurnFlows->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(nbOutgoingLinks,
    &de_emlrtDCI, sp);
  emxEnsureCapacity(sp, (emxArray__common *)TurnFlows, i9, (int32_T)sizeof
                    (real_T), &kb_emlrtRTEI);
  s = emlrtNonNegativeCheckFastR2012b(nbIncomingLinks, &ce_emlrtDCI, sp);
  loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(s, &be_emlrtDCI, sp) * (int32_T)
    emlrtIntegerCheckFastR2012b(nbOutgoingLinks, &de_emlrtDCI, sp);
  for (i9 = 0; i9 < loop_ub; i9++) {
    TurnFlows->data[i9] = 0.0;
  }

  emxInit_real_T(sp, &alpha, 1, &rb_emlrtRTEI, true);
  emxInit_int32_T(sp, &r7, 2, &kb_emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_y, 2, &kb_emlrtRTEI, true);
  b_emxInit_real_T(sp, &x, 2, &kb_emlrtRTEI, true);
  emxInit_real_T(sp, &b, 1, &kb_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &b_competingLinks, 1, &kb_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &b_alpha, 1, &kb_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &c_competingLinks, 1, &kb_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &d_competingLinks, 1, &kb_emlrtRTEI, true);
  emxInit_boolean_T(sp, &b_activeOutLinks, 2, &kb_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &e_competingLinks, 1, &kb_emlrtRTEI, true);
  do {
    exitg11 = 0;
    st.site = &uc_emlrtRSI;
    if (b_any(&st, activeOutLinks)) {
      for (i9 = 0; i9 < 2; i9++) {
        b_distrFactors[i9] = distrFactors->size[i9];
      }

      for (i9 = 0; i9 < 2; i9++) {
        c_turningFractions[i9] = competingLinks->size[i9];
      }

      emlrtSizeEqCheck2DFastR2012b(b_distrFactors, c_turningFractions,
        &bc_emlrtECI, sp);
      st.site = &vc_emlrtRSI;
      i9 = x->size[0] * x->size[1];
      x->size[0] = distrFactors->size[0];
      x->size[1] = distrFactors->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)x, i9, (int32_T)sizeof(real_T),
                        &kb_emlrtRTEI);
      loop_ub = distrFactors->size[0] * distrFactors->size[1];
      for (i9 = 0; i9 < loop_ub; i9++) {
        x->data[i9] = distrFactors->data[i9] * (real_T)competingLinks->data[i9];
      }

      for (i9 = 0; i9 < 2; i9++) {
        sz[i9] = (uint32_T)x->size[i9];
      }

      i9 = b_y->size[0] * b_y->size[1];
      b_y->size[0] = 1;
      b_y->size[1] = (int32_T)sz[1];
      emxEnsureCapacity(&st, (emxArray__common *)b_y, i9, (int32_T)sizeof(real_T),
                        &mb_emlrtRTEI);
      if ((x->size[0] == 0) || (x->size[1] == 0)) {
        i9 = b_y->size[0] * b_y->size[1];
        b_y->size[0] = 1;
        emxEnsureCapacity(&st, (emxArray__common *)b_y, i9, (int32_T)sizeof
                          (real_T), &kb_emlrtRTEI);
        i9 = b_y->size[0] * b_y->size[1];
        b_y->size[1] = (int32_T)sz[1];
        emxEnsureCapacity(&st, (emxArray__common *)b_y, i9, (int32_T)sizeof
                          (real_T), &kb_emlrtRTEI);
        loop_ub = (int32_T)sz[1];
        for (i9 = 0; i9 < loop_ub; i9++) {
          b_y->data[i9] = 0.0;
        }
      } else {
        ix = -1;
        ibtile = -1;
        b_st.site = &hd_emlrtRSI;
        overflow = (x->size[1] > 2147483646);
        if (overflow) {
          c_st.site = &qb_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (outsize_idx_0 = 1; outsize_idx_0 <= x->size[1]; outsize_idx_0++) {
          ixstart = ix + 1;
          ix++;
          s = x->data[ixstart];
          b_st.site = &id_emlrtRSI;
          if (2 > x->size[0]) {
            overflow = false;
          } else {
            overflow = (x->size[0] > 2147483646);
          }

          if (overflow) {
            c_st.site = &qb_emlrtRSI;
            check_forloop_overflow_error(&c_st);
          }

          for (ixstart = 2; ixstart <= x->size[0]; ixstart++) {
            ix++;
            s += x->data[ix];
          }

          ibtile++;
          b_y->data[ibtile] = s;
        }
      }

      st.site = &vc_emlrtRSI;
      i9 = alpha->size[0];
      alpha->size[0] = b_y->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)alpha, i9, (int32_T)sizeof
                        (real_T), &kb_emlrtRTEI);
      loop_ub = b_y->size[1];
      for (i9 = 0; i9 < loop_ub; i9++) {
        alpha->data[i9] = b_y->data[b_y->size[0] * i9];
      }

      sz[0] = (uint32_T)adjustedReceivingFlow->size[0];
      sz[1] = 1U;
      varargin_2[0] = (uint32_T)alpha->size[0];
      varargin_2[1] = 1U;
      overflow = false;
      p = true;
      ixstart = 0;
      exitg2 = false;
      while ((!exitg2) && (ixstart < 2)) {
        if (!(sz[ixstart] == varargin_2[ixstart])) {
          p = false;
          exitg2 = true;
        } else {
          ixstart++;
        }
      }

      if (!p) {
      } else {
        overflow = true;
      }

      if (overflow) {
      } else {
        c_y = NULL;
        m7 = emlrtCreateCharArray(2, iv32);
        for (outsize_idx_0 = 0; outsize_idx_0 < 15; outsize_idx_0++) {
          cv22[outsize_idx_0] = cv24[outsize_idx_0];
        }

        emlrtInitCharArrayR2013a(&st, 15, m7, cv22);
        emlrtAssign(&c_y, m7);
        b_st.site = &ge_emlrtRSI;
        d_st.site = &te_emlrtRSI;
        error(&b_st, message(&d_st, c_y, &x_emlrtMCI), &y_emlrtMCI);
      }

      b_st.site = &jd_emlrtRSI;
      c_st.site = &kd_emlrtRSI;
      i9 = adjustedReceivingFlow->size[0];
      i10 = alpha->size[0];
      emlrtSizeEqCheck1DFastR2012b(i9, i10, &dc_emlrtECI, &c_st);
      i9 = alpha->size[0];
      alpha->size[0] = adjustedReceivingFlow->size[0];
      emxEnsureCapacity(&c_st, (emxArray__common *)alpha, i9, (int32_T)sizeof
                        (real_T), &kb_emlrtRTEI);
      loop_ub = adjustedReceivingFlow->size[0];
      for (i9 = 0; i9 < loop_ub; i9++) {
        alpha->data[i9] = adjustedReceivingFlow->data[i9] / alpha->data[i9];
      }

      i9 = b_activeOutLinks->size[0] * b_activeOutLinks->size[1];
      b_activeOutLinks->size[0] = 1;
      b_activeOutLinks->size[1] = activeOutLinks->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)b_activeOutLinks, i9, (int32_T)
                        sizeof(boolean_T), &kb_emlrtRTEI);
      loop_ub = activeOutLinks->size[0] * activeOutLinks->size[1];
      for (i9 = 0; i9 < loop_ub; i9++) {
        b_activeOutLinks->data[i9] = !activeOutLinks->data[i9];
      }

      st.site = &wc_emlrtRSI;
      b_eml_li_find(&st, b_activeOutLinks, r7);
      outsize_idx_0 = alpha->size[0];
      loop_ub = r7->size[0] * r7->size[1];
      for (i9 = 0; i9 < loop_ub; i9++) {
        i10 = r7->data[i9];
        alpha->data[emlrtDynamicBoundsCheckFastR2012b(i10, 1, outsize_idx_0,
          &cp_emlrtBCI, sp) - 1] = rtInf;
      }

      st.site = &xc_emlrtRSI;
      b_st.site = &ld_emlrtRSI;
      c_st.site = &md_emlrtRSI;
      if ((alpha->size[0] == 1) || (alpha->size[0] != 1)) {
        overflow = true;
      } else {
        overflow = false;
      }

      if (overflow) {
      } else {
        d_y = NULL;
        m7 = emlrtCreateCharArray(2, iv33);
        for (outsize_idx_0 = 0; outsize_idx_0 < 36; outsize_idx_0++) {
          cv25[outsize_idx_0] = cv26[outsize_idx_0];
        }

        emlrtInitCharArrayR2013a(&c_st, 36, m7, cv25);
        emlrtAssign(&d_y, m7);
        e_st.site = &fe_emlrtRSI;
        f_st.site = &se_emlrtRSI;
        error(&e_st, message(&f_st, d_y, &emlrtMCI), &b_emlrtMCI);
      }

      if (alpha->size[0] > 0) {
      } else {
        e_y = NULL;
        m7 = emlrtCreateCharArray(2, iv34);
        for (outsize_idx_0 = 0; outsize_idx_0 < 39; outsize_idx_0++) {
          cv27[outsize_idx_0] = cv28[outsize_idx_0];
        }

        emlrtInitCharArrayR2013a(&c_st, 39, m7, cv27);
        emlrtAssign(&e_y, m7);
        e_st.site = &ee_emlrtRSI;
        f_st.site = &re_emlrtRSI;
        error(&e_st, message(&f_st, e_y, &c_emlrtMCI), &d_emlrtMCI);
      }

      e_st.site = &nb_emlrtRSI;
      ixstart = 1;
      s = alpha->data[0];
      itmp = 1;
      if (alpha->size[0] > 1) {
        if (muDoubleScalarIsNaN(alpha->data[0])) {
          g_st.site = &pb_emlrtRSI;
          overflow = (alpha->size[0] > 2147483646);
          if (overflow) {
            h_st.site = &qb_emlrtRSI;
            check_forloop_overflow_error(&h_st);
          }

          ix = 2;
          exitg1 = false;
          while ((!exitg1) && (ix <= alpha->size[0])) {
            ixstart = ix;
            if (!muDoubleScalarIsNaN(alpha->data[ix - 1])) {
              s = alpha->data[ix - 1];
              itmp = ix;
              exitg1 = true;
            } else {
              ix++;
            }
          }
        }

        if (ixstart < alpha->size[0]) {
          g_st.site = &ob_emlrtRSI;
          if (ixstart + 1 > alpha->size[0]) {
            overflow = false;
          } else {
            overflow = (alpha->size[0] > 2147483646);
          }

          if (overflow) {
            h_st.site = &qb_emlrtRSI;
            check_forloop_overflow_error(&h_st);
          }

          while (ixstart + 1 <= alpha->size[0]) {
            if (alpha->data[ixstart] < s) {
              s = alpha->data[ixstart];
              itmp = ixstart + 1;
            }

            ixstart++;
          }
        }
      }

      loop_ub = competingLinks->size[0];
      i9 = competingLinks->size[1];
      outsize_idx_0 = emlrtDynamicBoundsCheckFastR2012b(itmp, 1, i9,
        &wo_emlrtBCI, sp);
      i9 = d_competingLinks->size[0];
      d_competingLinks->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)d_competingLinks, i9, (int32_T)
                        sizeof(boolean_T), &kb_emlrtRTEI);
      for (i9 = 0; i9 < loop_ub; i9++) {
        d_competingLinks->data[i9] = competingLinks->data[i9 +
          competingLinks->size[0] * (outsize_idx_0 - 1)];
      }

      st.site = &yc_emlrtRSI;
      c_eml_li_find(&st, d_competingLinks, r6);
      i9 = alpha->size[0];
      alpha->size[0] = r6->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)alpha, i9, (int32_T)sizeof
                        (real_T), &kb_emlrtRTEI);
      loop_ub = r6->size[0];
      for (i9 = 0; i9 < loop_ub; i9++) {
        i10 = sendingFlow->size[0];
        i11 = r6->data[i9];
        alpha->data[i9] = sendingFlow->data[emlrtDynamicBoundsCheckFastR2012b
          (i11, 1, i10, &dp_emlrtBCI, sp) - 1];
      }

      loop_ub = competingLinks->size[0];
      i9 = competingLinks->size[1];
      outsize_idx_0 = emlrtDynamicBoundsCheckFastR2012b(itmp, 1, i9,
        &xo_emlrtBCI, sp);
      i9 = c_competingLinks->size[0];
      c_competingLinks->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)c_competingLinks, i9, (int32_T)
                        sizeof(boolean_T), &kb_emlrtRTEI);
      for (i9 = 0; i9 < loop_ub; i9++) {
        c_competingLinks->data[i9] = competingLinks->data[i9 +
          competingLinks->size[0] * (outsize_idx_0 - 1)];
      }

      st.site = &yc_emlrtRSI;
      c_eml_li_find(&st, c_competingLinks, r6);
      i9 = b->size[0];
      b->size[0] = r6->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)b, i9, (int32_T)sizeof(real_T),
                        &kb_emlrtRTEI);
      loop_ub = r6->size[0];
      for (i9 = 0; i9 < loop_ub; i9++) {
        i10 = incomingLinks_capacity->size[0];
        i11 = r6->data[i9];
        b->data[i9] = incomingLinks_capacity->
          data[emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &ep_emlrtBCI, sp)
          - 1];
      }

      i9 = b->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)b, i9, (int32_T)sizeof(real_T),
                        &kb_emlrtRTEI);
      loop_ub = b->size[0];
      for (i9 = 0; i9 < loop_ub; i9++) {
        b->data[i9] *= s;
      }

      i9 = alpha->size[0];
      i10 = b->size[0];
      emlrtSizeEqCheck1DFastR2012b(i9, i10, &cc_emlrtECI, sp);
      i9 = b_alpha->size[0];
      b_alpha->size[0] = alpha->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)b_alpha, i9, (int32_T)sizeof
                        (boolean_T), &kb_emlrtRTEI);
      loop_ub = alpha->size[0];
      for (i9 = 0; i9 < loop_ub; i9++) {
        b_alpha->data[i9] = (alpha->data[i9] <= b->data[i9]);
      }

      st.site = &yc_emlrtRSI;
      if (any(&st, b_alpha)) {
        emlrtForLoopVectorCheckR2012b(1.0, 1.0, nbIncomingLinks, mxDOUBLE_CLASS,
                                      (int32_T)nbIncomingLinks, &rc_emlrtRTEI,
          sp);
        ixstart = 1;
        while (ixstart - 1 <= (int32_T)nbIncomingLinks - 1) {
          i9 = competingLinks->size[0];
          i10 = competingLinks->size[1];
          if (competingLinks->data[(emlrtDynamicBoundsCheckFastR2012b(ixstart, 1,
                i9, &up_emlrtBCI, sp) + competingLinks->size[0] *
               (emlrtDynamicBoundsCheckFastR2012b(itmp, 1, i10, &vp_emlrtBCI, sp)
                - 1)) - 1]) {
            i9 = sendingFlow->size[0];
            i10 = incomingLinks_capacity->size[0];
            if (sendingFlow->data[emlrtDynamicBoundsCheckFastR2012b(ixstart, 1,
                 i9, &wp_emlrtBCI, sp) - 1] <= s * incomingLinks_capacity->
                data[emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, i10,
                 &xp_emlrtBCI, sp) - 1]) {
              emlrtForLoopVectorCheckR2012b(1.0, 1.0, nbOutgoingLinks,
                mxDOUBLE_CLASS, (int32_T)nbOutgoingLinks, &sc_emlrtRTEI, sp);
              ix = 1;
              while (ix - 1 <= (int32_T)nbOutgoingLinks - 1) {
                i9 = activeOutLinks->size[1];
                if (activeOutLinks->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1,
                     i9, &yp_emlrtBCI, sp) - 1]) {
                  i9 = TurnFlows->size[0];
                  i10 = TurnFlows->size[1];
                  i11 = turningFractions->size[0];
                  outsize_idx_0 = turningFractions->size[1];
                  ibtile = sendingFlow->size[0];
                  TurnFlows->data[(emlrtDynamicBoundsCheckFastR2012b(ixstart, 1,
                    i9, &aq_emlrtBCI, sp) + TurnFlows->size[0] *
                                   (emlrtDynamicBoundsCheckFastR2012b(ix, 1, i10,
                    &bq_emlrtBCI, sp) - 1)) - 1] = turningFractions->data
                    [(emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, i11,
                       &cq_emlrtBCI, sp) + turningFractions->size[0] *
                      (emlrtDynamicBoundsCheckFastR2012b(ix, 1, outsize_idx_0,
                        &dq_emlrtBCI, sp) - 1)) - 1] * sendingFlow->
                    data[emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, ibtile,
                    &eq_emlrtBCI, sp) - 1];
                  i9 = adjustedReceivingFlow->size[0];
                  i10 = adjustedReceivingFlow->size[0];
                  i11 = TurnFlows->size[0];
                  outsize_idx_0 = TurnFlows->size[1];
                  adjustedReceivingFlow->data[emlrtDynamicBoundsCheckFastR2012b
                    (ix, 1, i9, &fq_emlrtBCI, sp) - 1] =
                    adjustedReceivingFlow->
                    data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i10,
                    &gq_emlrtBCI, sp) - 1] - TurnFlows->data
                    [(emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, i11,
                       &hq_emlrtBCI, sp) + TurnFlows->size[0] *
                      (emlrtDynamicBoundsCheckFastR2012b(ix, 1, outsize_idx_0,
                        &iq_emlrtBCI, sp) - 1)) - 1];
                  i9 = competingLinks->size[0];
                  i10 = competingLinks->size[1];
                  competingLinks->data[(emlrtDynamicBoundsCheckFastR2012b
                                        (ixstart, 1, i9, &jq_emlrtBCI, sp) +
                                        competingLinks->size[0] *
                                        (emlrtDynamicBoundsCheckFastR2012b(ix, 1,
                    i10, &kq_emlrtBCI, sp) - 1)) - 1] = false;
                  loop_ub = competingLinks->size[0];
                  i9 = competingLinks->size[1];
                  outsize_idx_0 = emlrtDynamicBoundsCheckFastR2012b(ix, 1, i9,
                    &yo_emlrtBCI, sp);
                  i9 = e_competingLinks->size[0];
                  e_competingLinks->size[0] = loop_ub;
                  emxEnsureCapacity(sp, (emxArray__common *)e_competingLinks, i9,
                                    (int32_T)sizeof(boolean_T), &kb_emlrtRTEI);
                  for (i9 = 0; i9 < loop_ub; i9++) {
                    e_competingLinks->data[i9] = !competingLinks->data[i9 +
                      competingLinks->size[0] * (outsize_idx_0 - 1)];
                  }

                  st.site = &ad_emlrtRSI;
                  if (all(&st, e_competingLinks)) {
                    i9 = activeOutLinks->size[1];
                    activeOutLinks->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1,
                      i9, &lq_emlrtBCI, sp) - 1] = false;
                  }
                }

                ix++;
                emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
              }
            }
          }

          ixstart++;
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
        }
      } else {
        emlrtForLoopVectorCheckR2012b(1.0, 1.0, nbIncomingLinks, mxDOUBLE_CLASS,
                                      (int32_T)nbIncomingLinks, &tc_emlrtRTEI,
          sp);
        ixstart = 1;
        while (ixstart - 1 <= (int32_T)nbIncomingLinks - 1) {
          i9 = competingLinks->size[0];
          i10 = competingLinks->size[1];
          if (competingLinks->data[(emlrtDynamicBoundsCheckFastR2012b(ixstart, 1,
                i9, &gp_emlrtBCI, sp) + competingLinks->size[0] *
               (emlrtDynamicBoundsCheckFastR2012b(itmp, 1, i10, &hp_emlrtBCI, sp)
                - 1)) - 1]) {
            emlrtForLoopVectorCheckR2012b(1.0, 1.0, nbOutgoingLinks,
              mxDOUBLE_CLASS, (int32_T)nbOutgoingLinks, &uc_emlrtRTEI, sp);
            ix = 1;
            while (ix - 1 <= (int32_T)nbOutgoingLinks - 1) {
              i9 = activeOutLinks->size[1];
              if (activeOutLinks->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1,
                   i9, &ip_emlrtBCI, sp) - 1]) {
                i9 = TurnFlows->size[0];
                i10 = TurnFlows->size[1];
                i11 = distrFactors->size[0];
                outsize_idx_0 = distrFactors->size[1];
                TurnFlows->data[(emlrtDynamicBoundsCheckFastR2012b(ixstart, 1,
                  i9, &jp_emlrtBCI, sp) + TurnFlows->size[0] *
                                 (emlrtDynamicBoundsCheckFastR2012b(ix, 1, i10,
                  &kp_emlrtBCI, sp) - 1)) - 1] = s * distrFactors->data
                  [(emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, i11,
                     &lp_emlrtBCI, sp) + distrFactors->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(ix, 1, outsize_idx_0,
                      &mp_emlrtBCI, sp) - 1)) - 1];
                i9 = adjustedReceivingFlow->size[0];
                i10 = adjustedReceivingFlow->size[0];
                i11 = TurnFlows->size[0];
                outsize_idx_0 = TurnFlows->size[1];
                adjustedReceivingFlow->data[emlrtDynamicBoundsCheckFastR2012b(ix,
                  1, i9, &np_emlrtBCI, sp) - 1] = adjustedReceivingFlow->
                  data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i10,
                  &op_emlrtBCI, sp) - 1] - TurnFlows->data
                  [(emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, i11,
                     &pp_emlrtBCI, sp) + TurnFlows->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(ix, 1, outsize_idx_0,
                      &qp_emlrtBCI, sp) - 1)) - 1];
                i9 = competingLinks->size[0];
                i10 = competingLinks->size[1];
                competingLinks->data[(emlrtDynamicBoundsCheckFastR2012b(ixstart,
                  1, i9, &rp_emlrtBCI, sp) + competingLinks->size[0] *
                                      (emlrtDynamicBoundsCheckFastR2012b(ix, 1,
                  i10, &sp_emlrtBCI, sp) - 1)) - 1] = false;
                loop_ub = competingLinks->size[0];
                i9 = competingLinks->size[1];
                outsize_idx_0 = emlrtDynamicBoundsCheckFastR2012b(ix, 1, i9,
                  &ap_emlrtBCI, sp);
                i9 = b_competingLinks->size[0];
                b_competingLinks->size[0] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)b_competingLinks, i9,
                                  (int32_T)sizeof(boolean_T), &kb_emlrtRTEI);
                for (i9 = 0; i9 < loop_ub; i9++) {
                  b_competingLinks->data[i9] = !competingLinks->data[i9 +
                    competingLinks->size[0] * (outsize_idx_0 - 1)];
                }

                st.site = &bd_emlrtRSI;
                if (all(&st, b_competingLinks)) {
                  i9 = activeOutLinks->size[1];
                  activeOutLinks->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1,
                    i9, &tp_emlrtBCI, sp) - 1] = false;
                }
              }

              ix++;
              emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
            }
          }

          ixstart++;
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
        }

        i9 = activeOutLinks->size[1];
        activeOutLinks->data[emlrtDynamicBoundsCheckFastR2012b(itmp, 1, i9,
          &fp_emlrtBCI, sp) - 1] = false;
      }

      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    } else {
      exitg11 = 1;
    }
  } while (exitg11 == 0);

  emxFree_boolean_T(&e_competingLinks);
  emxFree_boolean_T(&b_activeOutLinks);
  emxFree_boolean_T(&d_competingLinks);
  emxFree_boolean_T(&c_competingLinks);
  emxFree_boolean_T(&b_alpha);
  emxFree_boolean_T(&b_competingLinks);
  emxFree_real_T(&b);
  emxFree_real_T(&x);
  emxFree_real_T(&b_y);
  emxFree_int32_T(&r7);
  emxFree_int32_T(&r6);
  emxFree_real_T(&alpha);
  emxFree_real_T(&distrFactors);
  emxFree_boolean_T(&activeOutLinks);
  emxFree_boolean_T(&competingLinks);
  emxFree_real_T(&adjustedReceivingFlow);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void eml_assert_valid_size_arg(const emlrtStack *sp, real_T varargin_2)
{
  boolean_T p;
  boolean_T guard1 = false;
  const mxArray *y;
  static const int32_T iv36[2] = { 1, 28 };

  const mxArray *m9;
  char_T cv31[28];
  int32_T i;
  static const char_T cv32[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  real_T b_varargin_2;
  const mxArray *d_y;
  static const int32_T iv37[2] = { 1, 21 };

  char_T cv33[21];
  static const char_T cv34[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  if ((varargin_2 != muDoubleScalarFloor(varargin_2)) || muDoubleScalarIsInf
      (varargin_2)) {
    p = false;
  } else {
    p = true;
  }

  guard1 = false;
  if (p) {
    if ((-2.147483648E+9 > varargin_2) || (2.147483647E+9 < varargin_2)) {
      p = false;
    } else {
      p = true;
    }

    if (p) {
      p = true;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    p = false;
  }

  if (p) {
  } else {
    y = NULL;
    m9 = emlrtCreateCharArray(2, iv36);
    for (i = 0; i < 28; i++) {
      cv31[i] = cv32[i];
    }

    emlrtInitCharArrayR2013a(sp, 28, m9, cv31);
    emlrtAssign(&y, m9);
    b_y = NULL;
    m9 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m9) = MIN_int32_T;
    emlrtAssign(&b_y, m9);
    c_y = NULL;
    m9 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m9) = MAX_int32_T;
    emlrtAssign(&c_y, m9);
    st.site = &ce_emlrtRSI;
    b_st.site = &ve_emlrtRSI;
    error(&st, c_message(&b_st, y, b_y, c_y, &t_emlrtMCI), &u_emlrtMCI);
  }

  if (varargin_2 <= 0.0) {
    b_varargin_2 = 0.0;
  } else {
    b_varargin_2 = varargin_2;
  }

  if (2.147483647E+9 >= b_varargin_2) {
  } else {
    d_y = NULL;
    m9 = emlrtCreateCharArray(2, iv37);
    for (i = 0; i < 21; i++) {
      cv33[i] = cv34[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m9, cv33);
    emlrtAssign(&d_y, m9);
    st.site = &be_emlrtRSI;
    b_st.site = &qe_emlrtRSI;
    error(&st, message(&b_st, d_y, &v_emlrtMCI), &w_emlrtMCI);
  }
}

void eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
                 emxArray_int32_T *y)
{
  int32_T n;
  int32_T k;
  boolean_T b0;
  int32_T i;
  const mxArray *b_y;
  const mxArray *m6;
  int32_T j;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  n = x->size[0] * x->size[1];
  st.site = &nc_emlrtRSI;
  k = 0;
  b_st.site = &pc_emlrtRSI;
  if (1 > n) {
    b0 = false;
  } else {
    b0 = (n > 2147483646);
  }

  if (b0) {
    c_st.site = &qb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i = 1; i <= n; i++) {
    if (x->data[i - 1]) {
      k++;
    }
  }

  if (k <= n) {
  } else {
    b_y = NULL;
    m6 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m6);
    st.site = &ae_emlrtRSI;
    error(&st, b_y, &r_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &yd_emlrtDCI, sp);
  j = y->size[0];
  y->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &jb_emlrtRTEI);
  j = 0;
  st.site = &oc_emlrtRSI;
  for (i = 1; i <= n; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      j++;
    }
  }
}

/* End of code generation (NodeModel.c) */
