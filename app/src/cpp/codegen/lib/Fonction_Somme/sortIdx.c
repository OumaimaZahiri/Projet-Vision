/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sortIdx.c
 *
 * Code generation for function 'sortIdx'
 *
 */

/* Include files */
#include "sortIdx.h"
#include "Fonction_Somme_emxutil.h"
#include "Fonction_Somme_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void b_merge(emxArray_int32_T *idx, emxArray_real_T *x, int offset,
                    int np, int nq, emxArray_int32_T *iwork,
                    emxArray_real_T *xwork);

static void b_merge_block(emxArray_int32_T *idx, emxArray_real_T *x, int offset,
                          int n, int preSortLevel, emxArray_int32_T *iwork,
                          emxArray_real_T *xwork);

static void merge(emxArray_int32_T *idx, emxArray_uint8_T *x, int offset,
                  int np, int nq, emxArray_int32_T *iwork,
                  emxArray_uint8_T *xwork);

/* Function Definitions */
static void b_merge(emxArray_int32_T *idx, emxArray_real_T *x, int offset,
                    int np, int nq, emxArray_int32_T *iwork,
                    emxArray_real_T *xwork)
{
  double *x_data;
  double *xwork_data;
  int j;
  int *idx_data;
  int *iwork_data;
  xwork_data = xwork->data;
  iwork_data = iwork->data;
  x_data = x->data;
  idx_data = idx->data;
  if (nq != 0) {
    int iout;
    int n_tmp;
    int p;
    int q;
    n_tmp = np + nq;
    for (j = 0; j < n_tmp; j++) {
      iout = offset + j;
      iwork_data[j] = idx_data[iout];
      xwork_data[j] = x_data[iout];
    }
    p = 0;
    q = np;
    iout = offset - 1;
    int exitg1;
    do {
      exitg1 = 0;
      iout++;
      if (xwork_data[p] >= xwork_data[q]) {
        idx_data[iout] = iwork_data[p];
        x_data[iout] = xwork_data[p];
        if (p + 1 < np) {
          p++;
        } else {
          exitg1 = 1;
        }
      } else {
        idx_data[iout] = iwork_data[q];
        x_data[iout] = xwork_data[q];
        if (q + 1 < n_tmp) {
          q++;
        } else {
          q = iout - p;
          for (j = p + 1; j <= np; j++) {
            iout = q + j;
            idx_data[iout] = iwork_data[j - 1];
            x_data[iout] = xwork_data[j - 1];
          }
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

static void b_merge_block(emxArray_int32_T *idx, emxArray_real_T *x, int offset,
                          int n, int preSortLevel, emxArray_int32_T *iwork,
                          emxArray_real_T *xwork)
{
  int bLen;
  int nPairs;
  int nTail;
  nPairs = n >> preSortLevel;
  bLen = 1 << preSortLevel;
  while (nPairs > 1) {
    int tailOffset;
    if ((nPairs & 1) != 0) {
      nPairs--;
      tailOffset = bLen * nPairs;
      nTail = n - tailOffset;
      if (nTail > bLen) {
        b_merge(idx, x, offset + tailOffset, bLen, nTail - bLen, iwork, xwork);
      }
    }
    tailOffset = bLen << 1;
    nPairs >>= 1;
    for (nTail = 0; nTail < nPairs; nTail++) {
      b_merge(idx, x, offset + nTail * tailOffset, bLen, bLen, iwork, xwork);
    }
    bLen = tailOffset;
  }
  if (n > bLen) {
    b_merge(idx, x, offset, bLen, n - bLen, iwork, xwork);
  }
}

static void merge(emxArray_int32_T *idx, emxArray_uint8_T *x, int offset,
                  int np, int nq, emxArray_int32_T *iwork,
                  emxArray_uint8_T *xwork)
{
  int j;
  int *idx_data;
  int *iwork_data;
  unsigned char *x_data;
  unsigned char *xwork_data;
  xwork_data = xwork->data;
  iwork_data = iwork->data;
  x_data = x->data;
  idx_data = idx->data;
  if (nq != 0) {
    int iout;
    int n_tmp;
    int p;
    int q;
    n_tmp = np + nq;
    for (j = 0; j < n_tmp; j++) {
      iout = offset + j;
      iwork_data[j] = idx_data[iout];
      xwork_data[j] = x_data[iout];
    }
    p = 0;
    q = np;
    iout = offset - 1;
    int exitg1;
    do {
      exitg1 = 0;
      iout++;
      if (xwork_data[p] <= xwork_data[q]) {
        idx_data[iout] = iwork_data[p];
        x_data[iout] = xwork_data[p];
        if (p + 1 < np) {
          p++;
        } else {
          exitg1 = 1;
        }
      } else {
        idx_data[iout] = iwork_data[q];
        x_data[iout] = xwork_data[q];
        if (q + 1 < n_tmp) {
          q++;
        } else {
          q = iout - p;
          for (j = p + 1; j <= np; j++) {
            iout = q + j;
            idx_data[iout] = iwork_data[j - 1];
            x_data[iout] = xwork_data[j - 1];
          }
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

void b_sortIdx(emxArray_real_T *x, emxArray_int32_T *idx)
{
  emxArray_int32_T *b_idx;
  emxArray_int32_T *iwork;
  emxArray_real_T *b_x;
  emxArray_real_T *xwork;
  double *b_x_data;
  double *x_data;
  double *xwork_data;
  int b;
  int b_b;
  int i;
  int ib;
  int k;
  int quartetOffset;
  unsigned int unnamed_idx_0;
  int *b_idx_data;
  int *idx_data;
  int *iwork_data;
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
    double x4[4];
    int idx4[4];
    int i2;
    int i3;
    int i4;
    int idx_tmp;
    int n;
    int nNaNs;
    int nNonNaN;
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
          double d;
          double d1;
          signed char b_i2;
          signed char b_i3;
          signed char b_i4;
          signed char i1;
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
      signed char perm[4];
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
        int nBlocks;
        nBlocks = nNonNaN >> 8;
        if (nBlocks > 0) {
          for (b = 0; b < nBlocks; b++) {
            double b_xwork[256];
            int b_iwork[256];
            i4 = (b << 8) - 1;
            for (b_b = 0; b_b < 6; b_b++) {
              int bLen2;
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
                int exitg1;
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

void merge_block(emxArray_int32_T *idx, emxArray_uint8_T *x, int offset, int n,
                 int preSortLevel, emxArray_int32_T *iwork,
                 emxArray_uint8_T *xwork)
{
  int bLen;
  int nPairs;
  int nTail;
  nPairs = n >> preSortLevel;
  bLen = 1 << preSortLevel;
  while (nPairs > 1) {
    int tailOffset;
    if ((nPairs & 1) != 0) {
      nPairs--;
      tailOffset = bLen * nPairs;
      nTail = n - tailOffset;
      if (nTail > bLen) {
        merge(idx, x, offset + tailOffset, bLen, nTail - bLen, iwork, xwork);
      }
    }
    tailOffset = bLen << 1;
    nPairs >>= 1;
    for (nTail = 0; nTail < nPairs; nTail++) {
      merge(idx, x, offset + nTail * tailOffset, bLen, bLen, iwork, xwork);
    }
    bLen = tailOffset;
  }
  if (n > bLen) {
    merge(idx, x, offset, bLen, n - bLen, iwork, xwork);
  }
}

void merge_pow2_block(emxArray_int32_T *idx, emxArray_uint8_T *x, int offset)
{
  int iwork[256];
  int b;
  int j;
  int k;
  int *idx_data;
  unsigned char xwork[256];
  unsigned char *x_data;
  x_data = x->data;
  idx_data = idx->data;
  for (b = 0; b < 6; b++) {
    int bLen;
    int bLen2;
    int i;
    bLen = 1 << (b + 2);
    bLen2 = bLen << 1;
    i = 256 >> (b + 3);
    for (k = 0; k < i; k++) {
      int blockOffset;
      int iout;
      int p;
      int q;
      blockOffset = offset + k * bLen2;
      for (j = 0; j < bLen2; j++) {
        iout = blockOffset + j;
        iwork[j] = idx_data[iout];
        xwork[j] = x_data[iout];
      }
      p = 0;
      q = bLen;
      iout = blockOffset - 1;
      int exitg1;
      do {
        exitg1 = 0;
        iout++;
        if (xwork[p] <= xwork[q]) {
          idx_data[iout] = iwork[p];
          x_data[iout] = xwork[p];
          if (p + 1 < bLen) {
            p++;
          } else {
            exitg1 = 1;
          }
        } else {
          idx_data[iout] = iwork[q];
          x_data[iout] = xwork[q];
          if (q + 1 < bLen2) {
            q++;
          } else {
            iout -= p;
            for (j = p + 1; j <= bLen; j++) {
              q = iout + j;
              idx_data[q] = iwork[j - 1];
              x_data[q] = xwork[j - 1];
            }
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);
    }
  }
}

void sortIdx(const unsigned char x[1123200], int idx[1123200])
{
  static int iwork[1123200];
  int i;
  int k;
  int pEnd;
  int qEnd;
  for (k = 0; k <= 1123198; k += 2) {
    if (x[k] <= x[k + 1]) {
      idx[k] = k + 1;
      idx[k + 1] = k + 2;
    } else {
      idx[k] = k + 2;
      idx[k + 1] = k + 1;
    }
  }
  i = 2;
  while (i < 1123200) {
    int i2;
    int j;
    i2 = i << 1;
    j = 1;
    for (pEnd = i + 1; pEnd < 1123201; pEnd = qEnd + i) {
      int kEnd;
      int p;
      int q;
      p = j;
      q = pEnd;
      qEnd = j + i2;
      if (qEnd > 1123201) {
        qEnd = 1123201;
      }
      k = 0;
      kEnd = qEnd - j;
      while (k + 1 <= kEnd) {
        int b_i;
        int i1;
        b_i = idx[q - 1];
        i1 = idx[p - 1];
        if (x[i1 - 1] <= x[b_i - 1]) {
          iwork[k] = i1;
          p++;
          if (p == pEnd) {
            while (q < qEnd) {
              k++;
              iwork[k] = idx[q - 1];
              q++;
            }
          }
        } else {
          iwork[k] = b_i;
          q++;
          if (q == qEnd) {
            while (p < pEnd) {
              k++;
              iwork[k] = idx[p - 1];
              p++;
            }
          }
        }
        k++;
      }
      for (k = 0; k < kEnd; k++) {
        idx[(j + k) - 1] = iwork[k];
      }
      j = qEnd;
    }
    i = i2;
  }
}

/* End of code generation (sortIdx.c) */
