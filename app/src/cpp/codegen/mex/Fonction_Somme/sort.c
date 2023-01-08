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
#include "Fonction_Somme_data.h"
#include "Fonction_Somme_emxutil.h"
#include "Fonction_Somme_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo oc_emlrtRSI = {
    72,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pathName
                                                                           */
};

static emlrtRSInfo
    pc_emlrtRSI =
        {
            105,       /* lineNo */
            "sortIdx", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    qc_emlrtRSI =
        {
            308,                /* lineNo */
            "block_merge_sort", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    rc_emlrtRSI =
        {
            316,                /* lineNo */
            "block_merge_sort", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    sc_emlrtRSI =
        {
            317,                /* lineNo */
            "block_merge_sort", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    tc_emlrtRSI =
        {
            325,                /* lineNo */
            "block_merge_sort", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    uc_emlrtRSI =
        {
            333,                /* lineNo */
            "block_merge_sort", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    ki_emlrtRSI =
        {
            94,        /* lineNo */
            "sortIdx", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    li_emlrtRSI =
        {
            95,        /* lineNo */
            "sortIdx", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    mi_emlrtRSI =
        {
            340,                /* lineNo */
            "block_merge_sort", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    ni_emlrtRSI =
        {
            392,                      /* lineNo */
            "initialize_vector_sort", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    oi_emlrtRSI =
        {
            420,                      /* lineNo */
            "initialize_vector_sort", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    pi_emlrtRSI =
        {
            427,                      /* lineNo */
            "initialize_vector_sort", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    qi_emlrtRSI =
        {
            354,          /* lineNo */
            "shift_NaNs", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    ri_emlrtRSI =
        {
            363,          /* lineNo */
            "shift_NaNs", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRTEInfo
    dg_emlrtRTEI =
        {
            56,        /* lineNo */
            5,         /* colNo */
            "sortIdx", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pName */
};

static emlrtRTEInfo
    eg_emlrtRTEI =
        {
            386,       /* lineNo */
            1,         /* colNo */
            "sortIdx", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pName */
};

static emlrtRTEInfo
    fg_emlrtRTEI =
        {
            388,       /* lineNo */
            1,         /* colNo */
            "sortIdx", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pName */
};

static emlrtRTEInfo gg_emlrtRTEI = {
    1,      /* lineNo */
    20,     /* colNo */
    "sort", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pName
                                                                           */
};

static emlrtRTEInfo
    hg_emlrtRTEI =
        {
            308,       /* lineNo */
            14,        /* colNo */
            "sortIdx", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pName */
};

static emlrtRTEInfo
    ig_emlrtRTEI =
        {
            308,       /* lineNo */
            20,        /* colNo */
            "sortIdx", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pName */
};

static emlrtRTEInfo
    qg_emlrtRTEI =
        {
            61,        /* lineNo */
            5,         /* colNo */
            "sortIdx", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pName */
};

static emlrtRTEInfo
    rg_emlrtRTEI =
        {
            95,        /* lineNo */
            50,        /* colNo */
            "sortIdx", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pName */
};

static emlrtRTEInfo
    sg_emlrtRTEI =
        {
            95,        /* lineNo */
            59,        /* colNo */
            "sortIdx", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pName */
};

/* Function Definitions */
void b_sort(const emlrtStack *sp, emxArray_real_T *x, emxArray_int32_T *idx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_int32_T *b_idx;
  emxArray_int32_T *iwork;
  emxArray_real_T *b_x;
  emxArray_real_T *xwork;
  real_T *b_x_data;
  real_T *x_data;
  real_T *xwork_data;
  int32_T i2;
  int32_T ib;
  int32_T k;
  int32_T *b_idx_data;
  int32_T *idx_data;
  int32_T *iwork_data;
  uint32_T unnamed_idx_0;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &oc_emlrtRSI;
  unnamed_idx_0 = (uint32_T)x->size[0];
  i2 = idx->size[0] * idx->size[1];
  idx->size[0] = (int32_T)unnamed_idx_0;
  idx->size[1] = 1;
  emxEnsureCapacity_int32_T(&st, idx, i2, &qg_emlrtRTEI);
  idx_data = idx->data;
  ib = (int32_T)unnamed_idx_0;
  for (i2 = 0; i2 < ib; i2++) {
    idx_data[i2] = 0;
  }
  if (x->size[0] != 0) {
    real_T x4[4];
    int32_T idx4[4];
    int32_T i3;
    int32_T i4;
    int32_T n;
    int32_T nNaNs;
    int32_T quartetOffset;
    b_st.site = &ki_emlrtRSI;
    b_st.site = &li_emlrtRSI;
    emxInit_int32_T(&b_st, &b_idx, 1, &gg_emlrtRTEI);
    ib = idx->size[0];
    i2 = b_idx->size[0];
    b_idx->size[0] = idx->size[0];
    emxEnsureCapacity_int32_T(&b_st, b_idx, i2, &rg_emlrtRTEI);
    b_idx_data = b_idx->data;
    for (i2 = 0; i2 < ib; i2++) {
      b_idx_data[i2] = 0;
    }
    emxInit_real_T(&b_st, &b_x, 1, &gg_emlrtRTEI, true);
    ib = x->size[0];
    i2 = b_x->size[0];
    b_x->size[0] = ib;
    emxEnsureCapacity_real_T(&b_st, b_x, i2, &sg_emlrtRTEI);
    b_x_data = b_x->data;
    for (i2 = 0; i2 < ib; i2++) {
      b_x_data[i2] = x_data[i2];
    }
    c_st.site = &qc_emlrtRSI;
    n = x->size[0];
    x4[0] = 0.0;
    idx4[0] = 0;
    x4[1] = 0.0;
    idx4[1] = 0;
    x4[2] = 0.0;
    idx4[2] = 0;
    x4[3] = 0.0;
    idx4[3] = 0;
    emxInit_int32_T(&c_st, &iwork, 1, &hg_emlrtRTEI);
    i2 = iwork->size[0];
    iwork->size[0] = idx->size[0];
    emxEnsureCapacity_int32_T(&c_st, iwork, i2, &eg_emlrtRTEI);
    iwork_data = iwork->data;
    ib = idx->size[0];
    for (i2 = 0; i2 < ib; i2++) {
      iwork_data[i2] = 0;
    }
    ib = x->size[0];
    emxInit_real_T(&c_st, &xwork, 1, &ig_emlrtRTEI, true);
    i2 = xwork->size[0];
    xwork->size[0] = ib;
    emxEnsureCapacity_real_T(&c_st, xwork, i2, &fg_emlrtRTEI);
    xwork_data = xwork->data;
    for (i2 = 0; i2 < ib; i2++) {
      xwork_data[i2] = 0.0;
    }
    nNaNs = 0;
    ib = 0;
    d_st.site = &ni_emlrtRSI;
    if (x->size[0] > 2147483646) {
      e_st.site = &y_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }
    for (k = 0; k < n; k++) {
      if (muDoubleScalarIsNaN(b_x_data[k])) {
        i3 = (n - nNaNs) - 1;
        b_idx_data[i3] = k + 1;
        xwork_data[i3] = b_x_data[k];
        nNaNs++;
      } else {
        ib++;
        idx4[ib - 1] = k + 1;
        x4[ib - 1] = b_x_data[k];
        if (ib == 4) {
          real_T d;
          real_T d1;
          int8_T b_i2;
          int8_T b_i3;
          int8_T i;
          int8_T i1;
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
              i = (int8_T)ib;
              i1 = (int8_T)i2;
              b_i2 = (int8_T)i3;
              b_i3 = (int8_T)i4;
            } else if (d >= x4[i4 - 1]) {
              i = (int8_T)ib;
              i1 = (int8_T)i3;
              b_i2 = (int8_T)i2;
              b_i3 = (int8_T)i4;
            } else {
              i = (int8_T)ib;
              i1 = (int8_T)i3;
              b_i2 = (int8_T)i4;
              b_i3 = (int8_T)i2;
            }
          } else {
            d1 = x4[i4 - 1];
            if (d >= d1) {
              if (x4[i2 - 1] >= d1) {
                i = (int8_T)i3;
                i1 = (int8_T)ib;
                b_i2 = (int8_T)i2;
                b_i3 = (int8_T)i4;
              } else {
                i = (int8_T)i3;
                i1 = (int8_T)ib;
                b_i2 = (int8_T)i4;
                b_i3 = (int8_T)i2;
              }
            } else {
              i = (int8_T)i3;
              i1 = (int8_T)i4;
              b_i2 = (int8_T)ib;
              b_i3 = (int8_T)i2;
            }
          }
          b_idx_data[quartetOffset - 3] = idx4[i - 1];
          b_idx_data[quartetOffset - 2] = idx4[i1 - 1];
          b_idx_data[quartetOffset - 1] = idx4[b_i2 - 1];
          b_idx_data[quartetOffset] = idx4[b_i3 - 1];
          b_x_data[quartetOffset - 3] = x4[i - 1];
          b_x_data[quartetOffset - 2] = x4[i1 - 1];
          b_x_data[quartetOffset - 1] = x4[b_i2 - 1];
          b_x_data[quartetOffset] = x4[b_i3 - 1];
          ib = 0;
        }
      }
    }
    i4 = b_x->size[0] - nNaNs;
    if (ib > 0) {
      int8_T perm[4];
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
      d_st.site = &oi_emlrtRSI;
      if (ib > 2147483646) {
        e_st.site = &y_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }
      i2 = (uint8_T)ib;
      for (k = 0; k < i2; k++) {
        i3 = perm[k] - 1;
        quartetOffset = (i4 - ib) + k;
        b_idx_data[quartetOffset] = idx4[i3];
        b_x_data[quartetOffset] = x4[i3];
      }
    }
    ib = nNaNs >> 1;
    d_st.site = &pi_emlrtRSI;
    for (k = 0; k < ib; k++) {
      quartetOffset = i4 + k;
      i2 = b_idx_data[quartetOffset];
      i3 = (n - k) - 1;
      b_idx_data[quartetOffset] = b_idx_data[i3];
      b_idx_data[i3] = i2;
      b_x_data[quartetOffset] = xwork_data[i3];
      b_x_data[i3] = xwork_data[quartetOffset];
    }
    if ((nNaNs & 1) != 0) {
      ib += i4;
      b_x_data[ib] = xwork_data[ib];
    }
    i2 = b_x->size[0] - nNaNs;
    ib = 2;
    if (i2 > 1) {
      if (b_x->size[0] >= 256) {
        quartetOffset = i2 >> 8;
        if (quartetOffset > 0) {
          c_st.site = &rc_emlrtRSI;
          for (ib = 0; ib < quartetOffset; ib++) {
            c_st.site = &sc_emlrtRSI;
            b_merge_pow2_block(b_idx, b_x, ib << 8);
          }
          ib = quartetOffset << 8;
          quartetOffset = i2 - ib;
          if (quartetOffset > 0) {
            c_st.site = &tc_emlrtRSI;
            b_merge_block(&c_st, b_idx, b_x, ib, quartetOffset, 2, iwork,
                          xwork);
          }
          ib = 8;
        }
      }
      c_st.site = &uc_emlrtRSI;
      b_merge_block(&c_st, b_idx, b_x, 0, i2, ib, iwork, xwork);
      xwork_data = xwork->data;
      iwork_data = iwork->data;
      b_x_data = b_x->data;
      b_idx_data = b_idx->data;
    }
    if ((nNaNs > 0) && (i2 > 0)) {
      c_st.site = &mi_emlrtRSI;
      d_st.site = &qi_emlrtRSI;
      if (nNaNs > 2147483646) {
        e_st.site = &y_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }
      for (k = 0; k < nNaNs; k++) {
        ib = i2 + k;
        xwork_data[k] = b_x_data[ib];
        iwork_data[k] = b_idx_data[ib];
      }
      for (k = i2; k >= 1; k--) {
        ib = (nNaNs + k) - 1;
        b_x_data[ib] = b_x_data[k - 1];
        b_idx_data[ib] = b_idx_data[k - 1];
      }
      d_st.site = &ri_emlrtRSI;
      for (k = 0; k < nNaNs; k++) {
        b_x_data[k] = xwork_data[k];
        b_idx_data[k] = iwork_data[k];
      }
    }
    emxFree_real_T(&b_st, &xwork);
    emxFree_int32_T(&b_st, &iwork);
    ib = b_idx->size[0];
    for (i2 = 0; i2 < ib; i2++) {
      idx_data[i2] = b_idx_data[i2];
    }
    emxFree_int32_T(&st, &b_idx);
    ib = b_x->size[0];
    for (i2 = 0; i2 < ib; i2++) {
      x_data[i2] = b_x_data[i2];
    }
    emxFree_real_T(&st, &b_x);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void sort(const emlrtStack *sp, emxArray_uint8_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_int32_T *idx;
  emxArray_int32_T *iwork;
  emxArray_uint8_T *xwork;
  int32_T idx4[4];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T j;
  int32_T n;
  int32_T nQuartets;
  int32_T *idx_data;
  int32_T *iwork_data;
  uint8_T x4[4];
  uint8_T *x_data;
  uint8_T *xwork_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &oc_emlrtRSI;
  emxInit_int32_T(&st, &idx, 2, &gg_emlrtRTEI);
  i = idx->size[0] * idx->size[1];
  idx->size[0] = 1;
  idx->size[1] = x->size[1];
  emxEnsureCapacity_int32_T(&st, idx, i, &dg_emlrtRTEI);
  idx_data = idx->data;
  nQuartets = x->size[1];
  for (i = 0; i < nQuartets; i++) {
    idx_data[i] = 0;
  }
  b_st.site = &pc_emlrtRSI;
  n = x->size[1];
  c_st.site = &qc_emlrtRSI;
  x4[0] = 0U;
  idx4[0] = 0;
  x4[1] = 0U;
  idx4[1] = 0;
  x4[2] = 0U;
  idx4[2] = 0;
  x4[3] = 0U;
  idx4[3] = 0;
  nQuartets = x->size[1];
  emxInit_int32_T(&c_st, &iwork, 1, &hg_emlrtRTEI);
  i = iwork->size[0];
  iwork->size[0] = nQuartets;
  emxEnsureCapacity_int32_T(&c_st, iwork, i, &eg_emlrtRTEI);
  iwork_data = iwork->data;
  for (i = 0; i < nQuartets; i++) {
    iwork_data[i] = 0;
  }
  nQuartets = x->size[1];
  emxInit_uint8_T(&c_st, &xwork, 1, &ig_emlrtRTEI);
  i = xwork->size[0];
  xwork->size[0] = nQuartets;
  emxEnsureCapacity_uint8_T(&c_st, xwork, i, &fg_emlrtRTEI);
  xwork_data = xwork->data;
  for (i = 0; i < nQuartets; i++) {
    xwork_data[i] = 0U;
  }
  nQuartets = x->size[1] >> 2;
  for (j = 0; j < nQuartets; j++) {
    int32_T b_i1;
    int32_T i4;
    int8_T b_i2;
    int8_T b_i3;
    int8_T b_i4;
    int8_T i5;
    uint8_T u;
    uint8_T u1;
    uint8_T u2;
    uint8_T u3;
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
        b_i2 = (int8_T)i1;
        b_i3 = (int8_T)i2;
        b_i4 = (int8_T)i3;
        i5 = (int8_T)i4;
      } else if (i <= x4[i4 - 1]) {
        b_i2 = (int8_T)i1;
        b_i3 = (int8_T)i3;
        b_i4 = (int8_T)i2;
        i5 = (int8_T)i4;
      } else {
        b_i2 = (int8_T)i1;
        b_i3 = (int8_T)i3;
        b_i4 = (int8_T)i4;
        i5 = (int8_T)i2;
      }
    } else {
      b_i1 = x4[i4 - 1];
      if (i <= b_i1) {
        if (x4[i2 - 1] <= b_i1) {
          b_i2 = (int8_T)i3;
          b_i3 = (int8_T)i1;
          b_i4 = (int8_T)i2;
          i5 = (int8_T)i4;
        } else {
          b_i2 = (int8_T)i3;
          b_i3 = (int8_T)i1;
          b_i4 = (int8_T)i4;
          i5 = (int8_T)i2;
        }
      } else {
        b_i2 = (int8_T)i3;
        b_i3 = (int8_T)i4;
        b_i4 = (int8_T)i1;
        i5 = (int8_T)i2;
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
    int8_T perm[4];
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
        c_st.site = &tc_emlrtRSI;
        merge_block(&c_st, idx, x, nQuartets, b_i, 2, iwork, xwork);
      }
      nQuartets = 8;
    }
    c_st.site = &uc_emlrtRSI;
    merge_block(&c_st, idx, x, 0, n, nQuartets, iwork, xwork);
  }
  emxFree_uint8_T(&b_st, &xwork);
  emxFree_int32_T(&b_st, &iwork);
  emxFree_int32_T(&b_st, &idx);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (sort.c) */
