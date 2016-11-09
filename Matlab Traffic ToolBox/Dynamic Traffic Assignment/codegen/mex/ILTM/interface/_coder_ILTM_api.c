/*
 * _coder_ILTM_api.c
 *
 * Code generation for function '_coder_ILTM_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ILTM.h"
#include "_coder_ILTM_api.h"
#include "ILTM_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo ac_emlrtRTEI = { 1, 1, "_coder_ILTM_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y);
static const mxArray *b_emlrt_marshallOut(const emxArray_boolean_T *u);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *links, const
  char_T *identifier, struct1_T *y);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T *y);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *node_prop,
  const char_T *identifier, struct0_T *y);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *origins,
  const char_T *identifier, emxArray_real_T *y);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ODmatrix,
  const char_T *identifier, emxArray_real_T *y);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *dt, const
  char_T *identifier);
static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *varargin_3,
  const char_T *identifier, emxArray_boolean_T *y);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_boolean_T *y);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_boolean_T *ret);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[12] = { "incomingLinksList",
    "outgoingLinksList", "nbIncomingLinks", "nbOutgoingLinks", "positionFirstIn",
    "positionFirstOut", "nbTF", "incomingLinksTF", "incomingLinksTFindex",
    "outgoingLinksTF", "outgoingLinksTFindex", "positionFirstTF" };

  thisId.fParent = parentId;
  emlrtCheckStructR2012b(sp, parentId, u, 12, fieldNames, 0U, 0);
  thisId.fIdentifier = "incomingLinksList";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "incomingLinksList")), &thisId, y->incomingLinksList);
  thisId.fIdentifier = "outgoingLinksList";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "outgoingLinksList")), &thisId, y->outgoingLinksList);
  thisId.fIdentifier = "nbIncomingLinks";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "nbIncomingLinks")), &thisId, y->nbIncomingLinks);
  thisId.fIdentifier = "nbOutgoingLinks";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "nbOutgoingLinks")), &thisId, y->nbOutgoingLinks);
  thisId.fIdentifier = "positionFirstIn";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "positionFirstIn")), &thisId, y->positionFirstIn);
  thisId.fIdentifier = "positionFirstOut";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "positionFirstOut")), &thisId, y->positionFirstOut);
  thisId.fIdentifier = "nbTF";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "nbTF")),
                     &thisId, y->nbTF);
  thisId.fIdentifier = "incomingLinksTF";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "incomingLinksTF")), &thisId, y->incomingLinksTF);
  thisId.fIdentifier = "incomingLinksTFindex";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "incomingLinksTFindex")), &thisId, y->incomingLinksTFindex);
  thisId.fIdentifier = "outgoingLinksTF";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "outgoingLinksTF")), &thisId, y->outgoingLinksTF);
  thisId.fIdentifier = "outgoingLinksTFindex";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "outgoingLinksTFindex")), &thisId, y->outgoingLinksTFindex);
  thisId.fIdentifier = "positionFirstTF";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "positionFirstTF")), &thisId, y->positionFirstTF);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const emxArray_boolean_T *u)
{
  const mxArray *y;
  static const int32_T iv43[2] = { 0, 0 };

  const mxArray *m15;
  y = NULL;
  m15 = emlrtCreateLogicalArray(2, iv43);
  mxSetData((mxArray *)m15, (void *)u->data);
  emlrtSetDimensions((mxArray *)m15, u->size, 2);
  emlrtAssign(&y, m15);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  n_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *links, const
  char_T *identifier, struct1_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  e_emlrt_marshallIn(sp, emlrtAlias(links), &thisId, y);
  emlrtDestroyArray(&links);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[12] = { "id", "kJam", "capacity", "freeSpeed",
    "fromNode", "toNode", "length", "ws", "vf_index", "vf_ratio", "vw_index",
    "vw_ratio" };

  thisId.fParent = parentId;
  emlrtCheckStructR2012b(sp, parentId, u, 12, fieldNames, 0U, 0);
  thisId.fIdentifier = "id";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "id")),
                     &thisId, y->id);
  thisId.fIdentifier = "kJam";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "kJam")),
                     &thisId, y->kJam);
  thisId.fIdentifier = "capacity";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "capacity")),
                     &thisId, y->capacity);
  thisId.fIdentifier = "freeSpeed";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "freeSpeed")),
                     &thisId, y->freeSpeed);
  thisId.fIdentifier = "fromNode";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "fromNode")),
                     &thisId, y->fromNode);
  thisId.fIdentifier = "toNode";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "toNode")),
                     &thisId, y->toNode);
  thisId.fIdentifier = "length";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "length")),
                     &thisId, y->length);
  thisId.fIdentifier = "ws";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "ws")),
                     &thisId, y->ws);
  thisId.fIdentifier = "vf_index";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "vf_index")),
                     &thisId, y->vf_index);
  thisId.fIdentifier = "vf_ratio";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "vf_ratio")),
                     &thisId, y->vf_ratio);
  thisId.fIdentifier = "vw_index";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "vw_index")),
                     &thisId, y->vw_index);
  thisId.fIdentifier = "vw_ratio";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "vw_ratio")),
                     &thisId, y->vw_ratio);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *node_prop,
  const char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(sp, emlrtAlias(node_prop), &thisId, y);
  emlrtDestroyArray(&node_prop);
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv42[3] = { 0, 0, 0 };

  const mxArray *m14;
  y = NULL;
  m14 = emlrtCreateNumericArray(3, iv42, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m14, (void *)u->data);
  emlrtSetDimensions((mxArray *)m14, u->size, 3);
  emlrtAssign(&y, m14);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *origins,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  g_emlrt_marshallIn(sp, emlrtAlias(origins), &thisId, y);
  emlrtDestroyArray(&origins);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ODmatrix,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  i_emlrt_marshallIn(sp, emlrtAlias(ODmatrix), &thisId, y);
  emlrtDestroyArray(&ODmatrix);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *dt, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = k_emlrt_marshallIn(sp, emlrtAlias(dt), &thisId);
  emlrtDestroyArray(&dt);
  return y;
}

static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = q_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *varargin_3,
  const char_T *identifier, emxArray_boolean_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  m_emlrt_marshallIn(sp, emlrtAlias(varargin_3), &thisId, y);
  emlrtDestroyArray(&varargin_3);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_boolean_T *y)
{
  r_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv44[1];
  boolean_T bv0[1];
  int32_T iv45[1];
  int32_T i14;
  iv44[0] = -1;
  bv0[0] = true;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, iv44, bv0, iv45);
  i14 = ret->size[0];
  ret->size[0] = iv45[0];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i14, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2011b(src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv46[2];
  boolean_T bv1[2];
  int32_T i15;
  static const boolean_T bv2[2] = { false, true };

  int32_T iv47[2];
  for (i15 = 0; i15 < 2; i15++) {
    iv46[i15] = 1 + -2 * i15;
    bv1[i15] = bv2[i15];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv46, bv1, iv47);
  ret->size[0] = iv47[0];
  ret->size[1] = iv47[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv48[3];
  boolean_T bv3[3];
  int32_T i;
  int32_T iv49[3];
  for (i = 0; i < 3; i++) {
    iv48[i] = -1;
    bv3[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, iv48, bv3, iv49);
  ret->size[0] = iv49[0];
  ret->size[1] = iv49[1];
  ret->size[2] = iv49[2];
  ret->allocatedSize = ret->size[0] * ret->size[1] * ret->size[2];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static real_T q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_boolean_T *ret)
{
  int32_T iv50[2];
  boolean_T bv4[2];
  int32_T i;
  int32_T iv51[2];
  for (i = 0; i < 2; i++) {
    iv50[i] = -1;
    bv4[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "logical", false, 2U, iv50, bv4,
    iv51);
  ret->size[0] = iv51[0];
  ret->size[1] = iv51[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (boolean_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void ILTM_api(const mxArray * const prhs[13], const mxArray *plhs[4])
{
  struct0_T node_prop;
  struct1_T links;
  emxArray_real_T *origins;
  emxArray_real_T *destinations;
  emxArray_real_T *ODmatrix;
  emxArray_real_T *TF;
  emxArray_real_T *varargin_1;
  emxArray_real_T *varargin_2;
  emxArray_boolean_T *varargin_3;
  emxArray_boolean_T *varargin_4;
  emxArray_boolean_T *varargin_5;
  emxArray_real_T *cvn_up;
  emxArray_real_T *cvn_down;
  emxArray_boolean_T *con_up;
  emxArray_boolean_T *con_down;
  real_T dt;
  real_T totT;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInitStruct_struct0_T(&st, &node_prop, &ac_emlrtRTEI, true);
  emxInitStruct_struct1_T(&st, &links, &ac_emlrtRTEI, true);
  b_emxInit_real_T(&st, &origins, 2, &ac_emlrtRTEI, true);
  b_emxInit_real_T(&st, &destinations, 2, &ac_emlrtRTEI, true);
  c_emxInit_real_T(&st, &ODmatrix, 3, &ac_emlrtRTEI, true);
  c_emxInit_real_T(&st, &TF, 3, &ac_emlrtRTEI, true);
  c_emxInit_real_T(&st, &varargin_1, 3, &ac_emlrtRTEI, true);
  c_emxInit_real_T(&st, &varargin_2, 3, &ac_emlrtRTEI, true);
  emxInit_boolean_T(&st, &varargin_3, 2, &ac_emlrtRTEI, true);
  emxInit_boolean_T(&st, &varargin_4, 2, &ac_emlrtRTEI, true);
  emxInit_boolean_T(&st, &varargin_5, 2, &ac_emlrtRTEI, true);
  c_emxInit_real_T(&st, &cvn_up, 3, &ac_emlrtRTEI, true);
  c_emxInit_real_T(&st, &cvn_down, 3, &ac_emlrtRTEI, true);
  emxInit_boolean_T(&st, &con_up, 2, &ac_emlrtRTEI, true);
  emxInit_boolean_T(&st, &con_down, 2, &ac_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "node_prop", &node_prop);
  d_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "links", &links);
  f_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "origins", origins);
  f_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "destinations", destinations);
  h_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "ODmatrix", ODmatrix);
  dt = j_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "dt");
  totT = j_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "totT");
  h_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "TF", TF);
  h_emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "varargin_1", varargin_1);
  h_emlrt_marshallIn(&st, emlrtAlias(prhs[9]), "varargin_2", varargin_2);
  l_emlrt_marshallIn(&st, emlrtAlias(prhs[10]), "varargin_3", varargin_3);
  l_emlrt_marshallIn(&st, emlrtAlias(prhs[11]), "varargin_4", varargin_4);
  l_emlrt_marshallIn(&st, emlrtAlias(prhs[12]), "varargin_5", varargin_5);

  /* Invoke the target function */
  ILTM(&st, &node_prop, &links, origins, destinations, ODmatrix, dt, totT, TF,
       varargin_1, varargin_2, varargin_3, varargin_4, varargin_5, cvn_up,
       cvn_down, con_up, con_down);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(cvn_up);
  plhs[1] = emlrt_marshallOut(cvn_down);
  plhs[2] = b_emlrt_marshallOut(con_up);
  plhs[3] = b_emlrt_marshallOut(con_down);
  con_down->canFreeData = false;
  emxFree_boolean_T(&con_down);
  con_up->canFreeData = false;
  emxFree_boolean_T(&con_up);
  cvn_down->canFreeData = false;
  emxFree_real_T(&cvn_down);
  cvn_up->canFreeData = false;
  emxFree_real_T(&cvn_up);
  varargin_5->canFreeData = false;
  emxFree_boolean_T(&varargin_5);
  varargin_4->canFreeData = false;
  emxFree_boolean_T(&varargin_4);
  varargin_3->canFreeData = false;
  emxFree_boolean_T(&varargin_3);
  varargin_2->canFreeData = false;
  emxFree_real_T(&varargin_2);
  varargin_1->canFreeData = false;
  emxFree_real_T(&varargin_1);
  TF->canFreeData = false;
  emxFree_real_T(&TF);
  ODmatrix->canFreeData = false;
  emxFree_real_T(&ODmatrix);
  destinations->canFreeData = false;
  emxFree_real_T(&destinations);
  origins->canFreeData = false;
  emxFree_real_T(&origins);
  emxFreeStruct_struct1_T(&links);
  emxFreeStruct_struct0_T(&node_prop);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_ILTM_api.c) */
