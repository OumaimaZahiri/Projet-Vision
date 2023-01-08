/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sortIdx.h
 *
 * Code generation for function 'sortIdx'
 *
 */

#ifndef SORTIDX_H
#define SORTIDX_H

/* Include files */
#include "Fonction_Somme_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_sortIdx(emxArray_real_T *x, emxArray_int32_T *idx);

void merge_block(emxArray_int32_T *idx, emxArray_uint8_T *x, int offset, int n,
                 int preSortLevel, emxArray_int32_T *iwork,
                 emxArray_uint8_T *xwork);

void merge_pow2_block(emxArray_int32_T *idx, emxArray_uint8_T *x, int offset);

void sortIdx(const unsigned char x[1123200], int idx[1123200]);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (sortIdx.h) */