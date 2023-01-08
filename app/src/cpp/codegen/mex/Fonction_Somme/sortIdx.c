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
#include "Fonction_Somme_data.h"
#include "Fonction_Somme_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo
    cd_emlrtRSI =
        {
            499,           /* lineNo */
            "merge_block", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    ed_emlrtRSI =
        {
            507,           /* lineNo */
            "merge_block", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    fd_emlrtRSI =
        {
            514,           /* lineNo */
            "merge_block", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    gd_emlrtRSI =
        {
            561,     /* lineNo */
            "merge", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    hd_emlrtRSI =
        {
            530,     /* lineNo */
            "merge", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

/* Function Declarations */
static void b_merge(const emlrtStack *sp, emxArray_int32_T *idx,
                    emxArray_real_T *x, int32_T offset, int32_T np, int32_T nq,
                    emxArray_int32_T *iwork, emxArray_real_T *xwork);

static void merge(const emlrtStack *sp, emxArray_int32_T *idx,
                  emxArray_uint8_T *x, int32_T offset, int32_T np, int32_T nq,
                  emxArray_int32_T *iwork, emxArray_uint8_T *xwork);

/* Function Definitions */
static void b_merge(const emlrtStack *sp, emxArray_int32_T *idx,
                    emxArray_real_T *x, int32_T offset, int32_T np, int32_T nq,
                    emxArray_int32_T *iwork, emxArray_real_T *xwork)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T *x_data;
  real_T *xwork_data;
  int32_T j;
  int32_T *idx_data;
  int32_T *iwork_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  xwork_data = xwork->data;
  iwork_data = iwork->data;
  x_data = x->data;
  idx_data = idx->data;
  if (nq != 0) {
    int32_T iout;
    int32_T n_tmp;
    int32_T p;
    int32_T q;
    n_tmp = np + nq;
    st.site = &hd_emlrtRSI;
    if (n_tmp > 2147483646) {
      b_st.site = &y_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (j = 0; j < n_tmp; j++) {
      iout = offset + j;
      iwork_data[j] = idx_data[iout];
      xwork_data[j] = x_data[iout];
    }
    p = 0;
    q = np;
    iout = offset - 1;
    int32_T exitg1;
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
          st.site = &gd_emlrtRSI;
          if ((p + 1 <= np) && (np > 2147483646)) {
            b_st.site = &y_emlrtRSI;
            check_forloop_overflow_error(&b_st);
          }
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

static void merge(const emlrtStack *sp, emxArray_int32_T *idx,
                  emxArray_uint8_T *x, int32_T offset, int32_T np, int32_T nq,
                  emxArray_int32_T *iwork, emxArray_uint8_T *xwork)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T j;
  int32_T *idx_data;
  int32_T *iwork_data;
  uint8_T *x_data;
  uint8_T *xwork_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  xwork_data = xwork->data;
  iwork_data = iwork->data;
  x_data = x->data;
  idx_data = idx->data;
  if (nq != 0) {
    int32_T iout;
    int32_T n_tmp;
    int32_T p;
    int32_T q;
    n_tmp = np + nq;
    st.site = &hd_emlrtRSI;
    if (n_tmp > 2147483646) {
      b_st.site = &y_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (j = 0; j < n_tmp; j++) {
      iout = offset + j;
      iwork_data[j] = idx_data[iout];
      xwork_data[j] = x_data[iout];
    }
    p = 0;
    q = np;
    iout = offset - 1;
    int32_T exitg1;
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
          st.site = &gd_emlrtRSI;
          if ((p + 1 <= np) && (np > 2147483646)) {
            b_st.site = &y_emlrtRSI;
            check_forloop_overflow_error(&b_st);
          }
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

void b_merge_block(const emlrtStack *sp, emxArray_int32_T *idx,
                   emxArray_real_T *x, int32_T offset, int32_T n,
                   int32_T preSortLevel, emxArray_int32_T *iwork,
                   emxArray_real_T *xwork)
{
  emlrtStack st;
  int32_T bLen;
  int32_T nPairs;
  int32_T nTail;
  st.prev = sp;
  st.tls = sp->tls;
  nPairs = n >> preSortLevel;
  bLen = 1 << preSortLevel;
  while (nPairs > 1) {
    int32_T tailOffset;
    if ((nPairs & 1) != 0) {
      nPairs--;
      tailOffset = bLen * nPairs;
      nTail = n - tailOffset;
      if (nTail > bLen) {
        st.site = &cd_emlrtRSI;
        b_merge(&st, idx, x, offset + tailOffset, bLen, nTail - bLen, iwork,
                xwork);
      }
    }
    tailOffset = bLen << 1;
    nPairs >>= 1;
    for (nTail = 0; nTail < nPairs; nTail++) {
      st.site = &ed_emlrtRSI;
      b_merge(&st, idx, x, offset + nTail * tailOffset, bLen, bLen, iwork,
              xwork);
    }
    bLen = tailOffset;
  }
  if (n > bLen) {
    st.site = &fd_emlrtRSI;
    b_merge(&st, idx, x, offset, bLen, n - bLen, iwork, xwork);
  }
}

void b_merge_pow2_block(emxArray_int32_T *idx, emxArray_real_T *x,
                        int32_T offset)
{
  real_T xwork[256];
  real_T *x_data;
  int32_T iwork[256];
  int32_T b;
  int32_T j;
  int32_T k;
  int32_T *idx_data;
  x_data = x->data;
  idx_data = idx->data;
  for (b = 0; b < 6; b++) {
    int32_T bLen;
    int32_T bLen2;
    int32_T i;
    bLen = 1 << (b + 2);
    bLen2 = bLen << 1;
    i = 256 >> (b + 3);
    for (k = 0; k < i; k++) {
      int32_T blockOffset;
      int32_T iout;
      int32_T p;
      int32_T q;
      blockOffset = offset + k * bLen2;
      for (j = 0; j < bLen2; j++) {
        iout = blockOffset + j;
        iwork[j] = idx_data[iout];
        xwork[j] = x_data[iout];
      }
      p = 0;
      q = bLen;
      iout = blockOffset - 1;
      int32_T exitg1;
      do {
        exitg1 = 0;
        iout++;
        if (xwork[p] >= xwork[q]) {
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

void merge_block(const emlrtStack *sp, emxArray_int32_T *idx,
                 emxArray_uint8_T *x, int32_T offset, int32_T n,
                 int32_T preSortLevel, emxArray_int32_T *iwork,
                 emxArray_uint8_T *xwork)
{
  emlrtStack st;
  int32_T bLen;
  int32_T nPairs;
  int32_T nTail;
  st.prev = sp;
  st.tls = sp->tls;
  nPairs = n >> preSortLevel;
  bLen = 1 << preSortLevel;
  while (nPairs > 1) {
    int32_T tailOffset;
    if ((nPairs & 1) != 0) {
      nPairs--;
      tailOffset = bLen * nPairs;
      nTail = n - tailOffset;
      if (nTail > bLen) {
        st.site = &cd_emlrtRSI;
        merge(&st, idx, x, offset + tailOffset, bLen, nTail - bLen, iwork,
              xwork);
      }
    }
    tailOffset = bLen << 1;
    nPairs >>= 1;
    for (nTail = 0; nTail < nPairs; nTail++) {
      st.site = &ed_emlrtRSI;
      merge(&st, idx, x, offset + nTail * tailOffset, bLen, bLen, iwork, xwork);
    }
    bLen = tailOffset;
  }
  if (n > bLen) {
    st.site = &fd_emlrtRSI;
    merge(&st, idx, x, offset, bLen, n - bLen, iwork, xwork);
  }
}

void merge_pow2_block(emxArray_int32_T *idx, emxArray_uint8_T *x,
                      int32_T offset)
{
  int32_T iwork[256];
  int32_T b;
  int32_T j;
  int32_T k;
  int32_T *idx_data;
  uint8_T xwork[256];
  uint8_T *x_data;
  x_data = x->data;
  idx_data = idx->data;
  for (b = 0; b < 6; b++) {
    int32_T bLen;
    int32_T bLen2;
    int32_T i;
    bLen = 1 << (b + 2);
    bLen2 = bLen << 1;
    i = 256 >> (b + 3);
    for (k = 0; k < i; k++) {
      int32_T blockOffset;
      int32_T iout;
      int32_T p;
      int32_T q;
      blockOffset = offset + k * bLen2;
      for (j = 0; j < bLen2; j++) {
        iout = blockOffset + j;
        iwork[j] = idx_data[iout];
        xwork[j] = x_data[iout];
      }
      p = 0;
      q = bLen;
      iout = blockOffset - 1;
      int32_T exitg1;
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

/* End of code generation (sortIdx.c) */
