/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * chcenters.c
 *
 * Code generation for function 'chcenters'
 *
 */

/* Include files */
#include "chcenters.h"
#include "Fonction_Somme_data.h"
#include "Fonction_Somme_emxutil.h"
#include "Fonction_Somme_types.h"
#include "imhmax.h"
#include "imregionalmax.h"
#include "medfilt2.h"
#include "regionprops.h"
#include "round.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sub2ind.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo ag_emlrtRSI =
    {
        29,          /* lineNo */
        "chcenters", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m" /* pathName */
};

static emlrtRSInfo bg_emlrtRSI =
    {
        34,          /* lineNo */
        "chcenters", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m" /* pathName */
};

static emlrtRSInfo cg_emlrtRSI =
    {
        35,          /* lineNo */
        "chcenters", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m" /* pathName */
};

static emlrtRSInfo dg_emlrtRSI =
    {
        36,          /* lineNo */
        "chcenters", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m" /* pathName */
};

static emlrtRSInfo eg_emlrtRSI =
    {
        48,          /* lineNo */
        "chcenters", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m" /* pathName */
};

static emlrtRSInfo fg_emlrtRSI =
    {
        53,          /* lineNo */
        "chcenters", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m" /* pathName */
};

static emlrtRSInfo gg_emlrtRSI =
    {
        55,          /* lineNo */
        "chcenters", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m" /* pathName */
};

