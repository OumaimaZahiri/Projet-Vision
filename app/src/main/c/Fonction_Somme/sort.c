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
#include "rt_nonfinite.h"

/* Function Definitions */
void b_sort(emxArray_real_T *x, emxArray_int32_T *idx)
{
  emxArray_int32_T *b_idx;
  emxArray_int32_T *iwork;
  emxArray_real_T *b_x;
  emxArray_real_T *xwork;
  double b_xwork[256];
  double x4[4];
  double d;
  double d1;
  double *b_x_data;
  double *x_data;
  double *xwork_data;
  int b_iwork[256];
  int idx4[4];
  int b;
  int bLen2;
  int b_b;
  int exitg1;
  int i;
  int i2;
  int i3;
  int i4;
  int ib;
  int idx_tmp;
  int k;
  int n;
  int nBlocks;
  int nNaNs;
  int nNonNaN;
  int quartetOffset;
  unsigned int unnamed_idx_0;
  int *b_idx_data;
  int *idx_data;
  int *iwork_data;
  signed char perm[4];
  signed char b_i2;
  signed char b_i3;
  signed char b_i4;
  signed char i1;
  x_data = x->data;
  unnamed_idx_0 = (unsigned int)x->size[0];
  i = idx->size[0] * idx->size[1];
  idx->size[0] = (int)unnamed_idx_0;
  idx->size[1] = 1;
  emxEnsureCapacity_int32_T(idx, i);
  idx_data = idx->data;
  ib = (int)unnamed_idx_0;
  for (i = 0; i < ib; i++) {
    idx_data[i] = 0;
  }
  if (x->size[0] != 0) {
    emxInit_int32_T(&b_idx, 1);
    ib = idx->size[0];
    i = b_idx->size[0];
    b_idx->size[0] = idx->size[0];
    emxEnsureCapacity_int32_T(b_idx, i);
    b_idx_data = b_idx->data;
    for (i = 0; i < ib; i++) {
      b_idx_data[i] = 0;
    }
    emxInit_real_T(&b_x, 1);
    ib = x->size[0];
    i = b_x->size[0];
    b_x->size[0] = ib;
    emxEnsureCapacity_real_T(b_x, i);
    b_x_data = b_x->data;
    for (i = 0; i < ib; i++) {
      b_x_data[i] = x_data[i];
    }
    n = x->size[0];
    x4[0] = 0.0;
    idx4[0] = 0;
    x4[1] = 0.0;
    idx4[1] = 0;
    x4[2] = 0.0;
    idx4[2] = 0;
    x4[3] = 0.0;
    idx4[3] = 0;
    emxInit_int32_T(&iwork, 1);
    i = iwork->size[0];
    iwork->size[0] = idx->size[0];
    emxEnsureCapacity_int32_T(iwork, i);
    iwork_data = iwork->data;
    ib = idx->size[0];
    for (i = 0; i < ib; i++) {
      iwork_data[i] = 0;
    }
    ib = x->size[0];
    emxInit_real_T(&xwork, 1);
    i = xwork->size[0];
    xwork->size[0] = ib;
    emxEnsureCapacity_real_T(xwork, i);
    xwork_data = xwork->data;
    for (i = 0; i < ib; i++) {
      xwork_data[i] = 0.0;
    }
    nNaNs = 0;
    ib = 0;
    for (k = 0; k < n; k++) {
      if (rtIsNaN(b_x_data[k])) {
        idx_tmp = (n - nNaNs) - 1;
        b_idx_data[idx_tmp] = k + 1;
        xwork_data[idx_tmp] = b_x_data[k];
        nNaNs++;
      } else {
        ib++;
        idx4[ib - 1] = k + 1;
        x4[ib - 1] = b_x_data[k];
        if (ib == 4) {
          quartetOffset = k - nNaNs;
          if (x4[0] >= x4[1]) {
            ib = 1;
            i2 = 2;
          } else {
            ib = 2;
            i2 = 1;
          }
          if (x4[2] >= x4[3]) {
            i3 = 3;
            i4 = 4;
          } else {
            i3 = 4;
            i4 = 3;
          }
          d = x4[ib - 1];
          d1 = x4[i3 - 1];
          if (d >= d1) {
            d = x4[i2 - 1];
            if (d >= d1) {
              i1 = (signed char)ib;
              b_i2 = (signed char)i2;
              b_i3 = (signed char)i3;
              b_i4 = (signed char)i4;
            } else if (d >= x4[i4 - 1]) {
              i1 = (signed char)ib;
              b_i2 = (signed char)i3;
              b_i3 = (signed char)i2;
              b_i4 = (signed char)i4;
            } else {
              i1 = (signed char)ib;
              b_i2 = (signed char)i3;
              b_i3 = (signed char)i4;
              b_i4 = (signed char)i2;
            }
          } else {
            d1 = x4[i4 - 1];
            if (d >= d1) {
              if (x4[i2 - 1] >= d1) {
                i1 = (signed char)i3;
                b_i2 = (signed char)ib;
                b_i3 = (signed char)i2;
                b_i4 = (signed char)i4;
              } else {
                i1 = (signed char)i3;
                b_i2 = (signed char)ib;
                b_i3 = (signed char)i4;
                b_i4 = (signed char)i2;
              }
            } else {
              i1 = (signed char)i3;
              b_i2 = (signed char)i4;
              b_i3 = (signed char)ib;
              b_i4 = (signed char)i2;
            }
          }
          b_idx_data[quartetOffset - 3] = idx4[i1 - 1];
          b_idx_data[quartetOffset - 2] = idx4[b_i2 - 1];
          b_idx_data[quartetOffset - 1] = idx4[b_i3 - 1];
          b_idx_data[quartetOffset] = idx4[b_i4 - 1];
          b_x_data[quartetOffset - 3] = x4[i1 - 1];
          b_x_data[quartetOffset - 2] = x4[b_i2 - 1];
          b_x_data[quartetOffset - 1] = x4[b_i3 - 1];
          b_x_data[quartetOffset] = x4[b_i4 - 1];
          ib = 0;
        }
      }
    }
    i3 = b_x->size[0] - nNaNs;
    if (ib > 0) {
      perm[1] = 0;
      perm[2] = 0;
      perm[3] = 0;
      if (ib == 1) {
        perm[0] = 1;
      } else if (ib == 2) {
        if (x4[0] >= x4[1]) {
          perm[0] = 1;
          perm[1] = 2;
        } else {
          perm[0] = 2;
          perm[1] = 1;
        }
      } else if (x4[0] >= x4[1]) {
        if (x4[1] >= x4[2]) {
          perm[0] = 1;
          perm[1] = 2;
          perm[2] = 3;
        } else if (x4[0] >= x4[2]) {
          perm[0] = 1;
          perm[1] = 3;
          perm[2] = 2;
        } else {
          perm[0] = 3;
          perm[1] = 1;
          perm[2] = 2;
        }
      } else if (x4[0] >= x4[2]) {
        perm[0] = 2;
        perm[1] = 1;
        perm[2] = 3;
      } else if (x4[1] >= x4[2]) {
        perm[0] = 2;
        perm[1] = 3;
        perm[2] = 1;
      } else {
        perm[0] = 3;
        perm[1] = 2;
        perm[2] = 1;
      }
      i = (unsigned char)ib;
      for (k = 0; k < i; k++) {
        idx_tmp = perm[k] - 1;
        quartetOffset = (i3 - ib) + k;
        b_idx_data[quartetOffset] = idx4[idx_tmp];
        b_x_data[quartetOffset] = x4[idx_tmp];
      }
    }
    ib = nNaNs >> 1;
    for (k = 0; k < ib; k++) {
      quartetOffset = i3 + k;
      i2 = b_idx_data[quartetOffset];
      idx_tmp = (n - k) - 1;
      b_idx_data[quartetOffset] = b_idx_data[idx_tmp];
      b_idx_data[idx_tmp] = i2;
      b_x_data[quartetOffset] = xwork_data[idx_tmp];
      b_x_data[idx_tmp] = xwork_data[quartetOffset];
    }
    if ((nNaNs & 1) != 0) {
      ib += i3;
      b_x_data[ib] = xwork_data[ib];
    }
    nNonNaN = b_x->size[0] - nNaNs;
    ib = 2;
    if (nNonNaN > 1) {
      if (b_x->size[0] >= 256) {
        nBlocks = nNonNaN >> 8;
        if (nBlocks > 0) {
          for (b = 0; b < nBlocks; b++) {
            i4 = (b << 8) - 1;
            for (b_b = 0; b_b < 6; b_b++) {
              n = 1 << (b_b + 2);
              bLen2 = n << 1;
              i = 256 >> (b_b + 3);
              for (k = 0; k < i; k++) {
                i2 = (i4 + k * bLen2) + 1;
                for (quartetOffset = 0; quartetOffset < bLen2;
                     quartetOffset++) {
                  ib = i2 + quartetOffset;
                  b_iwork[quartetOffset] = b_idx_data[ib];
                  b_xwork[quartetOffset] = b_x_data[ib];
                }
                i3 = 0;
                quartetOffset = n;
                ib = i2 - 1;
                do {
                  exitg1 = 0;
                  ib++;
                  if (b_xwork[i3] >= b_xwork[quartetOffset]) {
                    b_idx_data[ib] = b_iwork[i3];
                    b_x_data[ib] = b_xwork[i3];
                    if (i3 + 1 < n) {
                      i3++;
                    } else {
                      exitg1 = 1;
                    }
                  } else {
                    b_idx_data[ib] = b_iwork[quartetOffset];
                    b_x_data[ib] = b_xwork[quartetOffset];
                    if (quartetOffset + 1 < bLen2) {
                      quartetOffset++;
                    } else {
                      ib -= i3;
                      for (quartetOffset = i3 + 1; quartetOffset <= n;
                           quartetOffset++) {
                        idx_tmp = ib + quartetOffset;
                        b_idx_data[idx_tmp] = b_iwork[quartetOffset - 1];
                        b_x_data[idx_tmp] = b_xwork[quartetOffset - 1];
                      }
                      exitg1 = 1;
                    }
                  }
                } while (exitg1 == 0);
              }
            }
          }
          ib = nBlocks << 8;
          quartetOffset = nNonNaN - ib;
          if (quartetOffset > 0) {
            b_merge_block(b_idx, b_x, ib, quartetOffset, 2, iwork, xwork);
          }
          ib = 8;
        }
      }
      b_merge_block(b_idx, b_x, 0, nNonNaN, ib, iwork, xwork);
      xwork_data = xwork->data;
      iwork_data = iwork->data;
      b_x_data = b_x->data;
      b_idx_data = b_idx->data;
    }
    if ((nNaNs > 0) && (nNonNaN > 0)) {
      for (k = 0; k < nNaNs; k++) {
        ib = nNonNaN + k;
        xwork_data[k] = b_x_data[ib];
        iwork_data[k] = b_idx_data[ib];
      }
      for (k = nNonNaN; k >= 1; k--) {
        ib = (nNaNs + k) - 1;
        b_x_data[ib] = b_x_data[k - 1];
        b_idx_data[ib] = b_idx_data[k - 1];
      }
      for (k = 0; k < nNaNs; k++) {
        b_x_data[k] = xwork_data[k];
        b_idx_data[k] = iwork_data[k];
      }
    }
    emxFree_real_T(&xwork);
    emxFree_int32_T(&iwork);
    ib = b_idx->size[0];
    for (i = 0; i < ib; i++) {
      idx_data[i] = b_idx_data[i];
    }
    emxFree_int32_T(&b_idx);
    ib = b_x->size[0];
    for (i = 0; i < ib; i++) {
      x_data[i] = b_x_data[i];
    }
    emxFree_real_T(&b_x);
  }
}

void sort(emxArray_uint8_T *x)
{
  emxArray_int32_T *idx;
  emxArray_int32_T *iwork;
  emxArray_uint8_T *xwork;
  int idx4[4];
  int b_i;
  int b_i1;
  int i;
  int i1;
  int i2;
  int i3;
  int i4;
  int j;
  int n;
  int nQuartets;
  int *idx_data;
  int *iwork_data;
  signed char perm[4];
  unsigned char x4[4];
  signed char b_i2;
  signed char b_i3;
  signed char b_i4;
  signed char i5;
  unsigned char u;
  unsigned char u1;
  unsigned char u2;
  unsigned char u3;
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
