/*
 * ILTM.h
 *
 * Code generation for function 'ILTM'
 *
 */

#ifndef __ILTM_H__
#define __ILTM_H__

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
extern void ILTM(const emlrtStack *sp, const struct0_T *node_prop, const
                 struct1_T *links, const emxArray_real_T *origins, const
                 emxArray_real_T *destinations, const emxArray_real_T *ODmatrix,
                 real_T dt, real_T totT, const emxArray_real_T *TF, const
                 emxArray_real_T *varargin_1, const emxArray_real_T *varargin_2,
                 const emxArray_boolean_T *varargin_3, const emxArray_boolean_T *
                 varargin_4, const emxArray_boolean_T *varargin_5,
                 emxArray_real_T *cvn_up, emxArray_real_T *cvn_down,
                 emxArray_boolean_T *con_up, emxArray_boolean_T *con_down);
extern void b_eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y);

#endif

/* End of code generation (ILTM.h) */
