/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Fonction_Somme_emxutil.h
 *
 * Code generation for function 'Fonction_Somme_emxutil'
 *
 */

#ifndef FONCTION_SOMME_EMXUTIL_H
#define FONCTION_SOMME_EMXUTIL_H

/* Include files */
#include "Fonction_Somme_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void emxCopyMatrix_real_T(double dst[2], const double src[2]);

extern void emxCopyMatrix_real_T1(double dst[4], const double src[4]);

extern void emxCopyMatrix_real_T2(double dst[16], const double src[16]);

extern void emxCopyStruct_struct_T(b_struct_T *dst, const b_struct_T *src);

extern void emxCopy_boolean_T_0x0(emxArray_boolean_T_0x0 *dst,
                                  const emxArray_boolean_T_0x0 *src);

extern void emxCopy_real_T(emxArray_real_T **dst, emxArray_real_T *const *src);

extern void emxCopy_real_T_1x0(emxArray_real_T_1x0 *dst,
                               const emxArray_real_T_1x0 *src);

extern void emxEnsureCapacity_boolean_T(emxArray_boolean_T *emxArray,
                                        int oldNumel);

extern void emxEnsureCapacity_creal_T(emxArray_creal_T *emxArray, int oldNumel);

extern void emxEnsureCapacity_int16_T(emxArray_int16_T *emxArray, int oldNumel);

extern void emxEnsureCapacity_int32_T(emxArray_int32_T *emxArray, int oldNumel);

extern void emxEnsureCapacity_real32_T(emxArray_real32_T *emxArray,
                                       int oldNumel);

extern void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int oldNumel);

extern void emxEnsureCapacity_struct_T(emxArray_struct_T *emxArray,
                                       int oldNumel);

extern void emxEnsureCapacity_struct_T1(b_emxArray_struct_T *emxArray,
                                        int oldNumel);

extern void emxEnsureCapacity_uint8_T(emxArray_uint8_T *emxArray, int oldNumel);

extern void emxExpand_struct_T(b_emxArray_struct_T *emxArray, int fromIndex,
                               int toIndex);

extern void emxFreeStruct_struct_T(b_struct_T *pStruct);

extern void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);

extern void emxFree_creal_T(emxArray_creal_T **pEmxArray);

extern void emxFree_int16_T(emxArray_int16_T **pEmxArray);

extern void emxFree_int32_T(emxArray_int32_T **pEmxArray);

extern void emxFree_real32_T(emxArray_real32_T **pEmxArray);

extern void emxFree_real_T(emxArray_real_T **pEmxArray);

extern void emxFree_struct_T(emxArray_struct_T **pEmxArray);

extern void emxFree_struct_T1(b_emxArray_struct_T **pEmxArray);

extern void emxFree_uint8_T(emxArray_uint8_T **pEmxArray);

extern void emxInitStruct_struct_T(b_struct_T *pStruct);

extern void emxInit_boolean_T(emxArray_boolean_T **pEmxArray,
                              int numDimensions);

extern void emxInit_creal_T(emxArray_creal_T **pEmxArray, int numDimensions);

extern void emxInit_int16_T(emxArray_int16_T **pEmxArray);

extern void emxInit_int32_T(emxArray_int32_T **pEmxArray, int numDimensions);

extern void emxInit_real32_T(emxArray_real32_T **pEmxArray);

extern void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);

extern void emxInit_struct_T(emxArray_struct_T **pEmxArray);

extern void emxInit_struct_T1(b_emxArray_struct_T **pEmxArray);

extern void emxInit_uint8_T(emxArray_uint8_T **pEmxArray, int numDimensions);

extern void emxTrim_struct_T(b_emxArray_struct_T *emxArray, int fromIndex,
                             int toIndex);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (Fonction_Somme_emxutil.h) */
