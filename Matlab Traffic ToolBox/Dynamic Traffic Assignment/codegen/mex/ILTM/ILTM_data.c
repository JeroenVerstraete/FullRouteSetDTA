/*
 * ILTM_data.c
 *
 * Code generation for function 'ILTM_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ILTM.h"
#include "ILTM_data.h"

/* Variable Definitions */
const volatile char_T *emlrtBreakCheckR2012bFlagVar;
emlrtRSInfo nb_emlrtRSI = { 96, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

emlrtRSInfo ob_emlrtRSI = { 229, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

emlrtRSInfo pb_emlrtRSI = { 202, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

emlrtRSInfo qb_emlrtRSI = { 22, "eml_int_forloop_overflow_check",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

emlrtRSInfo ac_emlrtRSI = { 22, "issorted",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\issorted.m"
};

emlrtRSInfo cc_emlrtRSI = { 39, "allOrAny",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\allOrAny.m"
};

emlrtRSInfo dc_emlrtRSI = { 42, "allOrAny",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\allOrAny.m"
};

emlrtRSInfo ec_emlrtRSI = { 124, "allOrAny",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\allOrAny.m"
};

emlrtRSInfo nc_emlrtRSI = { 11, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

emlrtRSInfo oc_emlrtRSI = { 26, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

emlrtRSInfo pc_emlrtRSI = { 39, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

emlrtRSInfo cd_emlrtRSI = { 12, "repmat",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

emlrtRSInfo dd_emlrtRSI = { 40, "repmat",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

emlrtRSInfo ed_emlrtRSI = { 47, "repmat",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

emlrtRSInfo id_emlrtRSI = { 76, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

emlrtMCInfo emlrtMCI = { 41, 9, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

emlrtMCInfo b_emlrtMCI = { 38, 19, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

emlrtMCInfo c_emlrtMCI = { 82, 9, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

emlrtMCInfo d_emlrtMCI = { 81, 19, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

emlrtMCInfo k_emlrtMCI = { 25, 19, "assert",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\assert.m"
};

emlrtMCInfo r_emlrtMCI = { 14, 5, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

emlrtMCInfo s_emlrtMCI = { 24, 5, "repmat",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

emlrtRTEInfo lb_emlrtRTEI = { 30, 1, "repmat",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

emlrtRTEInfo mb_emlrtRTEI = { 55, 1, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

emlrtDCInfo ae_emlrtDCI = { 15, 14, "repmat",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m",
  4 };

emlrtRSInfo yd_emlrtRSI = { 25, "assert",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\assert.m"
};

emlrtRSInfo ae_emlrtRSI = { 14, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

emlrtRSInfo de_emlrtRSI = { 24, "repmat",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

emlrtRSInfo ee_emlrtRSI = { 81, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

emlrtRSInfo fe_emlrtRSI = { 38, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

emlrtRSInfo re_emlrtRSI = { 82, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

emlrtRSInfo se_emlrtRSI = { 41, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

/* End of code generation (ILTM_data.c) */