static emlrtRSInfo di_emlrtRSI = {
    22,               /* lineNo */
    "nullAssignment", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo ei_emlrtRSI = {
    26,               /* lineNo */
    "nullAssignment", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo ji_emlrtRSI = {
    27,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m" /* pathName
                                                                         */
};

static emlrtBCInfo tc_emlrtBCI =
    {
        -1,          /* iFirst */
        -1,          /* iLast */
        42,          /* lineNo */
        17,          /* colNo */
        "",          /* aName */
        "chcenters", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m", /* pName */
        0      /* checkKind */
};

static emlrtECInfo c_emlrtECI =
    {
        -1,          /* nDims */
        42,          /* lineNo */
        9,           /* colNo */
        "chcenters", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m" /* pName */
};

static emlrtRTEInfo r_emlrtRTEI =
    {
        46,          /* lineNo */
        15,          /* colNo */
        "chcenters", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m" /* pName */
};

static emlrtBCInfo uc_emlrtBCI =
    {
        -1,          /* iFirst */
        -1,          /* iLast */
        47,          /* lineNo */
        26,          /* colNo */
        "",          /* aName */
        "chcenters", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m", /* pName */
        0      /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI =
    {
        -1,          /* iFirst */
        -1,          /* iLast */
        47,          /* lineNo */
        51,          /* colNo */
        "",          /* aName */
        "chcenters", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m", /* pName */
        0      /* checkKind */
};

static emlrtRTEInfo s_emlrtRTEI = {
    81,                /* lineNo */
    27,                /* colNo */
    "validate_inputs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pName */
};

static emlrtRTEInfo t_emlrtRTEI = {
    296,           /* lineNo */
    1,             /* colNo */
    "delete_rows", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pName */
};

static emlrtBCInfo wc_emlrtBCI =
    {
        1,           /* iFirst */
        374400,      /* iLast */
        53,          /* lineNo */
        21,          /* colNo */
        "",          /* aName */
        "chcenters", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m", /* pName */
        0      /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI =
    {
        -1,          /* iFirst */
        -1,          /* iLast */
        56,          /* lineNo */
        27,          /* colNo */
        "",          /* aName */
        "chcenters", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m", /* pName */
        0      /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI =
    {
        -1,          /* iFirst */
        -1,          /* iLast */
        42,          /* lineNo */
        26,          /* colNo */
        "",          /* aName */
        "chcenters", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m", /* pName */
        0      /* checkKind */
};

static emlrtRTEInfo pe_emlrtRTEI =
    {
        40,          /* lineNo */
        5,           /* colNo */
        "chcenters", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m" /* pName */
};

static emlrtRTEInfo qe_emlrtRTEI =
    {
        53,          /* lineNo */
        38,          /* colNo */
        "chcenters", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m" /* pName */
};

static emlrtRTEInfo re_emlrtRTEI =
    {
        48,          /* lineNo */
        13,          /* colNo */
        "chcenters", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m" /* pName */
};

static emlrtRTEInfo se_emlrtRTEI =
    {
        53,          /* lineNo */
        58,          /* colNo */
        "chcenters", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m" /* pName */
};

static emlrtRTEInfo te_emlrtRTEI = {
    27,     /* lineNo */
    6,      /* colNo */
    "sort", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m" /* pName
                                                                         */
};

static emlrtRTEInfo ue_emlrtRTEI = {
    26,               /* lineNo */
    13,               /* colNo */
    "nullAssignment", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pName */
};

static emlrtRTEInfo ve_emlrtRTEI =
    {
        56,          /* lineNo */
        19,          /* colNo */
        "chcenters", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m" /* pName */
};

static emlrtRTEInfo we_emlrtRTEI =
    {
        56,          /* lineNo */
        9,           /* colNo */
        "chcenters", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m" /* pName */
};

static emlrtRTEInfo xe_emlrtRTEI =
    {
        36,          /* lineNo */
        1,           /* colNo */
        "chcenters", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m" /* pName */
};

static emlrtRTEInfo ye_emlrtRTEI =
    {
        53,          /* lineNo */
        21,          /* colNo */
        "chcenters", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m" /* pName */
};

static emlrtRTEInfo af_emlrtRTEI =
    {
        1,           /* lineNo */
        30,          /* colNo */
        "chcenters", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenter"
        "s.m" /* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = {
    16,        /* lineNo */
    14,        /* colNo */
    "sub2ind", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m" /* pName
                                                                          */
};

/* Function Definitions */
void chcenters(Fonction_SommeStackData *SD, const emlrtStack *sp,
               const creal_T varargin_1[374400], emxArray_real_T *centers,
               emxArray_real_T *metric)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_int32_T *iidx;
  emxArray_int32_T *r;
  emxArray_real_T *b_centers;
  emxArray_real_T *ndx;
  emxArray_real_T *varargin_2;
  emxArray_real_T *x;
  emxArray_struct_T *s;
  struct_T *s_data;
  real_T *centers_data;
  real_T *metric_data;
  real_T *x_data;
  int32_T b_iv[2];
  int32_T iv1[2];
  int32_T b_i;
  int32_T b_idx;
  int32_T i;
  int32_T i1;
  int32_T idx;
  int32_T j;
  int32_T nrows;
  int32_T *iidx_data;
  boolean_T exitg1;
  boolean_T flat;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  centers->size[0] = 0;
  centers->size[1] = 0;
  metric->size[0] = 0;
  metric->size[1] = 0;
  for (nrows = 0; nrows < 374400; nrows++) {
    SD->u2.f7.accumMatrixRe[nrows] =
        muDoubleScalarHypot(varargin_1[nrows].re, varargin_1[nrows].im);
    SD->u2.f7.bw[nrows] =
        (SD->u2.f7.accumMatrixRe[nrows] == SD->u2.f7.accumMatrixRe[0]);
  }
  flat = true;
  nrows = 0;
  exitg1 = false;
  while ((!exitg1) && (nrows < 374400)) {
    if (!SD->u2.f7.bw[nrows]) {
      flat = false;
      exitg1 = true;
    } else {
      nrows++;
    }
  }
  if (!flat) {
    st.site = &ag_emlrtRSI;
    medfilt2(SD, SD->u2.f7.accumMatrixRe, SD->u2.f7.Hd);
    memcpy(&SD->u2.f7.b_Hd[0], &SD->u2.f7.Hd[0], 374400U * sizeof(real_T));
    st.site = &bg_emlrtRSI;
    imhmax(&st, SD->u2.f7.b_Hd, SD->u2.f7.Hd);
    st.site = &cg_emlrtRSI;
    imregionalmax(&st, SD->u2.f7.Hd, SD->u2.f7.bw);
    emxInit_struct_T(sp, &s, &xe_emlrtRTEI);
    st.site = &dg_emlrtRSI;
    regionprops(&st, SD->u2.f7.bw, SD->u2.f7.accumMatrixRe, s);
    s_data = s->data;
    if (s->size[0] != 0) {
      i = centers->size[0] * centers->size[1];
      centers->size[0] = s->size[0];
      centers->size[1] = 2;
      emxEnsureCapacity_real_T(sp, centers, i, &pe_emlrtRTEI);
      centers_data = centers->data;
      i = s->size[0];
      b_iv[0] = 1;
      iv1[0] = 1;
      b_iv[1] = 2;
      iv1[1] = 2;
      for (idx = 0; idx < i; idx++) {
        if (idx + 1 > centers->size[0]) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, centers->size[0],
                                        &tc_emlrtBCI, (emlrtConstCTX)sp);
        }
        emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, &iv1[0], 2, &c_emlrtECI,
                                      (emlrtCTX)sp);
        if (idx + 1 > s->size[0]) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, s->size[0], &yc_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        centers_data[idx] = s_data[idx].WeightedCentroid[0];
        if (idx + 1 > s->size[0]) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, s->size[0], &yc_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        centers_data[idx + centers->size[0]] = s_data[idx].WeightedCentroid[1];
      }
      i = centers->size[0];
      i1 = centers->size[0];
      emlrtForLoopVectorCheckR2021a(centers->size[0], -1.0, 1.0, mxDOUBLE_CLASS,
                                    centers->size[0], &r_emlrtRTEI,
                                    (emlrtConstCTX)sp);
      emxInit_real_T(sp, &x, 2, &re_emlrtRTEI, true);
      for (idx = 0; idx < i1; idx++) {
        boolean_T guard1 = false;
        b_idx = i - idx;
        if ((b_idx < 1) || (b_idx > centers->size[0])) {
          emlrtDynamicBoundsCheckR2012b(b_idx, 1, centers->size[0],
                                        &uc_emlrtBCI, (emlrtConstCTX)sp);
        }
        guard1 = false;
        if (muDoubleScalarIsNaN(centers_data[b_idx - 1])) {
          guard1 = true;
        } else {
          if (b_idx > centers->size[0]) {
            emlrtDynamicBoundsCheckR2012b(b_idx, 1, centers->size[0],
                                          &vc_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (muDoubleScalarIsNaN(
                  centers_data[(b_idx + centers->size[0]) - 1])) {
            guard1 = true;
          }
        }
        if (guard1) {
          st.site = &eg_emlrtRSI;
          j = x->size[0] * x->size[1];
          x->size[0] = centers->size[0];
          x->size[1] = 2;
          emxEnsureCapacity_real_T(&st, x, j, &re_emlrtRTEI);
          x_data = x->data;
          nrows = centers->size[0] * 2;
          for (j = 0; j < nrows; j++) {
            x_data[j] = centers_data[j];
          }
          b_st.site = &di_emlrtRSI;
          if (b_idx > centers->size[0]) {
            emlrtErrorWithMessageIdR2018a(&b_st, &s_emlrtRTEI,
                                          "MATLAB:subsdeldimmismatch",
                                          "MATLAB:subsdeldimmismatch", 0);
          }
          b_st.site = &ei_emlrtRSI;
          nrows = centers->size[0] - 1;
          for (j = 0; j < 2; j++) {
            for (b_i = b_idx; b_i <= nrows; b_i++) {
              x_data[(b_i + x->size[0] * j) - 1] = x_data[b_i + x->size[0] * j];
            }
          }
          if (centers->size[0] - 1 > x->size[0]) {
            emlrtErrorWithMessageIdR2018a(&b_st, &t_emlrtRTEI,
                                          "Coder:builtins:AssertionFailed",
                                          "Coder:builtins:AssertionFailed", 0);
          }
          if (x->size[0] - 1 < 1) {
            nrows = 0;
          } else {
            nrows = centers->size[0] - 1;
          }
          for (j = 0; j < 2; j++) {
            for (b_idx = 0; b_idx < nrows; b_idx++) {
              x_data[b_idx + nrows * j] = x_data[b_idx + x->size[0] * j];
            }
          }
          j = x->size[0] * x->size[1];
          x->size[0] = nrows;
          x->size[1] = 2;
          emxEnsureCapacity_real_T(&b_st, x, j, &ue_emlrtRTEI);
          x_data = x->data;
          j = centers->size[0] * centers->size[1];
          centers->size[0] = nrows;
          centers->size[1] = 2;
          emxEnsureCapacity_real_T(sp, centers, j, &re_emlrtRTEI);
          centers_data = centers->data;
          nrows <<= 1;
          for (j = 0; j < nrows; j++) {
            centers_data[j] = x_data[j];
          }
        }
      }
      emxFree_real_T(sp, &x);
      if (centers->size[0] != 0) {
        emxInit_real_T(sp, &ndx, 1, &ye_emlrtRTEI, true);
        st.site = &fg_emlrtRSI;
        i = ndx->size[0];
        ndx->size[0] = centers->size[0];
        emxEnsureCapacity_real_T(&st, ndx, i, &qe_emlrtRTEI);
        x_data = ndx->data;
        nrows = centers->size[0];
        for (i = 0; i < nrows; i++) {
          x_data[i] = centers_data[i + centers->size[0]];
        }
        b_st.site = &fg_emlrtRSI;
        b_round(&b_st, ndx);
        emxInit_real_T(&st, &varargin_2, 1, &se_emlrtRTEI, true);
        i = varargin_2->size[0];
        varargin_2->size[0] = centers->size[0];
        emxEnsureCapacity_real_T(&st, varargin_2, i, &se_emlrtRTEI);
        x_data = varargin_2->data;
        nrows = centers->size[0];
        for (i = 0; i < nrows; i++) {
          x_data[i] = centers_data[i];
        }
        b_st.site = &fg_emlrtRSI;
        b_round(&b_st, varargin_2);
        emxInit_int32_T(&st, &r, 1, &bf_emlrtRTEI);
        b_st.site = &cb_emlrtRSI;
        eml_sub2ind(&b_st, ndx, varargin_2, r);
        iidx_data = r->data;
        emxFree_real_T(&st, &varargin_2);
        i = ndx->size[0];
        ndx->size[0] = r->size[0];
        emxEnsureCapacity_real_T(&st, ndx, i, &gd_emlrtRTEI);
        x_data = ndx->data;
        nrows = r->size[0];
        for (i = 0; i < nrows; i++) {
          x_data[i] = iidx_data[i];
        }
        emxFree_int32_T(&st, &r);
        nrows = ndx->size[0];
        for (i = 0; i < nrows; i++) {
          i1 = (int32_T)x_data[i];
          if ((i1 < 1) || (i1 > 374400)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, 374400, &wc_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        st.site = &gg_emlrtRSI;
        i = metric->size[0] * metric->size[1];
        metric->size[0] = ndx->size[0];
        metric->size[1] = 1;
        emxEnsureCapacity_real_T(&st, metric, i, &te_emlrtRTEI);
        metric_data = metric->data;
        nrows = ndx->size[0];
        for (i = 0; i < nrows; i++) {
          metric_data[i] = SD->u2.f7.Hd[(int32_T)x_data[i] - 1];
        }
        emxFree_real_T(&st, &ndx);
        emxInit_int32_T(&st, &iidx, 2, &af_emlrtRTEI);
        b_st.site = &ji_emlrtRSI;
        b_sort(&b_st, metric, iidx);
        iidx_data = iidx->data;
        emxInit_real_T(sp, &b_centers, 2, &ve_emlrtRTEI, true);
        i = b_centers->size[0] * b_centers->size[1];
        b_centers->size[0] = iidx->size[0];
        b_centers->size[1] = 2;
        emxEnsureCapacity_real_T(sp, b_centers, i, &ve_emlrtRTEI);
        x_data = b_centers->data;
        nrows = iidx->size[0];
        for (i = 0; i < 2; i++) {
          for (i1 = 0; i1 < nrows; i1++) {
            if ((iidx_data[i1] < 1) || (iidx_data[i1] > centers->size[0])) {
              emlrtDynamicBoundsCheckR2012b(iidx_data[i1], 1, centers->size[0],
                                            &xc_emlrtBCI, (emlrtConstCTX)sp);
            }
            x_data[i1 + b_centers->size[0] * i] =
                centers_data[(iidx_data[i1] + centers->size[0] * i) - 1];
          }
        }
        emxFree_int32_T(sp, &iidx);
        i = centers->size[0] * centers->size[1];
        centers->size[0] = b_centers->size[0];
        centers->size[1] = 2;
        emxEnsureCapacity_real_T(sp, centers, i, &we_emlrtRTEI);
        centers_data = centers->data;
        nrows = b_centers->size[0] * 2;
        for (i = 0; i < nrows; i++) {
          centers_data[i] = x_data[i];
        }
        emxFree_real_T(sp, &b_centers);
      }
    }
    emxFree_struct_T(sp, &s);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (chcenters.c) */
