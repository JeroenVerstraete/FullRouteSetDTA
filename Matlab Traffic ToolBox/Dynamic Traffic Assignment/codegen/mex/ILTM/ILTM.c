/*
 * ILTM.c
 *
 * Code generation for function 'ILTM'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ILTM.h"
#include "ILTM_emxutil.h"
#include "rdivide.h"
#include "abs.h"
#include "eml_int_forloop_overflow_check.h"
#include "sum.h"
#include "any.h"
#include "NodeModel.h"
#include "eml_sort.h"
#include "eml_setop.h"
#include "ILTM_mexutil.h"
#include "ILTM_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 78, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo b_emlrtRSI = { 79, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo c_emlrtRSI = { 95, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo d_emlrtRSI = { 96, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo e_emlrtRSI = { 113, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo f_emlrtRSI = { 124, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo g_emlrtRSI = { 133, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo h_emlrtRSI = { 139, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo i_emlrtRSI = { 148, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo j_emlrtRSI = { 159, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo k_emlrtRSI = { 215, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo l_emlrtRSI = { 230, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo m_emlrtRSI = { 232, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo n_emlrtRSI = { 238, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo o_emlrtRSI = { 254, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo p_emlrtRSI = { 260, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo q_emlrtRSI = { 262, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo r_emlrtRSI = { 273, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo s_emlrtRSI = { 280, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo t_emlrtRSI = { 281, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo u_emlrtRSI = { 297, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo v_emlrtRSI = { 303, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo w_emlrtRSI = { 311, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo x_emlrtRSI = { 318, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo y_emlrtRSI = { 320, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo ab_emlrtRSI = { 328, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo bb_emlrtRSI = { 331, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo cb_emlrtRSI = { 350, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo db_emlrtRSI = { 354, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo eb_emlrtRSI = { 364, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo fb_emlrtRSI = { 366, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo gb_emlrtRSI = { 373, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo hb_emlrtRSI = { 398, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo ib_emlrtRSI = { 400, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo jb_emlrtRSI = { 407, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo kb_emlrtRSI = { 426, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRSInfo lb_emlrtRSI = { 16, "max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"
};

static emlrtRSInfo mb_emlrtRSI = { 18, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo rb_emlrtRSI = { 41, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo sb_emlrtRSI = { 230, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo tb_emlrtRSI = { 23, "union",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\union.m" };

static emlrtRSInfo ub_emlrtRSI = { 67, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
};

static emlrtRSInfo gc_emlrtRSI = { 21, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo hc_emlrtRSI = { 79, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo ic_emlrtRSI = { 283, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo jc_emlrtRSI = { 291, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo kc_emlrtRSI = { 16, "min",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"
};

static emlrtRSInfo lc_emlrtRSI = { 59, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo mc_emlrtRSI = { 129, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo pd_emlrtRSI = { 20, "sort",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"
};

static emlrtMCInfo g_emlrtMCI = { 239, 9, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtMCInfo p_emlrtMCI = { 405, 5, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtMCInfo q_emlrtMCI = { 404, 15, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRTEInfo emlrtRTEI = { 1, 46, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 127, 5, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 1, 1, "scalexpAlloc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\scalexpAlloc.p"
};

static emlrtRTEInfo d_emlrtRTEI = { 284, 1, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRTEInfo e_emlrtRTEI = { 47, 5, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 82, 1, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo g_emlrtRTEI = { 83, 1, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo h_emlrtRTEI = { 85, 1, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo i_emlrtRTEI = { 86, 1, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo j_emlrtRTEI = { 87, 1, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo k_emlrtRTEI = { 88, 1, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo l_emlrtRTEI = { 89, 1, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo m_emlrtRTEI = { 90, 1, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo n_emlrtRTEI = { 91, 1, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo o_emlrtRTEI = { 92, 1, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo p_emlrtRTEI = { 93, 1, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo q_emlrtRTEI = { 95, 1, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo r_emlrtRTEI = { 96, 1, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo s_emlrtRTEI = { 98, 1, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo t_emlrtRTEI = { 99, 1, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo u_emlrtRTEI = { 101, 1, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo v_emlrtRTEI = { 102, 1, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo w_emlrtRTEI = { 119, 5, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo x_emlrtRTEI = { 120, 5, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo y_emlrtRTEI = { 280, 14, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo ab_emlrtRTEI = { 281, 13, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo bb_emlrtRTEI = { 372, 25, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtRTEInfo cb_emlrtRTEI = { 33, 6, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo tb_emlrtRTEI = { 17, 9, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtRTEInfo bc_emlrtRTEI = { 112, 1, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 113, 28, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 124, 33, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 126, 17, "origins", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 129, 49, "posOut", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo emlrtDCI = { 129, 44, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 129, 44, "outL", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 130, 31, "nout", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtRTEInfo cc_emlrtRTEI = { 130, 17, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo g_emlrtBCI = { -1, -1, 129, 33, "nout", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 129, 17, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo b_emlrtDCI = { 129, 17, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtECInfo emlrtECI = { -1, 129, 17, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo i_emlrtBCI = { -1, -1, 131, 23, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo c_emlrtDCI = { 132, 52, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 132, 52, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 132, 56, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo d_emlrtDCI = { 132, 66, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 132, 66, "TF", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 132, 87, "TF", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 132, 102, "ODmatrix", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 132, 112, "ODmatrix", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo b_emlrtECI = { 2, 132, 63, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtECInfo c_emlrtECI = { 2, 132, 45, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo p_emlrtBCI = { -1, -1, 132, 38, "temp_sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo d_emlrtECI = { -1, 132, 21, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo q_emlrtBCI = { -1, -1, 133, 49, "temp_sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 133, 61, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 133, 65, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo e_emlrtECI = { 2, 133, 32, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo t_emlrtBCI = { -1, -1, 137, 56, "temp_sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 137, 32, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 137, 36, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo f_emlrtECI = { -1, 137, 25, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo w_emlrtBCI = { -1, -1, 139, 39, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 139, 43, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 139, 58, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 139, 62, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo e_emlrtDCI = { 148, 42, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 148, 42, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtRTEInfo dc_emlrtRTEI = { 181, 9, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 182, 15, "sortedNodes", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 184, 43, "posIn", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo f_emlrtDCI = { 184, 39, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 184, 39, "inL", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 185, 45, "posOut", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo g_emlrtDCI = { 185, 40, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 185, 40, "outL", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 185, 29, "nout", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 185, 13, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo h_emlrtDCI = { 185, 13, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtECInfo g_emlrtECI = { -1, 185, 13, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 198, 27, "nin", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtRTEInfo ec_emlrtRTEI = { 198, 13, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 184, 29, "nin", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 184, 13, "incomingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo i_emlrtDCI = { 184, 13, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtECInfo h_emlrtECI = { -1, 184, 13, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 199, 19, "incomingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo nb_emlrtBCI = { -1, -1, 205, 48, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo j_emlrtDCI = { 205, 53, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo ob_emlrtBCI = { -1, -1, 205, 53, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 205, 75, "vRt", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 205, 94, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo rb_emlrtBCI = { -1, -1, 205, 98, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo i_emlrtECI = { 2, 205, 41, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo sb_emlrtBCI = { -1, -1, 205, 34, "SF_up_cvn_db", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo j_emlrtECI = { -1, 205, 21, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 207, 58, "SF_up_cvn_db", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ub_emlrtBCI = { -1, -1, 207, 63, "vRt", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo vb_emlrtBCI = { -1, -1, 207, 77, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo k_emlrtDCI = { 207, 81, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 207, 81, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo k_emlrtECI = { 2, 207, 45, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 207, 38, "SF_up_cvn_db", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo l_emlrtECI = { -1, 207, 25, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 211, 53, "SF_up_cvn_db", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ac_emlrtBCI = { -1, -1, 211, 29, "sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo m_emlrtECI = { -1, 211, 17, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo bc_emlrtBCI = { -1, -1, 213, 56, "sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo cc_emlrtBCI = { -1, -1, 213, 67, "vRt", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo dc_emlrtBCI = { -1, -1, 213, 81, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ec_emlrtBCI = { -1, -1, 213, 85, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo n_emlrtECI = { 2, 213, 44, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo fc_emlrtBCI = { -1, -1, 213, 33, "sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo o_emlrtECI = { -1, 213, 21, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo gc_emlrtBCI = { -1, -1, 215, 58, "sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo hc_emlrtBCI = { -1, -1, 215, 29, "sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo p_emlrtECI = { -1, 215, 17, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo ic_emlrtBCI = { -1, -1, 223, 27, "nout", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtRTEInfo fc_emlrtRTEI = { 223, 13, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo jc_emlrtBCI = { -1, -1, 224, 19, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo kc_emlrtBCI = { -1, -1, 230, 54, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo lc_emlrtBCI = { -1, -1, 230, 66, "wind", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo l_emlrtDCI = { 230, 58, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo mc_emlrtBCI = { -1, -1, 230, 58, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo nc_emlrtBCI = { -1, -1, 230, 102, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo oc_emlrtBCI = { -1, -1, 230, 106, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo pc_emlrtBCI = { -1, -1, 232, 81, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo qc_emlrtBCI = { -1, -1, 232, 93, "wind", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo m_emlrtDCI = { 232, 85, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo rc_emlrtBCI = { -1, -1, 232, 85, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo sc_emlrtBCI = { -1, -1, 238, 88, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo tc_emlrtBCI = { -1, -1, 238, 92, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo uc_emlrtBCI = { -1, -1, 240, 46, "cap", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo vc_emlrtBCI = { -1, -1, 240, 56, "receivingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo wc_emlrtBCI = { -1, -1, 253, 30, "nTF", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtRTEInfo gc_emlrtRTEI = { 253, 17, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtDCInfo n_emlrtDCI = { 254, 127, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo xc_emlrtBCI = { -1, -1, 254, 127, "sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo o_emlrtDCI = { 254, 149, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo yc_emlrtBCI = { -1, -1, 254, 149, "TF", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ad_emlrtBCI = { -1, -1, 254, 154, "TF", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo q_emlrtECI = { 2, 254, 115, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo bd_emlrtBCI = { -1, -1, 259, 31, "nin", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtRTEInfo hc_emlrtRTEI = { 259, 17, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo cd_emlrtBCI = { -1, -1, 260, 72, "turningFlows", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo dd_emlrtBCI = { -1, -1, 260, 82, "nout", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ed_emlrtBCI = { -1, -1, 260, 80, "turningFlows", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo p_emlrtDCI = { 260, 80, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo fd_emlrtBCI = { -1, -1, 260, 109, "turningFlows", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo gd_emlrtBCI = { -1, -1, 260, 119, "nout", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo hd_emlrtBCI = { -1, -1, 260, 117, "turningFlows", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo q_emlrtDCI = { 260, 117, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo id_emlrtBCI = { -1, -1, 247, 36, "nin", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo jd_emlrtBCI = { -1, -1, 247, 34, "turningFractions", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo r_emlrtDCI = { 247, 34, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo kd_emlrtBCI = { -1, -1, 247, 43, "turningFractions", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ld_emlrtBCI = { -1, -1, 260, 38, "turningFractions", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo md_emlrtBCI = { -1, -1, 260, 48, "nout", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo nd_emlrtBCI = { -1, -1, 260, 46, "turningFractions", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo s_emlrtDCI = { 260, 46, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtECInfo r_emlrtECI = { -1, 260, 21, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo od_emlrtBCI = { -1, -1, 272, 27, "nin", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtRTEInfo ic_emlrtRTEI = { 272, 13, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo pd_emlrtBCI = { -1, -1, 273, 64, "sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo t_emlrtDCI = { 273, 76, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo qd_emlrtBCI = { -1, -1, 273, 76, "cap", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo rd_emlrtBCI = { -1, -1, 280, 76, "nin", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo sd_emlrtBCI = { -1, -1, 280, 58, "tot_sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo u_emlrtDCI = { 280, 58, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtECInfo s_emlrtECI = { -1, 280, 58, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo td_emlrtBCI = { -1, -1, 280, 103, "nin", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ud_emlrtBCI = { -1, -1, 280, 101, "turningFractions", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo v_emlrtDCI = { 280, 101, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo vd_emlrtBCI = { -1, -1, 280, 112, "nout", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo wd_emlrtBCI = { -1, -1, 280, 110, "turningFractions", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo w_emlrtDCI = { 280, 110, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo xd_emlrtBCI = { -1, -1, 280, 137, "nout", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo yd_emlrtBCI = { -1, -1, 280, 121, "receivingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo x_emlrtDCI = { 280, 121, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtECInfo t_emlrtECI = { -1, 280, 121, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo ae_emlrtBCI = { -1, -1, 280, 164, "nin", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo be_emlrtBCI = { -1, -1, 280, 146, "temp_capacities", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo y_emlrtDCI = { 280, 146, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtECInfo u_emlrtECI = { -1, 280, 146, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo ce_emlrtBCI = { -1, -1, 294, 27, "nin", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtRTEInfo jc_emlrtRTEI = { 294, 13, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo de_emlrtBCI = { -1, -1, 297, 36, "sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ee_emlrtBCI = { -1, -1, 303, 65, "sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo fe_emlrtBCI = { -1, -1, 303, 92, "sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ge_emlrtBCI = { -1, -1, 303, 104, "result_sendingFlow",
  "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo he_emlrtBCI = { -1, -1, 303, 42, "temp_sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo v_emlrtECI = { -1, 303, 25, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo ie_emlrtBCI = { -1, -1, 306, 65, "sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo je_emlrtBCI = { -1, -1, 306, 42, "temp_sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo w_emlrtECI = { -1, 306, 25, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtDCInfo ab_emlrtDCI = { 311, 51, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo ke_emlrtBCI = { -1, -1, 311, 51, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo le_emlrtBCI = { -1, -1, 311, 76, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo bb_emlrtDCI = { 311, 89, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo me_emlrtBCI = { -1, -1, 311, 89, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ne_emlrtBCI = { -1, -1, 311, 114, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo oe_emlrtBCI = { -1, -1, 311, 136, "temp_sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo x_emlrtECI = { 2, 311, 80, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtECInfo y_emlrtECI = { 2, 311, 42, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtDCInfo cb_emlrtDCI = { 318, 158, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo pe_emlrtBCI = { -1, -1, 318, 158, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo qe_emlrtBCI = { -1, -1, 318, 183, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo db_emlrtDCI = { 318, 196, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo re_emlrtBCI = { -1, -1, 318, 196, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo se_emlrtBCI = { -1, -1, 318, 221, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo te_emlrtBCI = { -1, -1, 318, 243, "temp_sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo ab_emlrtECI = { 2, 318, 187, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtECInfo bb_emlrtECI = { 2, 318, 149, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtDCInfo eb_emlrtDCI = { 320, 42, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo ue_emlrtBCI = { -1, -1, 320, 42, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ve_emlrtBCI = { -1, -1, 324, 44, "sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo we_emlrtBCI = { -1, -1, 291, 34, "nout", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo xe_emlrtBCI = { -1, -1, 291, 32, "temp_receivingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo fb_emlrtDCI = { 291, 32, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo ye_emlrtBCI = { -1, -1, 328, 75, "temp_receivingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo af_emlrtBCI = { -1, -1, 328, 104, "temp_sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo cb_emlrtECI = { 2, 328, 56, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo bf_emlrtBCI = { -1, -1, 328, 44, "temp_receivingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo db_emlrtECI = { -1, 328, 25, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo cf_emlrtBCI = { -1, -1, 330, 40, "nout", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtRTEInfo kc_emlrtRTEI = { 330, 25, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo df_emlrtBCI = { -1, -1, 331, 86, "temp_receivingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ef_emlrtBCI = { -1, -1, 331, 122, "temp_sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo gb_emlrtDCI = { 331, 144, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo ff_emlrtBCI = { -1, -1, 331, 144, "TF", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo gf_emlrtBCI = { -1, -1, 331, 162, "TF", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo eb_emlrtECI = { 2, 331, 105, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtECInfo fb_emlrtECI = { 2, 331, 67, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo hf_emlrtBCI = { -1, -1, 331, 48, "temp_receivingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo gb_emlrtECI = { -1, 331, 29, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo if_emlrtBCI = { -1, -1, 337, 36, "nout", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtRTEInfo lc_emlrtRTEI = { 337, 21, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo jf_emlrtBCI = { -1, -1, 341, 38, "temp_sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo kf_emlrtBCI = { -1, -1, 347, 27, "nout", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtRTEInfo mc_emlrtRTEI = { 347, 13, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtDCInfo hb_emlrtDCI = { 350, 43, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo lf_emlrtBCI = { -1, -1, 350, 43, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo mf_emlrtBCI = { -1, -1, 350, 68, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo ib_emlrtDCI = { 350, 79, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo nf_emlrtBCI = { -1, -1, 350, 79, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo of_emlrtBCI = { -1, -1, 350, 104, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo pf_emlrtBCI = { -1, -1, 350, 128, "temp_receivingFlow",
  "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo hb_emlrtECI = { 2, 350, 72, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtECInfo ib_emlrtECI = { 2, 350, 36, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo qf_emlrtBCI = { -1, -1, 354, 43, "temp_receivingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo jb_emlrtDCI = { 364, 152, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo rf_emlrtBCI = { -1, -1, 364, 152, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo sf_emlrtBCI = { -1, -1, 364, 177, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo kb_emlrtDCI = { 364, 188, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo tf_emlrtBCI = { -1, -1, 364, 188, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo uf_emlrtBCI = { -1, -1, 364, 213, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo vf_emlrtBCI = { -1, -1, 364, 237, "temp_receivingFlow",
  "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo jb_emlrtECI = { 2, 364, 181, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtECInfo kb_emlrtECI = { 2, 364, 145, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtDCInfo lb_emlrtDCI = { 366, 38, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo wf_emlrtBCI = { -1, -1, 366, 38, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo xf_emlrtBCI = { -1, -1, 372, 50, "temp_receivingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo mb_emlrtDCI = { 373, 57, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo yf_emlrtBCI = { -1, -1, 373, 57, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ag_emlrtBCI = { -1, -1, 373, 86, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo nb_emlrtDCI = { 373, 97, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo bg_emlrtBCI = { -1, -1, 373, 97, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo cg_emlrtBCI = { -1, -1, 373, 126, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo dg_emlrtBCI = { -1, -1, 373, 150, "temp_receivingFlow",
  "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo lb_emlrtECI = { 2, 373, 90, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtECInfo mb_emlrtECI = { 2, 373, 50, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtDCInfo ob_emlrtDCI = { 374, 42, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo eg_emlrtBCI = { -1, -1, 374, 42, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo fg_emlrtBCI = { -1, -1, 374, 71, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo pb_emlrtDCI = { 374, 71, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtDCInfo qb_emlrtDCI = { 375, 120, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo gg_emlrtBCI = { -1, -1, 375, 120, "vind", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo hg_emlrtBCI = { -1, -1, 388, 27, "nin", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtRTEInfo nc_emlrtRTEI = { 388, 13, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtDCInfo rb_emlrtDCI = { 389, 63, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo ig_emlrtBCI = { -1, -1, 389, 63, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo jg_emlrtBCI = { -1, -1, 389, 88, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo kg_emlrtBCI = { -1, -1, 389, 110, "temp_sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo nb_emlrtECI = { 2, 389, 54, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtDCInfo sb_emlrtDCI = { 389, 26, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo lg_emlrtBCI = { -1, -1, 389, 26, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo mg_emlrtBCI = { -1, -1, 389, 51, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo ob_emlrtECI = { -1, 389, 17, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo ng_emlrtBCI = { -1, -1, 391, 27, "nout", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtRTEInfo oc_emlrtRTEI = { 391, 13, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtDCInfo tb_emlrtDCI = { 392, 59, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo og_emlrtBCI = { -1, -1, 392, 59, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo pg_emlrtBCI = { -1, -1, 392, 84, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo qg_emlrtBCI = { -1, -1, 392, 108, "temp_receivingFlow",
  "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo pb_emlrtECI = { 2, 392, 52, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtDCInfo ub_emlrtDCI = { 392, 24, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo rg_emlrtBCI = { -1, -1, 392, 24, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo sg_emlrtBCI = { -1, -1, 392, 49, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo qb_emlrtECI = { -1, 392, 17, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo tg_emlrtBCI = { -1, -1, 398, 44, "deltaChange", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo rb_emlrtECI = { -1, 398, 44, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo ug_emlrtBCI = { -1, -1, 398, 12, "sortedNodes", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo sb_emlrtECI = { -1, 398, 12, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo vg_emlrtBCI = { -1, -1, 400, 30, "deltaChange", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo tb_emlrtECI = { -1, 400, 30, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo wg_emlrtBCI = { -1, -1, 407, 38, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo xg_emlrtBCI = { -1, -1, 409, 17, "destinations", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo yg_emlrtBCI = { -1, -1, 412, 47, "posIn", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo vb_emlrtDCI = { 412, 43, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo ah_emlrtBCI = { -1, -1, 412, 43, "inL", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo bh_emlrtBCI = { -1, -1, 412, 33, "nin", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ch_emlrtBCI = { -1, -1, 412, 17, "incomingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo wb_emlrtDCI = { 412, 17, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtECInfo ub_emlrtECI = { -1, 412, 17, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo dh_emlrtBCI = { -1, -1, 413, 31, "nin", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtRTEInfo pc_emlrtRTEI = { 413, 17, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo eh_emlrtBCI = { -1, -1, 414, 23, "incomingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo fh_emlrtBCI = { -1, -1, 425, 46, "vRt", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo gh_emlrtBCI = { -1, -1, 425, 61, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo xb_emlrtDCI = { 425, 65, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo hh_emlrtBCI = { -1, -1, 425, 65, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ih_emlrtBCI = { -1, -1, 425, 85, "vRt", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo jh_emlrtBCI = { -1, -1, 425, 99, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo yb_emlrtDCI = { 425, 103, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo kh_emlrtBCI = { -1, -1, 425, 103, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo vb_emlrtECI = { 2, 425, 43, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo lh_emlrtBCI = { -1, -1, 425, 38, "temp_sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo wb_emlrtECI = { -1, 425, 21, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo mh_emlrtBCI = { -1, -1, 426, 49, "temp_sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo nh_emlrtBCI = { -1, -1, 426, 63, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo oh_emlrtBCI = { -1, -1, 426, 67, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo xb_emlrtECI = { 2, 426, 32, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo ph_emlrtBCI = { -1, -1, 427, 58, "temp_sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo qh_emlrtBCI = { -1, -1, 427, 34, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo rh_emlrtBCI = { -1, -1, 427, 38, "cvn_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtECInfo yb_emlrtECI = { -1, 427, 25, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m"
};

static emlrtBCInfo sh_emlrtBCI = { -1, -1, 248, 30, "outgoingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo ac_emlrtDCI = { 85, 23, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtDCInfo bc_emlrtDCI = { 85, 23, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  4 };

static emlrtDCInfo cc_emlrtDCI = { 86, 23, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtDCInfo dc_emlrtDCI = { 86, 23, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  4 };

static emlrtBCInfo th_emlrtBCI = { -1, -1, 124, 25, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo ec_emlrtDCI = { 124, 25, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo uh_emlrtBCI = { -1, -1, 407, 25, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo fc_emlrtDCI = { 407, 25, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo vh_emlrtBCI = { -1, -1, 410, 29, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo wh_emlrtBCI = { -1, -1, 410, 31, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo xh_emlrtBCI = { -1, -1, 412, 57, "posIn", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo yh_emlrtBCI = { -1, -1, 412, 66, "nin", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ai_emlrtBCI = { -1, -1, 415, 21, "RF_down_cvn_db", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo gc_emlrtDCI = { 415, 21, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo bi_emlrtBCI = { -1, -1, 425, 73, "vind", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ci_emlrtBCI = { -1, -1, 425, 111, "vind", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo di_emlrtBCI = { -1, -1, 395, 9, "deltaChange", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo hc_emlrtDCI = { 395, 9, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo ei_emlrtBCI = { -1, -1, 396, 9, "deltaChange", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo ic_emlrtDCI = { 396, 9, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo fi_emlrtBCI = { -1, -1, 184, 53, "posIn", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo gi_emlrtBCI = { -1, -1, 184, 62, "nin", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo hi_emlrtBCI = { -1, -1, 185, 56, "posOut", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ii_emlrtBCI = { -1, -1, 185, 66, "nout", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ji_emlrtBCI = { -1, -1, 187, 13, "deltaChange", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ki_emlrtBCI = { -1, -1, 245, 16, "nout", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo li_emlrtBCI = { -1, -1, 251, 22, "posTF", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo mi_emlrtBCI = { -1, -1, 262, 17, "turningFractions", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ni_emlrtBCI = { -1, -1, 254, 127, "inTF_index", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo oi_emlrtBCI = { -1, -1, 254, 34, "turningFlows", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo jc_emlrtDCI = { 254, 34, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo pi_emlrtBCI = { -1, -1, 254, 34, "inTF_index", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo qi_emlrtBCI = { -1, -1, 254, 49, "turningFlows", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo kc_emlrtDCI = { 254, 49, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo ri_emlrtBCI = { -1, -1, 254, 49, "outTF_index", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo si_emlrtBCI = { -1, -1, 254, 79, "turningFlows", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo lc_emlrtDCI = { 254, 79, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo ti_emlrtBCI = { -1, -1, 254, 79, "inTF_index", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ui_emlrtBCI = { -1, -1, 254, 94, "turningFlows", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo mc_emlrtDCI = { 254, 94, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo vi_emlrtBCI = { -1, -1, 254, 94, "outTF_index", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo wi_emlrtBCI = { -1, -1, 280, 43, "nin", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo xi_emlrtBCI = { -1, -1, 280, 50, "nout", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo yi_emlrtBCI = { -1, -1, 293, 22, "posTF", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo aj_emlrtBCI = { -1, -1, 386, 30, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo bj_emlrtBCI = { -1, -1, 386, 32, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo nc_emlrtDCI = { 386, 32, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo cj_emlrtBCI = { -1, -1, 392, 59, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo dj_emlrtBCI = { -1, -1, 392, 24, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ej_emlrtBCI = { -1, -1, 389, 63, "incomingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo fj_emlrtBCI = { -1, -1, 389, 26, "incomingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo gj_emlrtBCI = { -1, -1, 350, 79, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo hj_emlrtBCI = { -1, -1, 350, 43, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ij_emlrtBCI = { -1, -1, 354, 57, "receivingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo jj_emlrtBCI = { -1, -1, 355, 28, "con_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo oc_emlrtDCI = { 355, 28, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo kj_emlrtBCI = { -1, -1, 355, 28, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo lj_emlrtBCI = { -1, -1, 355, 51, "con_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo mj_emlrtBCI = { -1, -1, 362, 24, "vind", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo pc_emlrtDCI = { 362, 24, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo nj_emlrtBCI = { -1, -1, 362, 29, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo oj_emlrtBCI = { -1, -1, 366, 80, "vind", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo qc_emlrtDCI = { 366, 80, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo pj_emlrtBCI = { -1, -1, 366, 85, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo qj_emlrtBCI = { -1, -1, 366, 113, "vind", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo rc_emlrtDCI = { 366, 113, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo rj_emlrtBCI = { -1, -1, 366, 118, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo sj_emlrtBCI = { -1, -1, 366, 67, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo sc_emlrtDCI = { 366, 67, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo tj_emlrtBCI = { -1, -1, 366, 38, "endN", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo uj_emlrtBCI = { -1, -1, 366, 43, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo vj_emlrtBCI = { -1, -1, 363, 38, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo tc_emlrtDCI = { 363, 38, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo wj_emlrtBCI = { -1, -1, 363, 38, "endN", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo xj_emlrtBCI = { -1, -1, 363, 43, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo yj_emlrtBCI = { -1, -1, 363, 67, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ak_emlrtBCI = { -1, -1, 364, 188, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo bk_emlrtBCI = { -1, -1, 364, 152, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ck_emlrtBCI = { -1, -1, 364, 25, "deltaChange", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo uc_emlrtDCI = { 364, 25, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo dk_emlrtBCI = { -1, -1, 364, 37, "endN", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo vc_emlrtDCI = { 364, 37, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo ek_emlrtBCI = { -1, -1, 364, 42, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo fk_emlrtBCI = { -1, -1, 364, 67, "deltaChange", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo wc_emlrtDCI = { 364, 67, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo gk_emlrtBCI = { -1, -1, 364, 79, "endN", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo xc_emlrtDCI = { 364, 79, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo hk_emlrtBCI = { -1, -1, 364, 84, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ik_emlrtBCI = { -1, -1, 364, 109, "vRt", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo yc_emlrtDCI = { 364, 109, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo jk_emlrtBCI = { -1, -1, 364, 113, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo kk_emlrtBCI = { -1, -1, 373, 97, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo lk_emlrtBCI = { -1, -1, 373, 120, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo mk_emlrtBCI = { -1, -1, 373, 158, "temp_receivingFlow",
  "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo nk_emlrtBCI = { -1, -1, 373, 57, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ok_emlrtBCI = { -1, -1, 373, 80, "cvn_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo pk_emlrtBCI = { -1, -1, 374, 42, "endN", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo qk_emlrtBCI = { -1, -1, 374, 47, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo rk_emlrtBCI = { -1, -1, 375, 125, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo sk_emlrtBCI = { -1, -1, 375, 29, "deltaChange", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo ad_emlrtDCI = { 375, 29, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo tk_emlrtBCI = { -1, -1, 375, 41, "endN", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo bd_emlrtDCI = { 375, 41, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo uk_emlrtBCI = { -1, -1, 375, 46, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo vk_emlrtBCI = { -1, -1, 375, 71, "deltaChange", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo cd_emlrtDCI = { 375, 71, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo wk_emlrtBCI = { -1, -1, 375, 83, "endN", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo dd_emlrtDCI = { 375, 83, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo xk_emlrtBCI = { -1, -1, 375, 88, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo yk_emlrtBCI = { -1, -1, 342, 30, "con_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo ed_emlrtDCI = { 342, 30, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo al_emlrtBCI = { -1, -1, 342, 30, "incomingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo bl_emlrtBCI = { -1, -1, 342, 53, "con_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo cl_emlrtBCI = { -1, -1, 299, 24, "result_sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo dl_emlrtBCI = { -1, -1, 299, 54, "tot_sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo el_emlrtBCI = { -1, -1, 299, 82, "result_sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo fl_emlrtBCI = { -1, -1, 299, 111, "temp_capacities", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo gl_emlrtBCI = { -1, -1, 305, 34, "con_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo fd_emlrtDCI = { 305, 34, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo hl_emlrtBCI = { -1, -1, 305, 34, "incomingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo il_emlrtBCI = { -1, -1, 305, 57, "con_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo jl_emlrtBCI = { -1, -1, 300, 34, "con_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo gd_emlrtDCI = { 300, 34, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo kl_emlrtBCI = { -1, -1, 300, 34, "incomingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ll_emlrtBCI = { -1, -1, 300, 57, "con_down", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ml_emlrtBCI = { -1, -1, 311, 89, "incomingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo nl_emlrtBCI = { -1, -1, 311, 51, "incomingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ol_emlrtBCI = { -1, -1, 316, 28, "wind", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo hd_emlrtDCI = { 316, 28, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo pl_emlrtBCI = { -1, -1, 316, 33, "incomingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ql_emlrtBCI = { -1, -1, 320, 84, "wind", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo id_emlrtDCI = { 320, 84, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo rl_emlrtBCI = { -1, -1, 320, 89, "incomingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo sl_emlrtBCI = { -1, -1, 320, 117, "wind", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo jd_emlrtDCI = { 320, 117, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo tl_emlrtBCI = { -1, -1, 320, 122, "incomingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ul_emlrtBCI = { -1, -1, 320, 71, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo kd_emlrtDCI = { 320, 71, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo vl_emlrtBCI = { -1, -1, 320, 42, "strN", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo wl_emlrtBCI = { -1, -1, 320, 47, "incomingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo xl_emlrtBCI = { -1, -1, 317, 42, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo ld_emlrtDCI = { 317, 42, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo yl_emlrtBCI = { -1, -1, 317, 42, "strN", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo am_emlrtBCI = { -1, -1, 317, 47, "incomingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo bm_emlrtBCI = { -1, -1, 317, 71, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo cm_emlrtBCI = { -1, -1, 318, 196, "incomingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo dm_emlrtBCI = { -1, -1, 318, 158, "incomingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo em_emlrtBCI = { -1, -1, 318, 29, "deltaChange", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo md_emlrtDCI = { 318, 29, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo fm_emlrtBCI = { -1, -1, 318, 41, "strN", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo nd_emlrtDCI = { 318, 41, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo gm_emlrtBCI = { -1, -1, 318, 46, "incomingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo hm_emlrtBCI = { -1, -1, 318, 71, "deltaChange", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo od_emlrtDCI = { 318, 71, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo im_emlrtBCI = { -1, -1, 318, 83, "strN", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo pd_emlrtDCI = { 318, 83, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo jm_emlrtBCI = { -1, -1, 318, 88, "incomingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo km_emlrtBCI = { -1, -1, 318, 113, "wRt", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo qd_emlrtDCI = { 318, 113, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo lm_emlrtBCI = { -1, -1, 318, 117, "incomingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo mm_emlrtBCI = { -1, -1, 327, 24, "nout", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo nm_emlrtBCI = { -1, -1, 331, 130, "temp_sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo om_emlrtBCI = { -1, -1, 331, 153, "TF", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo pm_emlrtBCI = { -1, -1, 331, 95, "temp_receivingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo qm_emlrtBCI = { -1, -1, 331, 57, "temp_receivingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo rm_emlrtBCI = { -1, -1, 328, 77, "temp_receivingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo sm_emlrtBCI = { -1, -1, 328, 112, "temp_sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo tm_emlrtBCI = { -1, -1, 328, 46, "temp_receivingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo um_emlrtBCI = { -1, -1, 273, 80, "incomingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo vm_emlrtBCI = { -1, -1, 273, 17, "tot_sendingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo wm_emlrtBCI = { -1, -1, 274, 17, "temp_capacities", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo xm_emlrtBCI = { -1, -1, 274, 42, "cap", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo rd_emlrtDCI = { 274, 42, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo ym_emlrtBCI = { -1, -1, 274, 46, "incomingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo an_emlrtBCI = { -1, -1, 228, 20, "RF_down_cvn_bool", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo sd_emlrtDCI = { 228, 20, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo bn_emlrtBCI = { -1, -1, 229, 21, "RF_down_cvn_bool", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo cn_emlrtBCI = { -1, -1, 230, 21, "RF_down_cvn_db", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo dn_emlrtBCI = { -1, -1, 230, 81, "wRt", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo en_emlrtBCI = { -1, -1, 230, 114, "kJm", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo fn_emlrtBCI = { -1, -1, 230, 121, "len", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo gn_emlrtBCI = { -1, -1, 231, 24, "wind", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo hn_emlrtBCI = { -1, -1, 232, 25, "RF_down_cvn_db", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo in_emlrtBCI = { -1, -1, 232, 43, "RF_down_cvn_db", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo jn_emlrtBCI = { -1, -1, 232, 61, "wRt", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo kn_emlrtBCI = { -1, -1, 236, 17, "receivingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ln_emlrtBCI = { -1, -1, 236, 40, "RF_down_cvn_db", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo mn_emlrtBCI = { -1, -1, 237, 20, "wind", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo nn_emlrtBCI = { -1, -1, 238, 21, "receivingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo on_emlrtBCI = { -1, -1, 238, 44, "receivingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo pn_emlrtBCI = { -1, -1, 238, 67, "wRt", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo qn_emlrtBCI = { -1, -1, 240, 17, "receivingFlow", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo rn_emlrtBCI = { -1, -1, 203, 20, "SF_up_cvn_bool", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo td_emlrtDCI = { 203, 20, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo sn_emlrtBCI = { -1, -1, 204, 21, "SF_up_cvn_bool", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo tn_emlrtBCI = { -1, -1, 205, 61, "vind", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo un_emlrtBCI = { -1, -1, 206, 24, "vind", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo vn_emlrtBCI = { -1, -1, 207, 89, "vind", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo wn_emlrtBCI = { -1, -1, 212, 20, "vind", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo xn_emlrtBCI = { -1, -1, 159, 25, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo yn_emlrtBCI = { -1, -1, 159, 27, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ao_emlrtBCI = { -1, -1, 160, 13, "sortedNodes", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo bo_emlrtBCI = { -1, -1, 127, 29, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo co_emlrtBCI = { -1, -1, 127, 31, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo do_emlrtBCI = { -1, -1, 129, 60, "posOut", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo eo_emlrtBCI = { -1, -1, 129, 70, "nout", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo fo_emlrtBCI = { -1, -1, 132, 66, "posTF", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo go_emlrtBCI = { -1, -1, 136, 38, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ho_emlrtBCI = { -1, -1, 136, 40, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo ud_emlrtDCI = { 136, 40, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo io_emlrtBCI = { -1, -1, 139, 70, "cap", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo jo_emlrtBCI = { -1, -1, 140, 36, "con_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo vd_emlrtDCI = { 140, 36, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo ko_emlrtBCI = { -1, -1, 140, 36, "outgoingLinks", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo lo_emlrtBCI = { -1, -1, 140, 59, "con_up", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo mo_emlrtBCI = { -1, -1, 145, 28, "vind", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo no_emlrtBCI = { -1, -1, 148, 63, "vind", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo oo_emlrtBCI = { -1, -1, 148, 75, "vind", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo po_emlrtBCI = { -1, -1, 148, 50, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo wd_emlrtDCI = { 148, 50, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo qo_emlrtBCI = { -1, -1, 148, 42, "endN", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo ro_emlrtBCI = { -1, -1, 146, 42, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo xd_emlrtDCI = { 146, 42, "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  1 };

static emlrtBCInfo so_emlrtBCI = { -1, -1, 146, 42, "endN", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtBCInfo to_emlrtBCI = { -1, -1, 146, 50, "nodes2update", "ILTM",
  "C:\\Users\\u0073146\\Documents\\CIB\\MATLAB\\Website\\Tutorial DNL\\Dynamic Traffic Assignment\\ILTM.m",
  0 };

static emlrtDCInfo ee_emlrtDCI = { 17, 37, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m",
  4 };

static emlrtRSInfo le_emlrtRSI = { 404, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo me_emlrtRSI = { 239, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo ue_emlrtRSI = { 405, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

/* Function Definitions */
void ILTM(const emlrtStack *sp, const struct0_T *node_prop, const struct1_T
          *links, const emxArray_real_T *origins, const emxArray_real_T
          *destinations, const emxArray_real_T *ODmatrix, real_T dt, real_T totT,
          const emxArray_real_T *TF, const emxArray_real_T *varargin_1, const
          emxArray_real_T *varargin_2, const emxArray_boolean_T *varargin_3,
          const emxArray_boolean_T *varargin_4, const emxArray_boolean_T
          *varargin_5, emxArray_real_T *cvn_up, emxArray_real_T *cvn_down,
          emxArray_boolean_T *con_up, emxArray_boolean_T *con_down)
{
  int32_T i0;
  int32_T loop_ub;
  emxArray_boolean_T *nodes2update;
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 36 };

  const mxArray *m0;
  char_T cv0[36];
  int32_T i;
  static const char_T cv1[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 39 };

  char_T cv2[39];
  static const char_T cv3[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  real_T pl;
  int32_T idx;
  boolean_T exitg4;
  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 36 };

  const mxArray *d_y;
  static const int32_T iv3[2] = { 1, 39 };

  real_T mtmp;
  boolean_T exitg3;
  emxArray_real_T *RF_down_cvn_db;
  emxArray_real_T *SF_up_cvn_db;
  emxArray_real_T *incomingLinks;
  real_T ndbl;
  emxArray_real_T *outgoingLinks;
  emxArray_real_T *tot_sendingFlow;
  emxArray_real_T *temp_capacities;
  emxArray_real_T *receivingFlow;
  emxArray_real_T *sendingFlow;
  emxArray_real_T *temp_sendingFlow;
  emxArray_real_T *temp_receivingFlow;
  emxArray_real_T *outgoingFlow;
  emxArray_boolean_T *RF_down_cvn_bool;
  emxArray_int32_T *ii;
  boolean_T exitg2;
  boolean_T guard2 = false;
  const mxArray *e_y;
  emxArray_int32_T *b_ii;
  emxArray_real_T *c_ii;
  emxArray_real_T *origins_t;
  emxArray_int32_T *ib;
  boolean_T exitg1;
  boolean_T guard1 = false;
  const mxArray *f_y;
  emxArray_int32_T *d_ii;
  emxArray_real_T *e_ii;
  emxArray_real_T *destinations_t;
  emxArray_real_T *deltaChange;
  emxArray_real_T *sortedNodes;
  emxArray_real_T *turningFractions;
  emxArray_real_T *turningFlows;
  int32_T t;
  emxArray_boolean_T *SF_up_cvn_bool;
  emxArray_real_T *result_TurnFlow;
  emxArray_real_T *result_sendingFlow;
  emxArray_boolean_T *pot_d;
  emxArray_real_T *r0;
  emxArray_int32_T *r1;
  emxArray_real_T *b_varargin_2;
  emxArray_real_T *minval;
  emxArray_boolean_T *r2;
  emxArray_boolean_T *b_nodes2update;
  emxArray_boolean_T *c_nodes2update;
  emxArray_real_T *b_cvn_up;
  emxArray_real_T *c_cvn_up;
  emxArray_real_T *b_temp_sendingFlow;
  emxArray_boolean_T *r3;
  emxArray_boolean_T *r4;
  emxArray_boolean_T *b_deltaChange;
  emxArray_real_T *c_deltaChange;
  emxArray_real_T *b_tot_sendingFlow;
  emxArray_real_T *b_turningFractions;
  emxArray_real_T *b_receivingFlow;
  emxArray_real_T *b_temp_capacities;
  emxArray_real_T *b_sendingFlow;
  emxArray_real_T *b_turningFlows;
  emxArray_real_T *c_turningFlows;
  emxArray_real_T *b_cvn_down;
  emxArray_real_T *c_cvn_down;
  emxArray_real_T *d_cvn_down;
  emxArray_real_T *d_cvn_up;
  emxArray_real_T *c_sendingFlow;
  emxArray_real_T *e_cvn_down;
  emxArray_real_T *f_cvn_down;
  emxArray_real_T *d_sendingFlow;
  emxArray_real_T *e_sendingFlow;
  emxArray_boolean_T *f_sendingFlow;
  emxArray_real_T *r5;
  emxArray_real_T *e_cvn_up;
  emxArray_real_T *b_temp_receivingFlow;
  emxArray_real_T *f_cvn_up;
  emxArray_real_T *c_temp_sendingFlow;
  emxArray_boolean_T *d_nodes2update;
  emxArray_real_T *d_temp_sendingFlow;
  emxArray_real_T *g_cvn_down;
  emxArray_real_T *e_temp_sendingFlow;
  emxArray_real_T *g_sendingFlow;
  emxArray_real_T *b_TF;
  emxArray_real_T *g_cvn_up;
  emxArray_real_T *c_temp_receivingFlow;
  emxArray_real_T *h_cvn_up;
  emxArray_real_T *i_cvn_up;
  emxArray_real_T *h_cvn_down;
  emxArray_real_T *f_temp_sendingFlow;
  emxArray_real_T *i_cvn_down;
  emxArray_real_T *j_cvn_down;
  emxArray_real_T *j_cvn_up;
  emxArray_real_T *d_temp_receivingFlow;
  emxArray_real_T *k_cvn_up;
  emxArray_real_T *l_cvn_up;
  emxArray_real_T *m_cvn_up;
  emxArray_real_T *e_temp_receivingFlow;
  emxArray_real_T *n_cvn_up;
  emxArray_real_T *o_cvn_up;
  emxArray_real_T *h_sendingFlow;
  emxArray_real_T *k_cvn_down;
  emxArray_real_T *g_temp_sendingFlow;
  emxArray_real_T *l_cvn_down;
  emxArray_real_T *m_cvn_down;
  emxArray_real_T *n_cvn_down;
  emxArray_real_T *h_temp_sendingFlow;
  emxArray_real_T *o_cvn_down;
  emxArray_real_T *p_cvn_down;
  emxArray_real_T *q_cvn_down;
  emxArray_real_T *b_SF_up_cvn_db;
  emxArray_real_T *c_SF_up_cvn_db;
  emxArray_real_T *d_SF_up_cvn_db;
  emxArray_real_T *e_SF_up_cvn_db;
  emxArray_real_T *i_sendingFlow;
  emxArray_real_T *j_sendingFlow;
  emxArray_real_T *k_sendingFlow;
  emxArray_real_T *l_sendingFlow;
  emxArray_real_T *c_TF;
  emxArray_real_T *b_ODmatrix;
  emxArray_real_T *p_cvn_up;
  emxArray_real_T *q_cvn_up;
  emxArray_real_T *i_temp_sendingFlow;
  emxArray_real_T *r_cvn_up;
  emxArray_real_T *j_temp_sendingFlow;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T n_index;
  int32_T l_index;
  int32_T r_cvn_down[2];
  int32_T b_minval[2];
  int32_T n;
  int32_T iv4[2];
  int32_T iv5[2];
  int32_T i4;
  real_T a;
  real_T apnd;
  real_T cdiff;
  real_T absa;
  real_T absb;
  const mxArray *g_y;
  static const int32_T iv6[2] = { 1, 21 };

  char_T cv4[21];
  static const char_T cv5[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  uint32_T uv0[2];
  uint32_T n_i;
  real_T current_totNodes;
  int32_T it;
  int32_T nIndex;
  int32_T c_varargin_2[2];
  int32_T iv7[2];
  int32_T iv8[2];
  int32_T iv9[2];
  int32_T iv10[2];
  int32_T iv11[2];
  int32_T iv12[2];
  boolean_T act_bool;
  real_T tf_index;
  boolean_T b_guard1 = false;
  int32_T iv13[2];
  int32_T iv14[2];
  const mxArray *h_y;
  static const int32_T iv15[2] = { 1, 21 };

  int32_T iv16[2];
  int32_T iv17[2];
  const mxArray *i_y;
  static const int32_T iv18[2] = { 1, 21 };

  int32_T iv19[2];
  int32_T iv20[2];
  int32_T iv21[2];
  int32_T iv22[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  f_st.prev = &d_st;
  f_st.tls = d_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &d_st;
  h_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /* intelligent link transmission assignment procedure                       % */
  /*                                                                          % */
  /* iterative updating of grid points                                        % */
  /* intelligent activation/deactivations of grid points                      % */
  /* destination based storing of commodities                                 % */
  /* splitting rates at nodes based on TF                                     % */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /* make data link and data node work */
  /* local rename link properties */
  /* local rename node properties */
  i0 = cvn_up->size[0] * cvn_up->size[1] * cvn_up->size[2];
  cvn_up->size[0] = varargin_1->size[0];
  cvn_up->size[1] = varargin_1->size[1];
  cvn_up->size[2] = varargin_1->size[2];
  emxEnsureCapacity(sp, (emxArray__common *)cvn_up, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = varargin_1->size[0] * varargin_1->size[1] * varargin_1->size[2];
  for (i0 = 0; i0 < loop_ub; i0++) {
    cvn_up->data[i0] = varargin_1->data[i0];
  }

  i0 = cvn_down->size[0] * cvn_down->size[1] * cvn_down->size[2];
  cvn_down->size[0] = varargin_2->size[0];
  cvn_down->size[1] = varargin_2->size[1];
  cvn_down->size[2] = varargin_2->size[2];
  emxEnsureCapacity(sp, (emxArray__common *)cvn_down, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  for (i0 = 0; i0 < loop_ub; i0++) {
    cvn_down->data[i0] = varargin_2->data[i0];
  }

  i0 = con_up->size[0] * con_up->size[1];
  con_up->size[0] = varargin_3->size[0];
  con_up->size[1] = varargin_3->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)con_up, i0, (int32_T)sizeof
                    (boolean_T), &emlrtRTEI);
  loop_ub = varargin_3->size[0] * varargin_3->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    con_up->data[i0] = varargin_3->data[i0];
  }

  i0 = con_down->size[0] * con_down->size[1];
  con_down->size[0] = varargin_4->size[0];
  con_down->size[1] = varargin_4->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)con_down, i0, (int32_T)sizeof
                    (boolean_T), &emlrtRTEI);
  loop_ub = varargin_4->size[0] * varargin_4->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    con_down->data[i0] = varargin_4->data[i0];
  }

  emxInit_boolean_T(sp, &nodes2update, 2, &e_emlrtRTEI, true);
  i0 = nodes2update->size[0] * nodes2update->size[1];
  nodes2update->size[0] = varargin_5->size[0];
  nodes2update->size[1] = varargin_5->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)nodes2update, i0, (int32_T)sizeof
                    (boolean_T), &emlrtRTEI);
  loop_ub = varargin_5->size[0] * varargin_5->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    nodes2update->data[i0] = varargin_5->data[i0];
  }

  /* max size of network */
  /* (can be set dynamically as well need to check for speed)s */
  /* (good practice to fix vector sizes on beforehand) */
  st.site = &emlrtRSI;
  b_st.site = &lb_emlrtRSI;
  c_st.site = &mb_emlrtRSI;
  if ((node_prop->nbIncomingLinks->size[0] == 1) || (node_prop->
       nbIncomingLinks->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    for (i = 0; i < 36; i++) {
      cv0[i] = cv1[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m0, cv0);
    emlrtAssign(&y, m0);
    d_st.site = &fe_emlrtRSI;
    e_st.site = &se_emlrtRSI;
    error(&d_st, message(&e_st, y, &emlrtMCI), &b_emlrtMCI);
  }

  if (node_prop->nbIncomingLinks->size[0] > 0) {
  } else {
    b_y = NULL;
    m0 = emlrtCreateCharArray(2, iv1);
    for (i = 0; i < 39; i++) {
      cv2[i] = cv3[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m0, cv2);
    emlrtAssign(&b_y, m0);
    d_st.site = &ee_emlrtRSI;
    e_st.site = &re_emlrtRSI;
    error(&d_st, message(&e_st, b_y, &c_emlrtMCI), &d_emlrtMCI);
  }

  d_st.site = &nb_emlrtRSI;
  i = 1;
  pl = node_prop->nbIncomingLinks->data[0];
  if (node_prop->nbIncomingLinks->size[0] > 1) {
    if (muDoubleScalarIsNaN(node_prop->nbIncomingLinks->data[0])) {
      f_st.site = &pb_emlrtRSI;
      if (2 > node_prop->nbIncomingLinks->size[0]) {
        overflow = false;
      } else {
        overflow = (node_prop->nbIncomingLinks->size[0] > 2147483646);
      }

      if (overflow) {
        g_st.site = &qb_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      idx = 2;
      exitg4 = false;
      while ((!exitg4) && (idx <= node_prop->nbIncomingLinks->size[0])) {
        i = idx;
        if (!muDoubleScalarIsNaN(node_prop->nbIncomingLinks->data[idx - 1])) {
          pl = node_prop->nbIncomingLinks->data[idx - 1];
          exitg4 = true;
        } else {
          idx++;
        }
      }
    }

    if (i < node_prop->nbIncomingLinks->size[0]) {
      f_st.site = &ob_emlrtRSI;
      if (i + 1 > node_prop->nbIncomingLinks->size[0]) {
        overflow = false;
      } else {
        overflow = (node_prop->nbIncomingLinks->size[0] > 2147483646);
      }

      if (overflow) {
        g_st.site = &qb_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      while (i + 1 <= node_prop->nbIncomingLinks->size[0]) {
        if (node_prop->nbIncomingLinks->data[i] > pl) {
          pl = node_prop->nbIncomingLinks->data[i];
        }

        i++;
      }
    }
  }

  st.site = &b_emlrtRSI;
  b_st.site = &lb_emlrtRSI;
  c_st.site = &mb_emlrtRSI;
  if ((node_prop->nbOutgoingLinks->size[0] == 1) || (node_prop->
       nbOutgoingLinks->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    c_y = NULL;
    m0 = emlrtCreateCharArray(2, iv2);
    for (i = 0; i < 36; i++) {
      cv0[i] = cv1[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m0, cv0);
    emlrtAssign(&c_y, m0);
    d_st.site = &fe_emlrtRSI;
    e_st.site = &se_emlrtRSI;
    error(&d_st, message(&e_st, c_y, &emlrtMCI), &b_emlrtMCI);
  }

  if (node_prop->nbOutgoingLinks->size[0] > 0) {
  } else {
    d_y = NULL;
    m0 = emlrtCreateCharArray(2, iv3);
    for (i = 0; i < 39; i++) {
      cv2[i] = cv3[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m0, cv2);
    emlrtAssign(&d_y, m0);
    d_st.site = &ee_emlrtRSI;
    e_st.site = &re_emlrtRSI;
    error(&d_st, message(&e_st, d_y, &c_emlrtMCI), &d_emlrtMCI);
  }

  d_st.site = &nb_emlrtRSI;
  i = 1;
  mtmp = node_prop->nbOutgoingLinks->data[0];
  if (node_prop->nbOutgoingLinks->size[0] > 1) {
    if (muDoubleScalarIsNaN(node_prop->nbOutgoingLinks->data[0])) {
      f_st.site = &pb_emlrtRSI;
      if (2 > node_prop->nbOutgoingLinks->size[0]) {
        overflow = false;
      } else {
        overflow = (node_prop->nbOutgoingLinks->size[0] > 2147483646);
      }

      if (overflow) {
        g_st.site = &qb_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      idx = 2;
      exitg3 = false;
      while ((!exitg3) && (idx <= node_prop->nbOutgoingLinks->size[0])) {
        i = idx;
        if (!muDoubleScalarIsNaN(node_prop->nbOutgoingLinks->data[idx - 1])) {
          mtmp = node_prop->nbOutgoingLinks->data[idx - 1];
          exitg3 = true;
        } else {
          idx++;
        }
      }
    }

    if (i < node_prop->nbOutgoingLinks->size[0]) {
      f_st.site = &ob_emlrtRSI;
      if (i + 1 > node_prop->nbOutgoingLinks->size[0]) {
        overflow = false;
      } else {
        overflow = (node_prop->nbOutgoingLinks->size[0] > 2147483646);
      }

      if (overflow) {
        g_st.site = &qb_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      while (i + 1 <= node_prop->nbOutgoingLinks->size[0]) {
        if (node_prop->nbOutgoingLinks->data[i] > mtmp) {
          mtmp = node_prop->nbOutgoingLinks->data[i];
        }

        i++;
      }
    }
  }

  emxInit_real_T(&d_st, &RF_down_cvn_db, 1, &f_emlrtRTEI, true);

  /* allocate memory to all local variables */
  i0 = RF_down_cvn_db->size[0];
  RF_down_cvn_db->size[0] = links->id->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)RF_down_cvn_db, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  loop_ub = links->id->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    RF_down_cvn_db->data[i0] = 0.0;
  }

  b_emxInit_real_T(sp, &SF_up_cvn_db, 2, &g_emlrtRTEI, true);
  i = links->id->size[0];
  i0 = SF_up_cvn_db->size[0] * SF_up_cvn_db->size[1];
  SF_up_cvn_db->size[0] = i;
  emxEnsureCapacity(sp, (emxArray__common *)SF_up_cvn_db, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  i = destinations->size[1];
  i0 = SF_up_cvn_db->size[0] * SF_up_cvn_db->size[1];
  SF_up_cvn_db->size[1] = i;
  emxEnsureCapacity(sp, (emxArray__common *)SF_up_cvn_db, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  loop_ub = links->id->size[0] * destinations->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    SF_up_cvn_db->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &incomingLinks, 1, &h_emlrtRTEI, true);
  i0 = incomingLinks->size[0];
  ndbl = emlrtNonNegativeCheckFastR2012b(pl, &bc_emlrtDCI, sp);
  incomingLinks->size[0] = (int32_T)emlrtIntegerCheckFastR2012b(ndbl,
    &ac_emlrtDCI, sp);
  emxEnsureCapacity(sp, (emxArray__common *)incomingLinks, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  ndbl = emlrtNonNegativeCheckFastR2012b(pl, &bc_emlrtDCI, sp);
  loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &ac_emlrtDCI, sp);
  for (i0 = 0; i0 < loop_ub; i0++) {
    incomingLinks->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &outgoingLinks, 1, &i_emlrtRTEI, true);
  i0 = outgoingLinks->size[0];
  ndbl = emlrtNonNegativeCheckFastR2012b(mtmp, &dc_emlrtDCI, sp);
  outgoingLinks->size[0] = (int32_T)emlrtIntegerCheckFastR2012b(ndbl,
    &cc_emlrtDCI, sp);
  emxEnsureCapacity(sp, (emxArray__common *)outgoingLinks, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  ndbl = emlrtNonNegativeCheckFastR2012b(mtmp, &dc_emlrtDCI, sp);
  loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &cc_emlrtDCI, sp);
  for (i0 = 0; i0 < loop_ub; i0++) {
    outgoingLinks->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &tot_sendingFlow, 1, &j_emlrtRTEI, true);
  i0 = tot_sendingFlow->size[0];
  tot_sendingFlow->size[0] = (int32_T)pl;
  emxEnsureCapacity(sp, (emxArray__common *)tot_sendingFlow, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  loop_ub = (int32_T)pl;
  for (i0 = 0; i0 < loop_ub; i0++) {
    tot_sendingFlow->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &temp_capacities, 1, &k_emlrtRTEI, true);
  i0 = temp_capacities->size[0];
  temp_capacities->size[0] = (int32_T)pl;
  emxEnsureCapacity(sp, (emxArray__common *)temp_capacities, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  loop_ub = (int32_T)pl;
  for (i0 = 0; i0 < loop_ub; i0++) {
    temp_capacities->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &receivingFlow, 1, &l_emlrtRTEI, true);
  i0 = receivingFlow->size[0];
  receivingFlow->size[0] = (int32_T)mtmp;
  emxEnsureCapacity(sp, (emxArray__common *)receivingFlow, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  loop_ub = (int32_T)mtmp;
  for (i0 = 0; i0 < loop_ub; i0++) {
    receivingFlow->data[i0] = 0.0;
  }

  b_emxInit_real_T(sp, &sendingFlow, 2, &m_emlrtRTEI, true);
  i0 = sendingFlow->size[0] * sendingFlow->size[1];
  sendingFlow->size[0] = (int32_T)pl;
  emxEnsureCapacity(sp, (emxArray__common *)sendingFlow, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  i = destinations->size[1];
  i0 = sendingFlow->size[0] * sendingFlow->size[1];
  sendingFlow->size[1] = i;
  emxEnsureCapacity(sp, (emxArray__common *)sendingFlow, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  loop_ub = (int32_T)pl * destinations->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    sendingFlow->data[i0] = 0.0;
  }

  b_emxInit_real_T(sp, &temp_sendingFlow, 2, &n_emlrtRTEI, true);
  i0 = temp_sendingFlow->size[0] * temp_sendingFlow->size[1];
  temp_sendingFlow->size[0] = (int32_T)pl;
  emxEnsureCapacity(sp, (emxArray__common *)temp_sendingFlow, i0, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  i = destinations->size[1];
  i0 = temp_sendingFlow->size[0] * temp_sendingFlow->size[1];
  temp_sendingFlow->size[1] = i;
  emxEnsureCapacity(sp, (emxArray__common *)temp_sendingFlow, i0, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  loop_ub = (int32_T)pl * destinations->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    temp_sendingFlow->data[i0] = 0.0;
  }

  b_emxInit_real_T(sp, &temp_receivingFlow, 2, &o_emlrtRTEI, true);
  i0 = temp_receivingFlow->size[0] * temp_receivingFlow->size[1];
  temp_receivingFlow->size[0] = (int32_T)mtmp;
  emxEnsureCapacity(sp, (emxArray__common *)temp_receivingFlow, i0, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  i = destinations->size[1];
  i0 = temp_receivingFlow->size[0] * temp_receivingFlow->size[1];
  temp_receivingFlow->size[1] = i;
  emxEnsureCapacity(sp, (emxArray__common *)temp_receivingFlow, i0, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  loop_ub = (int32_T)mtmp * destinations->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    temp_receivingFlow->data[i0] = 0.0;
  }

  b_emxInit_real_T(sp, &outgoingFlow, 2, &p_emlrtRTEI, true);
  i0 = outgoingFlow->size[0] * outgoingFlow->size[1];
  outgoingFlow->size[0] = (int32_T)mtmp;
  emxEnsureCapacity(sp, (emxArray__common *)outgoingFlow, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  i = destinations->size[1];
  i0 = outgoingFlow->size[0] * outgoingFlow->size[1];
  outgoingFlow->size[1] = i;
  emxEnsureCapacity(sp, (emxArray__common *)outgoingFlow, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  loop_ub = (int32_T)mtmp * destinations->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    outgoingFlow->data[i0] = 0.0;
  }

  b_emxInit_boolean_T(sp, &RF_down_cvn_bool, 1, &w_emlrtRTEI, true);
  st.site = &c_emlrtRSI;
  i0 = RF_down_cvn_bool->size[0];
  RF_down_cvn_bool->size[0] = node_prop->nbIncomingLinks->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)RF_down_cvn_bool, i0, (int32_T)
                    sizeof(boolean_T), &emlrtRTEI);
  loop_ub = node_prop->nbIncomingLinks->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    RF_down_cvn_bool->data[i0] = (node_prop->nbIncomingLinks->data[i0] == 0.0);
  }

  b_emxInit_int32_T(&st, &ii, 1, &cb_emlrtRTEI, true);
  b_st.site = &rb_emlrtRSI;
  idx = 0;
  i0 = ii->size[0];
  ii->size[0] = RF_down_cvn_bool->size[0];
  emxEnsureCapacity(&b_st, (emxArray__common *)ii, i0, (int32_T)sizeof(int32_T),
                    &b_emlrtRTEI);
  c_st.site = &sb_emlrtRSI;
  if (1 > RF_down_cvn_bool->size[0]) {
    overflow = false;
  } else {
    overflow = (RF_down_cvn_bool->size[0] > 2147483646);
  }

  if (overflow) {
    d_st.site = &qb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  i = 1;
  exitg2 = false;
  while ((!exitg2) && (i <= RF_down_cvn_bool->size[0])) {
    guard2 = false;
    if (RF_down_cvn_bool->data[i - 1]) {
      idx++;
      ii->data[idx - 1] = i;
      if (idx >= RF_down_cvn_bool->size[0]) {
        exitg2 = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }

    if (guard2) {
      i++;
    }
  }

  if (idx <= RF_down_cvn_bool->size[0]) {
  } else {
    e_y = NULL;
    m0 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&e_y, m0);
    c_st.site = &me_emlrtRSI;
    error(&c_st, e_y, &g_emlrtMCI);
  }

  if (RF_down_cvn_bool->size[0] == 1) {
    if (idx == 0) {
      i0 = ii->size[0];
      ii->size[0] = 0;
      emxEnsureCapacity(&b_st, (emxArray__common *)ii, i0, (int32_T)sizeof
                        (int32_T), &emlrtRTEI);
    }
  } else {
    if (1 > idx) {
      loop_ub = 0;
    } else {
      loop_ub = idx;
    }

    b_emxInit_int32_T(&b_st, &b_ii, 1, &emlrtRTEI, true);
    i0 = b_ii->size[0];
    b_ii->size[0] = loop_ub;
    emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, i0, (int32_T)sizeof
                      (int32_T), &emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_ii->data[i0] = ii->data[i0];
    }

    i0 = ii->size[0];
    ii->size[0] = b_ii->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)ii, i0, (int32_T)sizeof(int32_T),
                      &emlrtRTEI);
    loop_ub = b_ii->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      ii->data[i0] = b_ii->data[i0];
    }

    emxFree_int32_T(&b_ii);
  }

  b_emxInit_real_T(&b_st, &c_ii, 2, &emlrtRTEI, true);
  st.site = &c_emlrtRSI;
  b_st.site = &tb_emlrtRSI;
  i0 = c_ii->size[0] * c_ii->size[1];
  c_ii->size[0] = 1;
  c_ii->size[1] = ii->size[0];
  emxEnsureCapacity(&b_st, (emxArray__common *)c_ii, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = ii->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    c_ii->data[c_ii->size[0] * i0] = ii->data[i0];
  }

  b_emxInit_real_T(&b_st, &origins_t, 2, &q_emlrtRTEI, true);
  b_emxInit_int32_T(&b_st, &ib, 1, &emlrtRTEI, true);
  c_st.site = &ub_emlrtRSI;
  do_vectors(&c_st, origins, c_ii, origins_t, ii, ib);
  st.site = &d_emlrtRSI;
  i0 = RF_down_cvn_bool->size[0];
  RF_down_cvn_bool->size[0] = node_prop->nbOutgoingLinks->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)RF_down_cvn_bool, i0, (int32_T)
                    sizeof(boolean_T), &emlrtRTEI);
  loop_ub = node_prop->nbOutgoingLinks->size[0];
  emxFree_real_T(&c_ii);
  for (i0 = 0; i0 < loop_ub; i0++) {
    RF_down_cvn_bool->data[i0] = (node_prop->nbOutgoingLinks->data[i0] == 0.0);
  }

  b_st.site = &rb_emlrtRSI;
  idx = 0;
  i0 = ii->size[0];
  ii->size[0] = RF_down_cvn_bool->size[0];
  emxEnsureCapacity(&b_st, (emxArray__common *)ii, i0, (int32_T)sizeof(int32_T),
                    &b_emlrtRTEI);
  c_st.site = &sb_emlrtRSI;
  if (1 > RF_down_cvn_bool->size[0]) {
    overflow = false;
  } else {
    overflow = (RF_down_cvn_bool->size[0] > 2147483646);
  }

  if (overflow) {
    d_st.site = &qb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  i = 1;
  exitg1 = false;
  while ((!exitg1) && (i <= RF_down_cvn_bool->size[0])) {
    guard1 = false;
    if (RF_down_cvn_bool->data[i - 1]) {
      idx++;
      ii->data[idx - 1] = i;
      if (idx >= RF_down_cvn_bool->size[0]) {
        exitg1 = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      i++;
    }
  }

  if (idx <= RF_down_cvn_bool->size[0]) {
  } else {
    f_y = NULL;
    m0 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&f_y, m0);
    c_st.site = &me_emlrtRSI;
    error(&c_st, f_y, &g_emlrtMCI);
  }

  if (RF_down_cvn_bool->size[0] == 1) {
    if (idx == 0) {
      i0 = ii->size[0];
      ii->size[0] = 0;
      emxEnsureCapacity(&b_st, (emxArray__common *)ii, i0, (int32_T)sizeof
                        (int32_T), &emlrtRTEI);
    }
  } else {
    if (1 > idx) {
      loop_ub = 0;
    } else {
      loop_ub = idx;
    }

    b_emxInit_int32_T(&b_st, &d_ii, 1, &emlrtRTEI, true);
    i0 = d_ii->size[0];
    d_ii->size[0] = loop_ub;
    emxEnsureCapacity(&b_st, (emxArray__common *)d_ii, i0, (int32_T)sizeof
                      (int32_T), &emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      d_ii->data[i0] = ii->data[i0];
    }

    i0 = ii->size[0];
    ii->size[0] = d_ii->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)ii, i0, (int32_T)sizeof(int32_T),
                      &emlrtRTEI);
    loop_ub = d_ii->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      ii->data[i0] = d_ii->data[i0];
    }

    emxFree_int32_T(&d_ii);
  }

  b_emxInit_real_T(&b_st, &e_ii, 2, &emlrtRTEI, true);
  st.site = &d_emlrtRSI;
  b_st.site = &tb_emlrtRSI;
  i0 = e_ii->size[0] * e_ii->size[1];
  e_ii->size[0] = 1;
  e_ii->size[1] = ii->size[0];
  emxEnsureCapacity(&b_st, (emxArray__common *)e_ii, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = ii->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    e_ii->data[e_ii->size[0] * i0] = ii->data[i0];
  }

  b_emxInit_real_T(&b_st, &destinations_t, 2, &r_emlrtRTEI, true);
  emxInit_real_T(&b_st, &deltaChange, 1, &s_emlrtRTEI, true);
  c_st.site = &ub_emlrtRSI;
  do_vectors(&c_st, destinations, e_ii, destinations_t, ii, ib);
  i0 = deltaChange->size[0];
  deltaChange->size[0] = node_prop->nbIncomingLinks->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)deltaChange, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  loop_ub = node_prop->nbIncomingLinks->size[0];
  emxFree_real_T(&e_ii);
  emxFree_int32_T(&ib);
  for (i0 = 0; i0 < loop_ub; i0++) {
    deltaChange->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &sortedNodes, 1, &t_emlrtRTEI, true);
  i0 = sortedNodes->size[0];
  sortedNodes->size[0] = node_prop->nbIncomingLinks->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)sortedNodes, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  loop_ub = node_prop->nbIncomingLinks->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    sortedNodes->data[i0] = 0.0;
  }

  b_emxInit_real_T(sp, &turningFractions, 2, &u_emlrtRTEI, true);
  i0 = turningFractions->size[0] * turningFractions->size[1];
  turningFractions->size[0] = (int32_T)pl;
  turningFractions->size[1] = (int32_T)mtmp;
  emxEnsureCapacity(sp, (emxArray__common *)turningFractions, i0, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  loop_ub = (int32_T)pl * (int32_T)mtmp;
  for (i0 = 0; i0 < loop_ub; i0++) {
    turningFractions->data[i0] = 0.0;
  }

  b_emxInit_real_T(sp, &turningFlows, 2, &v_emlrtRTEI, true);
  i0 = turningFlows->size[0] * turningFlows->size[1];
  turningFlows->size[0] = (int32_T)pl;
  turningFlows->size[1] = (int32_T)mtmp;
  emxEnsureCapacity(sp, (emxArray__common *)turningFlows, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  loop_ub = (int32_T)pl * (int32_T)mtmp;
  for (i0 = 0; i0 < loop_ub; i0++) {
    turningFlows->data[i0] = 0.0;
  }

  /* forward implicit scheme */
  /* go sequentially over each time step */
  /* recalculate the cumulatives for each node at time step t until */
  /* there are no more changes */
  emlrtForLoopVectorCheckR2012b(2.0, 1.0, totT + 1.0, mxDOUBLE_CLASS, (int32_T)
                                ((totT + 1.0) + -1.0), &bc_emlrtRTEI, sp);
  t = 0;
  b_emxInit_boolean_T(sp, &SF_up_cvn_bool, 1, &x_emlrtRTEI, true);
  b_emxInit_real_T(sp, &result_TurnFlow, 2, &y_emlrtRTEI, true);
  emxInit_real_T(sp, &result_sendingFlow, 1, &ab_emlrtRTEI, true);
  emxInit_boolean_T(sp, &pot_d, 2, &bb_emlrtRTEI, true);
  b_emxInit_real_T(sp, &r0, 2, &emlrtRTEI, true);
  emxInit_int32_T(sp, &r1, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_varargin_2, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &minval, 2, &emlrtRTEI, true);
  emxInit_boolean_T(sp, &r2, 2, &emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &b_nodes2update, 1, &emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &c_nodes2update, 1, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_cvn_up, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &c_cvn_up, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_temp_sendingFlow, 2, &emlrtRTEI, true);
  emxInit_boolean_T(sp, &r3, 2, &emlrtRTEI, true);
  emxInit_boolean_T(sp, &r4, 2, &emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &b_deltaChange, 1, &emlrtRTEI, true);
  emxInit_real_T(sp, &c_deltaChange, 1, &emlrtRTEI, true);
  emxInit_real_T(sp, &b_tot_sendingFlow, 1, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_turningFractions, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &b_receivingFlow, 1, &emlrtRTEI, true);
  emxInit_real_T(sp, &b_temp_capacities, 1, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_sendingFlow, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_turningFlows, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &c_turningFlows, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_cvn_down, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &c_cvn_down, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &d_cvn_down, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &d_cvn_up, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &c_sendingFlow, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &e_cvn_down, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &f_cvn_down, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &d_sendingFlow, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &e_sendingFlow, 2, &emlrtRTEI, true);
  emxInit_boolean_T(sp, &f_sendingFlow, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &r5, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &e_cvn_up, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_temp_receivingFlow, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &f_cvn_up, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &c_temp_sendingFlow, 2, &emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &d_nodes2update, 1, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &d_temp_sendingFlow, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &g_cvn_down, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &e_temp_sendingFlow, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &g_sendingFlow, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_TF, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &g_cvn_up, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &c_temp_receivingFlow, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &h_cvn_up, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &i_cvn_up, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &h_cvn_down, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &f_temp_sendingFlow, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &i_cvn_down, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &j_cvn_down, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &j_cvn_up, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &d_temp_receivingFlow, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &k_cvn_up, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &l_cvn_up, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &m_cvn_up, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &e_temp_receivingFlow, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &n_cvn_up, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &o_cvn_up, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &h_sendingFlow, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &k_cvn_down, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &g_temp_sendingFlow, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &l_cvn_down, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &m_cvn_down, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &n_cvn_down, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &h_temp_sendingFlow, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &o_cvn_down, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &p_cvn_down, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &q_cvn_down, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_SF_up_cvn_db, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &c_SF_up_cvn_db, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &d_SF_up_cvn_db, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &e_SF_up_cvn_db, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &i_sendingFlow, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &j_sendingFlow, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &k_sendingFlow, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &l_sendingFlow, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &c_TF, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_ODmatrix, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &p_cvn_up, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &q_cvn_up, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &i_temp_sendingFlow, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &r_cvn_up, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &j_temp_sendingFlow, 2, &emlrtRTEI, true);
  while (t <= (int32_T)((totT + 1.0) + -1.0) - 1) {
    loop_ub = nodes2update->size[0];
    i0 = nodes2update->size[1];
    i1 = (int32_T)(2.0 + (real_T)t);
    i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &emlrtBCI, sp);
    i1 = d_nodes2update->size[0];
    d_nodes2update->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)d_nodes2update, i1, (int32_T)
                      sizeof(boolean_T), &emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      d_nodes2update->data[i1] = nodes2update->data[i1 + nodes2update->size[0] *
        (i0 - 1)];
    }

    st.site = &e_emlrtRSI;
    if (!any(&st, d_nodes2update)) {
    } else {
      /* initialization */
      /* all helper functions need to be initialized at run time only once */
      i0 = RF_down_cvn_bool->size[0];
      RF_down_cvn_bool->size[0] = links->id->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)RF_down_cvn_bool, i0, (int32_T)
                        sizeof(boolean_T), &emlrtRTEI);
      loop_ub = links->id->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        RF_down_cvn_bool->data[i0] = true;
      }

      i0 = SF_up_cvn_bool->size[0];
      SF_up_cvn_bool->size[0] = links->id->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)SF_up_cvn_bool, i0, (int32_T)
                        sizeof(boolean_T), &emlrtRTEI);
      loop_ub = links->id->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        SF_up_cvn_bool->data[i0] = true;
      }

      /* ORIGIN NODES<---------------------------------------------------------------------------------------------------------------------------- */
      /* update origin nodes if needed before other nodes */
      i0 = nodes2update->size[1];
      i1 = (int32_T)(2.0 + (real_T)t);
      i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &b_emlrtBCI, sp);
      i1 = c_nodes2update->size[0];
      c_nodes2update->size[0] = origins->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)c_nodes2update, i1, (int32_T)
                        sizeof(boolean_T), &emlrtRTEI);
      loop_ub = origins->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        i2 = nodes2update->size[0];
        ndbl = origins->data[origins->size[0] * i1];
        i3 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &ec_emlrtDCI, sp);
        c_nodes2update->data[i1] = nodes2update->data
          [(emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &th_emlrtBCI, sp) +
            nodes2update->size[0] * (i0 - 1)) - 1];
      }

      st.site = &f_emlrtRSI;
      if (any(&st, c_nodes2update)) {
        n_index = 0;
        while (n_index <= origins->size[1] - 1) {
          i0 = origins->size[1];
          i1 = n_index + 1;
          emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &c_emlrtBCI, sp);
          i0 = nodes2update->size[0];
          i1 = (int32_T)origins->data[n_index];
          i2 = nodes2update->size[1];
          i3 = (int32_T)(2.0 + (real_T)t);
          if (nodes2update->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                &bo_emlrtBCI, sp) + nodes2update->size[0] *
                                  (emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
                 &co_emlrtBCI, sp) - 1)) - 1]) {
            i0 = node_prop->positionFirstOut->size[0];
            i1 = (int32_T)origins->data[n_index];
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &d_emlrtBCI, sp);
            i0 = node_prop->positionFirstOut->size[0];
            i1 = (int32_T)origins->data[n_index];
            i2 = node_prop->nbOutgoingLinks->size[0];
            i3 = (int32_T)origins->data[n_index];
            ndbl = (node_prop->positionFirstOut->
                    data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                     &do_emlrtBCI, sp) - 1] + node_prop->nbOutgoingLinks->
                    data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
                     &eo_emlrtBCI, sp) - 1]) - 1.0;
            if (node_prop->positionFirstOut->data[(int32_T)origins->data[n_index]
                - 1] > ndbl) {
              i0 = 0;
              i1 = 0;
            } else {
              pl = node_prop->positionFirstOut->data[(int32_T)origins->
                data[n_index] - 1];
              i0 = node_prop->outgoingLinksList->size[0];
              i1 = (int32_T)emlrtIntegerCheckFastR2012b(pl, &emlrtDCI, sp);
              i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &e_emlrtBCI, sp)
                - 1;
              i1 = node_prop->outgoingLinksList->size[0];
              i2 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &emlrtDCI, sp);
              i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &e_emlrtBCI, sp);
            }

            i2 = node_prop->nbOutgoingLinks->size[0];
            i3 = (int32_T)origins->data[n_index];
            emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &g_emlrtBCI, sp);
            if (1.0 > node_prop->nbOutgoingLinks->data[(int32_T)origins->
                data[n_index] - 1]) {
              i2 = 0;
            } else {
              i2 = outgoingLinks->size[0];
              emlrtDynamicBoundsCheckFastR2012b(1, 1, i2, &h_emlrtBCI, sp);
              ndbl = node_prop->nbOutgoingLinks->data[(int32_T)origins->
                data[n_index] - 1];
              i2 = outgoingLinks->size[0];
              i3 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &b_emlrtDCI, sp);
              i2 = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &h_emlrtBCI, sp);
            }

            i3 = i1 - i0;
            emlrtSizeEqCheck1DFastR2012b(i2, i3, &emlrtECI, sp);
            loop_ub = i1 - i0;
            for (i1 = 0; i1 < loop_ub; i1++) {
              outgoingLinks->data[i1] = node_prop->outgoingLinksList->data[i0 +
                i1];
            }

            i0 = node_prop->nbOutgoingLinks->size[0];
            i1 = (int32_T)origins->data[n_index];
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &f_emlrtBCI, sp);
            emlrtForLoopVectorCheckR2012b(1.0, 1.0, node_prop->
              nbOutgoingLinks->data[(int32_T)origins->data[n_index] - 1],
              mxDOUBLE_CLASS, (int32_T)node_prop->nbOutgoingLinks->data[(int32_T)
              origins->data[n_index] - 1], &cc_emlrtRTEI, sp);
            l_index = 0;
            while (l_index <= (int32_T)node_prop->nbOutgoingLinks->data[(int32_T)
                   origins->data[n_index] - 1] - 1) {
              i0 = outgoingLinks->size[0];
              i1 = l_index + 1;
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &i_emlrtBCI, sp);
              loop_ub = TF->size[1];
              i0 = TF->size[2];
              i1 = (int32_T)((2.0 + (real_T)t) - 1.0);
              i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &m_emlrtBCI, sp);
              i1 = node_prop->positionFirstTF->size[0];
              i2 = (int32_T)origins->data[n_index];
              ndbl = (node_prop->positionFirstTF->
                      data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                       &fo_emlrtBCI, sp) - 1] + (1.0 + (real_T)l_index)) - 1.0;
              i1 = TF->size[0];
              i2 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &d_emlrtDCI, sp);
              idx = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &l_emlrtBCI, sp);
              i1 = b_varargin_2->size[0] * b_varargin_2->size[1];
              b_varargin_2->size[0] = 1;
              b_varargin_2->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)b_varargin_2, i1,
                                (int32_T)sizeof(real_T), &emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                b_varargin_2->data[b_varargin_2->size[0] * i1] = TF->data[((idx
                  + TF->size[0] * i1) + TF->size[0] * TF->size[1] * (i0 - 1)) -
                  1];
              }

              i0 = ODmatrix->size[0];
              i1 = n_index + 1;
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &n_emlrtBCI, sp);
              i0 = ODmatrix->size[2];
              i1 = (int32_T)((2.0 + (real_T)t) - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &o_emlrtBCI, sp);
              loop_ub = TF->size[1];
              idx = (int32_T)((node_prop->positionFirstTF->data[(int32_T)
                               origins->data[n_index] - 1] + (1.0 + (real_T)
                l_index)) - 1.0);
              i0 = c_TF->size[0] * c_TF->size[1];
              c_TF->size[0] = 1;
              c_TF->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)c_TF, i0, (int32_T)
                                sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                c_TF->data[c_TF->size[0] * i0] = TF->data[((idx + TF->size[0] *
                  i0) + TF->size[0] * TF->size[1] * ((int32_T)((2.0 + (real_T)t)
                  - 1.0) - 1)) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                r_cvn_down[i0] = c_TF->size[i0];
              }

              loop_ub = ODmatrix->size[1];
              i0 = b_ODmatrix->size[0] * b_ODmatrix->size[1];
              b_ODmatrix->size[0] = 1;
              b_ODmatrix->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)b_ODmatrix, i0, (int32_T)
                                sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                b_ODmatrix->data[b_ODmatrix->size[0] * i0] = ODmatrix->data
                  [(n_index + ODmatrix->size[0] * i0) + ODmatrix->size[0] *
                  ODmatrix->size[1] * ((int32_T)((2.0 + (real_T)t) - 1.0) - 1)];
              }

              for (i0 = 0; i0 < 2; i0++) {
                b_minval[i0] = b_ODmatrix->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(r_cvn_down, b_minval, &b_emlrtECI, sp);
              ndbl = outgoingLinks->data[l_index];
              i0 = cvn_up->size[0];
              i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &c_emlrtDCI, sp);
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &j_emlrtBCI, sp);
              i0 = cvn_up->size[2];
              i1 = (int32_T)((2.0 + (real_T)t) - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &k_emlrtBCI, sp);
              i0 = minval->size[0] * minval->size[1];
              minval->size[0] = 1;
              minval->size[1] = b_varargin_2->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)minval, i0, (int32_T)
                                sizeof(real_T), &emlrtRTEI);
              loop_ub = b_varargin_2->size[1];
              for (i0 = 0; i0 < loop_ub; i0++) {
                minval->data[minval->size[0] * i0] = b_varargin_2->
                  data[b_varargin_2->size[0] * i0] * ODmatrix->data[(n_index +
                  ODmatrix->size[0] * i0) + ODmatrix->size[0] * ODmatrix->size[1]
                  * ((int32_T)((2.0 + (real_T)t) - 1.0) - 1)] * dt;
              }

              loop_ub = cvn_up->size[1];
              n = (int32_T)outgoingLinks->data[l_index];
              i0 = p_cvn_up->size[0] * p_cvn_up->size[1];
              p_cvn_up->size[0] = 1;
              p_cvn_up->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)p_cvn_up, i0, (int32_T)
                                sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                p_cvn_up->data[p_cvn_up->size[0] * i0] = cvn_up->data[((n +
                  cvn_up->size[0] * i0) + cvn_up->size[0] * cvn_up->size[1] *
                  ((int32_T)((2.0 + (real_T)t) - 1.0) - 1)) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                r_cvn_down[i0] = p_cvn_up->size[i0];
              }

              for (i0 = 0; i0 < 2; i0++) {
                b_minval[i0] = minval->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(r_cvn_down, b_minval, &c_emlrtECI, sp);
              i0 = temp_sendingFlow->size[0];
              emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &p_emlrtBCI, sp);
              loop_ub = temp_sendingFlow->size[1];
              i0 = ii->size[0];
              ii->size[0] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)ii, i0, (int32_T)sizeof
                                (int32_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                ii->data[i0] = i0;
              }

              iv4[0] = 1;
              iv4[1] = ii->size[0];
              loop_ub = cvn_up->size[1];
              n = (int32_T)outgoingLinks->data[l_index];
              i0 = q_cvn_up->size[0] * q_cvn_up->size[1];
              q_cvn_up->size[0] = 1;
              q_cvn_up->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)q_cvn_up, i0, (int32_T)
                                sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                q_cvn_up->data[q_cvn_up->size[0] * i0] = cvn_up->data[((n +
                  cvn_up->size[0] * i0) + cvn_up->size[0] * cvn_up->size[1] *
                  ((int32_T)((2.0 + (real_T)t) - 1.0) - 1)) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                r_cvn_down[i0] = q_cvn_up->size[i0];
              }

              emlrtSubAssignSizeCheckR2012b(iv4, 2, r_cvn_down, 2, &d_emlrtECI,
                sp);
              loop_ub = cvn_up->size[1] - 1;
              n = (int32_T)outgoingLinks->data[l_index];
              for (i0 = 0; i0 <= loop_ub; i0++) {
                temp_sendingFlow->data[temp_sendingFlow->size[0] * ii->data[i0]]
                  = cvn_up->data[((n + cvn_up->size[0] * i0) + cvn_up->size[0] *
                                  cvn_up->size[1] * ((int32_T)((2.0 + (real_T)t)
                  - 1.0) - 1)) - 1] + minval->data[minval->size[0] * i0];
              }

              i0 = temp_sendingFlow->size[0];
              emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &q_emlrtBCI, sp);
              i0 = cvn_up->size[0];
              i1 = (int32_T)outgoingLinks->data[l_index];
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &r_emlrtBCI, sp);
              i0 = cvn_up->size[2];
              i1 = (int32_T)(2.0 + (real_T)t);
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &s_emlrtBCI, sp);
              loop_ub = temp_sendingFlow->size[1];
              i0 = i_temp_sendingFlow->size[0] * i_temp_sendingFlow->size[1];
              i_temp_sendingFlow->size[0] = 1;
              i_temp_sendingFlow->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)i_temp_sendingFlow, i0,
                                (int32_T)sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                i_temp_sendingFlow->data[i_temp_sendingFlow->size[0] * i0] =
                  temp_sendingFlow->data[temp_sendingFlow->size[0] * i0];
              }

              for (i0 = 0; i0 < 2; i0++) {
                b_minval[i0] = i_temp_sendingFlow->size[i0];
              }

              loop_ub = cvn_up->size[1];
              n = (int32_T)outgoingLinks->data[l_index];
              i0 = r_cvn_up->size[0] * r_cvn_up->size[1];
              r_cvn_up->size[0] = 1;
              r_cvn_up->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)r_cvn_up, i0, (int32_T)
                                sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                r_cvn_up->data[r_cvn_up->size[0] * i0] = cvn_up->data[((n +
                  cvn_up->size[0] * i0) + cvn_up->size[0] * cvn_up->size[1] * (t
                  + 1)) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                r_cvn_down[i0] = r_cvn_up->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(b_minval, r_cvn_down, &e_emlrtECI, sp);
              loop_ub = temp_sendingFlow->size[1];
              n = (int32_T)outgoingLinks->data[l_index];
              i0 = b_temp_sendingFlow->size[0] * b_temp_sendingFlow->size[1];
              b_temp_sendingFlow->size[0] = 1;
              b_temp_sendingFlow->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)b_temp_sendingFlow, i0,
                                (int32_T)sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                b_temp_sendingFlow->data[b_temp_sendingFlow->size[0] * i0] =
                  temp_sendingFlow->data[temp_sendingFlow->size[0] * i0] -
                  cvn_up->data[((n + cvn_up->size[0] * i0) + cvn_up->size[0] *
                                cvn_up->size[1] * (t + 1)) - 1];
              }

              b_abs(sp, b_temp_sendingFlow, b_varargin_2);
              st.site = &g_emlrtRSI;
              if (sum(&st, b_varargin_2) > 1.0E-8) {
                /* if an origin is updated the future grid-points */
                /* also need checking because solution is CVN */
                i0 = nodes2update->size[0];
                i1 = (int32_T)origins->data[n_index];
                i2 = nodes2update->size[1];
                ndbl = muDoubleScalarMin(totT + 1.0, (2.0 + (real_T)t) + 1.0);
                i3 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &ud_emlrtDCI, sp);
                nodes2update->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                  &go_emlrtBCI, sp) + nodes2update->size[0] *
                                    (emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
                  &ho_emlrtBCI, sp) - 1)) - 1] = true;
                i0 = cvn_up->size[0];
                i1 = (int32_T)outgoingLinks->data[l_index];
                emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &u_emlrtBCI, sp);
                loop_ub = cvn_up->size[1];
                i0 = ii->size[0];
                ii->size[0] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)ii, i0, (int32_T)
                                  sizeof(int32_T), &emlrtRTEI);
                for (i0 = 0; i0 < loop_ub; i0++) {
                  ii->data[i0] = i0;
                }

                i0 = cvn_up->size[2];
                i1 = (int32_T)(2.0 + (real_T)t);
                emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &v_emlrtBCI, sp);
                i0 = temp_sendingFlow->size[0];
                emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &t_emlrtBCI, sp);
                iv5[0] = 1;
                iv5[1] = ii->size[0];
                loop_ub = temp_sendingFlow->size[1];
                i0 = j_temp_sendingFlow->size[0] * j_temp_sendingFlow->size[1];
                j_temp_sendingFlow->size[0] = 1;
                j_temp_sendingFlow->size[1] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)j_temp_sendingFlow, i0,
                                  (int32_T)sizeof(real_T), &emlrtRTEI);
                for (i0 = 0; i0 < loop_ub; i0++) {
                  j_temp_sendingFlow->data[j_temp_sendingFlow->size[0] * i0] =
                    temp_sendingFlow->data[temp_sendingFlow->size[0] * i0];
                }

                for (i0 = 0; i0 < 2; i0++) {
                  b_minval[i0] = j_temp_sendingFlow->size[i0];
                }

                emlrtSubAssignSizeCheckR2012b(iv5, 2, b_minval, 2, &f_emlrtECI,
                  sp);
                n = (int32_T)outgoingLinks->data[l_index];
                loop_ub = temp_sendingFlow->size[1] - 1;
                for (i0 = 0; i0 <= loop_ub; i0++) {
                  cvn_up->data[((n + cvn_up->size[0] * ii->data[i0]) +
                                cvn_up->size[0] * cvn_up->size[1] * (t + 1)) - 1]
                    = temp_sendingFlow->data[temp_sendingFlow->size[0] * i0];
                }

                loop_ub = cvn_up->size[1];
                i0 = cvn_up->size[2];
                i1 = (int32_T)(2.0 + (real_T)t);
                i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &x_emlrtBCI,
                  sp);
                i1 = cvn_up->size[0];
                i2 = (int32_T)outgoingLinks->data[l_index];
                n = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &w_emlrtBCI, sp);
                i1 = b_cvn_up->size[0] * b_cvn_up->size[1];
                b_cvn_up->size[0] = 1;
                b_cvn_up->size[1] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)b_cvn_up, i1, (int32_T)
                                  sizeof(real_T), &emlrtRTEI);
                for (i1 = 0; i1 < loop_ub; i1++) {
                  b_cvn_up->data[b_cvn_up->size[0] * i1] = cvn_up->data[((n +
                    cvn_up->size[0] * i1) + cvn_up->size[0] * cvn_up->size[1] *
                    (i0 - 1)) - 1];
                }

                loop_ub = cvn_up->size[1];
                i0 = cvn_up->size[2];
                i1 = (int32_T)((2.0 + (real_T)t) - 1.0);
                i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ab_emlrtBCI,
                  sp);
                i1 = cvn_up->size[0];
                i2 = (int32_T)outgoingLinks->data[l_index];
                n = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &y_emlrtBCI, sp);
                i1 = c_cvn_up->size[0] * c_cvn_up->size[1];
                c_cvn_up->size[0] = 1;
                c_cvn_up->size[1] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)c_cvn_up, i1, (int32_T)
                                  sizeof(real_T), &emlrtRTEI);
                for (i1 = 0; i1 < loop_ub; i1++) {
                  c_cvn_up->data[c_cvn_up->size[0] * i1] = cvn_up->data[((n +
                    cvn_up->size[0] * i1) + cvn_up->size[0] * cvn_up->size[1] *
                    (i0 - 1)) - 1];
                }

                i0 = links->capacity->size[0];
                i1 = (int32_T)outgoingLinks->data[l_index];
                i2 = con_up->size[0];
                i3 = outgoingLinks->size[0];
                ndbl = outgoingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                  (l_index + 1, 1, i3, &ko_emlrtBCI, sp) - 1];
                i3 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &vd_emlrtDCI, sp);
                loop_ub = con_up->size[1];
                i4 = (int32_T)(2.0 + (real_T)t);
                st.site = &h_emlrtRSI;
                if (sum(&st, b_cvn_up) - sum(&st, c_cvn_up) < links->
                    capacity->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                     &io_emlrtBCI, sp) - 1] * dt) {
                  con_up->data[(emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
                    &jo_emlrtBCI, sp) + con_up->size[0] *
                                (emlrtDynamicBoundsCheckFastR2012b(i4, 1,
                    loop_ub, &lo_emlrtBCI, sp) - 1)) - 1] = false;
                } else {
                  con_up->data[(emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
                    &jo_emlrtBCI, sp) + con_up->size[0] *
                                (emlrtDynamicBoundsCheckFastR2012b(i4, 1,
                    loop_ub, &lo_emlrtBCI, sp) - 1)) - 1] = true;
                }

                i0 = links->vf_index->size[0];
                i1 = (int32_T)outgoingLinks->data[l_index];
                if (links->vf_index->data[emlrtDynamicBoundsCheckFastR2012b(i1,
                     1, i0, &mo_emlrtBCI, sp) - 1] == -1.0) {
                  i0 = nodes2update->size[0];
                  i1 = links->toNode->size[0];
                  i2 = (int32_T)outgoingLinks->data[l_index];
                  ndbl = links->toNode->data[emlrtDynamicBoundsCheckFastR2012b
                    (i2, 1, i1, &so_emlrtBCI, sp) - 1];
                  i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &xd_emlrtDCI,
                    sp);
                  i2 = nodes2update->size[1];
                  i3 = (int32_T)(2.0 + (real_T)t);
                  nodes2update->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1,
                    i0, &ro_emlrtBCI, sp) + nodes2update->size[0] *
                                      (emlrtDynamicBoundsCheckFastR2012b(i3, 1,
                    i2, &to_emlrtBCI, sp) - 1)) - 1] = true;
                } else {
                  st.site = &i_emlrtRSI;
                  i0 = links->vf_index->size[0];
                  i1 = (int32_T)outgoingLinks->data[l_index];
                  a = ((2.0 + (real_T)t) - links->vf_index->
                       data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                        &no_emlrtBCI, &st) - 1]) - 1.0;
                  i0 = links->vf_index->size[0];
                  i1 = (int32_T)outgoingLinks->data[l_index];
                  mtmp = (2.0 + (real_T)t) - links->vf_index->
                    data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                    &oo_emlrtBCI, &st) - 1];
                  b_st.site = &gc_emlrtRSI;
                  c_st.site = &hc_emlrtRSI;
                  if (muDoubleScalarIsNaN(a) || muDoubleScalarIsNaN(mtmp)) {
                    n = 0;
                    pl = rtNaN;
                    apnd = mtmp;
                    overflow = false;
                  } else if (mtmp < a) {
                    n = -1;
                    pl = a;
                    apnd = mtmp;
                    overflow = false;
                  } else if (muDoubleScalarIsInf(a) || muDoubleScalarIsInf(mtmp))
                  {
                    n = 0;
                    pl = rtNaN;
                    apnd = mtmp;
                    overflow = !(a == mtmp);
                  } else {
                    pl = a;
                    ndbl = muDoubleScalarFloor((mtmp - a) + 0.5);
                    apnd = a + ndbl;
                    cdiff = apnd - mtmp;
                    absa = muDoubleScalarAbs(a);
                    absb = muDoubleScalarAbs(mtmp);
                    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 *
                        muDoubleScalarMax(absa, absb)) {
                      ndbl++;
                      apnd = mtmp;
                    } else if (cdiff > 0.0) {
                      apnd = a + (ndbl - 1.0);
                    } else {
                      ndbl++;
                    }

                    overflow = (2.147483647E+9 < ndbl);
                    if (ndbl >= 0.0) {
                      n = (int32_T)ndbl - 1;
                    } else {
                      n = -1;
                    }
                  }

                  d_st.site = &ic_emlrtRSI;
                  if (!overflow) {
                  } else {
                    g_y = NULL;
                    m0 = emlrtCreateCharArray(2, iv6);
                    for (i = 0; i < 21; i++) {
                      cv4[i] = cv5[i];
                    }

                    emlrtInitCharArrayR2013a(&d_st, 21, m0, cv4);
                    emlrtAssign(&g_y, m0);
                    f_st.site = &le_emlrtRSI;
                    h_st.site = &ue_emlrtRSI;
                    error(&f_st, message(&h_st, g_y, &p_emlrtMCI), &q_emlrtMCI);
                  }

                  i0 = b_varargin_2->size[0] * b_varargin_2->size[1];
                  b_varargin_2->size[0] = 1;
                  b_varargin_2->size[1] = n + 1;
                  emxEnsureCapacity(&c_st, (emxArray__common *)b_varargin_2, i0,
                                    (int32_T)sizeof(real_T), &d_emlrtRTEI);
                  if (n + 1 > 0) {
                    b_varargin_2->data[0] = pl;
                    if (n + 1 > 1) {
                      b_varargin_2->data[n] = apnd;
                      i0 = n + (n < 0);
                      if (i0 >= 0) {
                        idx = (int32_T)((uint32_T)i0 >> 1);
                      } else {
                        idx = ~(int32_T)((uint32_T)~i0 >> 1);
                      }

                      d_st.site = &jc_emlrtRSI;
                      for (i = 1; i < idx; i++) {
                        b_varargin_2->data[i] = pl + (real_T)i;
                        b_varargin_2->data[n - i] = apnd - (real_T)i;
                      }

                      if (idx << 1 == n) {
                        b_varargin_2->data[idx] = (pl + apnd) / 2.0;
                      } else {
                        b_varargin_2->data[idx] = pl + (real_T)idx;
                        b_varargin_2->data[idx + 1] = apnd - (real_T)idx;
                      }
                    }
                  }

                  st.site = &i_emlrtRSI;
                  b_st.site = &kc_emlrtRSI;
                  c_st.site = &mb_emlrtRSI;
                  d_st.site = &lc_emlrtRSI;
                  for (i0 = 0; i0 < 2; i0++) {
                    uv0[i0] = (uint32_T)b_varargin_2->size[i0];
                  }

                  i0 = minval->size[0] * minval->size[1];
                  minval->size[0] = 1;
                  minval->size[1] = (int32_T)uv0[1];
                  emxEnsureCapacity(&d_st, (emxArray__common *)minval, i0,
                                    (int32_T)sizeof(real_T), &c_emlrtRTEI);
                  f_st.site = &mc_emlrtRSI;
                  if (1 > (int32_T)uv0[1]) {
                    overflow = false;
                  } else {
                    overflow = ((int32_T)uv0[1] > 2147483646);
                  }

                  if (overflow) {
                    g_st.site = &qb_emlrtRSI;
                    check_forloop_overflow_error(&g_st);
                  }

                  for (i = 0; i + 1 <= (int32_T)uv0[1]; i++) {
                    minval->data[i] = muDoubleScalarMin(totT + 1.0,
                      b_varargin_2->data[i]);
                  }

                  i0 = ii->size[0];
                  ii->size[0] = minval->size[1];
                  emxEnsureCapacity(sp, (emxArray__common *)ii, i0, (int32_T)
                                    sizeof(int32_T), &emlrtRTEI);
                  loop_ub = minval->size[1];
                  for (i0 = 0; i0 < loop_ub; i0++) {
                    i1 = nodes2update->size[1];
                    ndbl = minval->data[minval->size[0] * i0];
                    i2 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &wd_emlrtDCI,
                      sp);
                    ii->data[i0] = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                      &po_emlrtBCI, sp);
                  }

                  idx = nodes2update->size[0];
                  i0 = links->toNode->size[0];
                  i1 = (int32_T)outgoingLinks->data[l_index];
                  ndbl = links->toNode->data[emlrtDynamicBoundsCheckFastR2012b
                    (i1, 1, i0, &qo_emlrtBCI, sp) - 1];
                  i0 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &e_emlrtDCI,
                    sp);
                  i = emlrtDynamicBoundsCheckFastR2012b(i0, 1, idx, &bb_emlrtBCI,
                    sp);
                  idx = ii->size[0];
                  for (i0 = 0; i0 < idx; i0++) {
                    nodes2update->data[(i + nodes2update->size[0] * (ii->data[i0]
                      - 1)) - 1] = true;
                  }
                }
              }

              l_index++;
              emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
            }
          }

          n_index++;
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
        }
      }

      /* first iteration nodes are sorted in no specific order */
      n_i = 1U;
      n = 0;
      while (n <= node_prop->nbIncomingLinks->size[0] - 1) {
        i0 = nodes2update->size[0];
        i1 = 1 + n;
        i2 = nodes2update->size[1];
        i3 = (int32_T)(2.0 + (real_T)t);
        if (nodes2update->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
              &xn_emlrtBCI, sp) + nodes2update->size[0] *
                                (emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
               &yn_emlrtBCI, sp) - 1)) - 1]) {
          i0 = r4->size[0] * r4->size[1];
          r4->size[0] = 1;
          r4->size[1] = origins_t->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)r4, i0, (int32_T)sizeof
                            (boolean_T), &emlrtRTEI);
          loop_ub = origins_t->size[0] * origins_t->size[1];
          for (i0 = 0; i0 < loop_ub; i0++) {
            r4->data[i0] = (1.0 + (real_T)n == origins_t->data[i0]);
          }

          st.site = &j_emlrtRSI;
          if (!b_any(&st, r4)) {
            i0 = r3->size[0] * r3->size[1];
            r3->size[0] = 1;
            r3->size[1] = destinations_t->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)r3, i0, (int32_T)sizeof
                              (boolean_T), &emlrtRTEI);
            loop_ub = destinations_t->size[0] * destinations_t->size[1];
            for (i0 = 0; i0 < loop_ub; i0++) {
              r3->data[i0] = (1.0 + (real_T)n == destinations_t->data[i0]);
            }

            st.site = &j_emlrtRSI;
            if (!b_any(&st, r3)) {
              i0 = sortedNodes->size[0];
              i1 = (int32_T)n_i;
              sortedNodes->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                &ao_emlrtBCI, sp) - 1] = 1.0 + (real_T)n;
              n_i++;
            }
          }
        }

        n++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }

      /* amount of nodes that still need updating */
      current_totNodes = (real_T)n_i - 1.0;

      /*  ACTUAL I-LTM ITERATIONS <------------------------------------------------------------------------------------------------------------------------------- */
      /* only on normal nodes */
      /* during iterations activate/deactivate nodes for updating based on */
      /* dynamics until no more nodes need updating */
      it = 0;
      while ((it < 5000) && (current_totNodes > 0.0)) {
        /* as long as there are nodes to be updated do an iteration */
        it++;

        /* total amount of node updates for the ILTM procedure */
        /* go over all ordered nodes that need updating */
        emlrtForLoopVectorCheckR2012b(1.0, 1.0, current_totNodes, mxDOUBLE_CLASS,
                                      (int32_T)current_totNodes, &dc_emlrtRTEI,
          sp);
        nIndex = 0;
        while (nIndex <= (int32_T)current_totNodes - 1) {
          i0 = sortedNodes->size[0];
          i1 = nIndex + 1;
          emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &cb_emlrtBCI, sp);
          i0 = node_prop->positionFirstIn->size[0];
          i1 = (int32_T)sortedNodes->data[nIndex];
          emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &db_emlrtBCI, sp);
          i0 = node_prop->positionFirstIn->size[0];
          i1 = (int32_T)sortedNodes->data[nIndex];
          i2 = node_prop->nbIncomingLinks->size[0];
          i3 = (int32_T)sortedNodes->data[nIndex];
          ndbl = (node_prop->positionFirstIn->
                  data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &fi_emlrtBCI,
                   sp) - 1] + node_prop->nbIncomingLinks->
                  data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &gi_emlrtBCI,
                   sp) - 1]) - 1.0;
          if (node_prop->positionFirstIn->data[(int32_T)sortedNodes->data[nIndex]
              - 1] > ndbl) {
            i0 = 0;
            i1 = 0;
          } else {
            pl = node_prop->positionFirstIn->data[(int32_T)sortedNodes->
              data[nIndex] - 1];
            i0 = node_prop->incomingLinksList->size[0];
            i1 = (int32_T)emlrtIntegerCheckFastR2012b(pl, &f_emlrtDCI, sp);
            i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &eb_emlrtBCI, sp)
              - 1;
            i1 = node_prop->incomingLinksList->size[0];
            i2 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &f_emlrtDCI, sp);
            i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &eb_emlrtBCI, sp);
          }

          i2 = node_prop->nbIncomingLinks->size[0];
          i3 = (int32_T)sortedNodes->data[nIndex];
          emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &kb_emlrtBCI, sp);
          if (1.0 > node_prop->nbIncomingLinks->data[(int32_T)sortedNodes->
              data[nIndex] - 1]) {
            i2 = 0;
          } else {
            i2 = incomingLinks->size[0];
            emlrtDynamicBoundsCheckFastR2012b(1, 1, i2, &lb_emlrtBCI, sp);
            ndbl = node_prop->nbIncomingLinks->data[(int32_T)sortedNodes->
              data[nIndex] - 1];
            i2 = incomingLinks->size[0];
            i3 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &i_emlrtDCI, sp);
            i2 = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &lb_emlrtBCI, sp);
          }

          i3 = i1 - i0;
          emlrtSizeEqCheck1DFastR2012b(i2, i3, &h_emlrtECI, sp);
          loop_ub = i1 - i0;
          for (i1 = 0; i1 < loop_ub; i1++) {
            incomingLinks->data[i1] = node_prop->incomingLinksList->data[i0 + i1];
          }

          i0 = node_prop->positionFirstOut->size[0];
          i1 = (int32_T)sortedNodes->data[nIndex];
          emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &fb_emlrtBCI, sp);
          i0 = node_prop->positionFirstOut->size[0];
          i1 = (int32_T)sortedNodes->data[nIndex];
          i2 = node_prop->nbOutgoingLinks->size[0];
          i3 = (int32_T)sortedNodes->data[nIndex];
          ndbl = (node_prop->positionFirstOut->
                  data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &hi_emlrtBCI,
                   sp) - 1] + node_prop->nbOutgoingLinks->
                  data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &ii_emlrtBCI,
                   sp) - 1]) - 1.0;
          if (node_prop->positionFirstOut->data[(int32_T)sortedNodes->
              data[nIndex] - 1] > ndbl) {
            i0 = 0;
            i1 = 0;
          } else {
            pl = node_prop->positionFirstOut->data[(int32_T)sortedNodes->
              data[nIndex] - 1];
            i0 = node_prop->outgoingLinksList->size[0];
            i1 = (int32_T)emlrtIntegerCheckFastR2012b(pl, &g_emlrtDCI, sp);
            i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &gb_emlrtBCI, sp)
              - 1;
            i1 = node_prop->outgoingLinksList->size[0];
            i2 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &g_emlrtDCI, sp);
            i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &gb_emlrtBCI, sp);
          }

          i2 = node_prop->nbOutgoingLinks->size[0];
          i3 = (int32_T)sortedNodes->data[nIndex];
          emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &hb_emlrtBCI, sp);
          if (1.0 > node_prop->nbOutgoingLinks->data[(int32_T)sortedNodes->
              data[nIndex] - 1]) {
            i2 = 0;
          } else {
            i2 = outgoingLinks->size[0];
            emlrtDynamicBoundsCheckFastR2012b(1, 1, i2, &ib_emlrtBCI, sp);
            ndbl = node_prop->nbOutgoingLinks->data[(int32_T)sortedNodes->
              data[nIndex] - 1];
            i2 = outgoingLinks->size[0];
            i3 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &h_emlrtDCI, sp);
            i2 = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &ib_emlrtBCI, sp);
          }

          i3 = i1 - i0;
          emlrtSizeEqCheck1DFastR2012b(i2, i3, &g_emlrtECI, sp);
          loop_ub = i1 - i0;
          for (i1 = 0; i1 < loop_ub; i1++) {
            outgoingLinks->data[i1] = node_prop->outgoingLinksList->data[i0 + i1];
          }

          i0 = deltaChange->size[0];
          i1 = (int32_T)sortedNodes->data[nIndex];
          deltaChange->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
            &ji_emlrtBCI, sp) - 1] = 0.0;

          /* STANDARD NODES<----------------------------------------------------------------------------------------------------------------------------------------------------------- */
          /* most function calls will end up here */
          /* CALCULATE THE SENDING FLOW<---------------------------------------------------------------------------------------------------------------------------- */
          /* this is the maximum number of vehicles comming from the incoming links that wants to travel over a node within this time interval */
          /* multiple solution are possible */
          /* so far only the simple triangular FD solution is implemented here */
          /* alternatives are a combined quadratic linear FD or */
          /* hypocritical waiting because of intersections */
          i0 = node_prop->nbIncomingLinks->size[0];
          i1 = (int32_T)sortedNodes->data[nIndex];
          emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &jb_emlrtBCI, sp);
          emlrtForLoopVectorCheckR2012b(1.0, 1.0, node_prop->
            nbIncomingLinks->data[(int32_T)sortedNodes->data[nIndex] - 1],
            mxDOUBLE_CLASS, (int32_T)node_prop->nbIncomingLinks->data[(int32_T)
            sortedNodes->data[nIndex] - 1], &ec_emlrtRTEI, sp);
          l_index = 0;
          while (l_index <= (int32_T)node_prop->nbIncomingLinks->data[(int32_T)
                 sortedNodes->data[nIndex] - 1] - 1) {
            i0 = incomingLinks->size[0];
            i1 = l_index + 1;
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &mb_emlrtBCI, sp);

            /* initialize helper function if this is the first */
            /* time the link is evaluated */
            i0 = SF_up_cvn_bool->size[0];
            ndbl = incomingLinks->data[l_index];
            i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &td_emlrtDCI, sp);
            if (SF_up_cvn_bool->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                 &rn_emlrtBCI, sp) - 1]) {
              i0 = SF_up_cvn_bool->size[0];
              i1 = (int32_T)incomingLinks->data[l_index];
              SF_up_cvn_bool->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                &sn_emlrtBCI, sp) - 1] = false;
              i0 = links->vf_index->size[0];
              i1 = (int32_T)incomingLinks->data[l_index];
              mtmp = (2.0 + (real_T)t) + links->vf_index->
                data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &tn_emlrtBCI,
                sp) - 1];
              i0 = cvn_up->size[0];
              i1 = (int32_T)incomingLinks->data[l_index];
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &nb_emlrtBCI, sp);
              ndbl = muDoubleScalarMax(1.0, mtmp);
              i0 = cvn_up->size[2];
              i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &j_emlrtDCI, sp);
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ob_emlrtBCI, sp);
              i0 = links->vf_ratio->size[0];
              i1 = (int32_T)incomingLinks->data[l_index];
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &pb_emlrtBCI, sp);
              loop_ub = cvn_up->size[1];
              i0 = (int32_T)muDoubleScalarMax(1.0, mtmp);
              n = (int32_T)incomingLinks->data[l_index];
              ndbl = 1.0 - links->vf_ratio->data[(int32_T)incomingLinks->
                data[l_index] - 1];
              i1 = b_varargin_2->size[0] * b_varargin_2->size[1];
              b_varargin_2->size[0] = 1;
              b_varargin_2->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)b_varargin_2, i1,
                                (int32_T)sizeof(real_T), &emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                b_varargin_2->data[b_varargin_2->size[0] * i1] = cvn_up->data
                  [((n + cvn_up->size[0] * i1) + cvn_up->size[0] * cvn_up->size
                    [1] * (i0 - 1)) - 1] * ndbl;
              }

              i0 = cvn_down->size[0];
              i1 = (int32_T)incomingLinks->data[l_index];
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &qb_emlrtBCI, sp);
              i0 = cvn_down->size[2];
              i1 = (int32_T)((2.0 + (real_T)t) - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &rb_emlrtBCI, sp);
              for (i0 = 0; i0 < 2; i0++) {
                c_varargin_2[i0] = b_varargin_2->size[i0];
              }

              loop_ub = cvn_down->size[1];
              n = (int32_T)incomingLinks->data[l_index];
              i0 = q_cvn_down->size[0] * q_cvn_down->size[1];
              q_cvn_down->size[0] = 1;
              q_cvn_down->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)q_cvn_down, i0, (int32_T)
                                sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                q_cvn_down->data[q_cvn_down->size[0] * i0] = cvn_down->data[((n
                  + cvn_down->size[0] * i0) + cvn_down->size[0] * cvn_down->
                  size[1] * ((int32_T)((2.0 + (real_T)t) - 1.0) - 1)) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                r_cvn_down[i0] = q_cvn_down->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(c_varargin_2, r_cvn_down, &i_emlrtECI,
                sp);
              i0 = SF_up_cvn_db->size[0];
              i1 = (int32_T)incomingLinks->data[l_index];
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &sb_emlrtBCI, sp);
              loop_ub = SF_up_cvn_db->size[1];
              i0 = ii->size[0];
              ii->size[0] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)ii, i0, (int32_T)sizeof
                                (int32_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                ii->data[i0] = i0;
              }

              iv7[0] = 1;
              iv7[1] = ii->size[0];
              emlrtSubAssignSizeCheckR2012b(iv7, 2, *(int32_T (*)[2])
                b_varargin_2->size, 2, &j_emlrtECI, sp);
              n = (int32_T)incomingLinks->data[l_index];
              i = (int32_T)incomingLinks->data[l_index];
              loop_ub = b_varargin_2->size[1];
              for (i0 = 0; i0 < loop_ub; i0++) {
                SF_up_cvn_db->data[(n + SF_up_cvn_db->size[0] * ii->data[i0]) -
                  1] = b_varargin_2->data[b_varargin_2->size[0] * i0] -
                  cvn_down->data[((i + cvn_down->size[0] * i0) + cvn_down->size
                                  [0] * cvn_down->size[1] * ((int32_T)((2.0 +
                  (real_T)t) - 1.0) - 1)) - 1];
              }

              i0 = links->vf_index->size[0];
              i1 = (int32_T)incomingLinks->data[l_index];
              if (links->vf_index->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1,
                   i0, &un_emlrtBCI, sp) - 1] < -1.0) {
                i0 = SF_up_cvn_db->size[0];
                i1 = (int32_T)incomingLinks->data[l_index];
                emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &tb_emlrtBCI, sp);
                i0 = links->vf_index->size[0];
                i1 = (int32_T)incomingLinks->data[l_index];
                mtmp = ((2.0 + (real_T)t) + links->vf_index->
                        data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                         &vn_emlrtBCI, sp) - 1]) + 1.0;
                i0 = links->vf_ratio->size[0];
                i1 = (int32_T)incomingLinks->data[l_index];
                emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ub_emlrtBCI, sp);
                i0 = cvn_up->size[0];
                i1 = (int32_T)incomingLinks->data[l_index];
                emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &vb_emlrtBCI, sp);
                ndbl = muDoubleScalarMax(1.0, mtmp);
                i0 = cvn_up->size[2];
                i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &k_emlrtDCI, sp);
                emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &wb_emlrtBCI, sp);
                pl = links->vf_ratio->data[(int32_T)incomingLinks->data[l_index]
                  - 1];
                loop_ub = cvn_up->size[1];
                i0 = (int32_T)muDoubleScalarMax(1.0, mtmp);
                n = (int32_T)incomingLinks->data[l_index];
                i1 = b_varargin_2->size[0] * b_varargin_2->size[1];
                b_varargin_2->size[0] = 1;
                b_varargin_2->size[1] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)b_varargin_2, i1,
                                  (int32_T)sizeof(real_T), &emlrtRTEI);
                for (i1 = 0; i1 < loop_ub; i1++) {
                  b_varargin_2->data[b_varargin_2->size[0] * i1] = pl *
                    cvn_up->data[((n + cvn_up->size[0] * i1) + cvn_up->size[0] *
                                  cvn_up->size[1] * (i0 - 1)) - 1];
                }

                loop_ub = SF_up_cvn_db->size[1];
                n = (int32_T)incomingLinks->data[l_index];
                i0 = b_SF_up_cvn_db->size[0] * b_SF_up_cvn_db->size[1];
                b_SF_up_cvn_db->size[0] = 1;
                b_SF_up_cvn_db->size[1] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)b_SF_up_cvn_db, i0,
                                  (int32_T)sizeof(real_T), &emlrtRTEI);
                for (i0 = 0; i0 < loop_ub; i0++) {
                  b_SF_up_cvn_db->data[b_SF_up_cvn_db->size[0] * i0] =
                    SF_up_cvn_db->data[(n + SF_up_cvn_db->size[0] * i0) - 1];
                }

                for (i0 = 0; i0 < 2; i0++) {
                  b_minval[i0] = b_SF_up_cvn_db->size[i0];
                }

                for (i0 = 0; i0 < 2; i0++) {
                  c_varargin_2[i0] = b_varargin_2->size[i0];
                }

                emlrtSizeEqCheck2DFastR2012b(b_minval, c_varargin_2, &k_emlrtECI,
                  sp);
                i0 = SF_up_cvn_db->size[0];
                i1 = (int32_T)incomingLinks->data[l_index];
                emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &xb_emlrtBCI, sp);
                loop_ub = SF_up_cvn_db->size[1];
                i0 = ii->size[0];
                ii->size[0] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)ii, i0, (int32_T)
                                  sizeof(int32_T), &emlrtRTEI);
                for (i0 = 0; i0 < loop_ub; i0++) {
                  ii->data[i0] = i0;
                }

                iv8[0] = 1;
                iv8[1] = ii->size[0];
                loop_ub = SF_up_cvn_db->size[1];
                n = (int32_T)incomingLinks->data[l_index];
                i0 = c_SF_up_cvn_db->size[0] * c_SF_up_cvn_db->size[1];
                c_SF_up_cvn_db->size[0] = 1;
                c_SF_up_cvn_db->size[1] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)c_SF_up_cvn_db, i0,
                                  (int32_T)sizeof(real_T), &emlrtRTEI);
                for (i0 = 0; i0 < loop_ub; i0++) {
                  c_SF_up_cvn_db->data[c_SF_up_cvn_db->size[0] * i0] =
                    SF_up_cvn_db->data[(n + SF_up_cvn_db->size[0] * i0) - 1];
                }

                for (i0 = 0; i0 < 2; i0++) {
                  b_minval[i0] = c_SF_up_cvn_db->size[i0];
                }

                emlrtSubAssignSizeCheckR2012b(iv8, 2, b_minval, 2, &l_emlrtECI,
                  sp);
                n = (int32_T)incomingLinks->data[l_index];
                idx = SF_up_cvn_db->size[1];
                i = (int32_T)incomingLinks->data[l_index];
                i0 = d_SF_up_cvn_db->size[0] * d_SF_up_cvn_db->size[1];
                d_SF_up_cvn_db->size[0] = 1;
                d_SF_up_cvn_db->size[1] = idx;
                emxEnsureCapacity(sp, (emxArray__common *)d_SF_up_cvn_db, i0,
                                  (int32_T)sizeof(real_T), &emlrtRTEI);
                for (i0 = 0; i0 < idx; i0++) {
                  d_SF_up_cvn_db->data[d_SF_up_cvn_db->size[0] * i0] =
                    SF_up_cvn_db->data[(i + SF_up_cvn_db->size[0] * i0) - 1] +
                    b_varargin_2->data[b_varargin_2->size[0] * i0];
                }

                loop_ub = d_SF_up_cvn_db->size[1];
                for (i0 = 0; i0 < loop_ub; i0++) {
                  SF_up_cvn_db->data[(n + SF_up_cvn_db->size[0] * ii->data[i0])
                    - 1] = d_SF_up_cvn_db->data[d_SF_up_cvn_db->size[0] * i0];
                }
              }
            }

            i0 = sendingFlow->size[0];
            i1 = l_index + 1;
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ac_emlrtBCI, sp);
            loop_ub = sendingFlow->size[1];
            i0 = ii->size[0];
            ii->size[0] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)ii, i0, (int32_T)sizeof
                              (int32_T), &emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              ii->data[i0] = i0;
            }

            i0 = SF_up_cvn_db->size[0];
            i1 = (int32_T)incomingLinks->data[l_index];
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &yb_emlrtBCI, sp);
            iv9[0] = 1;
            iv9[1] = ii->size[0];
            loop_ub = SF_up_cvn_db->size[1];
            n = (int32_T)incomingLinks->data[l_index];
            i0 = e_SF_up_cvn_db->size[0] * e_SF_up_cvn_db->size[1];
            e_SF_up_cvn_db->size[0] = 1;
            e_SF_up_cvn_db->size[1] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)e_SF_up_cvn_db, i0,
                              (int32_T)sizeof(real_T), &emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              e_SF_up_cvn_db->data[e_SF_up_cvn_db->size[0] * i0] =
                SF_up_cvn_db->data[(n + SF_up_cvn_db->size[0] * i0) - 1];
            }

            for (i0 = 0; i0 < 2; i0++) {
              b_minval[i0] = e_SF_up_cvn_db->size[i0];
            }

            emlrtSubAssignSizeCheckR2012b(iv9, 2, b_minval, 2, &m_emlrtECI, sp);
            loop_ub = SF_up_cvn_db->size[1] - 1;
            n = (int32_T)incomingLinks->data[l_index];
            for (i0 = 0; i0 <= loop_ub; i0++) {
              sendingFlow->data[l_index + sendingFlow->size[0] * ii->data[i0]] =
                SF_up_cvn_db->data[(n + SF_up_cvn_db->size[0] * i0) - 1];
            }

            i0 = links->vf_index->size[0];
            i1 = (int32_T)incomingLinks->data[l_index];
            if (links->vf_index->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1,
                 i0, &wn_emlrtBCI, sp) - 1] == -1.0) {
              i0 = sendingFlow->size[0];
              i1 = l_index + 1;
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &bc_emlrtBCI, sp);
              i0 = links->vf_ratio->size[0];
              i1 = (int32_T)incomingLinks->data[l_index];
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &cc_emlrtBCI, sp);
              i0 = cvn_up->size[0];
              i1 = (int32_T)incomingLinks->data[l_index];
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &dc_emlrtBCI, sp);
              i0 = cvn_up->size[2];
              i1 = (int32_T)(2.0 + (real_T)t);
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ec_emlrtBCI, sp);
              pl = links->vf_ratio->data[(int32_T)incomingLinks->data[l_index] -
                1];
              loop_ub = cvn_up->size[1];
              n = (int32_T)incomingLinks->data[l_index];
              i0 = b_varargin_2->size[0] * b_varargin_2->size[1];
              b_varargin_2->size[0] = 1;
              b_varargin_2->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)b_varargin_2, i0,
                                (int32_T)sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                b_varargin_2->data[b_varargin_2->size[0] * i0] = pl *
                  cvn_up->data[((n + cvn_up->size[0] * i0) + cvn_up->size[0] *
                                cvn_up->size[1] * (t + 1)) - 1];
              }

              loop_ub = sendingFlow->size[1];
              i0 = i_sendingFlow->size[0] * i_sendingFlow->size[1];
              i_sendingFlow->size[0] = 1;
              i_sendingFlow->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)i_sendingFlow, i0,
                                (int32_T)sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                i_sendingFlow->data[i_sendingFlow->size[0] * i0] =
                  sendingFlow->data[l_index + sendingFlow->size[0] * i0];
              }

              for (i0 = 0; i0 < 2; i0++) {
                b_minval[i0] = i_sendingFlow->size[i0];
              }

              for (i0 = 0; i0 < 2; i0++) {
                c_varargin_2[i0] = b_varargin_2->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(b_minval, c_varargin_2, &n_emlrtECI,
                sp);
              i0 = sendingFlow->size[0];
              i1 = l_index + 1;
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &fc_emlrtBCI, sp);
              loop_ub = sendingFlow->size[1];
              i0 = ii->size[0];
              ii->size[0] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)ii, i0, (int32_T)sizeof
                                (int32_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                ii->data[i0] = i0;
              }

              iv10[0] = 1;
              iv10[1] = ii->size[0];
              loop_ub = sendingFlow->size[1];
              i0 = j_sendingFlow->size[0] * j_sendingFlow->size[1];
              j_sendingFlow->size[0] = 1;
              j_sendingFlow->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)j_sendingFlow, i0,
                                (int32_T)sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                j_sendingFlow->data[j_sendingFlow->size[0] * i0] =
                  sendingFlow->data[l_index + sendingFlow->size[0] * i0];
              }

              for (i0 = 0; i0 < 2; i0++) {
                b_minval[i0] = j_sendingFlow->size[i0];
              }

              emlrtSubAssignSizeCheckR2012b(iv10, 2, b_minval, 2, &o_emlrtECI,
                sp);
              i = sendingFlow->size[1];
              i0 = k_sendingFlow->size[0] * k_sendingFlow->size[1];
              k_sendingFlow->size[0] = 1;
              k_sendingFlow->size[1] = i;
              emxEnsureCapacity(sp, (emxArray__common *)k_sendingFlow, i0,
                                (int32_T)sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < i; i0++) {
                k_sendingFlow->data[k_sendingFlow->size[0] * i0] =
                  sendingFlow->data[l_index + sendingFlow->size[0] * i0] +
                  b_varargin_2->data[b_varargin_2->size[0] * i0];
              }

              loop_ub = k_sendingFlow->size[1];
              for (i0 = 0; i0 < loop_ub; i0++) {
                sendingFlow->data[l_index + sendingFlow->size[0] * ii->data[i0]]
                  = k_sendingFlow->data[k_sendingFlow->size[0] * i0];
              }
            }

            i0 = sendingFlow->size[0];
            i1 = l_index + 1;
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &hc_emlrtBCI, sp);
            loop_ub = sendingFlow->size[1];
            i0 = ii->size[0];
            ii->size[0] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)ii, i0, (int32_T)sizeof
                              (int32_T), &emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              ii->data[i0] = i0;
            }

            st.site = &k_emlrtRSI;
            i0 = sendingFlow->size[0];
            i1 = l_index + 1;
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &gc_emlrtBCI, &st);
            b_st.site = &lb_emlrtRSI;
            c_st.site = &mb_emlrtRSI;
            d_st.site = &lc_emlrtRSI;
            loop_ub = sendingFlow->size[1];
            i0 = l_sendingFlow->size[0] * l_sendingFlow->size[1];
            l_sendingFlow->size[0] = 1;
            l_sendingFlow->size[1] = loop_ub;
            emxEnsureCapacity(&d_st, (emxArray__common *)l_sendingFlow, i0,
                              (int32_T)sizeof(real_T), &emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              l_sendingFlow->data[l_sendingFlow->size[0] * i0] =
                sendingFlow->data[l_index + sendingFlow->size[0] * i0];
            }

            for (i0 = 0; i0 < 2; i0++) {
              uv0[i0] = (uint32_T)l_sendingFlow->size[i0];
            }

            i0 = b_varargin_2->size[0] * b_varargin_2->size[1];
            b_varargin_2->size[0] = 1;
            b_varargin_2->size[1] = (int32_T)uv0[1];
            emxEnsureCapacity(&d_st, (emxArray__common *)b_varargin_2, i0,
                              (int32_T)sizeof(real_T), &c_emlrtRTEI);
            f_st.site = &mc_emlrtRSI;
            if (1 > (int32_T)uv0[1]) {
              overflow = false;
            } else {
              overflow = ((int32_T)uv0[1] > 2147483646);
            }

            if (overflow) {
              g_st.site = &qb_emlrtRSI;
              check_forloop_overflow_error(&g_st);
            }

            for (i = 1; i <= (int32_T)uv0[1]; i++) {
              b_varargin_2->data[i - 1] = muDoubleScalarMax(0.0,
                sendingFlow->data[l_index + sendingFlow->size[0] * (i - 1)]);
            }

            iv11[0] = 1;
            iv11[1] = ii->size[0];
            emlrtSubAssignSizeCheckR2012b(iv11, 2, *(int32_T (*)[2])
              b_varargin_2->size, 2, &p_emlrtECI, sp);
            loop_ub = b_varargin_2->size[1];
            for (i0 = 0; i0 < loop_ub; i0++) {
              sendingFlow->data[l_index + sendingFlow->size[0] * ii->data[i0]] =
                b_varargin_2->data[b_varargin_2->size[0] * i0];
            }

            l_index++;
            emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
          }

          /* CALCULATE RECEIVING FLOW<------------------------------------------------------------------------------------------------------------------------------ */
          /* this is the maximum number of vehicles that can flow into the outgoing links */
          /* gridlock is still possible in the end solution */
          /* in some cases it is better to switch to vertical */
          /* queues then by setting the jam density to infinity */
          i0 = node_prop->nbOutgoingLinks->size[0];
          i1 = (int32_T)sortedNodes->data[nIndex];
          emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ic_emlrtBCI, sp);
          emlrtForLoopVectorCheckR2012b(1.0, 1.0, node_prop->
            nbOutgoingLinks->data[(int32_T)sortedNodes->data[nIndex] - 1],
            mxDOUBLE_CLASS, (int32_T)node_prop->nbOutgoingLinks->data[(int32_T)
            sortedNodes->data[nIndex] - 1], &fc_emlrtRTEI, sp);
          l_index = 0;
          while (l_index <= (int32_T)node_prop->nbOutgoingLinks->data[(int32_T)
                 sortedNodes->data[nIndex] - 1] - 1) {
            i0 = outgoingLinks->size[0];
            i1 = l_index + 1;
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &jc_emlrtBCI, sp);

            /* initialize helper function if this is the first */
            /* time the link is evaluated */
            i0 = RF_down_cvn_bool->size[0];
            ndbl = outgoingLinks->data[l_index];
            i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &sd_emlrtDCI, sp);
            if (RF_down_cvn_bool->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1,
                 i0, &an_emlrtBCI, sp) - 1]) {
              i0 = RF_down_cvn_bool->size[0];
              i1 = (int32_T)outgoingLinks->data[l_index];
              RF_down_cvn_bool->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                &bn_emlrtBCI, sp) - 1] = false;
              i0 = links->vw_index->size[0];
              i1 = (int32_T)outgoingLinks->data[l_index];
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &lc_emlrtBCI, sp);
              loop_ub = cvn_down->size[1];
              ndbl = muDoubleScalarMax(1.0, (2.0 + (real_T)t) + links->
                vw_index->data[(int32_T)outgoingLinks->data[l_index] - 1]);
              i0 = cvn_down->size[2];
              i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &l_emlrtDCI, sp);
              i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &mc_emlrtBCI, sp);
              i1 = cvn_down->size[0];
              i2 = (int32_T)outgoingLinks->data[l_index];
              n = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &kc_emlrtBCI, sp);
              i1 = d_cvn_down->size[0] * d_cvn_down->size[1];
              d_cvn_down->size[0] = 1;
              d_cvn_down->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)d_cvn_down, i1, (int32_T)
                                sizeof(real_T), &emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                d_cvn_down->data[d_cvn_down->size[0] * i1] = cvn_down->data[((n
                  + cvn_down->size[0] * i1) + cvn_down->size[0] * cvn_down->
                  size[1] * (i0 - 1)) - 1];
              }

              loop_ub = cvn_up->size[1];
              i0 = cvn_up->size[2];
              i1 = (int32_T)((2.0 + (real_T)t) - 1.0);
              i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &oc_emlrtBCI, sp);
              i1 = cvn_up->size[0];
              i2 = (int32_T)outgoingLinks->data[l_index];
              n = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &nc_emlrtBCI, sp);
              i1 = d_cvn_up->size[0] * d_cvn_up->size[1];
              d_cvn_up->size[0] = 1;
              d_cvn_up->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)d_cvn_up, i1, (int32_T)
                                sizeof(real_T), &emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                d_cvn_up->data[d_cvn_up->size[0] * i1] = cvn_up->data[((n +
                  cvn_up->size[0] * i1) + cvn_up->size[0] * cvn_up->size[1] *
                  (i0 - 1)) - 1];
              }

              i0 = RF_down_cvn_db->size[0];
              i1 = (int32_T)outgoingLinks->data[l_index];
              i2 = links->vw_ratio->size[0];
              i3 = (int32_T)outgoingLinks->data[l_index];
              loop_ub = links->kJam->size[0];
              i4 = (int32_T)outgoingLinks->data[l_index];
              i = links->length->size[0];
              n_index = (int32_T)outgoingLinks->data[l_index];
              st.site = &l_emlrtRSI;
              RF_down_cvn_db->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                &cn_emlrtBCI, sp) - 1] = (sum(&st, d_cvn_down) * (1.0 -
                links->vw_ratio->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1,
                i2, &dn_emlrtBCI, sp) - 1]) - sum(&st, d_cvn_up)) + links->
                kJam->data[emlrtDynamicBoundsCheckFastR2012b(i4, 1, loop_ub,
                &en_emlrtBCI, sp) - 1] * links->length->
                data[emlrtDynamicBoundsCheckFastR2012b(n_index, 1, i,
                &fn_emlrtBCI, sp) - 1];
              i0 = links->vw_index->size[0];
              i1 = (int32_T)outgoingLinks->data[l_index];
              if (links->vw_index->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1,
                   i0, &gn_emlrtBCI, sp) - 1] < -1.0) {
                i0 = links->vw_index->size[0];
                i1 = (int32_T)outgoingLinks->data[l_index];
                emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &qc_emlrtBCI, sp);
                loop_ub = cvn_down->size[1];
                ndbl = muDoubleScalarMax(1.0, ((2.0 + (real_T)t) +
                  links->vw_index->data[(int32_T)outgoingLinks->data[l_index] -
                  1]) + 1.0);
                i0 = cvn_down->size[2];
                i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &m_emlrtDCI, sp);
                i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &rc_emlrtBCI,
                  sp);
                i1 = cvn_down->size[0];
                i2 = (int32_T)outgoingLinks->data[l_index];
                n = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &pc_emlrtBCI,
                  sp);
                i1 = c_cvn_down->size[0] * c_cvn_down->size[1];
                c_cvn_down->size[0] = 1;
                c_cvn_down->size[1] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)c_cvn_down, i1,
                                  (int32_T)sizeof(real_T), &emlrtRTEI);
                for (i1 = 0; i1 < loop_ub; i1++) {
                  c_cvn_down->data[c_cvn_down->size[0] * i1] = cvn_down->data
                    [((n + cvn_down->size[0] * i1) + cvn_down->size[0] *
                      cvn_down->size[1] * (i0 - 1)) - 1];
                }

                i0 = RF_down_cvn_db->size[0];
                i1 = (int32_T)outgoingLinks->data[l_index];
                i2 = RF_down_cvn_db->size[0];
                i3 = (int32_T)outgoingLinks->data[l_index];
                loop_ub = links->vw_ratio->size[0];
                i4 = (int32_T)outgoingLinks->data[l_index];
                st.site = &m_emlrtRSI;
                RF_down_cvn_db->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                  &hn_emlrtBCI, sp) - 1] = RF_down_cvn_db->
                  data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &in_emlrtBCI,
                  sp) - 1] + links->vw_ratio->
                  data[emlrtDynamicBoundsCheckFastR2012b(i4, 1, loop_ub,
                  &jn_emlrtBCI, sp) - 1] * sum(&st, c_cvn_down);
              }
            }

            i0 = receivingFlow->size[0];
            i1 = RF_down_cvn_db->size[0];
            i2 = (int32_T)outgoingLinks->data[l_index];
            receivingFlow->data[emlrtDynamicBoundsCheckFastR2012b(l_index + 1, 1,
              i0, &kn_emlrtBCI, sp) - 1] = RF_down_cvn_db->
              data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &ln_emlrtBCI, sp)
              - 1];
            i0 = links->vw_index->size[0];
            i1 = (int32_T)outgoingLinks->data[l_index];
            if (links->vw_index->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1,
                 i0, &mn_emlrtBCI, sp) - 1] == -1.0) {
              loop_ub = cvn_down->size[1];
              i0 = cvn_down->size[2];
              i1 = (int32_T)(2.0 + (real_T)t);
              i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &tc_emlrtBCI, sp);
              i1 = cvn_down->size[0];
              i2 = (int32_T)outgoingLinks->data[l_index];
              n = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &sc_emlrtBCI, sp);
              i1 = b_cvn_down->size[0] * b_cvn_down->size[1];
              b_cvn_down->size[0] = 1;
              b_cvn_down->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)b_cvn_down, i1, (int32_T)
                                sizeof(real_T), &emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                b_cvn_down->data[b_cvn_down->size[0] * i1] = cvn_down->data[((n
                  + cvn_down->size[0] * i1) + cvn_down->size[0] * cvn_down->
                  size[1] * (i0 - 1)) - 1];
              }

              i0 = receivingFlow->size[0];
              i1 = receivingFlow->size[0];
              i2 = links->vw_ratio->size[0];
              i3 = (int32_T)outgoingLinks->data[l_index];
              st.site = &n_emlrtRSI;
              receivingFlow->data[emlrtDynamicBoundsCheckFastR2012b(l_index + 1,
                1, i0, &nn_emlrtBCI, sp) - 1] = receivingFlow->
                data[emlrtDynamicBoundsCheckFastR2012b(l_index + 1, 1, i1,
                &on_emlrtBCI, sp) - 1] + links->vw_ratio->
                data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &pn_emlrtBCI,
                sp) - 1] * sum(&st, b_cvn_down);
            }

            i0 = links->capacity->size[0];
            i1 = (int32_T)outgoingLinks->data[l_index];
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &uc_emlrtBCI, sp);
            i0 = receivingFlow->size[0];
            i1 = l_index + 1;
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &vc_emlrtBCI, sp);
            i0 = receivingFlow->size[0];
            receivingFlow->data[emlrtDynamicBoundsCheckFastR2012b(l_index + 1, 1,
              i0, &qn_emlrtBCI, sp) - 1] = muDoubleScalarMin(links->
              capacity->data[(int32_T)outgoingLinks->data[l_index] - 1] * dt,
              receivingFlow->data[l_index]);
            l_index++;
            emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
          }

          /* CALCULATE TURNING FRACTIONS<--------------------------------------------------------------------------------------------------------------------------- */
          /* split rates of all flow that runs over the node */
          i0 = node_prop->nbOutgoingLinks->size[0];
          i1 = (int32_T)sortedNodes->data[nIndex];
          if (node_prop->nbOutgoingLinks->data[emlrtDynamicBoundsCheckFastR2012b
              (i1, 1, i0, &ki_emlrtBCI, sp) - 1] == 1.0) {
            /* Straight forward merge */
            i0 = node_prop->nbIncomingLinks->size[0];
            i1 = (int32_T)sortedNodes->data[nIndex];
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &id_emlrtBCI, sp);
            if (1.0 > node_prop->nbIncomingLinks->data[(int32_T)
                sortedNodes->data[nIndex] - 1]) {
              loop_ub = 0;
            } else {
              i0 = turningFractions->size[0];
              emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &jd_emlrtBCI, sp);
              ndbl = node_prop->nbIncomingLinks->data[(int32_T)sortedNodes->
                data[nIndex] - 1];
              i0 = turningFractions->size[0];
              i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &r_emlrtDCI, sp);
              loop_ub = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                &jd_emlrtBCI, sp);
            }

            i0 = turningFractions->size[1];
            emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &kd_emlrtBCI, sp);
            for (i0 = 0; i0 < loop_ub; i0++) {
              turningFractions->data[i0] = 1.0;
            }

            i0 = outgoingFlow->size[0];
            emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &sh_emlrtBCI, sp);
            loop_ub = outgoingFlow->size[1];
            for (i0 = 0; i0 < loop_ub; i0++) {
              outgoingFlow->data[outgoingFlow->size[0] * i0] = 1.0;
            }
          } else {
            /* more complex nodes with multiple outgoing links */
            i0 = node_prop->positionFirstTF->size[0];
            i1 = (int32_T)sortedNodes->data[nIndex];
            pl = node_prop->positionFirstTF->
              data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &li_emlrtBCI, sp)
              - 1];
            i0 = turningFlows->size[0] * turningFlows->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)turningFlows, i0, (int32_T)
                              sizeof(real_T), &emlrtRTEI);
            loop_ub = turningFlows->size[1];
            for (i0 = 0; i0 < loop_ub; i0++) {
              n_index = turningFlows->size[0];
              for (i1 = 0; i1 < n_index; i1++) {
                turningFlows->data[i1 + turningFlows->size[0] * i0] = 0.0;
              }
            }

            i0 = node_prop->nbTF->size[0];
            i1 = (int32_T)sortedNodes->data[nIndex];
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &wc_emlrtBCI, sp);
            emlrtForLoopVectorCheckR2012b(1.0, 1.0, node_prop->nbTF->data
              [(int32_T)sortedNodes->data[nIndex] - 1], mxDOUBLE_CLASS, (int32_T)
              node_prop->nbTF->data[(int32_T)sortedNodes->data[nIndex] - 1],
              &gc_emlrtRTEI, sp);
            n = 0;
            while (n <= (int32_T)node_prop->nbTF->data[(int32_T)
                   sortedNodes->data[nIndex] - 1] - 1) {
              i0 = node_prop->incomingLinksTFindex->size[0];
              i1 = (int32_T)emlrtIntegerCheckFastR2012b(pl, &n_emlrtDCI, sp);
              ndbl = node_prop->incomingLinksTFindex->
                data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ni_emlrtBCI,
                sp) - 1];
              i0 = sendingFlow->size[0];
              i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &n_emlrtDCI, sp);
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &xc_emlrtBCI, sp);
              i0 = TF->size[0];
              i1 = (int32_T)emlrtIntegerCheckFastR2012b(pl, &o_emlrtDCI, sp);
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &yc_emlrtBCI, sp);
              i0 = TF->size[2];
              i1 = (int32_T)((2.0 + (real_T)t) - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ad_emlrtBCI, sp);
              loop_ub = sendingFlow->size[1];
              idx = (int32_T)node_prop->incomingLinksTFindex->data[(int32_T)pl -
                1];
              i0 = g_sendingFlow->size[0] * g_sendingFlow->size[1];
              g_sendingFlow->size[0] = 1;
              g_sendingFlow->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)g_sendingFlow, i0,
                                (int32_T)sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                g_sendingFlow->data[g_sendingFlow->size[0] * i0] =
                  sendingFlow->data[(idx + sendingFlow->size[0] * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                b_minval[i0] = g_sendingFlow->size[i0];
              }

              loop_ub = TF->size[1];
              i0 = b_TF->size[0] * b_TF->size[1];
              b_TF->size[0] = 1;
              b_TF->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)b_TF, i0, (int32_T)
                                sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                b_TF->data[b_TF->size[0] * i0] = TF->data[(((int32_T)pl +
                  TF->size[0] * i0) + TF->size[0] * TF->size[1] * ((int32_T)
                  ((2.0 + (real_T)t) - 1.0) - 1)) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                r_cvn_down[i0] = b_TF->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(b_minval, r_cvn_down, &q_emlrtECI, sp);
              loop_ub = sendingFlow->size[1];
              idx = (int32_T)node_prop->incomingLinksTFindex->data[(int32_T)pl -
                1];
              i0 = b_sendingFlow->size[0] * b_sendingFlow->size[1];
              b_sendingFlow->size[0] = 1;
              b_sendingFlow->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)b_sendingFlow, i0,
                                (int32_T)sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                b_sendingFlow->data[b_sendingFlow->size[0] * i0] =
                  sendingFlow->data[(idx + sendingFlow->size[0] * i0) - 1] *
                  TF->data[(((int32_T)pl + TF->size[0] * i0) + TF->size[0] *
                            TF->size[1] * ((int32_T)((2.0 + (real_T)t) - 1.0) -
                  1)) - 1];
              }

              i0 = turningFlows->size[0];
              i1 = node_prop->incomingLinksTFindex->size[0];
              i2 = (int32_T)pl;
              ndbl = node_prop->incomingLinksTFindex->
                data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &pi_emlrtBCI,
                sp) - 1];
              i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &jc_emlrtDCI, sp);
              i2 = turningFlows->size[1];
              i3 = node_prop->outgoingLinksTFindex->size[0];
              loop_ub = (int32_T)pl;
              ndbl = node_prop->outgoingLinksTFindex->
                data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i3,
                &ri_emlrtBCI, sp) - 1];
              i3 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &kc_emlrtDCI, sp);
              loop_ub = turningFlows->size[0];
              i4 = node_prop->incomingLinksTFindex->size[0];
              i = (int32_T)pl;
              ndbl = node_prop->incomingLinksTFindex->
                data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i4, &ti_emlrtBCI,
                sp) - 1];
              i4 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &lc_emlrtDCI, sp);
              i = turningFlows->size[1];
              n_index = node_prop->outgoingLinksTFindex->size[0];
              idx = (int32_T)pl;
              ndbl = node_prop->outgoingLinksTFindex->
                data[emlrtDynamicBoundsCheckFastR2012b(idx, 1, n_index,
                &vi_emlrtBCI, sp) - 1];
              n_index = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &mc_emlrtDCI,
                sp);
              st.site = &o_emlrtRSI;
              turningFlows->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                &oi_emlrtBCI, sp) + turningFlows->size[0] *
                                  (emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
                &qi_emlrtBCI, sp) - 1)) - 1] = turningFlows->data
                [(emlrtDynamicBoundsCheckFastR2012b(i4, 1, loop_ub, &si_emlrtBCI,
                   sp) + turningFlows->size[0] *
                  (emlrtDynamicBoundsCheckFastR2012b(n_index, 1, i, &ui_emlrtBCI,
                    sp) - 1)) - 1] + b_sum(&st, b_sendingFlow);
              pl++;
              n++;
              emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
            }

            /* derive turning fractions from the turningFlows */
            i0 = node_prop->nbIncomingLinks->size[0];
            i1 = (int32_T)sortedNodes->data[nIndex];
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &bd_emlrtBCI, sp);
            emlrtForLoopVectorCheckR2012b(1.0, 1.0, node_prop->
              nbIncomingLinks->data[(int32_T)sortedNodes->data[nIndex] - 1],
              mxDOUBLE_CLASS, (int32_T)node_prop->nbIncomingLinks->data[(int32_T)
              sortedNodes->data[nIndex] - 1], &hc_emlrtRTEI, sp);
            l_index = 0;
            while (l_index <= (int32_T)node_prop->nbIncomingLinks->data[(int32_T)
                   sortedNodes->data[nIndex] - 1] - 1) {
              i0 = node_prop->nbOutgoingLinks->size[0];
              i1 = (int32_T)sortedNodes->data[nIndex];
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &dd_emlrtBCI, sp);
              if (1.0 > node_prop->nbOutgoingLinks->data[(int32_T)
                  sortedNodes->data[nIndex] - 1]) {
                loop_ub = 0;
              } else {
                i0 = turningFlows->size[1];
                emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &ed_emlrtBCI, sp);
                ndbl = node_prop->nbOutgoingLinks->data[(int32_T)
                  sortedNodes->data[nIndex] - 1];
                i0 = turningFlows->size[1];
                i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &p_emlrtDCI, sp);
                loop_ub = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                  &ed_emlrtBCI, sp);
              }

              i0 = node_prop->nbOutgoingLinks->size[0];
              i1 = (int32_T)sortedNodes->data[nIndex];
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &gd_emlrtBCI, sp);
              if (1.0 > node_prop->nbOutgoingLinks->data[(int32_T)
                  sortedNodes->data[nIndex] - 1]) {
                n_index = 0;
              } else {
                i0 = turningFlows->size[1];
                emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &hd_emlrtBCI, sp);
                ndbl = node_prop->nbOutgoingLinks->data[(int32_T)
                  sortedNodes->data[nIndex] - 1];
                i0 = turningFlows->size[1];
                i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &q_emlrtDCI, sp);
                n_index = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                  &hd_emlrtBCI, sp);
              }

              i0 = node_prop->nbOutgoingLinks->size[0];
              i1 = (int32_T)sortedNodes->data[nIndex];
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &md_emlrtBCI, sp);
              if (1.0 > node_prop->nbOutgoingLinks->data[(int32_T)
                  sortedNodes->data[nIndex] - 1]) {
                n = 0;
              } else {
                i0 = turningFractions->size[1];
                emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &nd_emlrtBCI, sp);
                ndbl = node_prop->nbOutgoingLinks->data[(int32_T)
                  sortedNodes->data[nIndex] - 1];
                i0 = turningFractions->size[1];
                i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &s_emlrtDCI, sp);
                n = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &nd_emlrtBCI,
                  sp);
              }

              i0 = turningFractions->size[0];
              i1 = l_index + 1;
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ld_emlrtBCI, sp);
              i0 = ii->size[0];
              ii->size[0] = n;
              emxEnsureCapacity(sp, (emxArray__common *)ii, i0, (int32_T)sizeof
                                (int32_T), &emlrtRTEI);
              for (i0 = 0; i0 < n; i0++) {
                ii->data[i0] = i0;
              }

              i0 = turningFlows->size[0];
              idx = emlrtDynamicBoundsCheckFastR2012b(l_index + 1, 1, i0,
                &fd_emlrtBCI, sp);
              i0 = b_turningFlows->size[0] * b_turningFlows->size[1];
              b_turningFlows->size[0] = 1;
              b_turningFlows->size[1] = n_index;
              emxEnsureCapacity(sp, (emxArray__common *)b_turningFlows, i0,
                                (int32_T)sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < n_index; i0++) {
                b_turningFlows->data[b_turningFlows->size[0] * i0] =
                  turningFlows->data[(idx + turningFlows->size[0] * i0) - 1];
              }

              i0 = turningFlows->size[0];
              idx = emlrtDynamicBoundsCheckFastR2012b(l_index + 1, 1, i0,
                &cd_emlrtBCI, sp);
              i0 = c_turningFlows->size[0] * c_turningFlows->size[1];
              c_turningFlows->size[0] = 1;
              c_turningFlows->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)c_turningFlows, i0,
                                (int32_T)sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                c_turningFlows->data[c_turningFlows->size[0] * i0] =
                  turningFlows->data[(idx + turningFlows->size[0] * i0) - 1];
              }

              st.site = &p_emlrtRSI;
              rdivide(sp, c_turningFlows, sum(&st, b_turningFlows), b_varargin_2);
              iv12[0] = 1;
              iv12[1] = ii->size[0];
              emlrtSubAssignSizeCheckR2012b(iv12, 2, *(int32_T (*)[2])
                b_varargin_2->size, 2, &r_emlrtECI, sp);
              loop_ub = b_varargin_2->size[1];
              for (i0 = 0; i0 < loop_ub; i0++) {
                turningFractions->data[l_index + turningFractions->size[0] *
                  ii->data[i0]] = b_varargin_2->data[b_varargin_2->size[0] * i0];
              }

              l_index++;
              emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
            }

            i0 = r2->size[0] * r2->size[1];
            r2->size[0] = turningFractions->size[0];
            r2->size[1] = turningFractions->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)r2, i0, (int32_T)sizeof
                              (boolean_T), &emlrtRTEI);
            loop_ub = turningFractions->size[0] * turningFractions->size[1];
            for (i0 = 0; i0 < loop_ub; i0++) {
              r2->data[i0] = muDoubleScalarIsNaN(turningFractions->data[i0]);
            }

            st.site = &q_emlrtRSI;
            eml_li_find(&st, r2, ii);
            idx = turningFractions->size[0];
            i = turningFractions->size[1];
            loop_ub = ii->size[0];
            for (i0 = 0; i0 < loop_ub; i0++) {
              i1 = idx * i;
              i2 = ii->data[i0];
              turningFractions->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                &mi_emlrtBCI, sp) - 1] = 0.0;
            }
          }

          /* NODE MODEL<--------------------------------------------------------------------------------------------------------------------------------------------------------------------------- */
          /* warning: the script for node model is initialized with static */
          /* fixed number of incoming or outgoing links */
          /* be carefull if number of incoming or outgoing links is */
          /* bigger then 7 */
          /* prepocessing input */
          i0 = node_prop->nbIncomingLinks->size[0];
          i1 = (int32_T)sortedNodes->data[nIndex];
          emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &od_emlrtBCI, sp);
          emlrtForLoopVectorCheckR2012b(1.0, 1.0, node_prop->
            nbIncomingLinks->data[(int32_T)sortedNodes->data[nIndex] - 1],
            mxDOUBLE_CLASS, (int32_T)node_prop->nbIncomingLinks->data[(int32_T)
            sortedNodes->data[nIndex] - 1], &ic_emlrtRTEI, sp);
          l_index = 1;
          while (l_index - 1 <= (int32_T)node_prop->nbIncomingLinks->data
                 [(int32_T)sortedNodes->data[nIndex] - 1] - 1) {
            loop_ub = sendingFlow->size[1];
            i0 = sendingFlow->size[0];
            idx = emlrtDynamicBoundsCheckFastR2012b(l_index, 1, i0, &pd_emlrtBCI,
              sp);
            i0 = c_sendingFlow->size[0] * c_sendingFlow->size[1];
            c_sendingFlow->size[0] = 1;
            c_sendingFlow->size[1] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)c_sendingFlow, i0,
                              (int32_T)sizeof(real_T), &emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              c_sendingFlow->data[c_sendingFlow->size[0] * i0] =
                sendingFlow->data[(idx + sendingFlow->size[0] * i0) - 1];
            }

            st.site = &r_emlrtRSI;
            mtmp = sum(&st, c_sendingFlow);
            i0 = incomingLinks->size[0];
            ndbl = incomingLinks->data[emlrtDynamicBoundsCheckFastR2012b(l_index,
              1, i0, &um_emlrtBCI, sp) - 1];
            i0 = links->capacity->size[0];
            i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &t_emlrtDCI, sp);
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &qd_emlrtBCI, sp);
            i0 = tot_sendingFlow->size[0];
            tot_sendingFlow->data[emlrtDynamicBoundsCheckFastR2012b(l_index, 1,
              i0, &vm_emlrtBCI, sp) - 1] = muDoubleScalarMin(mtmp,
              links->capacity->data[(int32_T)incomingLinks->data[l_index - 1] -
              1] * dt);
            i0 = temp_capacities->size[0];
            i1 = links->capacity->size[0];
            i2 = incomingLinks->size[0];
            ndbl = incomingLinks->data[emlrtDynamicBoundsCheckFastR2012b(l_index,
              1, i2, &ym_emlrtBCI, sp) - 1];
            i2 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &rd_emlrtDCI, sp);
            temp_capacities->data[emlrtDynamicBoundsCheckFastR2012b(l_index, 1,
              i0, &wm_emlrtBCI, sp) - 1] = links->capacity->
              data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &xm_emlrtBCI, sp)
              - 1];
            l_index++;
            emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
          }

          /* capacity proportional */
          /* note that the node model can be further optimized to work faster */
          /* might use the dynamic version (it is a bit slower though) */
          /* or copy model here and make it destination based (not hard) */
          i0 = node_prop->nbIncomingLinks->size[0];
          i1 = (int32_T)sortedNodes->data[nIndex];
          emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &rd_emlrtBCI, sp);
          if (1.0 > node_prop->nbIncomingLinks->data[(int32_T)sortedNodes->
              data[nIndex] - 1]) {
            loop_ub = 0;
          } else {
            i0 = tot_sendingFlow->size[0];
            emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &sd_emlrtBCI, sp);
            ndbl = node_prop->nbIncomingLinks->data[(int32_T)sortedNodes->
              data[nIndex] - 1];
            i0 = tot_sendingFlow->size[0];
            i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &u_emlrtDCI, sp);
            loop_ub = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &sd_emlrtBCI,
              sp);
          }

          emlrtVectorVectorIndexCheckR2012b(tot_sendingFlow->size[0], 1, 1,
            loop_ub, &s_emlrtECI, sp);
          i0 = node_prop->nbIncomingLinks->size[0];
          i1 = (int32_T)sortedNodes->data[nIndex];
          emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &td_emlrtBCI, sp);
          if (1.0 > node_prop->nbIncomingLinks->data[(int32_T)sortedNodes->
              data[nIndex] - 1]) {
            n_index = 0;
          } else {
            i0 = turningFractions->size[0];
            emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &ud_emlrtBCI, sp);
            ndbl = node_prop->nbIncomingLinks->data[(int32_T)sortedNodes->
              data[nIndex] - 1];
            i0 = turningFractions->size[0];
            i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &v_emlrtDCI, sp);
            n_index = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ud_emlrtBCI,
              sp);
          }

          i0 = node_prop->nbOutgoingLinks->size[0];
          i1 = (int32_T)sortedNodes->data[nIndex];
          emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &vd_emlrtBCI, sp);
          if (1.0 > node_prop->nbOutgoingLinks->data[(int32_T)sortedNodes->
              data[nIndex] - 1]) {
            n = 0;
          } else {
            i0 = turningFractions->size[1];
            emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &wd_emlrtBCI, sp);
            ndbl = node_prop->nbOutgoingLinks->data[(int32_T)sortedNodes->
              data[nIndex] - 1];
            i0 = turningFractions->size[1];
            i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &w_emlrtDCI, sp);
            n = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &wd_emlrtBCI, sp);
          }

          i0 = node_prop->nbOutgoingLinks->size[0];
          i1 = (int32_T)sortedNodes->data[nIndex];
          emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &xd_emlrtBCI, sp);
          if (1.0 > node_prop->nbOutgoingLinks->data[(int32_T)sortedNodes->
              data[nIndex] - 1]) {
            idx = 0;
          } else {
            i0 = receivingFlow->size[0];
            emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &yd_emlrtBCI, sp);
            ndbl = node_prop->nbOutgoingLinks->data[(int32_T)sortedNodes->
              data[nIndex] - 1];
            i0 = receivingFlow->size[0];
            i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &x_emlrtDCI, sp);
            idx = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &yd_emlrtBCI, sp);
          }

          emlrtVectorVectorIndexCheckR2012b(receivingFlow->size[0], 1, 1, idx,
            &t_emlrtECI, sp);
          i0 = node_prop->nbIncomingLinks->size[0];
          i1 = (int32_T)sortedNodes->data[nIndex];
          emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ae_emlrtBCI, sp);
          if (1.0 > node_prop->nbIncomingLinks->data[(int32_T)sortedNodes->
              data[nIndex] - 1]) {
            i = 0;
          } else {
            i0 = temp_capacities->size[0];
            emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &be_emlrtBCI, sp);
            ndbl = node_prop->nbIncomingLinks->data[(int32_T)sortedNodes->
              data[nIndex] - 1];
            i0 = temp_capacities->size[0];
            i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &y_emlrtDCI, sp);
            i = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &be_emlrtBCI, sp);
          }

          emlrtVectorVectorIndexCheckR2012b(temp_capacities->size[0], 1, 1, i,
            &u_emlrtECI, sp);
          i0 = b_tot_sendingFlow->size[0];
          b_tot_sendingFlow->size[0] = loop_ub;
          emxEnsureCapacity(sp, (emxArray__common *)b_tot_sendingFlow, i0,
                            (int32_T)sizeof(real_T), &emlrtRTEI);
          for (i0 = 0; i0 < loop_ub; i0++) {
            b_tot_sendingFlow->data[i0] = tot_sendingFlow->data[i0];
          }

          i0 = b_turningFractions->size[0] * b_turningFractions->size[1];
          b_turningFractions->size[0] = n_index;
          b_turningFractions->size[1] = n;
          emxEnsureCapacity(sp, (emxArray__common *)b_turningFractions, i0,
                            (int32_T)sizeof(real_T), &emlrtRTEI);
          for (i0 = 0; i0 < n; i0++) {
            for (i1 = 0; i1 < n_index; i1++) {
              b_turningFractions->data[i1 + b_turningFractions->size[0] * i0] =
                turningFractions->data[i1 + turningFractions->size[0] * i0];
            }
          }

          i0 = b_receivingFlow->size[0];
          b_receivingFlow->size[0] = idx;
          emxEnsureCapacity(sp, (emxArray__common *)b_receivingFlow, i0,
                            (int32_T)sizeof(real_T), &emlrtRTEI);
          for (i0 = 0; i0 < idx; i0++) {
            b_receivingFlow->data[i0] = receivingFlow->data[i0];
          }

          i0 = b_temp_capacities->size[0];
          b_temp_capacities->size[0] = i;
          emxEnsureCapacity(sp, (emxArray__common *)b_temp_capacities, i0,
                            (int32_T)sizeof(real_T), &emlrtRTEI);
          for (i0 = 0; i0 < i; i0++) {
            b_temp_capacities->data[i0] = temp_capacities->data[i0];
          }

          i0 = node_prop->nbIncomingLinks->size[0];
          i1 = (int32_T)sortedNodes->data[nIndex];
          i2 = node_prop->nbOutgoingLinks->size[0];
          i3 = (int32_T)sortedNodes->data[nIndex];
          st.site = &s_emlrtRSI;
          NodeModel(&st, node_prop->nbIncomingLinks->
                    data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                     &wi_emlrtBCI, sp) - 1], node_prop->nbOutgoingLinks->
                    data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
                     &xi_emlrtBCI, sp) - 1], b_tot_sendingFlow,
                    b_turningFractions, b_receivingFlow, b_temp_capacities,
                    result_TurnFlow);
          st.site = &t_emlrtRSI;
          c_sum(&st, result_TurnFlow, result_sendingFlow);

          /* can be that turningFractions need to be adjusted because */
          /* the sendingflow is less turning fractions might change a */
          /* bit only with small update steps (over multiple time */
          /* intervals linearization) */
          /* TRANSFER FLOWS && ACTIVATION OF NODES FOR NEXT ITERATION<-------------------------------------------------------------------------- */
          /* does the node need updating? */
          act_bool = false;
          i0 = node_prop->nbOutgoingLinks->size[0];
          i1 = (int32_T)sortedNodes->data[nIndex];
          emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &we_emlrtBCI, sp);
          if (1.0 > node_prop->nbOutgoingLinks->data[(int32_T)sortedNodes->
              data[nIndex] - 1]) {
            loop_ub = 0;
          } else {
            i0 = temp_receivingFlow->size[0];
            emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &xe_emlrtBCI, sp);
            ndbl = node_prop->nbOutgoingLinks->data[(int32_T)sortedNodes->
              data[nIndex] - 1];
            i0 = temp_receivingFlow->size[0];
            i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &fb_emlrtDCI, sp);
            loop_ub = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &xe_emlrtBCI,
              sp);
          }

          n_index = temp_receivingFlow->size[1];
          for (i0 = 0; i0 < n_index; i0++) {
            for (i1 = 0; i1 < loop_ub; i1++) {
              temp_receivingFlow->data[i1 + temp_receivingFlow->size[0] * i0] =
                0.0;
            }
          }

          /* first handle the incoming links */
          i0 = node_prop->positionFirstTF->size[0];
          i1 = (int32_T)sortedNodes->data[nIndex];
          tf_index = node_prop->positionFirstTF->
            data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &yi_emlrtBCI, sp)
            - 1] - 1.0;
          i0 = node_prop->nbIncomingLinks->size[0];
          i1 = (int32_T)sortedNodes->data[nIndex];
          emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ce_emlrtBCI, sp);
          emlrtForLoopVectorCheckR2012b(1.0, 1.0, node_prop->
            nbIncomingLinks->data[(int32_T)sortedNodes->data[nIndex] - 1],
            mxDOUBLE_CLASS, (int32_T)node_prop->nbIncomingLinks->data[(int32_T)
            sortedNodes->data[nIndex] - 1], &jc_emlrtRTEI, sp);
          l_index = 0;
          while (l_index <= (int32_T)node_prop->nbIncomingLinks->data[(int32_T)
                 sortedNodes->data[nIndex] - 1] - 1) {
            tf_index++;

            /* look for the active incoming links (links that send flow) */
            loop_ub = sendingFlow->size[1];
            i0 = sendingFlow->size[0];
            idx = emlrtDynamicBoundsCheckFastR2012b(l_index + 1, 1, i0,
              &de_emlrtBCI, sp);
            i0 = f_sendingFlow->size[0] * f_sendingFlow->size[1];
            f_sendingFlow->size[0] = 1;
            f_sendingFlow->size[1] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)f_sendingFlow, i0,
                              (int32_T)sizeof(boolean_T), &emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              f_sendingFlow->data[f_sendingFlow->size[0] * i0] =
                (sendingFlow->data[(idx + sendingFlow->size[0] * i0) - 1] > 0.0);
            }

            st.site = &u_emlrtRSI;
            if (b_any(&st, f_sendingFlow)) {
              /* check congestion */
              i0 = result_sendingFlow->size[0];
              i1 = tot_sendingFlow->size[0];
              b_guard1 = false;
              if (result_sendingFlow->data[emlrtDynamicBoundsCheckFastR2012b
                  (l_index + 1, 1, i0, &cl_emlrtBCI, sp) - 1] <
                  tot_sendingFlow->data[emlrtDynamicBoundsCheckFastR2012b
                  (l_index + 1, 1, i1, &dl_emlrtBCI, sp) - 1]) {
                b_guard1 = true;
              } else {
                i0 = result_sendingFlow->size[0];
                i1 = temp_capacities->size[0];
                if (result_sendingFlow->data[emlrtDynamicBoundsCheckFastR2012b
                    (l_index + 1, 1, i0, &el_emlrtBCI, sp) - 1] ==
                    temp_capacities->data[emlrtDynamicBoundsCheckFastR2012b
                    (l_index + 1, 1, i1, &fl_emlrtBCI, sp) - 1] * dt) {
                  b_guard1 = true;
                } else {
                  i0 = con_down->size[0];
                  i1 = incomingLinks->size[0];
                  ndbl = incomingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                    (l_index + 1, 1, i1, &hl_emlrtBCI, sp) - 1];
                  i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &fd_emlrtDCI,
                    sp);
                  i2 = con_down->size[1];
                  i3 = (int32_T)(2.0 + (real_T)t);
                  con_down->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                    &gl_emlrtBCI, sp) + con_down->size[0] *
                                  (emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
                    &il_emlrtBCI, sp) - 1)) - 1] = false;
                  i0 = temp_sendingFlow->size[0];
                  i1 = l_index + 1;
                  emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &je_emlrtBCI, sp);
                  loop_ub = temp_sendingFlow->size[1];
                  i0 = ii->size[0];
                  ii->size[0] = loop_ub;
                  emxEnsureCapacity(sp, (emxArray__common *)ii, i0, (int32_T)
                                    sizeof(int32_T), &emlrtRTEI);
                  for (i0 = 0; i0 < loop_ub; i0++) {
                    ii->data[i0] = i0;
                  }

                  i0 = sendingFlow->size[0];
                  i1 = l_index + 1;
                  emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ie_emlrtBCI, sp);
                  iv13[0] = 1;
                  iv13[1] = ii->size[0];
                  loop_ub = sendingFlow->size[1];
                  i0 = h_sendingFlow->size[0] * h_sendingFlow->size[1];
                  h_sendingFlow->size[0] = 1;
                  h_sendingFlow->size[1] = loop_ub;
                  emxEnsureCapacity(sp, (emxArray__common *)h_sendingFlow, i0,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  for (i0 = 0; i0 < loop_ub; i0++) {
                    h_sendingFlow->data[h_sendingFlow->size[0] * i0] =
                      sendingFlow->data[l_index + sendingFlow->size[0] * i0];
                  }

                  for (i0 = 0; i0 < 2; i0++) {
                    b_minval[i0] = h_sendingFlow->size[i0];
                  }

                  emlrtSubAssignSizeCheckR2012b(iv13, 2, b_minval, 2,
                    &w_emlrtECI, sp);
                  loop_ub = sendingFlow->size[1] - 1;
                  for (i0 = 0; i0 <= loop_ub; i0++) {
                    temp_sendingFlow->data[l_index + temp_sendingFlow->size[0] *
                      ii->data[i0]] = sendingFlow->data[l_index +
                      sendingFlow->size[0] * i0];
                  }
                }
              }

              if (b_guard1) {
                i0 = con_down->size[0];
                i1 = incomingLinks->size[0];
                ndbl = incomingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                  (l_index + 1, 1, i1, &kl_emlrtBCI, sp) - 1];
                i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &gd_emlrtDCI, sp);
                i2 = con_down->size[1];
                i3 = (int32_T)(2.0 + (real_T)t);
                con_down->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                  &jl_emlrtBCI, sp) + con_down->size[0] *
                                (emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
                  &ll_emlrtBCI, sp) - 1)) - 1] = true;

                /* find the sending flow for each destination */
                /* using FIFO rules distribution is proportional */
                i0 = temp_sendingFlow->size[0];
                i1 = l_index + 1;
                emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &he_emlrtBCI, sp);
                loop_ub = temp_sendingFlow->size[1];
                i0 = ii->size[0];
                ii->size[0] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)ii, i0, (int32_T)
                                  sizeof(int32_T), &emlrtRTEI);
                for (i0 = 0; i0 < loop_ub; i0++) {
                  ii->data[i0] = i0;
                }

                i0 = sendingFlow->size[0];
                i1 = l_index + 1;
                emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ee_emlrtBCI, sp);
                loop_ub = sendingFlow->size[1];
                i0 = sendingFlow->size[0];
                idx = emlrtDynamicBoundsCheckFastR2012b(l_index + 1, 1, i0,
                  &fe_emlrtBCI, sp);
                i0 = e_sendingFlow->size[0] * e_sendingFlow->size[1];
                e_sendingFlow->size[0] = 1;
                e_sendingFlow->size[1] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)e_sendingFlow, i0,
                                  (int32_T)sizeof(real_T), &emlrtRTEI);
                for (i0 = 0; i0 < loop_ub; i0++) {
                  e_sendingFlow->data[e_sendingFlow->size[0] * i0] =
                    sendingFlow->data[(idx + sendingFlow->size[0] * i0) - 1];
                }

                st.site = &v_emlrtRSI;
                mtmp = sum(&st, e_sendingFlow);
                i0 = result_sendingFlow->size[0];
                i1 = l_index + 1;
                emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ge_emlrtBCI, sp);
                loop_ub = sendingFlow->size[1];
                i0 = d_sendingFlow->size[0] * d_sendingFlow->size[1];
                d_sendingFlow->size[0] = 1;
                d_sendingFlow->size[1] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)d_sendingFlow, i0,
                                  (int32_T)sizeof(real_T), &emlrtRTEI);
                for (i0 = 0; i0 < loop_ub; i0++) {
                  d_sendingFlow->data[d_sendingFlow->size[0] * i0] =
                    sendingFlow->data[l_index + sendingFlow->size[0] * i0];
                }

                rdivide(sp, d_sendingFlow, mtmp, b_varargin_2);
                i0 = b_varargin_2->size[0] * b_varargin_2->size[1];
                b_varargin_2->size[0] = 1;
                emxEnsureCapacity(sp, (emxArray__common *)b_varargin_2, i0,
                                  (int32_T)sizeof(real_T), &emlrtRTEI);
                idx = b_varargin_2->size[0];
                i = b_varargin_2->size[1];
                mtmp = result_sendingFlow->data[l_index];
                loop_ub = idx * i;
                for (i0 = 0; i0 < loop_ub; i0++) {
                  b_varargin_2->data[i0] *= mtmp;
                }

                iv14[0] = 1;
                iv14[1] = ii->size[0];
                emlrtSubAssignSizeCheckR2012b(iv14, 2, *(int32_T (*)[2])
                  b_varargin_2->size, 2, &v_emlrtECI, sp);
                loop_ub = b_varargin_2->size[1];
                for (i0 = 0; i0 < loop_ub; i0++) {
                  temp_sendingFlow->data[l_index + temp_sendingFlow->size[0] *
                    ii->data[i0]] = b_varargin_2->data[b_varargin_2->size[0] *
                    i0];
                }
              }

              /* find out if change to the node change is */
              /* significant fot this incoming link */
              i0 = incomingLinks->size[0];
              ndbl = incomingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                (l_index + 1, 1, i0, &ml_emlrtBCI, sp) - 1];
              i0 = cvn_down->size[0];
              i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &bb_emlrtDCI, sp);
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &me_emlrtBCI, sp);
              i0 = cvn_down->size[2];
              i1 = (int32_T)((2.0 + (real_T)t) - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ne_emlrtBCI, sp);
              i0 = temp_sendingFlow->size[0];
              i1 = l_index + 1;
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &oe_emlrtBCI, sp);
              loop_ub = cvn_down->size[1];
              n = (int32_T)incomingLinks->data[l_index];
              i0 = k_cvn_down->size[0] * k_cvn_down->size[1];
              k_cvn_down->size[0] = 1;
              k_cvn_down->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)k_cvn_down, i0, (int32_T)
                                sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                k_cvn_down->data[k_cvn_down->size[0] * i0] = cvn_down->data[((n
                  + cvn_down->size[0] * i0) + cvn_down->size[0] * cvn_down->
                  size[1] * ((int32_T)((2.0 + (real_T)t) - 1.0) - 1)) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                r_cvn_down[i0] = k_cvn_down->size[i0];
              }

              loop_ub = temp_sendingFlow->size[1];
              i0 = g_temp_sendingFlow->size[0] * g_temp_sendingFlow->size[1];
              g_temp_sendingFlow->size[0] = 1;
              g_temp_sendingFlow->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)g_temp_sendingFlow, i0,
                                (int32_T)sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                g_temp_sendingFlow->data[g_temp_sendingFlow->size[0] * i0] =
                  temp_sendingFlow->data[l_index + temp_sendingFlow->size[0] *
                  i0];
              }

              for (i0 = 0; i0 < 2; i0++) {
                b_minval[i0] = g_temp_sendingFlow->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(r_cvn_down, b_minval, &x_emlrtECI, sp);
              i0 = incomingLinks->size[0];
              ndbl = incomingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                (l_index + 1, 1, i0, &nl_emlrtBCI, sp) - 1];
              i0 = cvn_down->size[0];
              i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &ab_emlrtDCI, sp);
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ke_emlrtBCI, sp);
              i0 = cvn_down->size[2];
              i1 = (int32_T)(2.0 + (real_T)t);
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &le_emlrtBCI, sp);
              loop_ub = cvn_down->size[1];
              n = (int32_T)incomingLinks->data[l_index];
              i0 = l_cvn_down->size[0] * l_cvn_down->size[1];
              l_cvn_down->size[0] = 1;
              l_cvn_down->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)l_cvn_down, i0, (int32_T)
                                sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                l_cvn_down->data[l_cvn_down->size[0] * i0] = cvn_down->data[((n
                  + cvn_down->size[0] * i0) + cvn_down->size[0] * cvn_down->
                  size[1] * (t + 1)) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                r_cvn_down[i0] = l_cvn_down->size[i0];
              }

              loop_ub = cvn_down->size[1];
              n = (int32_T)incomingLinks->data[l_index];
              i0 = m_cvn_down->size[0] * m_cvn_down->size[1];
              m_cvn_down->size[0] = 1;
              m_cvn_down->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)m_cvn_down, i0, (int32_T)
                                sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                m_cvn_down->data[m_cvn_down->size[0] * i0] = cvn_down->data[((n
                  + cvn_down->size[0] * i0) + cvn_down->size[0] * cvn_down->
                  size[1] * ((int32_T)((2.0 + (real_T)t) - 1.0) - 1)) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                b_minval[i0] = m_cvn_down->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(r_cvn_down, b_minval, &y_emlrtECI, sp);
              loop_ub = cvn_down->size[1];
              n = (int32_T)incomingLinks->data[l_index];
              i = (int32_T)incomingLinks->data[l_index];
              i0 = f_cvn_down->size[0] * f_cvn_down->size[1];
              f_cvn_down->size[0] = 1;
              f_cvn_down->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)f_cvn_down, i0, (int32_T)
                                sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                f_cvn_down->data[f_cvn_down->size[0] * i0] = cvn_down->data[((n
                  + cvn_down->size[0] * i0) + cvn_down->size[0] * cvn_down->
                  size[1] * (t + 1)) - 1] - (cvn_down->data[((i + cvn_down->
                  size[0] * i0) + cvn_down->size[0] * cvn_down->size[1] *
                  ((int32_T)((2.0 + (real_T)t) - 1.0) - 1)) - 1] +
                  temp_sendingFlow->data[l_index + temp_sendingFlow->size[0] *
                  i0]);
              }

              b_abs(sp, f_cvn_down, b_varargin_2);
              st.site = &w_emlrtRSI;
              overflow = (sum(&st, b_varargin_2) > 1.0E-8);
              act_bool = (act_bool || overflow);

              /* check if upstream moving change needs to be calculated */
              if (overflow) {
                i0 = links->vw_index->size[0];
                i1 = incomingLinks->size[0];
                ndbl = incomingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                  (l_index + 1, 1, i1, &pl_emlrtBCI, sp) - 1];
                i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &hd_emlrtDCI, sp);
                if (links->vw_index->data[emlrtDynamicBoundsCheckFastR2012b(i1,
                     1, i0, &ol_emlrtBCI, sp) - 1] == -1.0) {
                  i0 = nodes2update->size[0];
                  i1 = links->fromNode->size[0];
                  i2 = incomingLinks->size[0];
                  ndbl = incomingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                    (l_index + 1, 1, i2, &am_emlrtBCI, sp) - 1];
                  i2 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &ld_emlrtDCI,
                    sp);
                  ndbl = links->fromNode->data[emlrtDynamicBoundsCheckFastR2012b
                    (i2, 1, i1, &yl_emlrtBCI, sp) - 1];
                  i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &ld_emlrtDCI,
                    sp);
                  i2 = nodes2update->size[1];
                  i3 = (int32_T)(2.0 + (real_T)t);
                  nodes2update->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1,
                    i0, &xl_emlrtBCI, sp) + nodes2update->size[0] *
                                      (emlrtDynamicBoundsCheckFastR2012b(i3, 1,
                    i2, &bm_emlrtBCI, sp) - 1)) - 1] = true;
                  i0 = incomingLinks->size[0];
                  ndbl = incomingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                    (l_index + 1, 1, i0, &cm_emlrtBCI, sp) - 1];
                  i0 = cvn_down->size[0];
                  i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &db_emlrtDCI,
                    sp);
                  emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &re_emlrtBCI, sp);
                  i0 = cvn_down->size[2];
                  i1 = (int32_T)((2.0 + (real_T)t) - 1.0);
                  emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &se_emlrtBCI, sp);
                  i0 = temp_sendingFlow->size[0];
                  i1 = l_index + 1;
                  emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &te_emlrtBCI, sp);
                  loop_ub = cvn_down->size[1];
                  n = (int32_T)incomingLinks->data[l_index];
                  i0 = n_cvn_down->size[0] * n_cvn_down->size[1];
                  n_cvn_down->size[0] = 1;
                  n_cvn_down->size[1] = loop_ub;
                  emxEnsureCapacity(sp, (emxArray__common *)n_cvn_down, i0,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  for (i0 = 0; i0 < loop_ub; i0++) {
                    n_cvn_down->data[n_cvn_down->size[0] * i0] = cvn_down->data
                      [((n + cvn_down->size[0] * i0) + cvn_down->size[0] *
                        cvn_down->size[1] * ((int32_T)((2.0 + (real_T)t) - 1.0)
                         - 1)) - 1];
                  }

                  for (i0 = 0; i0 < 2; i0++) {
                    r_cvn_down[i0] = n_cvn_down->size[i0];
                  }

                  loop_ub = temp_sendingFlow->size[1];
                  i0 = h_temp_sendingFlow->size[0] * h_temp_sendingFlow->size[1];
                  h_temp_sendingFlow->size[0] = 1;
                  h_temp_sendingFlow->size[1] = loop_ub;
                  emxEnsureCapacity(sp, (emxArray__common *)h_temp_sendingFlow,
                                    i0, (int32_T)sizeof(real_T), &emlrtRTEI);
                  for (i0 = 0; i0 < loop_ub; i0++) {
                    h_temp_sendingFlow->data[h_temp_sendingFlow->size[0] * i0] =
                      temp_sendingFlow->data[l_index + temp_sendingFlow->size[0]
                      * i0];
                  }

                  for (i0 = 0; i0 < 2; i0++) {
                    b_minval[i0] = h_temp_sendingFlow->size[i0];
                  }

                  emlrtSizeEqCheck2DFastR2012b(r_cvn_down, b_minval,
                    &ab_emlrtECI, sp);
                  i0 = incomingLinks->size[0];
                  ndbl = incomingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                    (l_index + 1, 1, i0, &dm_emlrtBCI, sp) - 1];
                  i0 = cvn_down->size[0];
                  i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &cb_emlrtDCI,
                    sp);
                  emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &pe_emlrtBCI, sp);
                  i0 = cvn_down->size[2];
                  i1 = (int32_T)(2.0 + (real_T)t);
                  emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &qe_emlrtBCI, sp);
                  loop_ub = cvn_down->size[1];
                  n = (int32_T)incomingLinks->data[l_index];
                  i0 = o_cvn_down->size[0] * o_cvn_down->size[1];
                  o_cvn_down->size[0] = 1;
                  o_cvn_down->size[1] = loop_ub;
                  emxEnsureCapacity(sp, (emxArray__common *)o_cvn_down, i0,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  for (i0 = 0; i0 < loop_ub; i0++) {
                    o_cvn_down->data[o_cvn_down->size[0] * i0] = cvn_down->data
                      [((n + cvn_down->size[0] * i0) + cvn_down->size[0] *
                        cvn_down->size[1] * (t + 1)) - 1];
                  }

                  for (i0 = 0; i0 < 2; i0++) {
                    r_cvn_down[i0] = o_cvn_down->size[i0];
                  }

                  loop_ub = cvn_down->size[1];
                  n = (int32_T)incomingLinks->data[l_index];
                  i0 = p_cvn_down->size[0] * p_cvn_down->size[1];
                  p_cvn_down->size[0] = 1;
                  p_cvn_down->size[1] = loop_ub;
                  emxEnsureCapacity(sp, (emxArray__common *)p_cvn_down, i0,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  for (i0 = 0; i0 < loop_ub; i0++) {
                    p_cvn_down->data[p_cvn_down->size[0] * i0] = cvn_down->data
                      [((n + cvn_down->size[0] * i0) + cvn_down->size[0] *
                        cvn_down->size[1] * ((int32_T)((2.0 + (real_T)t) - 1.0)
                         - 1)) - 1];
                  }

                  for (i0 = 0; i0 < 2; i0++) {
                    b_minval[i0] = p_cvn_down->size[i0];
                  }

                  emlrtSizeEqCheck2DFastR2012b(r_cvn_down, b_minval,
                    &bb_emlrtECI, sp);
                  loop_ub = cvn_down->size[1];
                  n = (int32_T)incomingLinks->data[l_index];
                  i = (int32_T)incomingLinks->data[l_index];
                  i0 = e_cvn_down->size[0] * e_cvn_down->size[1];
                  e_cvn_down->size[0] = 1;
                  e_cvn_down->size[1] = loop_ub;
                  emxEnsureCapacity(sp, (emxArray__common *)e_cvn_down, i0,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  for (i0 = 0; i0 < loop_ub; i0++) {
                    e_cvn_down->data[e_cvn_down->size[0] * i0] = cvn_down->data
                      [((n + cvn_down->size[0] * i0) + cvn_down->size[0] *
                        cvn_down->size[1] * (t + 1)) - 1] - (cvn_down->data[((i
                      + cvn_down->size[0] * i0) + cvn_down->size[0] *
                      cvn_down->size[1] * ((int32_T)((2.0 + (real_T)t) - 1.0) -
                      1)) - 1] + temp_sendingFlow->data[l_index +
                      temp_sendingFlow->size[0] * i0]);
                  }

                  b_abs(sp, e_cvn_down, b_varargin_2);
                  i0 = deltaChange->size[0];
                  i1 = links->fromNode->size[0];
                  i2 = incomingLinks->size[0];
                  ndbl = incomingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                    (l_index + 1, 1, i2, &gm_emlrtBCI, sp) - 1];
                  i2 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &nd_emlrtDCI,
                    sp);
                  ndbl = links->fromNode->data[emlrtDynamicBoundsCheckFastR2012b
                    (i2, 1, i1, &fm_emlrtBCI, sp) - 1];
                  i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &md_emlrtDCI,
                    sp);
                  i2 = deltaChange->size[0];
                  i3 = links->fromNode->size[0];
                  loop_ub = incomingLinks->size[0];
                  ndbl = incomingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                    (l_index + 1, 1, loop_ub, &jm_emlrtBCI, sp) - 1];
                  loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(ndbl,
                    &pd_emlrtDCI, sp);
                  ndbl = links->fromNode->data[emlrtDynamicBoundsCheckFastR2012b
                    (loop_ub, 1, i3, &im_emlrtBCI, sp) - 1];
                  i3 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &od_emlrtDCI,
                    sp);
                  loop_ub = links->vw_ratio->size[0];
                  i4 = incomingLinks->size[0];
                  ndbl = incomingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                    (l_index + 1, 1, i4, &lm_emlrtBCI, sp) - 1];
                  i4 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &qd_emlrtDCI,
                    sp);
                  st.site = &x_emlrtRSI;
                  deltaChange->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                    &em_emlrtBCI, sp) - 1] = deltaChange->
                    data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
                    &hm_emlrtBCI, sp) - 1] + links->vw_ratio->
                    data[emlrtDynamicBoundsCheckFastR2012b(i4, 1, loop_ub,
                    &km_emlrtBCI, sp) - 1] * sum(&st, b_varargin_2);
                } else {
                  st.site = &y_emlrtRSI;
                  i0 = links->vw_index->size[0];
                  i1 = incomingLinks->size[0];
                  ndbl = incomingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                    (l_index + 1, 1, i1, &rl_emlrtBCI, &st) - 1];
                  i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &id_emlrtDCI,
                    &st);
                  a = ((2.0 + (real_T)t) - links->vw_index->
                       data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                        &ql_emlrtBCI, &st) - 1]) - 1.0;
                  i0 = links->vw_index->size[0];
                  i1 = incomingLinks->size[0];
                  ndbl = incomingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                    (l_index + 1, 1, i1, &tl_emlrtBCI, &st) - 1];
                  i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &jd_emlrtDCI,
                    &st);
                  mtmp = (2.0 + (real_T)t) - links->vw_index->
                    data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                    &sl_emlrtBCI, &st) - 1];
                  b_st.site = &gc_emlrtRSI;
                  c_st.site = &hc_emlrtRSI;
                  if (muDoubleScalarIsNaN(a) || muDoubleScalarIsNaN(mtmp)) {
                    n = 0;
                    pl = rtNaN;
                    apnd = mtmp;
                    overflow = false;
                  } else if (mtmp < a) {
                    n = -1;
                    pl = a;
                    apnd = mtmp;
                    overflow = false;
                  } else if (muDoubleScalarIsInf(a) || muDoubleScalarIsInf(mtmp))
                  {
                    n = 0;
                    pl = rtNaN;
                    apnd = mtmp;
                    overflow = !(a == mtmp);
                  } else {
                    pl = a;
                    ndbl = muDoubleScalarFloor((mtmp - a) + 0.5);
                    apnd = a + ndbl;
                    cdiff = apnd - mtmp;
                    absa = muDoubleScalarAbs(a);
                    absb = muDoubleScalarAbs(mtmp);
                    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 *
                        muDoubleScalarMax(absa, absb)) {
                      ndbl++;
                      apnd = mtmp;
                    } else if (cdiff > 0.0) {
                      apnd = a + (ndbl - 1.0);
                    } else {
                      ndbl++;
                    }

                    overflow = (2.147483647E+9 < ndbl);
                    if (ndbl >= 0.0) {
                      n = (int32_T)ndbl - 1;
                    } else {
                      n = -1;
                    }
                  }

                  d_st.site = &ic_emlrtRSI;
                  if (!overflow) {
                  } else {
                    h_y = NULL;
                    m0 = emlrtCreateCharArray(2, iv15);
                    for (i = 0; i < 21; i++) {
                      cv4[i] = cv5[i];
                    }

                    emlrtInitCharArrayR2013a(&d_st, 21, m0, cv4);
                    emlrtAssign(&h_y, m0);
                    f_st.site = &le_emlrtRSI;
                    h_st.site = &ue_emlrtRSI;
                    error(&f_st, message(&h_st, h_y, &p_emlrtMCI), &q_emlrtMCI);
                  }

                  i0 = b_varargin_2->size[0] * b_varargin_2->size[1];
                  b_varargin_2->size[0] = 1;
                  b_varargin_2->size[1] = n + 1;
                  emxEnsureCapacity(&c_st, (emxArray__common *)b_varargin_2, i0,
                                    (int32_T)sizeof(real_T), &d_emlrtRTEI);
                  if (n + 1 > 0) {
                    b_varargin_2->data[0] = pl;
                    if (n + 1 > 1) {
                      b_varargin_2->data[n] = apnd;
                      i0 = n + (n < 0);
                      if (i0 >= 0) {
                        idx = (int32_T)((uint32_T)i0 >> 1);
                      } else {
                        idx = ~(int32_T)((uint32_T)~i0 >> 1);
                      }

                      d_st.site = &jc_emlrtRSI;
                      for (i = 1; i < idx; i++) {
                        b_varargin_2->data[i] = pl + (real_T)i;
                        b_varargin_2->data[n - i] = apnd - (real_T)i;
                      }

                      if (idx << 1 == n) {
                        b_varargin_2->data[idx] = (pl + apnd) / 2.0;
                      } else {
                        b_varargin_2->data[idx] = pl + (real_T)idx;
                        b_varargin_2->data[idx + 1] = apnd - (real_T)idx;
                      }
                    }
                  }

                  st.site = &y_emlrtRSI;
                  b_st.site = &kc_emlrtRSI;
                  c_st.site = &mb_emlrtRSI;
                  d_st.site = &lc_emlrtRSI;
                  for (i0 = 0; i0 < 2; i0++) {
                    uv0[i0] = (uint32_T)b_varargin_2->size[i0];
                  }

                  i0 = minval->size[0] * minval->size[1];
                  minval->size[0] = 1;
                  minval->size[1] = (int32_T)uv0[1];
                  emxEnsureCapacity(&d_st, (emxArray__common *)minval, i0,
                                    (int32_T)sizeof(real_T), &c_emlrtRTEI);
                  f_st.site = &mc_emlrtRSI;
                  if (1 > (int32_T)uv0[1]) {
                    overflow = false;
                  } else {
                    overflow = ((int32_T)uv0[1] > 2147483646);
                  }

                  if (overflow) {
                    g_st.site = &qb_emlrtRSI;
                    check_forloop_overflow_error(&g_st);
                  }

                  for (i = 0; i + 1 <= (int32_T)uv0[1]; i++) {
                    minval->data[i] = muDoubleScalarMin(totT + 1.0,
                      b_varargin_2->data[i]);
                  }

                  i0 = ii->size[0];
                  ii->size[0] = minval->size[1];
                  emxEnsureCapacity(sp, (emxArray__common *)ii, i0, (int32_T)
                                    sizeof(int32_T), &emlrtRTEI);
                  loop_ub = minval->size[1];
                  for (i0 = 0; i0 < loop_ub; i0++) {
                    i1 = nodes2update->size[1];
                    ndbl = minval->data[minval->size[0] * i0];
                    i2 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &kd_emlrtDCI,
                      sp);
                    ii->data[i0] = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                      &ul_emlrtBCI, sp);
                  }

                  idx = nodes2update->size[0];
                  i0 = links->fromNode->size[0];
                  i1 = incomingLinks->size[0];
                  ndbl = incomingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                    (l_index + 1, 1, i1, &wl_emlrtBCI, sp) - 1];
                  i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &eb_emlrtDCI,
                    sp);
                  ndbl = links->fromNode->data[emlrtDynamicBoundsCheckFastR2012b
                    (i1, 1, i0, &vl_emlrtBCI, sp) - 1];
                  i0 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &eb_emlrtDCI,
                    sp);
                  i = emlrtDynamicBoundsCheckFastR2012b(i0, 1, idx, &ue_emlrtBCI,
                    sp);
                  idx = ii->size[0];
                  for (i0 = 0; i0 < idx; i0++) {
                    nodes2update->data[(i + nodes2update->size[0] * (ii->data[i0]
                      - 1)) - 1] = true;
                  }
                }
              }

              loop_ub = sendingFlow->size[1];
              i0 = sendingFlow->size[0];
              idx = emlrtDynamicBoundsCheckFastR2012b(l_index + 1, 1, i0,
                &ve_emlrtBCI, sp);
              i0 = pot_d->size[0] * pot_d->size[1];
              pot_d->size[0] = 1;
              pot_d->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)pot_d, i0, (int32_T)
                                sizeof(boolean_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                pot_d->data[pot_d->size[0] * i0] = (sendingFlow->data[(idx +
                  sendingFlow->size[0] * i0) - 1] > 0.0);
              }

              /* distribute them over the outgoing links */
              i0 = node_prop->nbOutgoingLinks->size[0];
              i1 = (int32_T)sortedNodes->data[nIndex];
              if (node_prop->nbOutgoingLinks->
                  data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &mm_emlrtBCI,
                   sp) - 1] == 1.0) {
                i0 = temp_receivingFlow->size[0];
                emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &ye_emlrtBCI, sp);
                st.site = &ab_emlrtRSI;
                b_eml_li_find(&st, pot_d, r1);
                i0 = b_varargin_2->size[0] * b_varargin_2->size[1];
                b_varargin_2->size[0] = 1;
                b_varargin_2->size[1] = r1->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)b_varargin_2, i0,
                                  (int32_T)sizeof(real_T), &emlrtRTEI);
                loop_ub = r1->size[1];
                for (i0 = 0; i0 < loop_ub; i0++) {
                  i1 = temp_receivingFlow->size[1];
                  i2 = r1->data[r1->size[0] * i0];
                  b_varargin_2->data[b_varargin_2->size[0] * i0] =
                    temp_receivingFlow->data[temp_receivingFlow->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &rm_emlrtBCI,
                      sp) - 1)];
                }

                st.site = &ab_emlrtRSI;
                b_eml_li_find(&st, pot_d, r1);
                i0 = temp_sendingFlow->size[0];
                idx = emlrtDynamicBoundsCheckFastR2012b(l_index + 1, 1, i0,
                  &af_emlrtBCI, sp);
                i0 = minval->size[0] * minval->size[1];
                minval->size[0] = 1;
                minval->size[1] = r1->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)minval, i0, (int32_T)
                                  sizeof(real_T), &emlrtRTEI);
                loop_ub = r1->size[1];
                for (i0 = 0; i0 < loop_ub; i0++) {
                  i1 = temp_sendingFlow->size[1];
                  i2 = r1->data[r1->size[0] * i0];
                  minval->data[minval->size[0] * i0] = temp_sendingFlow->data
                    [(idx + temp_sendingFlow->size[0] *
                      (emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &sm_emlrtBCI,
                        sp) - 1)) - 1];
                }

                for (i0 = 0; i0 < 2; i0++) {
                  c_varargin_2[i0] = b_varargin_2->size[i0];
                }

                for (i0 = 0; i0 < 2; i0++) {
                  b_minval[i0] = minval->size[i0];
                }

                emlrtSizeEqCheck2DFastR2012b(c_varargin_2, b_minval,
                  &cb_emlrtECI, sp);
                i0 = temp_receivingFlow->size[0];
                emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &bf_emlrtBCI, sp);
                st.site = &ab_emlrtRSI;
                b_eml_li_find(&st, pot_d, r1);
                i0 = ii->size[0];
                ii->size[0] = r1->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)ii, i0, (int32_T)
                                  sizeof(int32_T), &emlrtRTEI);
                loop_ub = r1->size[1];
                for (i0 = 0; i0 < loop_ub; i0++) {
                  i1 = temp_receivingFlow->size[1];
                  i2 = r1->data[r1->size[0] * i0];
                  ii->data[i0] = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                    &tm_emlrtBCI, sp) - 1;
                }

                iv16[0] = 1;
                iv16[1] = ii->size[0];
                emlrtSubAssignSizeCheckR2012b(iv16, 2, *(int32_T (*)[2])
                  b_varargin_2->size, 2, &db_emlrtECI, sp);
                loop_ub = b_varargin_2->size[1];
                for (i0 = 0; i0 < loop_ub; i0++) {
                  temp_receivingFlow->data[temp_receivingFlow->size[0] *
                    ii->data[i0]] = b_varargin_2->data[b_varargin_2->size[0] *
                    i0] + minval->data[minval->size[0] * i0];
                }
              } else {
                i0 = node_prop->nbOutgoingLinks->size[0];
                i1 = (int32_T)sortedNodes->data[nIndex];
                emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &cf_emlrtBCI, sp);
                emlrtForLoopVectorCheckR2012b(1.0, 1.0,
                  node_prop->nbOutgoingLinks->data[(int32_T)sortedNodes->
                  data[nIndex] - 1], mxDOUBLE_CLASS, (int32_T)
                  node_prop->nbOutgoingLinks->data[(int32_T)sortedNodes->
                  data[nIndex] - 1], &kc_emlrtRTEI, sp);
                n_index = 0;
                while (n_index <= (int32_T)node_prop->nbOutgoingLinks->data
                       [(int32_T)sortedNodes->data[nIndex] - 1] - 1) {
                  st.site = &bb_emlrtRSI;
                  b_eml_li_find(&st, pot_d, r1);
                  i0 = temp_sendingFlow->size[0];
                  idx = emlrtDynamicBoundsCheckFastR2012b(l_index + 1, 1, i0,
                    &ef_emlrtBCI, sp);
                  i0 = b_varargin_2->size[0] * b_varargin_2->size[1];
                  b_varargin_2->size[0] = 1;
                  b_varargin_2->size[1] = r1->size[1];
                  emxEnsureCapacity(sp, (emxArray__common *)b_varargin_2, i0,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  loop_ub = r1->size[1];
                  for (i0 = 0; i0 < loop_ub; i0++) {
                    i1 = temp_sendingFlow->size[1];
                    i2 = r1->data[r1->size[0] * i0];
                    b_varargin_2->data[b_varargin_2->size[0] * i0] =
                      temp_sendingFlow->data[(idx + temp_sendingFlow->size[0] *
                      (emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &nm_emlrtBCI,
                      sp) - 1)) - 1];
                  }

                  st.site = &bb_emlrtRSI;
                  b_eml_li_find(&st, pot_d, r1);
                  i0 = TF->size[2];
                  i1 = (int32_T)((2.0 + (real_T)t) - 1.0);
                  i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &gf_emlrtBCI,
                    sp);
                  i1 = TF->size[0];
                  i2 = (int32_T)emlrtIntegerCheckFastR2012b(tf_index,
                    &gb_emlrtDCI, sp);
                  idx = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                    &ff_emlrtBCI, sp);
                  i1 = minval->size[0] * minval->size[1];
                  minval->size[0] = 1;
                  minval->size[1] = r1->size[1];
                  emxEnsureCapacity(sp, (emxArray__common *)minval, i1, (int32_T)
                                    sizeof(real_T), &emlrtRTEI);
                  loop_ub = r1->size[1];
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    i2 = TF->size[1];
                    i3 = r1->data[r1->size[0] * i1];
                    minval->data[minval->size[0] * i1] = TF->data[((idx +
                      TF->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
                      &om_emlrtBCI, sp) - 1)) + TF->size[0] * TF->size[1] * (i0
                      - 1)) - 1];
                  }

                  for (i0 = 0; i0 < 2; i0++) {
                    c_varargin_2[i0] = b_varargin_2->size[i0];
                  }

                  for (i0 = 0; i0 < 2; i0++) {
                    b_minval[i0] = minval->size[i0];
                  }

                  emlrtSizeEqCheck2DFastR2012b(c_varargin_2, b_minval,
                    &eb_emlrtECI, sp);
                  st.site = &bb_emlrtRSI;
                  b_eml_li_find(&st, pot_d, r1);
                  i0 = temp_receivingFlow->size[0];
                  idx = emlrtDynamicBoundsCheckFastR2012b(n_index + 1, 1, i0,
                    &df_emlrtBCI, sp);
                  i0 = r0->size[0] * r0->size[1];
                  r0->size[0] = 1;
                  r0->size[1] = r1->size[1];
                  emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)
                                    sizeof(real_T), &emlrtRTEI);
                  loop_ub = r1->size[1];
                  for (i0 = 0; i0 < loop_ub; i0++) {
                    i1 = temp_receivingFlow->size[1];
                    i2 = r1->data[r1->size[0] * i0];
                    r0->data[r0->size[0] * i0] = temp_receivingFlow->data[(idx +
                      temp_receivingFlow->size[0] *
                      (emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &pm_emlrtBCI,
                      sp) - 1)) - 1];
                  }

                  i0 = b_varargin_2->size[0] * b_varargin_2->size[1];
                  b_varargin_2->size[0] = 1;
                  emxEnsureCapacity(sp, (emxArray__common *)b_varargin_2, i0,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  idx = b_varargin_2->size[0];
                  i = b_varargin_2->size[1];
                  loop_ub = idx * i;
                  for (i0 = 0; i0 < loop_ub; i0++) {
                    b_varargin_2->data[i0] *= minval->data[i0];
                  }

                  for (i0 = 0; i0 < 2; i0++) {
                    b_minval[i0] = r0->size[i0];
                  }

                  for (i0 = 0; i0 < 2; i0++) {
                    c_varargin_2[i0] = b_varargin_2->size[i0];
                  }

                  emlrtSizeEqCheck2DFastR2012b(b_minval, c_varargin_2,
                    &fb_emlrtECI, sp);
                  i0 = temp_receivingFlow->size[0];
                  i1 = n_index + 1;
                  emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &hf_emlrtBCI, sp);
                  st.site = &bb_emlrtRSI;
                  b_eml_li_find(&st, pot_d, r1);
                  i0 = ii->size[0];
                  ii->size[0] = r1->size[1];
                  emxEnsureCapacity(sp, (emxArray__common *)ii, i0, (int32_T)
                                    sizeof(int32_T), &emlrtRTEI);
                  loop_ub = r1->size[1];
                  for (i0 = 0; i0 < loop_ub; i0++) {
                    i1 = temp_receivingFlow->size[1];
                    i2 = r1->data[r1->size[0] * i0];
                    ii->data[i0] = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                      &qm_emlrtBCI, sp) - 1;
                  }

                  iv17[0] = 1;
                  iv17[1] = ii->size[0];
                  emlrtSubAssignSizeCheckR2012b(iv17, 2, *(int32_T (*)[2])
                    r0->size, 2, &gb_emlrtECI, sp);
                  loop_ub = r0->size[1];
                  for (i0 = 0; i0 < loop_ub; i0++) {
                    temp_receivingFlow->data[n_index + temp_receivingFlow->size
                      [0] * ii->data[i0]] = r0->data[r0->size[0] * i0] +
                      b_varargin_2->data[b_varargin_2->size[0] * i0];
                  }

                  tf_index++;
                  n_index++;
                  emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
                }

                tf_index--;
              }
            } else {
              i0 = node_prop->nbOutgoingLinks->size[0];
              i1 = (int32_T)sortedNodes->data[nIndex];
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &if_emlrtBCI, sp);
              emlrtForLoopVectorCheckR2012b(2.0, 1.0, node_prop->
                nbOutgoingLinks->data[(int32_T)sortedNodes->data[nIndex] - 1],
                mxDOUBLE_CLASS, (int32_T)(node_prop->nbOutgoingLinks->data
                [(int32_T)sortedNodes->data[nIndex] - 1] + -1.0), &lc_emlrtRTEI,
                sp);
              n_index = 0;
              while (n_index <= (int32_T)(node_prop->nbOutgoingLinks->data
                      [(int32_T)sortedNodes->data[nIndex] - 1] + -1.0) - 1) {
                tf_index++;
                n_index++;
                emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
              }

              /* no flow on this link */
              loop_ub = temp_sendingFlow->size[1];
              i = temp_sendingFlow->size[0];
              emlrtDynamicBoundsCheckFastR2012b(l_index + 1, 1, i, &jf_emlrtBCI,
                sp);
              for (i0 = 0; i0 < loop_ub; i0++) {
                temp_sendingFlow->data[l_index + temp_sendingFlow->size[0] * i0]
                  = 0.0;
              }

              i0 = con_down->size[0];
              i1 = incomingLinks->size[0];
              ndbl = incomingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                (l_index + 1, 1, i1, &al_emlrtBCI, sp) - 1];
              i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &ed_emlrtDCI, sp);
              i2 = con_down->size[1];
              i3 = (int32_T)(2.0 + (real_T)t);
              con_down->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                &yk_emlrtBCI, sp) + con_down->size[0] *
                              (emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
                &bl_emlrtBCI, sp) - 1)) - 1] = false;
            }

            l_index++;
            emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
          }

          /* now check the outgoing links */
          i0 = node_prop->nbOutgoingLinks->size[0];
          i1 = (int32_T)sortedNodes->data[nIndex];
          emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &kf_emlrtBCI, sp);
          emlrtForLoopVectorCheckR2012b(1.0, 1.0, node_prop->
            nbOutgoingLinks->data[(int32_T)sortedNodes->data[nIndex] - 1],
            mxDOUBLE_CLASS, (int32_T)node_prop->nbOutgoingLinks->data[(int32_T)
            sortedNodes->data[nIndex] - 1], &mc_emlrtRTEI, sp);
          l_index = 1;
          while (l_index - 1 <= (int32_T)node_prop->nbOutgoingLinks->data
                 [(int32_T)sortedNodes->data[nIndex] - 1] - 1) {
            /* find destination with significant change */
            /* then check for reactivation */
            i0 = outgoingLinks->size[0];
            ndbl = outgoingLinks->data[emlrtDynamicBoundsCheckFastR2012b(l_index,
              1, i0, &gj_emlrtBCI, sp) - 1];
            i0 = cvn_up->size[0];
            i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &ib_emlrtDCI, sp);
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &nf_emlrtBCI, sp);
            i0 = cvn_up->size[2];
            i1 = (int32_T)((2.0 + (real_T)t) - 1.0);
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &of_emlrtBCI, sp);
            i0 = temp_receivingFlow->size[0];
            i1 = (l_index - 1) + 1;
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &pf_emlrtBCI, sp);
            loop_ub = cvn_up->size[1];
            n = (int32_T)outgoingLinks->data[l_index - 1];
            i0 = j_cvn_up->size[0] * j_cvn_up->size[1];
            j_cvn_up->size[0] = 1;
            j_cvn_up->size[1] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)j_cvn_up, i0, (int32_T)
                              sizeof(real_T), &emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              j_cvn_up->data[j_cvn_up->size[0] * i0] = cvn_up->data[((n +
                cvn_up->size[0] * i0) + cvn_up->size[0] * cvn_up->size[1] *
                ((int32_T)((2.0 + (real_T)t) - 1.0) - 1)) - 1];
            }

            for (i0 = 0; i0 < 2; i0++) {
              r_cvn_down[i0] = j_cvn_up->size[i0];
            }

            loop_ub = temp_receivingFlow->size[1];
            i0 = d_temp_receivingFlow->size[0] * d_temp_receivingFlow->size[1];
            d_temp_receivingFlow->size[0] = 1;
            d_temp_receivingFlow->size[1] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)d_temp_receivingFlow, i0,
                              (int32_T)sizeof(real_T), &emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              d_temp_receivingFlow->data[d_temp_receivingFlow->size[0] * i0] =
                temp_receivingFlow->data[(l_index + temp_receivingFlow->size[0] *
                i0) - 1];
            }

            for (i0 = 0; i0 < 2; i0++) {
              b_minval[i0] = d_temp_receivingFlow->size[i0];
            }

            emlrtSizeEqCheck2DFastR2012b(r_cvn_down, b_minval, &hb_emlrtECI, sp);
            i0 = outgoingLinks->size[0];
            ndbl = outgoingLinks->data[emlrtDynamicBoundsCheckFastR2012b(l_index,
              1, i0, &hj_emlrtBCI, sp) - 1];
            i0 = cvn_up->size[0];
            i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &hb_emlrtDCI, sp);
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &lf_emlrtBCI, sp);
            i0 = cvn_up->size[2];
            i1 = (int32_T)(2.0 + (real_T)t);
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &mf_emlrtBCI, sp);
            loop_ub = cvn_up->size[1];
            n = (int32_T)outgoingLinks->data[l_index - 1];
            i0 = k_cvn_up->size[0] * k_cvn_up->size[1];
            k_cvn_up->size[0] = 1;
            k_cvn_up->size[1] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)k_cvn_up, i0, (int32_T)
                              sizeof(real_T), &emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              k_cvn_up->data[k_cvn_up->size[0] * i0] = cvn_up->data[((n +
                cvn_up->size[0] * i0) + cvn_up->size[0] * cvn_up->size[1] * (t +
                1)) - 1];
            }

            for (i0 = 0; i0 < 2; i0++) {
              r_cvn_down[i0] = k_cvn_up->size[i0];
            }

            loop_ub = cvn_up->size[1];
            n = (int32_T)outgoingLinks->data[l_index - 1];
            i0 = l_cvn_up->size[0] * l_cvn_up->size[1];
            l_cvn_up->size[0] = 1;
            l_cvn_up->size[1] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)l_cvn_up, i0, (int32_T)
                              sizeof(real_T), &emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              l_cvn_up->data[l_cvn_up->size[0] * i0] = cvn_up->data[((n +
                cvn_up->size[0] * i0) + cvn_up->size[0] * cvn_up->size[1] *
                ((int32_T)((2.0 + (real_T)t) - 1.0) - 1)) - 1];
            }

            for (i0 = 0; i0 < 2; i0++) {
              b_minval[i0] = l_cvn_up->size[i0];
            }

            emlrtSizeEqCheck2DFastR2012b(r_cvn_down, b_minval, &ib_emlrtECI, sp);
            loop_ub = cvn_up->size[1];
            n = (int32_T)outgoingLinks->data[l_index - 1];
            i = (int32_T)outgoingLinks->data[l_index - 1];
            i0 = f_cvn_up->size[0] * f_cvn_up->size[1];
            f_cvn_up->size[0] = 1;
            f_cvn_up->size[1] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)f_cvn_up, i0, (int32_T)
                              sizeof(real_T), &emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              f_cvn_up->data[f_cvn_up->size[0] * i0] = cvn_up->data[((n +
                cvn_up->size[0] * i0) + cvn_up->size[0] * cvn_up->size[1] * (t +
                1)) - 1] - (cvn_up->data[((i + cvn_up->size[0] * i0) +
                cvn_up->size[0] * cvn_up->size[1] * ((int32_T)((2.0 + (real_T)t)
                - 1.0) - 1)) - 1] + temp_receivingFlow->data[(l_index +
                temp_receivingFlow->size[0] * i0) - 1]);
            }

            b_abs(sp, f_cvn_up, b_varargin_2);
            st.site = &cb_emlrtRSI;
            overflow = (sum(&st, b_varargin_2) > 1.0E-8);
            act_bool = (act_bool || overflow);

            /* check congestion */
            loop_ub = temp_receivingFlow->size[1];
            i0 = temp_receivingFlow->size[0];
            idx = emlrtDynamicBoundsCheckFastR2012b(l_index, 1, i0, &qf_emlrtBCI,
              sp);
            i0 = b_temp_receivingFlow->size[0] * b_temp_receivingFlow->size[1];
            b_temp_receivingFlow->size[0] = 1;
            b_temp_receivingFlow->size[1] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)b_temp_receivingFlow, i0,
                              (int32_T)sizeof(real_T), &emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              b_temp_receivingFlow->data[b_temp_receivingFlow->size[0] * i0] =
                temp_receivingFlow->data[(idx + temp_receivingFlow->size[0] * i0)
                - 1];
            }

            i0 = receivingFlow->size[0];
            i1 = con_up->size[0];
            i2 = outgoingLinks->size[0];
            ndbl = outgoingLinks->data[emlrtDynamicBoundsCheckFastR2012b(l_index,
              1, i2, &kj_emlrtBCI, sp) - 1];
            i2 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &oc_emlrtDCI, sp);
            i3 = con_up->size[1];
            loop_ub = (int32_T)(2.0 + (real_T)t);
            st.site = &db_emlrtRSI;
            if (sum(&st, b_temp_receivingFlow) < receivingFlow->
                data[emlrtDynamicBoundsCheckFastR2012b(l_index, 1, i0,
                 &ij_emlrtBCI, sp) - 1]) {
              con_up->data[(emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                &jj_emlrtBCI, sp) + con_up->size[0] *
                            (emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i3,
                &lj_emlrtBCI, sp) - 1)) - 1] = false;
            } else {
              con_up->data[(emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                &jj_emlrtBCI, sp) + con_up->size[0] *
                            (emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i3,
                &lj_emlrtBCI, sp) - 1)) - 1] = true;
            }

            /* check if downstream moving change needs to be calculated */
            if (overflow) {
              i0 = links->vf_index->size[0];
              i1 = outgoingLinks->size[0];
              ndbl = outgoingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                (l_index, 1, i1, &nj_emlrtBCI, sp) - 1];
              i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &pc_emlrtDCI, sp);
              if (links->vf_index->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1,
                   i0, &mj_emlrtBCI, sp) - 1] == -1.0) {
                i0 = nodes2update->size[0];
                i1 = links->toNode->size[0];
                i2 = outgoingLinks->size[0];
                ndbl = outgoingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                  (l_index, 1, i2, &xj_emlrtBCI, sp) - 1];
                i2 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &tc_emlrtDCI, sp);
                ndbl = links->toNode->data[emlrtDynamicBoundsCheckFastR2012b(i2,
                  1, i1, &wj_emlrtBCI, sp) - 1];
                i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &tc_emlrtDCI, sp);
                i2 = nodes2update->size[1];
                i3 = (int32_T)(2.0 + (real_T)t);
                nodes2update->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                  &vj_emlrtBCI, sp) + nodes2update->size[0] *
                                    (emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
                  &yj_emlrtBCI, sp) - 1)) - 1] = true;
                i0 = outgoingLinks->size[0];
                ndbl = outgoingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                  (l_index, 1, i0, &ak_emlrtBCI, sp) - 1];
                i0 = cvn_up->size[0];
                i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &kb_emlrtDCI, sp);
                emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &tf_emlrtBCI, sp);
                i0 = cvn_up->size[2];
                i1 = (int32_T)((2.0 + (real_T)t) - 1.0);
                emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &uf_emlrtBCI, sp);
                i0 = temp_receivingFlow->size[0];
                i1 = (l_index - 1) + 1;
                emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &vf_emlrtBCI, sp);
                loop_ub = cvn_up->size[1];
                n = (int32_T)outgoingLinks->data[l_index - 1];
                i0 = m_cvn_up->size[0] * m_cvn_up->size[1];
                m_cvn_up->size[0] = 1;
                m_cvn_up->size[1] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)m_cvn_up, i0, (int32_T)
                                  sizeof(real_T), &emlrtRTEI);
                for (i0 = 0; i0 < loop_ub; i0++) {
                  m_cvn_up->data[m_cvn_up->size[0] * i0] = cvn_up->data[((n +
                    cvn_up->size[0] * i0) + cvn_up->size[0] * cvn_up->size[1] *
                    ((int32_T)((2.0 + (real_T)t) - 1.0) - 1)) - 1];
                }

                for (i0 = 0; i0 < 2; i0++) {
                  r_cvn_down[i0] = m_cvn_up->size[i0];
                }

                loop_ub = temp_receivingFlow->size[1];
                i0 = e_temp_receivingFlow->size[0] * e_temp_receivingFlow->size
                  [1];
                e_temp_receivingFlow->size[0] = 1;
                e_temp_receivingFlow->size[1] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)e_temp_receivingFlow,
                                  i0, (int32_T)sizeof(real_T), &emlrtRTEI);
                for (i0 = 0; i0 < loop_ub; i0++) {
                  e_temp_receivingFlow->data[e_temp_receivingFlow->size[0] * i0]
                    = temp_receivingFlow->data[(l_index +
                    temp_receivingFlow->size[0] * i0) - 1];
                }

                for (i0 = 0; i0 < 2; i0++) {
                  b_minval[i0] = e_temp_receivingFlow->size[i0];
                }

                emlrtSizeEqCheck2DFastR2012b(r_cvn_down, b_minval, &jb_emlrtECI,
                  sp);
                i0 = outgoingLinks->size[0];
                ndbl = outgoingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                  (l_index, 1, i0, &bk_emlrtBCI, sp) - 1];
                i0 = cvn_up->size[0];
                i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &jb_emlrtDCI, sp);
                emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &rf_emlrtBCI, sp);
                i0 = cvn_up->size[2];
                i1 = (int32_T)(2.0 + (real_T)t);
                emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &sf_emlrtBCI, sp);
                loop_ub = cvn_up->size[1];
                n = (int32_T)outgoingLinks->data[l_index - 1];
                i0 = n_cvn_up->size[0] * n_cvn_up->size[1];
                n_cvn_up->size[0] = 1;
                n_cvn_up->size[1] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)n_cvn_up, i0, (int32_T)
                                  sizeof(real_T), &emlrtRTEI);
                for (i0 = 0; i0 < loop_ub; i0++) {
                  n_cvn_up->data[n_cvn_up->size[0] * i0] = cvn_up->data[((n +
                    cvn_up->size[0] * i0) + cvn_up->size[0] * cvn_up->size[1] *
                    (t + 1)) - 1];
                }

                for (i0 = 0; i0 < 2; i0++) {
                  r_cvn_down[i0] = n_cvn_up->size[i0];
                }

                loop_ub = cvn_up->size[1];
                n = (int32_T)outgoingLinks->data[l_index - 1];
                i0 = o_cvn_up->size[0] * o_cvn_up->size[1];
                o_cvn_up->size[0] = 1;
                o_cvn_up->size[1] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)o_cvn_up, i0, (int32_T)
                                  sizeof(real_T), &emlrtRTEI);
                for (i0 = 0; i0 < loop_ub; i0++) {
                  o_cvn_up->data[o_cvn_up->size[0] * i0] = cvn_up->data[((n +
                    cvn_up->size[0] * i0) + cvn_up->size[0] * cvn_up->size[1] *
                    ((int32_T)((2.0 + (real_T)t) - 1.0) - 1)) - 1];
                }

                for (i0 = 0; i0 < 2; i0++) {
                  b_minval[i0] = o_cvn_up->size[i0];
                }

                emlrtSizeEqCheck2DFastR2012b(r_cvn_down, b_minval, &kb_emlrtECI,
                  sp);
                loop_ub = cvn_up->size[1];
                n = (int32_T)outgoingLinks->data[l_index - 1];
                i = (int32_T)outgoingLinks->data[l_index - 1];
                i0 = e_cvn_up->size[0] * e_cvn_up->size[1];
                e_cvn_up->size[0] = 1;
                e_cvn_up->size[1] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)e_cvn_up, i0, (int32_T)
                                  sizeof(real_T), &emlrtRTEI);
                for (i0 = 0; i0 < loop_ub; i0++) {
                  e_cvn_up->data[e_cvn_up->size[0] * i0] = cvn_up->data[((n +
                    cvn_up->size[0] * i0) + cvn_up->size[0] * cvn_up->size[1] *
                    (t + 1)) - 1] - (cvn_up->data[((i + cvn_up->size[0] * i0) +
                    cvn_up->size[0] * cvn_up->size[1] * ((int32_T)((2.0 +
                    (real_T)t) - 1.0) - 1)) - 1] + temp_receivingFlow->data
                                     [(l_index + temp_receivingFlow->size[0] *
                                       i0) - 1]);
                }

                b_abs(sp, e_cvn_up, b_varargin_2);
                i0 = deltaChange->size[0];
                i1 = links->toNode->size[0];
                i2 = outgoingLinks->size[0];
                ndbl = outgoingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                  (l_index, 1, i2, &ek_emlrtBCI, sp) - 1];
                i2 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &vc_emlrtDCI, sp);
                ndbl = links->toNode->data[emlrtDynamicBoundsCheckFastR2012b(i2,
                  1, i1, &dk_emlrtBCI, sp) - 1];
                i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &uc_emlrtDCI, sp);
                i2 = deltaChange->size[0];
                i3 = links->toNode->size[0];
                loop_ub = outgoingLinks->size[0];
                ndbl = outgoingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                  (l_index, 1, loop_ub, &hk_emlrtBCI, sp) - 1];
                loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(ndbl,
                  &xc_emlrtDCI, sp);
                ndbl = links->toNode->data[emlrtDynamicBoundsCheckFastR2012b
                  (loop_ub, 1, i3, &gk_emlrtBCI, sp) - 1];
                i3 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &wc_emlrtDCI, sp);
                loop_ub = links->vf_ratio->size[0];
                i4 = outgoingLinks->size[0];
                ndbl = outgoingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                  (l_index, 1, i4, &jk_emlrtBCI, sp) - 1];
                i4 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &yc_emlrtDCI, sp);
                st.site = &eb_emlrtRSI;
                deltaChange->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                  &ck_emlrtBCI, sp) - 1] = deltaChange->
                  data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &fk_emlrtBCI,
                  sp) - 1] + links->vf_ratio->
                  data[emlrtDynamicBoundsCheckFastR2012b(i4, 1, loop_ub,
                  &ik_emlrtBCI, sp) - 1] * sum(&st, b_varargin_2);
              } else {
                st.site = &fb_emlrtRSI;
                i0 = links->vf_index->size[0];
                i1 = outgoingLinks->size[0];
                ndbl = outgoingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                  (l_index, 1, i1, &pj_emlrtBCI, &st) - 1];
                i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &qc_emlrtDCI,
                  &st);
                a = ((2.0 + (real_T)t) - links->vf_index->
                     data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                      &oj_emlrtBCI, &st) - 1]) - 1.0;
                i0 = links->vf_index->size[0];
                i1 = outgoingLinks->size[0];
                ndbl = outgoingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                  (l_index, 1, i1, &rj_emlrtBCI, &st) - 1];
                i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &rc_emlrtDCI,
                  &st);
                mtmp = (2.0 + (real_T)t) - links->vf_index->
                  data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &qj_emlrtBCI,
                  &st) - 1];
                b_st.site = &gc_emlrtRSI;
                c_st.site = &hc_emlrtRSI;
                if (muDoubleScalarIsNaN(a) || muDoubleScalarIsNaN(mtmp)) {
                  n = 0;
                  pl = rtNaN;
                  apnd = mtmp;
                  overflow = false;
                } else if (mtmp < a) {
                  n = -1;
                  pl = a;
                  apnd = mtmp;
                  overflow = false;
                } else if (muDoubleScalarIsInf(a) || muDoubleScalarIsInf(mtmp))
                {
                  n = 0;
                  pl = rtNaN;
                  apnd = mtmp;
                  overflow = !(a == mtmp);
                } else {
                  pl = a;
                  ndbl = muDoubleScalarFloor((mtmp - a) + 0.5);
                  apnd = a + ndbl;
                  cdiff = apnd - mtmp;
                  absa = muDoubleScalarAbs(a);
                  absb = muDoubleScalarAbs(mtmp);
                  if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 *
                      muDoubleScalarMax(absa, absb)) {
                    ndbl++;
                    apnd = mtmp;
                  } else if (cdiff > 0.0) {
                    apnd = a + (ndbl - 1.0);
                  } else {
                    ndbl++;
                  }

                  overflow = (2.147483647E+9 < ndbl);
                  if (ndbl >= 0.0) {
                    n = (int32_T)ndbl - 1;
                  } else {
                    n = -1;
                  }
                }

                d_st.site = &ic_emlrtRSI;
                if (!overflow) {
                } else {
                  i_y = NULL;
                  m0 = emlrtCreateCharArray(2, iv18);
                  for (i = 0; i < 21; i++) {
                    cv4[i] = cv5[i];
                  }

                  emlrtInitCharArrayR2013a(&d_st, 21, m0, cv4);
                  emlrtAssign(&i_y, m0);
                  f_st.site = &le_emlrtRSI;
                  h_st.site = &ue_emlrtRSI;
                  error(&f_st, message(&h_st, i_y, &p_emlrtMCI), &q_emlrtMCI);
                }

                i0 = b_varargin_2->size[0] * b_varargin_2->size[1];
                b_varargin_2->size[0] = 1;
                b_varargin_2->size[1] = n + 1;
                emxEnsureCapacity(&c_st, (emxArray__common *)b_varargin_2, i0,
                                  (int32_T)sizeof(real_T), &d_emlrtRTEI);
                if (n + 1 > 0) {
                  b_varargin_2->data[0] = pl;
                  if (n + 1 > 1) {
                    b_varargin_2->data[n] = apnd;
                    i0 = n + (n < 0);
                    if (i0 >= 0) {
                      idx = (int32_T)((uint32_T)i0 >> 1);
                    } else {
                      idx = ~(int32_T)((uint32_T)~i0 >> 1);
                    }

                    d_st.site = &jc_emlrtRSI;
                    for (i = 1; i < idx; i++) {
                      b_varargin_2->data[i] = pl + (real_T)i;
                      b_varargin_2->data[n - i] = apnd - (real_T)i;
                    }

                    if (idx << 1 == n) {
                      b_varargin_2->data[idx] = (pl + apnd) / 2.0;
                    } else {
                      b_varargin_2->data[idx] = pl + (real_T)idx;
                      b_varargin_2->data[idx + 1] = apnd - (real_T)idx;
                    }
                  }
                }

                st.site = &fb_emlrtRSI;
                b_st.site = &kc_emlrtRSI;
                c_st.site = &mb_emlrtRSI;
                d_st.site = &lc_emlrtRSI;
                for (i0 = 0; i0 < 2; i0++) {
                  uv0[i0] = (uint32_T)b_varargin_2->size[i0];
                }

                i0 = minval->size[0] * minval->size[1];
                minval->size[0] = 1;
                minval->size[1] = (int32_T)uv0[1];
                emxEnsureCapacity(&d_st, (emxArray__common *)minval, i0,
                                  (int32_T)sizeof(real_T), &c_emlrtRTEI);
                f_st.site = &mc_emlrtRSI;
                if (1 > (int32_T)uv0[1]) {
                  overflow = false;
                } else {
                  overflow = ((int32_T)uv0[1] > 2147483646);
                }

                if (overflow) {
                  g_st.site = &qb_emlrtRSI;
                  check_forloop_overflow_error(&g_st);
                }

                for (i = 0; i + 1 <= (int32_T)uv0[1]; i++) {
                  minval->data[i] = muDoubleScalarMin(totT + 1.0,
                    b_varargin_2->data[i]);
                }

                i0 = ii->size[0];
                ii->size[0] = minval->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)ii, i0, (int32_T)
                                  sizeof(int32_T), &emlrtRTEI);
                loop_ub = minval->size[1];
                for (i0 = 0; i0 < loop_ub; i0++) {
                  i1 = nodes2update->size[1];
                  ndbl = minval->data[minval->size[0] * i0];
                  i2 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &sc_emlrtDCI,
                    sp);
                  ii->data[i0] = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                    &sj_emlrtBCI, sp);
                }

                idx = nodes2update->size[0];
                i0 = links->toNode->size[0];
                i1 = outgoingLinks->size[0];
                ndbl = outgoingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                  (l_index, 1, i1, &uj_emlrtBCI, sp) - 1];
                i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &lb_emlrtDCI, sp);
                ndbl = links->toNode->data[emlrtDynamicBoundsCheckFastR2012b(i1,
                  1, i0, &tj_emlrtBCI, sp) - 1];
                i0 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &lb_emlrtDCI, sp);
                i = emlrtDynamicBoundsCheckFastR2012b(i0, 1, idx, &wf_emlrtBCI,
                  sp);
                idx = ii->size[0];
                for (i0 = 0; i0 < idx; i0++) {
                  nodes2update->data[(i + nodes2update->size[0] * (ii->data[i0]
                    - 1)) - 1] = true;
                }
              }

              /* check for changed flat CVN (instantenous) only for */
              /* marginal updates needed */
              loop_ub = temp_receivingFlow->size[1];
              i0 = temp_receivingFlow->size[0];
              idx = emlrtDynamicBoundsCheckFastR2012b(l_index, 1, i0,
                &xf_emlrtBCI, sp);
              i0 = pot_d->size[0] * pot_d->size[1];
              pot_d->size[0] = 1;
              pot_d->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)pot_d, i0, (int32_T)
                                sizeof(boolean_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                pot_d->data[pot_d->size[0] * i0] = (temp_receivingFlow->data
                  [(idx + temp_receivingFlow->size[0] * i0) - 1] <= 1.0E-8);
              }

              st.site = &gb_emlrtRSI;
              if (b_any(&st, pot_d)) {
                st.site = &gb_emlrtRSI;
                b_eml_li_find(&st, pot_d, r1);
                i0 = cvn_up->size[2];
                i1 = (int32_T)((2.0 + (real_T)t) - 1.0);
                i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &cg_emlrtBCI,
                  sp);
                i1 = outgoingLinks->size[0];
                ndbl = outgoingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                  (l_index, 1, i1, &kk_emlrtBCI, sp) - 1];
                i1 = cvn_up->size[0];
                i2 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &nb_emlrtDCI, sp);
                n = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &bg_emlrtBCI,
                  sp);
                i1 = b_varargin_2->size[0] * b_varargin_2->size[1];
                b_varargin_2->size[0] = 1;
                b_varargin_2->size[1] = r1->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)b_varargin_2, i1,
                                  (int32_T)sizeof(real_T), &emlrtRTEI);
                loop_ub = r1->size[1];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  i2 = cvn_up->size[1];
                  i3 = r1->data[r1->size[0] * i1];
                  b_varargin_2->data[b_varargin_2->size[0] * i1] = cvn_up->data
                    [((n + cvn_up->size[0] * (emlrtDynamicBoundsCheckFastR2012b
                        (i3, 1, i2, &lk_emlrtBCI, sp) - 1)) + cvn_up->size[0] *
                      cvn_up->size[1] * (i0 - 1)) - 1];
                }

                st.site = &gb_emlrtRSI;
                b_eml_li_find(&st, pot_d, r1);
                i0 = temp_receivingFlow->size[0];
                idx = emlrtDynamicBoundsCheckFastR2012b(l_index, 1, i0,
                  &dg_emlrtBCI, sp);
                i0 = minval->size[0] * minval->size[1];
                minval->size[0] = 1;
                minval->size[1] = r1->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)minval, i0, (int32_T)
                                  sizeof(real_T), &emlrtRTEI);
                loop_ub = r1->size[1];
                for (i0 = 0; i0 < loop_ub; i0++) {
                  i1 = temp_receivingFlow->size[1];
                  i2 = r1->data[r1->size[0] * i0];
                  minval->data[minval->size[0] * i0] = temp_receivingFlow->data
                    [(idx + temp_receivingFlow->size[0] *
                      (emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &mk_emlrtBCI,
                        sp) - 1)) - 1];
                }

                for (i0 = 0; i0 < 2; i0++) {
                  c_varargin_2[i0] = b_varargin_2->size[i0];
                }

                for (i0 = 0; i0 < 2; i0++) {
                  b_minval[i0] = minval->size[i0];
                }

                emlrtSizeEqCheck2DFastR2012b(c_varargin_2, b_minval,
                  &lb_emlrtECI, sp);
                st.site = &gb_emlrtRSI;
                b_eml_li_find(&st, pot_d, r1);
                i0 = cvn_up->size[2];
                i1 = (int32_T)(2.0 + (real_T)t);
                i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ag_emlrtBCI,
                  sp);
                i1 = outgoingLinks->size[0];
                ndbl = outgoingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                  (l_index, 1, i1, &nk_emlrtBCI, sp) - 1];
                i1 = cvn_up->size[0];
                i2 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &mb_emlrtDCI, sp);
                n = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &yf_emlrtBCI,
                  sp);
                i1 = r0->size[0] * r0->size[1];
                r0->size[0] = 1;
                r0->size[1] = r1->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)r0, i1, (int32_T)
                                  sizeof(real_T), &emlrtRTEI);
                loop_ub = r1->size[1];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  i2 = cvn_up->size[1];
                  i3 = r1->data[r1->size[0] * i1];
                  r0->data[r0->size[0] * i1] = cvn_up->data[((n + cvn_up->size[0]
                    * (emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &ok_emlrtBCI,
                    sp) - 1)) + cvn_up->size[0] * cvn_up->size[1] * (i0 - 1)) -
                    1];
                }

                for (i0 = 0; i0 < 2; i0++) {
                  b_minval[i0] = r0->size[i0];
                }

                for (i0 = 0; i0 < 2; i0++) {
                  c_varargin_2[i0] = b_varargin_2->size[i0];
                }

                emlrtSizeEqCheck2DFastR2012b(b_minval, c_varargin_2,
                  &mb_emlrtECI, sp);
                i0 = r5->size[0] * r5->size[1];
                r5->size[0] = 1;
                r5->size[1] = r0->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)r5, i0, (int32_T)
                                  sizeof(real_T), &emlrtRTEI);
                loop_ub = r0->size[0] * r0->size[1];
                for (i0 = 0; i0 < loop_ub; i0++) {
                  r5->data[i0] = r0->data[i0] - (b_varargin_2->data[i0] +
                    minval->data[i0]);
                }

                b_abs(sp, r5, b_varargin_2);
                st.site = &gb_emlrtRSI;
                if (sum(&st, b_varargin_2) > 1.0E-8) {
                  ndbl = muDoubleScalarMin(totT + 1.0, (2.0 + (real_T)t) + 1.0);
                  if (2.0 + (real_T)t > ndbl) {
                    i0 = 1;
                    i1 = 1;
                  } else {
                    i0 = nodes2update->size[1];
                    i1 = (int32_T)(2.0 + (real_T)t);
                    i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                      &fg_emlrtBCI, sp);
                    i1 = nodes2update->size[1];
                    i2 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &pb_emlrtDCI,
                      sp);
                    i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                      &fg_emlrtBCI, sp) + 1;
                  }

                  idx = nodes2update->size[0];
                  i2 = links->toNode->size[0];
                  i3 = outgoingLinks->size[0];
                  ndbl = outgoingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                    (l_index, 1, i3, &qk_emlrtBCI, sp) - 1];
                  i3 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &ob_emlrtDCI,
                    sp);
                  ndbl = links->toNode->data[emlrtDynamicBoundsCheckFastR2012b
                    (i3, 1, i2, &pk_emlrtBCI, sp) - 1];
                  i2 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &ob_emlrtDCI,
                    sp);
                  i = emlrtDynamicBoundsCheckFastR2012b(i2, 1, idx, &eg_emlrtBCI,
                    sp);
                  loop_ub = i1 - i0;
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    nodes2update->data[(i + nodes2update->size[0] * ((i0 + i1) -
                      1)) - 1] = true;
                  }

                  i0 = outgoingLinks->size[0];
                  ndbl = outgoingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                    (l_index, 1, i0, &rk_emlrtBCI, sp) - 1];
                  i0 = links->vf_index->size[0];
                  i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &qb_emlrtDCI,
                    sp);
                  emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &gg_emlrtBCI, sp);
                  i0 = deltaChange->size[0];
                  i1 = links->toNode->size[0];
                  i2 = outgoingLinks->size[0];
                  ndbl = outgoingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                    (l_index, 1, i2, &uk_emlrtBCI, sp) - 1];
                  i2 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &bd_emlrtDCI,
                    sp);
                  ndbl = links->toNode->data[emlrtDynamicBoundsCheckFastR2012b
                    (i2, 1, i1, &tk_emlrtBCI, sp) - 1];
                  i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &ad_emlrtDCI,
                    sp);
                  i2 = deltaChange->size[0];
                  i3 = links->toNode->size[0];
                  loop_ub = outgoingLinks->size[0];
                  ndbl = outgoingLinks->data[emlrtDynamicBoundsCheckFastR2012b
                    (l_index, 1, loop_ub, &xk_emlrtBCI, sp) - 1];
                  loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(ndbl,
                    &dd_emlrtDCI, sp);
                  ndbl = links->toNode->data[emlrtDynamicBoundsCheckFastR2012b
                    (loop_ub, 1, i3, &wk_emlrtBCI, sp) - 1];
                  i3 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &cd_emlrtDCI,
                    sp);
                  deltaChange->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                    &sk_emlrtBCI, sp) - 1] = deltaChange->
                    data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
                    &vk_emlrtBCI, sp) - 1] - dt / links->vf_index->data[(int32_T)
                    outgoingLinks->data[l_index - 1] - 1];
                }
              }
            }

            l_index++;
            emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
          }

          /* only update all CVN if there is a significant change */
          /* on a node (nodes are always consistent because all CVN */
          /* are updated) */
          if (act_bool) {
            i0 = nodes2update->size[0];
            i1 = (int32_T)sortedNodes->data[nIndex];
            i2 = nodes2update->size[1];
            ndbl = muDoubleScalarMin(totT + 1.0, (2.0 + (real_T)t) + 1.0);
            i3 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &nc_emlrtDCI, sp);
            nodes2update->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
              &aj_emlrtBCI, sp) + nodes2update->size[0] *
                                (emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
              &bj_emlrtBCI, sp) - 1)) - 1] = true;
          }

          i0 = node_prop->nbIncomingLinks->size[0];
          i1 = (int32_T)sortedNodes->data[nIndex];
          emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &hg_emlrtBCI, sp);
          emlrtForLoopVectorCheckR2012b(1.0, 1.0, node_prop->
            nbIncomingLinks->data[(int32_T)sortedNodes->data[nIndex] - 1],
            mxDOUBLE_CLASS, (int32_T)node_prop->nbIncomingLinks->data[(int32_T)
            sortedNodes->data[nIndex] - 1], &nc_emlrtRTEI, sp);
          l_index = 0;
          while (l_index <= (int32_T)node_prop->nbIncomingLinks->data[(int32_T)
                 sortedNodes->data[nIndex] - 1] - 1) {
            i0 = incomingLinks->size[0];
            ndbl = incomingLinks->data[emlrtDynamicBoundsCheckFastR2012b(l_index
              + 1, 1, i0, &ej_emlrtBCI, sp) - 1];
            i0 = cvn_down->size[0];
            i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &rb_emlrtDCI, sp);
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ig_emlrtBCI, sp);
            i0 = cvn_down->size[2];
            i1 = (int32_T)((2.0 + (real_T)t) - 1.0);
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &jg_emlrtBCI, sp);
            i0 = temp_sendingFlow->size[0];
            i1 = l_index + 1;
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &kg_emlrtBCI, sp);
            loop_ub = cvn_down->size[1];
            n = (int32_T)incomingLinks->data[l_index];
            i0 = h_cvn_down->size[0] * h_cvn_down->size[1];
            h_cvn_down->size[0] = 1;
            h_cvn_down->size[1] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)h_cvn_down, i0, (int32_T)
                              sizeof(real_T), &emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              h_cvn_down->data[h_cvn_down->size[0] * i0] = cvn_down->data[((n +
                cvn_down->size[0] * i0) + cvn_down->size[0] * cvn_down->size[1] *
                ((int32_T)((2.0 + (real_T)t) - 1.0) - 1)) - 1];
            }

            for (i0 = 0; i0 < 2; i0++) {
              r_cvn_down[i0] = h_cvn_down->size[i0];
            }

            loop_ub = temp_sendingFlow->size[1];
            i0 = f_temp_sendingFlow->size[0] * f_temp_sendingFlow->size[1];
            f_temp_sendingFlow->size[0] = 1;
            f_temp_sendingFlow->size[1] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)f_temp_sendingFlow, i0,
                              (int32_T)sizeof(real_T), &emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              f_temp_sendingFlow->data[f_temp_sendingFlow->size[0] * i0] =
                temp_sendingFlow->data[l_index + temp_sendingFlow->size[0] * i0];
            }

            for (i0 = 0; i0 < 2; i0++) {
              b_minval[i0] = f_temp_sendingFlow->size[i0];
            }

            emlrtSizeEqCheck2DFastR2012b(r_cvn_down, b_minval, &nb_emlrtECI, sp);
            i0 = incomingLinks->size[0];
            ndbl = incomingLinks->data[emlrtDynamicBoundsCheckFastR2012b(l_index
              + 1, 1, i0, &fj_emlrtBCI, sp) - 1];
            i0 = cvn_down->size[0];
            i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &sb_emlrtDCI, sp);
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &lg_emlrtBCI, sp);
            loop_ub = cvn_down->size[1];
            i0 = ii->size[0];
            ii->size[0] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)ii, i0, (int32_T)sizeof
                              (int32_T), &emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              ii->data[i0] = i0;
            }

            i0 = cvn_down->size[2];
            i1 = (int32_T)(2.0 + (real_T)t);
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &mg_emlrtBCI, sp);
            iv19[0] = 1;
            iv19[1] = ii->size[0];
            loop_ub = cvn_down->size[1];
            n = (int32_T)incomingLinks->data[l_index];
            i0 = i_cvn_down->size[0] * i_cvn_down->size[1];
            i_cvn_down->size[0] = 1;
            i_cvn_down->size[1] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)i_cvn_down, i0, (int32_T)
                              sizeof(real_T), &emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              i_cvn_down->data[i_cvn_down->size[0] * i0] = cvn_down->data[((n +
                cvn_down->size[0] * i0) + cvn_down->size[0] * cvn_down->size[1] *
                ((int32_T)((2.0 + (real_T)t) - 1.0) - 1)) - 1];
            }

            for (i0 = 0; i0 < 2; i0++) {
              r_cvn_down[i0] = i_cvn_down->size[i0];
            }

            emlrtSubAssignSizeCheckR2012b(iv19, 2, r_cvn_down, 2, &ob_emlrtECI,
              sp);
            n = (int32_T)incomingLinks->data[l_index];
            idx = cvn_down->size[1];
            i = (int32_T)incomingLinks->data[l_index];
            i0 = j_cvn_down->size[0] * j_cvn_down->size[1];
            j_cvn_down->size[0] = 1;
            j_cvn_down->size[1] = idx;
            emxEnsureCapacity(sp, (emxArray__common *)j_cvn_down, i0, (int32_T)
                              sizeof(real_T), &emlrtRTEI);
            for (i0 = 0; i0 < idx; i0++) {
              j_cvn_down->data[j_cvn_down->size[0] * i0] = cvn_down->data[((i +
                cvn_down->size[0] * i0) + cvn_down->size[0] * cvn_down->size[1] *
                ((int32_T)((2.0 + (real_T)t) - 1.0) - 1)) - 1] +
                temp_sendingFlow->data[l_index + temp_sendingFlow->size[0] * i0];
            }

            loop_ub = j_cvn_down->size[1];
            for (i0 = 0; i0 < loop_ub; i0++) {
              cvn_down->data[((n + cvn_down->size[0] * ii->data[i0]) +
                              cvn_down->size[0] * cvn_down->size[1] * (t + 1)) -
                1] = j_cvn_down->data[j_cvn_down->size[0] * i0];
            }

            l_index++;
            emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
          }

          i0 = node_prop->nbOutgoingLinks->size[0];
          i1 = (int32_T)sortedNodes->data[nIndex];
          emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ng_emlrtBCI, sp);
          emlrtForLoopVectorCheckR2012b(1.0, 1.0, node_prop->
            nbOutgoingLinks->data[(int32_T)sortedNodes->data[nIndex] - 1],
            mxDOUBLE_CLASS, (int32_T)node_prop->nbOutgoingLinks->data[(int32_T)
            sortedNodes->data[nIndex] - 1], &oc_emlrtRTEI, sp);
          l_index = 0;
          while (l_index <= (int32_T)node_prop->nbOutgoingLinks->data[(int32_T)
                 sortedNodes->data[nIndex] - 1] - 1) {
            i0 = outgoingLinks->size[0];
            ndbl = outgoingLinks->data[emlrtDynamicBoundsCheckFastR2012b(l_index
              + 1, 1, i0, &cj_emlrtBCI, sp) - 1];
            i0 = cvn_up->size[0];
            i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &tb_emlrtDCI, sp);
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &og_emlrtBCI, sp);
            i0 = cvn_up->size[2];
            i1 = (int32_T)((2.0 + (real_T)t) - 1.0);
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &pg_emlrtBCI, sp);
            i0 = temp_receivingFlow->size[0];
            i1 = l_index + 1;
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &qg_emlrtBCI, sp);
            loop_ub = cvn_up->size[1];
            n = (int32_T)outgoingLinks->data[l_index];
            i0 = g_cvn_up->size[0] * g_cvn_up->size[1];
            g_cvn_up->size[0] = 1;
            g_cvn_up->size[1] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)g_cvn_up, i0, (int32_T)
                              sizeof(real_T), &emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              g_cvn_up->data[g_cvn_up->size[0] * i0] = cvn_up->data[((n +
                cvn_up->size[0] * i0) + cvn_up->size[0] * cvn_up->size[1] *
                ((int32_T)((2.0 + (real_T)t) - 1.0) - 1)) - 1];
            }

            for (i0 = 0; i0 < 2; i0++) {
              r_cvn_down[i0] = g_cvn_up->size[i0];
            }

            loop_ub = temp_receivingFlow->size[1];
            i0 = c_temp_receivingFlow->size[0] * c_temp_receivingFlow->size[1];
            c_temp_receivingFlow->size[0] = 1;
            c_temp_receivingFlow->size[1] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)c_temp_receivingFlow, i0,
                              (int32_T)sizeof(real_T), &emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              c_temp_receivingFlow->data[c_temp_receivingFlow->size[0] * i0] =
                temp_receivingFlow->data[l_index + temp_receivingFlow->size[0] *
                i0];
            }

            for (i0 = 0; i0 < 2; i0++) {
              b_minval[i0] = c_temp_receivingFlow->size[i0];
            }

            emlrtSizeEqCheck2DFastR2012b(r_cvn_down, b_minval, &pb_emlrtECI, sp);
            i0 = outgoingLinks->size[0];
            ndbl = outgoingLinks->data[emlrtDynamicBoundsCheckFastR2012b(l_index
              + 1, 1, i0, &dj_emlrtBCI, sp) - 1];
            i0 = cvn_up->size[0];
            i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &ub_emlrtDCI, sp);
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &rg_emlrtBCI, sp);
            loop_ub = cvn_up->size[1];
            i0 = ii->size[0];
            ii->size[0] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)ii, i0, (int32_T)sizeof
                              (int32_T), &emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              ii->data[i0] = i0;
            }

            i0 = cvn_up->size[2];
            i1 = (int32_T)(2.0 + (real_T)t);
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &sg_emlrtBCI, sp);
            iv20[0] = 1;
            iv20[1] = ii->size[0];
            loop_ub = cvn_up->size[1];
            n = (int32_T)outgoingLinks->data[l_index];
            i0 = h_cvn_up->size[0] * h_cvn_up->size[1];
            h_cvn_up->size[0] = 1;
            h_cvn_up->size[1] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)h_cvn_up, i0, (int32_T)
                              sizeof(real_T), &emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              h_cvn_up->data[h_cvn_up->size[0] * i0] = cvn_up->data[((n +
                cvn_up->size[0] * i0) + cvn_up->size[0] * cvn_up->size[1] *
                ((int32_T)((2.0 + (real_T)t) - 1.0) - 1)) - 1];
            }

            for (i0 = 0; i0 < 2; i0++) {
              r_cvn_down[i0] = h_cvn_up->size[i0];
            }

            emlrtSubAssignSizeCheckR2012b(iv20, 2, r_cvn_down, 2, &qb_emlrtECI,
              sp);
            n = (int32_T)outgoingLinks->data[l_index];
            idx = cvn_up->size[1];
            i = (int32_T)outgoingLinks->data[l_index];
            i0 = i_cvn_up->size[0] * i_cvn_up->size[1];
            i_cvn_up->size[0] = 1;
            i_cvn_up->size[1] = idx;
            emxEnsureCapacity(sp, (emxArray__common *)i_cvn_up, i0, (int32_T)
                              sizeof(real_T), &emlrtRTEI);
            for (i0 = 0; i0 < idx; i0++) {
              i_cvn_up->data[i_cvn_up->size[0] * i0] = cvn_up->data[((i +
                cvn_up->size[0] * i0) + cvn_up->size[0] * cvn_up->size[1] *
                ((int32_T)((2.0 + (real_T)t) - 1.0) - 1)) - 1] +
                temp_receivingFlow->data[l_index + temp_receivingFlow->size[0] *
                i0];
            }

            loop_ub = i_cvn_up->size[1];
            for (i0 = 0; i0 < loop_ub; i0++) {
              cvn_up->data[((n + cvn_up->size[0] * ii->data[i0]) + cvn_up->size
                            [0] * cvn_up->size[1] * (t + 1)) - 1] =
                i_cvn_up->data[i_cvn_up->size[0] * i0];
            }

            l_index++;
            emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
          }

          nIndex++;
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
        }

        i0 = r1->size[0] * r1->size[1];
        r1->size[0] = 1;
        r1->size[1] = origins_t->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)r1, i0, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
        loop_ub = origins_t->size[0] * origins_t->size[1];
        for (i0 = 0; i0 < loop_ub; i0++) {
          i1 = deltaChange->size[0];
          ndbl = origins_t->data[i0];
          i2 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &hc_emlrtDCI, sp);
          r1->data[i0] = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
            &di_emlrtBCI, sp);
        }

        loop_ub = r1->size[0] * r1->size[1];
        for (i0 = 0; i0 < loop_ub; i0++) {
          deltaChange->data[r1->data[i0] - 1] = 0.0;
        }

        i0 = r1->size[0] * r1->size[1];
        r1->size[0] = 1;
        r1->size[1] = destinations_t->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)r1, i0, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
        loop_ub = destinations_t->size[0] * destinations_t->size[1];
        for (i0 = 0; i0 < loop_ub; i0++) {
          i1 = deltaChange->size[0];
          ndbl = destinations_t->data[i0];
          i2 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &ic_emlrtDCI, sp);
          r1->data[i0] = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
            &ei_emlrtBCI, sp);
        }

        loop_ub = r1->size[0] * r1->size[1];
        for (i0 = 0; i0 < loop_ub; i0++) {
          deltaChange->data[r1->data[i0] - 1] = 0.0;
        }

        /* sort all changed nodes */
        if (1 > node_prop->nbIncomingLinks->size[0]) {
          loop_ub = 0;
        } else {
          i0 = deltaChange->size[0];
          emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &tg_emlrtBCI, sp);
          i0 = deltaChange->size[0];
          i1 = node_prop->nbIncomingLinks->size[0];
          loop_ub = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &tg_emlrtBCI,
            sp);
        }

        emlrtVectorVectorIndexCheckR2012b(deltaChange->size[0], 1, 1, loop_ub,
          &rb_emlrtECI, sp);
        st.site = &hb_emlrtRSI;
        i0 = c_deltaChange->size[0];
        c_deltaChange->size[0] = loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)c_deltaChange, i0, (int32_T)
                          sizeof(real_T), &emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          c_deltaChange->data[i0] = deltaChange->data[i0];
        }

        b_st.site = &pd_emlrtRSI;
        eml_sort(&b_st, c_deltaChange, result_sendingFlow, ii);
        i0 = result_sendingFlow->size[0];
        result_sendingFlow->size[0] = ii->size[0];
        emxEnsureCapacity(&st, (emxArray__common *)result_sendingFlow, i0,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        loop_ub = ii->size[0];
        for (i0 = 0; i0 < loop_ub; i0++) {
          result_sendingFlow->data[i0] = ii->data[i0];
        }

        if (1 > node_prop->nbIncomingLinks->size[0]) {
          loop_ub = 0;
        } else {
          i0 = sortedNodes->size[0];
          emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &ug_emlrtBCI, sp);
          i0 = sortedNodes->size[0];
          i1 = node_prop->nbIncomingLinks->size[0];
          loop_ub = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ug_emlrtBCI,
            sp);
        }

        i0 = result_sendingFlow->size[0];
        emlrtSizeEqCheck1DFastR2012b(loop_ub, i0, &sb_emlrtECI, sp);
        i0 = r1->size[0] * r1->size[1];
        r1->size[0] = 1;
        r1->size[1] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)r1, i0, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          r1->data[r1->size[0] * i0] = i0;
        }

        loop_ub = r1->size[0] * r1->size[1];
        for (i0 = 0; i0 < loop_ub; i0++) {
          sortedNodes->data[r1->data[i0]] = result_sendingFlow->data[i0];
        }

        /* total active nodes for next iteration */
        if (1 > node_prop->nbIncomingLinks->size[0]) {
          loop_ub = 0;
        } else {
          i0 = deltaChange->size[0];
          emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &vg_emlrtBCI, sp);
          i0 = deltaChange->size[0];
          i1 = node_prop->nbIncomingLinks->size[0];
          loop_ub = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &vg_emlrtBCI,
            sp);
        }

        emlrtVectorVectorIndexCheckR2012b(deltaChange->size[0], 1, 1, loop_ub,
          &tb_emlrtECI, sp);
        i0 = b_deltaChange->size[0];
        b_deltaChange->size[0] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)b_deltaChange, i0, (int32_T)
                          sizeof(boolean_T), &emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          b_deltaChange->data[i0] = (deltaChange->data[i0] > 1.0E-8);
        }

        st.site = &ib_emlrtRSI;
        current_totNodes = d_sum(&st, b_deltaChange);
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }

      /* DESTINATION NODES<---------------------------------------------------------------------------------------------------------------------------- */
      /* are only updated if the upstream cumulative of */
      /* an incoming links is changed */
      i0 = nodes2update->size[1];
      i1 = (int32_T)(2.0 + (real_T)t);
      i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &wg_emlrtBCI, sp);
      i1 = b_nodes2update->size[0];
      b_nodes2update->size[0] = destinations->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)b_nodes2update, i1, (int32_T)
                        sizeof(boolean_T), &emlrtRTEI);
      loop_ub = destinations->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        i2 = nodes2update->size[0];
        ndbl = destinations->data[destinations->size[0] * i1];
        i3 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &fc_emlrtDCI, sp);
        b_nodes2update->data[i1] = nodes2update->data
          [(emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &uh_emlrtBCI, sp) +
            nodes2update->size[0] * (i0 - 1)) - 1];
      }

      st.site = &jb_emlrtRSI;
      if (any(&st, b_nodes2update)) {
        n_index = 0;
        while (n_index <= destinations->size[1] - 1) {
          i0 = destinations->size[1];
          i1 = n_index + 1;
          emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &xg_emlrtBCI, sp);
          i0 = nodes2update->size[0];
          i1 = (int32_T)destinations->data[n_index];
          i2 = nodes2update->size[1];
          i3 = (int32_T)(2.0 + (real_T)t);
          if (nodes2update->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                &vh_emlrtBCI, sp) + nodes2update->size[0] *
                                  (emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
                 &wh_emlrtBCI, sp) - 1)) - 1]) {
            i0 = node_prop->positionFirstIn->size[0];
            i1 = (int32_T)destinations->data[n_index];
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &yg_emlrtBCI, sp);
            i0 = node_prop->positionFirstIn->size[0];
            i1 = (int32_T)destinations->data[n_index];
            i2 = node_prop->nbIncomingLinks->size[0];
            i3 = (int32_T)destinations->data[n_index];
            ndbl = (node_prop->positionFirstIn->
                    data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                     &xh_emlrtBCI, sp) - 1] + node_prop->nbIncomingLinks->
                    data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
                     &yh_emlrtBCI, sp) - 1]) - 1.0;
            if (node_prop->positionFirstIn->data[(int32_T)destinations->
                data[n_index] - 1] > ndbl) {
              i0 = 0;
              i1 = 0;
            } else {
              pl = node_prop->positionFirstIn->data[(int32_T)destinations->
                data[n_index] - 1];
              i0 = node_prop->incomingLinksList->size[0];
              i1 = (int32_T)emlrtIntegerCheckFastR2012b(pl, &vb_emlrtDCI, sp);
              i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ah_emlrtBCI, sp)
                - 1;
              i1 = node_prop->incomingLinksList->size[0];
              i2 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &vb_emlrtDCI, sp);
              i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &ah_emlrtBCI, sp);
            }

            i2 = node_prop->nbIncomingLinks->size[0];
            i3 = (int32_T)destinations->data[n_index];
            emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &bh_emlrtBCI, sp);
            if (1.0 > node_prop->nbIncomingLinks->data[(int32_T)
                destinations->data[n_index] - 1]) {
              i2 = 0;
            } else {
              i2 = incomingLinks->size[0];
              emlrtDynamicBoundsCheckFastR2012b(1, 1, i2, &ch_emlrtBCI, sp);
              ndbl = node_prop->nbIncomingLinks->data[(int32_T)
                destinations->data[n_index] - 1];
              i2 = incomingLinks->size[0];
              i3 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &wb_emlrtDCI, sp);
              i2 = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &ch_emlrtBCI, sp);
            }

            i3 = i1 - i0;
            emlrtSizeEqCheck1DFastR2012b(i2, i3, &ub_emlrtECI, sp);
            loop_ub = i1 - i0;
            for (i1 = 0; i1 < loop_ub; i1++) {
              incomingLinks->data[i1] = node_prop->incomingLinksList->data[i0 +
                i1];
            }

            i0 = node_prop->nbIncomingLinks->size[0];
            i1 = (int32_T)destinations->data[n_index];
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &dh_emlrtBCI, sp);
            emlrtForLoopVectorCheckR2012b(1.0, 1.0, node_prop->
              nbIncomingLinks->data[(int32_T)destinations->data[n_index] - 1],
              mxDOUBLE_CLASS, (int32_T)node_prop->nbIncomingLinks->data[(int32_T)
              destinations->data[n_index] - 1], &pc_emlrtRTEI, sp);
            l_index = 0;
            while (l_index <= (int32_T)node_prop->nbIncomingLinks->data[(int32_T)
                   destinations->data[n_index] - 1] - 1) {
              i0 = incomingLinks->size[0];
              i1 = l_index + 1;
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &eh_emlrtBCI, sp);
              i0 = RF_down_cvn_db->size[0];
              ndbl = incomingLinks->data[l_index];
              i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &gc_emlrtDCI, sp);
              RF_down_cvn_db->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                &ai_emlrtBCI, sp) - 1] = rtInf;

              /* note that concidered intervals are always based on */
              /* free flow travel time (destination is an infinit sink) */
              /* IMPORTANT: this is a modelling assumption needs to be */
              /* taken into account when setting up a network */
              /* note that the cumulatives are found by looking */
              /* into the up_cvn_ob of the previous iteration */
              /* CALCULATE SENDING FLOW BASED ON FREE FLOW SPEED */
              /* only n is needed this is the destination */
              /* if multiple d are found an error should be thrown */
              i0 = links->vf_index->size[0];
              i1 = (int32_T)incomingLinks->data[l_index];
              mtmp = (2.0 + (real_T)t) + links->vf_index->
                data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &bi_emlrtBCI,
                sp) - 1];
              i0 = links->vf_ratio->size[0];
              i1 = (int32_T)incomingLinks->data[l_index];
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &fh_emlrtBCI, sp);
              i0 = cvn_up->size[0];
              i1 = (int32_T)incomingLinks->data[l_index];
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &gh_emlrtBCI, sp);
              ndbl = muDoubleScalarMax(1.0, mtmp);
              i0 = cvn_up->size[2];
              i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &xb_emlrtDCI, sp);
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &hh_emlrtBCI, sp);
              ndbl = 1.0 - links->vf_ratio->data[(int32_T)incomingLinks->
                data[l_index] - 1];
              loop_ub = cvn_up->size[1];
              i0 = (int32_T)muDoubleScalarMax(1.0, mtmp);
              n = (int32_T)incomingLinks->data[l_index];
              i1 = b_varargin_2->size[0] * b_varargin_2->size[1];
              b_varargin_2->size[0] = 1;
              b_varargin_2->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)b_varargin_2, i1,
                                (int32_T)sizeof(real_T), &emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                b_varargin_2->data[b_varargin_2->size[0] * i1] = ndbl *
                  cvn_up->data[((n + cvn_up->size[0] * i1) + cvn_up->size[0] *
                                cvn_up->size[1] * (i0 - 1)) - 1];
              }

              i0 = links->vf_index->size[0];
              i1 = (int32_T)incomingLinks->data[l_index];
              mtmp = ((2.0 + (real_T)t) + links->vf_index->
                      data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                       &ci_emlrtBCI, sp) - 1]) + 1.0;
              i0 = links->vf_ratio->size[0];
              i1 = (int32_T)incomingLinks->data[l_index];
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ih_emlrtBCI, sp);
              i0 = cvn_up->size[0];
              i1 = (int32_T)incomingLinks->data[l_index];
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &jh_emlrtBCI, sp);
              ndbl = muDoubleScalarMax(1.0, mtmp);
              i0 = cvn_up->size[2];
              i1 = (int32_T)emlrtIntegerCheckFastR2012b(ndbl, &yb_emlrtDCI, sp);
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &kh_emlrtBCI, sp);
              pl = links->vf_ratio->data[(int32_T)incomingLinks->data[l_index] -
                1];
              loop_ub = cvn_up->size[1];
              i0 = (int32_T)muDoubleScalarMax(1.0, mtmp);
              n = (int32_T)incomingLinks->data[l_index];
              i1 = minval->size[0] * minval->size[1];
              minval->size[0] = 1;
              minval->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)minval, i1, (int32_T)
                                sizeof(real_T), &emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                minval->data[minval->size[0] * i1] = pl * cvn_up->data[((n +
                  cvn_up->size[0] * i1) + cvn_up->size[0] * cvn_up->size[1] *
                  (i0 - 1)) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                c_varargin_2[i0] = b_varargin_2->size[i0];
              }

              for (i0 = 0; i0 < 2; i0++) {
                b_minval[i0] = minval->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(c_varargin_2, b_minval, &vb_emlrtECI,
                sp);
              i0 = temp_sendingFlow->size[0];
              emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &lh_emlrtBCI, sp);
              loop_ub = temp_sendingFlow->size[1];
              i0 = ii->size[0];
              ii->size[0] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)ii, i0, (int32_T)sizeof
                                (int32_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                ii->data[i0] = i0;
              }

              iv21[0] = 1;
              iv21[1] = ii->size[0];
              emlrtSubAssignSizeCheckR2012b(iv21, 2, *(int32_T (*)[2])
                b_varargin_2->size, 2, &wb_emlrtECI, sp);
              loop_ub = b_varargin_2->size[1];
              for (i0 = 0; i0 < loop_ub; i0++) {
                temp_sendingFlow->data[temp_sendingFlow->size[0] * ii->data[i0]]
                  = b_varargin_2->data[b_varargin_2->size[0] * i0] +
                  minval->data[minval->size[0] * i0];
              }

              i0 = temp_sendingFlow->size[0];
              emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &mh_emlrtBCI, sp);
              i0 = cvn_down->size[0];
              i1 = (int32_T)incomingLinks->data[l_index];
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &nh_emlrtBCI, sp);
              i0 = cvn_down->size[2];
              i1 = (int32_T)(2.0 + (real_T)t);
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &oh_emlrtBCI, sp);
              loop_ub = temp_sendingFlow->size[1];
              i0 = d_temp_sendingFlow->size[0] * d_temp_sendingFlow->size[1];
              d_temp_sendingFlow->size[0] = 1;
              d_temp_sendingFlow->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)d_temp_sendingFlow, i0,
                                (int32_T)sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                d_temp_sendingFlow->data[d_temp_sendingFlow->size[0] * i0] =
                  temp_sendingFlow->data[temp_sendingFlow->size[0] * i0];
              }

              for (i0 = 0; i0 < 2; i0++) {
                b_minval[i0] = d_temp_sendingFlow->size[i0];
              }

              loop_ub = cvn_down->size[1];
              n = (int32_T)incomingLinks->data[l_index];
              i0 = g_cvn_down->size[0] * g_cvn_down->size[1];
              g_cvn_down->size[0] = 1;
              g_cvn_down->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)g_cvn_down, i0, (int32_T)
                                sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                g_cvn_down->data[g_cvn_down->size[0] * i0] = cvn_down->data[((n
                  + cvn_down->size[0] * i0) + cvn_down->size[0] * cvn_down->
                  size[1] * (t + 1)) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                r_cvn_down[i0] = g_cvn_down->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(b_minval, r_cvn_down, &xb_emlrtECI,
                sp);
              loop_ub = temp_sendingFlow->size[1];
              n = (int32_T)incomingLinks->data[l_index];
              i0 = c_temp_sendingFlow->size[0] * c_temp_sendingFlow->size[1];
              c_temp_sendingFlow->size[0] = 1;
              c_temp_sendingFlow->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)c_temp_sendingFlow, i0,
                                (int32_T)sizeof(real_T), &emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                c_temp_sendingFlow->data[c_temp_sendingFlow->size[0] * i0] =
                  temp_sendingFlow->data[temp_sendingFlow->size[0] * i0] -
                  cvn_down->data[((n + cvn_down->size[0] * i0) + cvn_down->size
                                  [0] * cvn_down->size[1] * (t + 1)) - 1];
              }

              b_abs(sp, c_temp_sendingFlow, b_varargin_2);
              st.site = &kb_emlrtRSI;
              if (sum(&st, b_varargin_2) > 1.0E-8) {
                i0 = cvn_down->size[0];
                i1 = (int32_T)incomingLinks->data[l_index];
                emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &qh_emlrtBCI, sp);
                loop_ub = cvn_down->size[1];
                i0 = ii->size[0];
                ii->size[0] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)ii, i0, (int32_T)
                                  sizeof(int32_T), &emlrtRTEI);
                for (i0 = 0; i0 < loop_ub; i0++) {
                  ii->data[i0] = i0;
                }

                i0 = cvn_down->size[2];
                i1 = (int32_T)(2.0 + (real_T)t);
                emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &rh_emlrtBCI, sp);
                i0 = temp_sendingFlow->size[0];
                emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &ph_emlrtBCI, sp);
                iv22[0] = 1;
                iv22[1] = ii->size[0];
                loop_ub = temp_sendingFlow->size[1];
                i0 = e_temp_sendingFlow->size[0] * e_temp_sendingFlow->size[1];
                e_temp_sendingFlow->size[0] = 1;
                e_temp_sendingFlow->size[1] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)e_temp_sendingFlow, i0,
                                  (int32_T)sizeof(real_T), &emlrtRTEI);
                for (i0 = 0; i0 < loop_ub; i0++) {
                  e_temp_sendingFlow->data[e_temp_sendingFlow->size[0] * i0] =
                    temp_sendingFlow->data[temp_sendingFlow->size[0] * i0];
                }

                for (i0 = 0; i0 < 2; i0++) {
                  b_minval[i0] = e_temp_sendingFlow->size[i0];
                }

                emlrtSubAssignSizeCheckR2012b(iv22, 2, b_minval, 2, &yb_emlrtECI,
                  sp);
                n = (int32_T)incomingLinks->data[l_index];
                loop_ub = temp_sendingFlow->size[1] - 1;
                for (i0 = 0; i0 <= loop_ub; i0++) {
                  cvn_down->data[((n + cvn_down->size[0] * ii->data[i0]) +
                                  cvn_down->size[0] * cvn_down->size[1] * (t + 1))
                    - 1] = temp_sendingFlow->data[temp_sendingFlow->size[0] * i0];
                }
              }

              l_index++;
              emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
            }
          }

          n_index++;
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
        }
      }
    }

    t++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&j_temp_sendingFlow);
  emxFree_real_T(&r_cvn_up);
  emxFree_real_T(&i_temp_sendingFlow);
  emxFree_real_T(&q_cvn_up);
  emxFree_real_T(&p_cvn_up);
  emxFree_real_T(&b_ODmatrix);
  emxFree_real_T(&c_TF);
  emxFree_real_T(&l_sendingFlow);
  emxFree_real_T(&k_sendingFlow);
  emxFree_real_T(&j_sendingFlow);
  emxFree_real_T(&i_sendingFlow);
  emxFree_real_T(&e_SF_up_cvn_db);
  emxFree_real_T(&d_SF_up_cvn_db);
  emxFree_real_T(&c_SF_up_cvn_db);
  emxFree_real_T(&b_SF_up_cvn_db);
  emxFree_real_T(&q_cvn_down);
  emxFree_real_T(&p_cvn_down);
  emxFree_real_T(&o_cvn_down);
  emxFree_real_T(&h_temp_sendingFlow);
  emxFree_real_T(&n_cvn_down);
  emxFree_real_T(&m_cvn_down);
  emxFree_real_T(&l_cvn_down);
  emxFree_real_T(&g_temp_sendingFlow);
  emxFree_real_T(&k_cvn_down);
  emxFree_real_T(&h_sendingFlow);
  emxFree_real_T(&o_cvn_up);
  emxFree_real_T(&n_cvn_up);
  emxFree_real_T(&e_temp_receivingFlow);
  emxFree_real_T(&m_cvn_up);
  emxFree_real_T(&l_cvn_up);
  emxFree_real_T(&k_cvn_up);
  emxFree_real_T(&d_temp_receivingFlow);
  emxFree_real_T(&j_cvn_up);
  emxFree_real_T(&j_cvn_down);
  emxFree_real_T(&i_cvn_down);
  emxFree_real_T(&f_temp_sendingFlow);
  emxFree_real_T(&h_cvn_down);
  emxFree_real_T(&i_cvn_up);
  emxFree_real_T(&h_cvn_up);
  emxFree_real_T(&c_temp_receivingFlow);
  emxFree_real_T(&g_cvn_up);
  emxFree_real_T(&b_TF);
  emxFree_real_T(&g_sendingFlow);
  emxFree_real_T(&e_temp_sendingFlow);
  emxFree_real_T(&g_cvn_down);
  emxFree_real_T(&d_temp_sendingFlow);
  emxFree_boolean_T(&d_nodes2update);
  emxFree_real_T(&c_temp_sendingFlow);
  emxFree_real_T(&f_cvn_up);
  emxFree_real_T(&b_temp_receivingFlow);
  emxFree_real_T(&e_cvn_up);
  emxFree_real_T(&r5);
  emxFree_boolean_T(&f_sendingFlow);
  emxFree_real_T(&e_sendingFlow);
  emxFree_real_T(&d_sendingFlow);
  emxFree_real_T(&f_cvn_down);
  emxFree_real_T(&e_cvn_down);
  emxFree_real_T(&c_sendingFlow);
  emxFree_real_T(&d_cvn_up);
  emxFree_real_T(&d_cvn_down);
  emxFree_real_T(&c_cvn_down);
  emxFree_real_T(&b_cvn_down);
  emxFree_real_T(&c_turningFlows);
  emxFree_real_T(&b_turningFlows);
  emxFree_real_T(&b_sendingFlow);
  emxFree_real_T(&b_temp_capacities);
  emxFree_real_T(&b_receivingFlow);
  emxFree_real_T(&b_turningFractions);
  emxFree_real_T(&b_tot_sendingFlow);
  emxFree_real_T(&c_deltaChange);
  emxFree_boolean_T(&b_deltaChange);
  emxFree_boolean_T(&r4);
  emxFree_boolean_T(&r3);
  emxFree_real_T(&b_temp_sendingFlow);
  emxFree_real_T(&c_cvn_up);
  emxFree_real_T(&b_cvn_up);
  emxFree_boolean_T(&c_nodes2update);
  emxFree_boolean_T(&b_nodes2update);
  emxFree_boolean_T(&r2);
  emxFree_int32_T(&ii);
  emxFree_real_T(&minval);
  emxFree_real_T(&b_varargin_2);
  emxFree_int32_T(&r1);
  emxFree_real_T(&r0);
  emxFree_boolean_T(&pot_d);
  emxFree_real_T(&result_sendingFlow);
  emxFree_real_T(&result_TurnFlow);
  emxFree_boolean_T(&SF_up_cvn_bool);
  emxFree_boolean_T(&RF_down_cvn_bool);
  emxFree_real_T(&turningFlows);
  emxFree_real_T(&turningFractions);
  emxFree_real_T(&sortedNodes);
  emxFree_real_T(&deltaChange);
  emxFree_real_T(&destinations_t);
  emxFree_real_T(&origins_t);
  emxFree_real_T(&outgoingFlow);
  emxFree_real_T(&temp_receivingFlow);
  emxFree_real_T(&temp_sendingFlow);
  emxFree_real_T(&sendingFlow);
  emxFree_real_T(&receivingFlow);
  emxFree_real_T(&temp_capacities);
  emxFree_real_T(&tot_sendingFlow);
  emxFree_real_T(&outgoingLinks);
  emxFree_real_T(&incomingLinks);
  emxFree_real_T(&SF_up_cvn_db);
  emxFree_real_T(&RF_down_cvn_db);
  emxFree_boolean_T(&nodes2update);

  /*  display(['average number of iterations: ',num2str(mean_it_iltm/totT)]); */
  /*  display(['maximum number of iterations: ',num2str(max_it_iltm)]); */
  /*  display(['total number of node updates: ',num2str(totNodes_updates)]); */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void b_eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
                   emxArray_int32_T *y)
{
  int32_T k;
  boolean_T overflow;
  int32_T i;
  const mxArray *b_y;
  const mxArray *m10;
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
    if (x->data[i - 1]) {
      k++;
    }
  }

  if (k <= x->size[1]) {
  } else {
    b_y = NULL;
    m10 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m10);
    st.site = &ae_emlrtRSI;
    error(&st, b_y, &r_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &ee_emlrtDCI, sp);
  j = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &tb_emlrtRTEI);
  j = 0;
  st.site = &oc_emlrtRSI;
  for (i = 1; i <= x->size[1]; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      j++;
    }
  }
}

/* End of code generation (ILTM.c) */
