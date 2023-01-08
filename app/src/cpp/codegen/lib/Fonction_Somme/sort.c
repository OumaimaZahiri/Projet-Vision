/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sort.c
 *
 * Code generation for function 'sort'
 *
 */

/* Include files */
#include "sort.h"
#include "Fonction_Somme_emxutil.h"
#include "Fonction_Somme_types.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"

/* Function Definitions */
void b_sort(emxArray_real_T *x, emxArray_int32_T *idx)
{
  b_sortIdx(x, idx);
}

void sort(emxArray_uint8_T *x)
{
  emxArray_int32_T *idx;
  emxArray_int32_T *iwork;
  emxArray_uint8_T *xwork;
  int idx4[4];
  int b_i;
  int i;
  int i1;
  int i2;
  int i3;
  int j;
  int n;
  int nQuartets;
  int *idx_data;
  int *iwork_data;
  unsigned char x4[4];
  unsigned char *x_data;
  unsigned char *xwork_data;
  x_data = x->data;
  emxInit_int32_T(&idx, 2);
  i = idx->size[0] * idx->size[1];
  idx->size[0] = 1;
  idx->size[1] = x->size[1];
  emxEnsureCapacity_int32_T(idx, i);
  idx_data = idx->data;
  nQuartets = x->size[1];
  for (i = 0; i < nQuartets; i++) {
    idx_data[i] = 0;
  }
  n = x->size[1];
  x4[0] = 0U;
  idx4[0] = 0;
  x4[1] = 0U;
  idx4[1] = 0;
  x4[2] = 0U;
  idx4[2] = 0;
  x4[3] = 0U;
  idx4[3] = 0;
  nQuartets = x->size[1];
  emxInit_int32_T(&iwork, 1);
  i = iwork->size[0];
  iwork->size[0] = nQuartets;
  emxEnsureCapacity_int32_T(iwork, i);
  iwork_data = iwork->data;
  for (i = 0; i < nQuartets; i++) {
    iwork_data[i] = 0;
  }
  nQuartets = x->size[1];
  emxInit_uint8_T(&xwork, 1);
  i = xwork->size[0];
  xwork->size[0] = nQuartets;
  emxEnsureCapacity_uint8_T(xwork, i);
  xwork_data = xwork->data;
  for (i = 0; i < nQuartets; i++) {
    xwork_data[i] = 0U;
  }
  nQuartets = x->size[1] >> 2;
  for (j = 0; j < nQuartets; j++) {
    int b_i1;
    int i4;
    signed char b_i2;
    signed char b_i3;
    signed char b_i4;
    signed char i5;
    unsigned char u;
    unsigned char u1;
    unsigned char u2;
    unsigned char u3;
    b_i = j << 2;
    idx4[0] = b_i + 1;
    idx4[1] = b_i + 2;
    idx4[2] = b_i + 3;
    idx4[3] = b_i + 4;
    u = x_data[b_i];
    x4[0] = u;
    u1 = x_data[b_i + 1];
    x4[1] = u1;
    u2 = x_data[b_i + 2];
    x4[2] = u2;
    u3 = x_data[b_i + 3];
    x4[3] = u3;
    if (u <= u1) {
      i1 = 1;
      i2 = 2;
    } else {
      i1 = 2;
      i2 = 1;
    }
    if (u2 <= u3) {
      i3 = 3;
      i4 = 4;
    } else {
      i3 = 4;
      i4 = 3;
    }
    i = x4[i1 - 1];
    b_i1 = x4[i3 - 1];
    if (i <= b_i1) {
      i = x4[i2 - 1];
      if (i <= b_i1) {
        b_i2 = (signed char)i1;
        b_i3 = (signed char)i2;
        b_i4 = (signed char)i3;
        i5 = (signed char)i4;
      } else if (i <= x4[i4 - 1]) {
        b_i2 = (signed char)i1;
        b_i3 = (signed char)i3;
        b_i4 = (signed char)i2;
        i5 = (signed char)i4;
      } else {
        b_i2 = (signed char)i1;
        b_i3 = (signed char)i3;
        b_i4 = (signed char)i4;
        i5 = (signed char)i2;
      }
    } else {
      b_i1 = x4[i4 - 1];
      if (i <= b_i1) {
        if (x4[i2 - 1] <= b_i1) {
          b_i2 = (signed char)i3;
          b_i3 = (signed char)i1;
          b_i4 = (signed char)i2;
          i5 = (signed char)i4;
        } else {
          b_i2 = (signed char)i3;
          b_i3 = (signed char)i1;
          b_i4 = (signed char)i4;
          i5 = (signed char)i2;
        }
      } else {
        b_i2 = (signed char)i3;
        b_i3 = (signed char)i4;
        b_i4 = (signed char)i1;
        i5 = (signed char)i2;
      }
    }
    idx_data[b_i] = idx4[b_i2 - 1];
    idx_data[b_i + 1] = idx4[b_i3 - 1];
    idx_data[b_i + 2] = idx4[b_i4 - 1];
    idx_data[b_i + 3] = idx4[i5 - 1];
    x_data[b_i] = x4[b_i2 - 1];
    x_data[b_i + 1] = x4[b_i3 - 1];
    x_data[b_i + 2] = x4[b_i4 - 1];
    x_data[b_i + 3] = x4[i5 - 1];
  }
  i1 = nQuartets << 2;
  i2 = x->size[1] - i1;
  if (i2 > 0) {
    signed char perm[4];
    for (i3 = 0; i3 < i2; i3++) {
      nQuartets = i1 + i3;
      idx4[i3] = nQuartets + 1;
      x4[i3] = x_data[nQuartets];
    }
    perm[1] = 0;
    perm[2] = 0;
    perm[3] = 0;
    if (i2 == 1) {
      perm[0] = 1;
    } else if (i2 == 2) {
      if (x4[0] <= x4[1]) {
        perm[0] = 1;
        perm[1] = 2;
      } else {
        perm[0] = 2;
        perm[1] = 1;
      }
    } else if (x4[0] <= x4[1]) {
      if (x4[1] <= x4[2]) {
        perm[0] = 1;
        perm[1] = 2;
        perm[2] = 3;
      } else if (x4[0] <= x4[2]) {
        perm[0] = 1;
        perm[1] = 3;
        perm[2] = 2;
      } else {
        perm[0] = 3;
        perm[1] = 1;
        perm[2] = 2;
      }
    } else if (x4[0] <= x4[2]) {
      perm[0] = 2;
      perm[1] = 1;
      perm[2] = 3;
    } else if (x4[1] <= x4[2]) {
      perm[0] = 2;
      perm[1] = 3;
      perm[2] = 1;
    } else {
      perm[0] = 3;
      perm[1] = 2;
      perm[2] = 1;
    }
    for (i3 = 0; i3 < i2; i3++) {
      nQuartets = perm[i3] - 1;
      b_i = i1 + i3;
      idx_data[b_i] = idx4[nQuartets];
      x_data[b_i] = x4[nQuartets];
    }
  }
  nQuartets = 2;
  if (x->size[1] > 1) {
    if (x->size[1] >= 256) {
      nQuartets = x->size[1] >> 8;
      for (b_i = 0; b_i < nQuartets; b_i++) {
        merge_pow2_block(idx, x, b_i << 8);
      }
      nQuartets <<= 8;
      b_i = n - nQuartets;
      if (b_i > 0) {
        merge_block(idx, x, nQuartets, b_i, 2, iwork, xwork);
      }
      nQuartets = 8;
    }
    merge_block(idx, x, 0, n, nQuartets, iwork, xwork);
  }
  emxFree_uint8_T(&xwork);
  emxFree_int32_T(&iwork);
  emxFree_int32_T(&idx);
}

/* End of code generation (sort.c) */
