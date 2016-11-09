/*
 * issorted.c
 *
 * Code generation for function 'issorted'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ILTM.h"
#include "issorted.h"

/* Function Definitions */
boolean_T issorted(const emxArray_real_T *x)
{
  boolean_T y;
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  y = true;
  if (x->size[1] == 0) {
  } else {
    k = 1;
    exitg1 = false;
    while ((!exitg1) && (k <= x->size[1] - 1)) {
      if ((x->data[k - 1] <= x->data[k]) || muDoubleScalarIsNaN(x->data[k])) {
        p = true;
      } else {
        p = false;
      }

      if (!p) {
        y = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return y;
}

/* End of code generation (issorted.c) */
