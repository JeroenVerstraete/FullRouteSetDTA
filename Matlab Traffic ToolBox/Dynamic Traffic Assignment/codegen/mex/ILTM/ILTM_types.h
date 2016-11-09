/*
 * ILTM_types.h
 *
 * Code generation for function 'ILTM'
 *
 */

#ifndef __ILTM_TYPES_H__
#define __ILTM_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray__common
#define struct_emxArray__common
struct emxArray__common
{
    void *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray__common*/
#ifndef typedef_emxArray__common
#define typedef_emxArray__common
typedef struct emxArray__common emxArray__common;
#endif /*typedef_emxArray__common*/
#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T
struct emxArray_boolean_T
{
    boolean_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_boolean_T*/
#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T
typedef struct emxArray_boolean_T emxArray_boolean_T;
#endif /*typedef_emxArray_boolean_T*/
#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T
struct emxArray_int32_T
{
    int32_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_int32_T*/
#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T
typedef struct emxArray_int32_T emxArray_int32_T;
#endif /*typedef_emxArray_int32_T*/
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T
{
    real_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_real_T*/
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /*typedef_emxArray_real_T*/
#ifndef typedef_struct0_T
#define typedef_struct0_T
typedef struct
{
    emxArray_real_T *incomingLinksList;
    emxArray_real_T *outgoingLinksList;
    emxArray_real_T *nbIncomingLinks;
    emxArray_real_T *nbOutgoingLinks;
    emxArray_real_T *positionFirstIn;
    emxArray_real_T *positionFirstOut;
    emxArray_real_T *nbTF;
    emxArray_real_T *incomingLinksTF;
    emxArray_real_T *incomingLinksTFindex;
    emxArray_real_T *outgoingLinksTF;
    emxArray_real_T *outgoingLinksTFindex;
    emxArray_real_T *positionFirstTF;
} struct0_T;
#endif /*typedef_struct0_T*/
#ifndef typedef_struct1_T
#define typedef_struct1_T
typedef struct
{
    emxArray_real_T *id;
    emxArray_real_T *kJam;
    emxArray_real_T *capacity;
    emxArray_real_T *freeSpeed;
    emxArray_real_T *fromNode;
    emxArray_real_T *toNode;
    emxArray_real_T *length;
    emxArray_real_T *ws;
    emxArray_real_T *vf_index;
    emxArray_real_T *vf_ratio;
    emxArray_real_T *vw_index;
    emxArray_real_T *vw_ratio;
} struct1_T;
#endif /*typedef_struct1_T*/

#endif
/* End of code generation (ILTM_types.h) */
