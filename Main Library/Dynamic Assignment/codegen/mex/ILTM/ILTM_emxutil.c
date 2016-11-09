/*
 * ILTM_emxutil.c
 *
 * Code generation for function 'ILTM_emxutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ILTM.h"
#include "ILTM_emxutil.h"

/* Function Definitions */
void b_emxInit_boolean_T(const emlrtStack *sp, emxArray_boolean_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxArray_boolean_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_boolean_T *)emlrtMallocMex(sizeof(emxArray_boolean_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_boolean_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void b_emxInit_int32_T(const emlrtStack *sp, emxArray_int32_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxArray_int32_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T *)emlrtMallocMex(sizeof(emxArray_int32_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_int32_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void b_emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray, int32_T
                      numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                      doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void c_emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray, int32_T
                      numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                      doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxEnsureCapacity(const emlrtStack *sp, emxArray__common *emxArray, int32_T
  oldNumel, int32_T elementSize, const emlrtRTEInfo *srcLocation)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)newNumel, (uint32_T)
      emxArray->size[i], srcLocation, sp);
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      i = (int32_T)emlrtSizeMulR2012b((uint32_T)i, 2U, srcLocation, sp);
    }

    newData = emlrtCallocMex((uint32_T)i, (uint32_T)elementSize);
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, sp);
    }

    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, (uint32_T)(elementSize * oldNumel));
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxFreeStruct_struct0_T(struct0_T *pStruct)
{
  emxFree_real_T(&pStruct->incomingLinksList);
  emxFree_real_T(&pStruct->outgoingLinksList);
  emxFree_real_T(&pStruct->nbIncomingLinks);
  emxFree_real_T(&pStruct->nbOutgoingLinks);
  emxFree_real_T(&pStruct->positionFirstIn);
  emxFree_real_T(&pStruct->positionFirstOut);
  emxFree_real_T(&pStruct->nbTF);
  emxFree_real_T(&pStruct->incomingLinksTF);
  emxFree_real_T(&pStruct->incomingLinksTFindex);
  emxFree_real_T(&pStruct->outgoingLinksTF);
  emxFree_real_T(&pStruct->outgoingLinksTFindex);
  emxFree_real_T(&pStruct->positionFirstTF);
}

void emxFreeStruct_struct1_T(struct1_T *pStruct)
{
  emxFree_real_T(&pStruct->id);
  emxFree_real_T(&pStruct->kJam);
  emxFree_real_T(&pStruct->capacity);
  emxFree_real_T(&pStruct->freeSpeed);
  emxFree_real_T(&pStruct->fromNode);
  emxFree_real_T(&pStruct->toNode);
  emxFree_real_T(&pStruct->length);
  emxFree_real_T(&pStruct->ws);
  emxFree_real_T(&pStruct->vf_index);
  emxFree_real_T(&pStruct->vf_ratio);
  emxFree_real_T(&pStruct->vw_index);
  emxFree_real_T(&pStruct->vw_ratio);
}

void emxFree_boolean_T(emxArray_boolean_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_boolean_T *)NULL) {
    if (((*pEmxArray)->data != (boolean_T *)NULL) && (*pEmxArray)->canFreeData)
    {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_boolean_T *)NULL;
  }
}

void emxFree_int32_T(emxArray_int32_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int32_T *)NULL) {
    if (((*pEmxArray)->data != (int32_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_int32_T *)NULL;
  }
}

void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

void emxInitStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct, const
  emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->incomingLinksList, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->outgoingLinksList, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->nbIncomingLinks, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->nbOutgoingLinks, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->positionFirstIn, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->positionFirstOut, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->nbTF, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->incomingLinksTF, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->incomingLinksTFindex, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->outgoingLinksTF, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->outgoingLinksTFindex, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->positionFirstTF, 1, srcLocation, doPush);
}

void emxInitStruct_struct1_T(const emlrtStack *sp, struct1_T *pStruct, const
  emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->id, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->kJam, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->capacity, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->freeSpeed, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->fromNode, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->toNode, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->length, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->ws, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->vf_index, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->vf_ratio, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->vw_index, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->vw_ratio, 1, srcLocation, doPush);
}

void emxInit_boolean_T(const emlrtStack *sp, emxArray_boolean_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxArray_boolean_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_boolean_T *)emlrtMallocMex(sizeof(emxArray_boolean_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_boolean_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_int32_T(const emlrtStack *sp, emxArray_int32_T **pEmxArray, int32_T
                     numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                     doPush)
{
  emxArray_int32_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T *)emlrtMallocMex(sizeof(emxArray_int32_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_int32_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray, int32_T
                    numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                    doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/* End of code generation (ILTM_emxutil.c) */
