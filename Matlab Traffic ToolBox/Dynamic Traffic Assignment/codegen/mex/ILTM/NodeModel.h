/*
 * NodeModel.h
 *
 * Code generation for function 'NodeModel'
 *
 */

#ifndef __NODEMODEL_H__
#define __NODEMODEL_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "ILTM_types.h"

/* Function Declarations */
extern void NodeModel(const emlrtStack *sp, real_T nbIncomingLinks, real_T
                      nbOutgoingLinks, const emxArray_real_T *sendingFlow, const
                      emxArray_real_T *turningFractions, const emxArray_real_T
                      *receivingFlow, const emxArray_real_T
                      *incomingLinks_capacity, emxArray_real_T *TurnFlows);
extern void eml_assert_valid_size_arg(const emlrtStack *sp, real_T varargin_2);
extern void eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y);

#endif

/* End of code generation (NodeModel.h) */
