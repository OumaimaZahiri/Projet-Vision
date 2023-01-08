/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imfindcircles.c
 *
 * Code generation for function 'imfindcircles'
 *
 */

/* Include files */
#include "imfindcircles.h"
#include "Fonction_Somme_data.h"
#include "Fonction_Somme_emxutil.h"
#include "Fonction_Somme_types.h"
#include "all.h"
#include "chaccum.h"
#include "chcenters.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "round.h"
#include "rt_nonfinite.h"
#include "sub2ind.h"
#include "warning.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo te_emlrtRSI = {
    74,                    /* lineNo */
    "applyScalarFunction", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyScalarFunction.m" /* pathName */
};

static emlrtRSInfo if_emlrtRSI = {
    16,              /* lineNo */
    "imfindcircles", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m" /* pathName
                                                                            */
};

static emlrtRSInfo jf_emlrtRSI = {
    33,              /* lineNo */
    "imfindcircles", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m" /* pathName
                                                                            */
};

static emlrtRSInfo kf_emlrtRSI = {
    43,              /* lineNo */
    "imfindcircles", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m" /* pathName
                                                                            */
};

static emlrtRSInfo lf_emlrtRSI = {
    51,              /* lineNo */
    "imfindcircles", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m" /* pathName
                                                                            */
};

static emlrtRSInfo mf_emlrtRSI = {
    69,              /* lineNo */
    "imfindcircles", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m" /* pathName
                                                                            */
};

static emlrtRSInfo si_emlrtRSI = {
    39,     /* lineNo */
    "find", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                       */
};

static emlrtRSInfo ti_emlrtRSI = {
    144,        /* lineNo */
    "eml_find", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                       */
};

static emlrtRSInfo ui_emlrtRSI = {
    382,                  /* lineNo */
    "find_first_indices", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                       */
};

static emlrtRSInfo vi_emlrtRSI = {
    402,                  /* lineNo */
    "find_first_indices", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                       */
};

static emlrtRSInfo wi_emlrtRSI = {
    6,               /* lineNo */
    "chradiiphcode", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcod"
    "e.m" /* pathName */
};

static emlrtRSInfo xi_emlrtRSI = {
    14,              /* lineNo */
    "chradiiphcode", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcod"
    "e.m" /* pathName */
};

static emlrtRSInfo yi_emlrtRSI = {
    16,              /* lineNo */
    "chradiiphcode", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcod"
    "e.m" /* pathName */
};

static emlrtRSInfo aj_emlrtRSI = {
    32,            /* lineNo */
    "parseInputs", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcod"
    "e.m" /* pathName */
};

static emlrtRSInfo bj_emlrtRSI = {
    35,            /* lineNo */
    "parseInputs", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcod"
    "e.m" /* pathName */
};

static emlrtRSInfo cj_emlrtRSI = {
    44,             /* lineNo */
    "checkCenters", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcod"
    "e.m" /* pathName */
};

static emlrtRSInfo dj_emlrtRSI = {
    72,                /* lineNo */
    "validateCenters", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcod"
    "e.m" /* pathName */
};

static emlrtRSInfo ej_emlrtRSI = {
    73,                /* lineNo */
    "validateCenters", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcod"
    "e.m" /* pathName */
};

static emlrtRSInfo gj_emlrtRSI = {
    9,       /* lineNo */
    "angle", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elfun\\angle.m" /* pathName
                                                                        */
};

static emlrtRSInfo hj_emlrtRSI =
    {
        10,    /* lineNo */
        "exp", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elfun\\exp.m" /* pathName
                                                                          */
};

static emlrtMCInfo c_emlrtMCI = {
    18,              /* lineNo */
    13,              /* colNo */
    "imfindcircles", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m" /* pName
                                                                            */
};

static emlrtRTEInfo l_emlrtRTEI = {
    18,              /* lineNo */
    23,              /* colNo */
    "validatencols", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatencols.m" /* pName */
};

static emlrtRTEInfo m_emlrtRTEI = {
    14,                 /* lineNo */
    37,                 /* colNo */
    "validatepositive", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatepositive.m" /* pName */
};

static emlrtRTEInfo n_emlrtRTEI = {
    72,                /* lineNo */
    1,                 /* colNo */
    "validateCenters", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcod"
    "e.m" /* pName */
};

static emlrtRTEInfo o_emlrtRTEI = {
    392,                  /* lineNo */
    1,                    /* colNo */
    "find_first_indices", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                       */
};

static emlrtBCInfo
    gb_emlrtBCI =
        {
            -1,              /* iFirst */
            -1,              /* iLast */
            52,              /* lineNo */
            23,              /* colNo */
            "",              /* aName */
            "imfindcircles", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles"
            ".m", /* pName */
            0     /* checkKind */
};

static emlrtBCInfo
    hb_emlrtBCI =
        {
            -1,              /* iFirst */
            -1,              /* iLast */
            53,              /* lineNo */
            21,              /* colNo */
            "",              /* aName */
            "imfindcircles", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles"
            ".m", /* pName */
            0     /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = {
    1,               /* iFirst */
    374400,          /* iLast */
    14,              /* lineNo */
    30,              /* colNo */
    "",              /* aName */
    "chradiiphcode", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcod"
    "e.m", /* pName */
    0      /* checkKind */
};

static emlrtRTEInfo tc_emlrtRTEI = {
    43,              /* lineNo */
    6,               /* colNo */
    "imfindcircles", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m" /* pName
                                                                            */
};

static emlrtRTEInfo uc_emlrtRTEI = {
    51,              /* lineNo */
    21,              /* colNo */
    "imfindcircles", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m" /* pName
                                                                            */
};

static emlrtRTEInfo vc_emlrtRTEI = {
    369,    /* lineNo */
    24,     /* colNo */
    "find", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                       */
};

static emlrtRTEInfo wc_emlrtRTEI = {
    39,     /* lineNo */
    5,      /* colNo */
    "find", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                       */
};

static emlrtRTEInfo xc_emlrtRTEI = {
    51,              /* lineNo */
    5,               /* colNo */
    "imfindcircles", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m" /* pName
                                                                            */
};

static emlrtRTEInfo yc_emlrtRTEI = {
    52,              /* lineNo */
    5,               /* colNo */
    "imfindcircles", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m" /* pName
                                                                            */
};

static emlrtRTEInfo ad_emlrtRTEI = {
    53,              /* lineNo */
    14,              /* colNo */
    "imfindcircles", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m" /* pName
                                                                            */
};

static emlrtRTEInfo bd_emlrtRTEI = {
    53,              /* lineNo */
    5,               /* colNo */
    "imfindcircles", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m" /* pName
                                                                            */
};

static emlrtRTEInfo cd_emlrtRTEI = {
    72,              /* lineNo */
    30,              /* colNo */
    "chradiiphcode", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcod"
    "e.m" /* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = {
    73,              /* lineNo */
    9,               /* colNo */
    "chradiiphcode", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcod"
    "e.m" /* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = {
    14,              /* lineNo */
    56,              /* colNo */
    "chradiiphcode", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcod"
    "e.m" /* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = {
    14,              /* lineNo */
    76,              /* colNo */
    "chradiiphcode", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcod"
    "e.m" /* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = {
    14,              /* lineNo */
    18,              /* colNo */
    "chradiiphcode", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcod"
    "e.m" /* pName */
};

static emlrtRTEInfo id_emlrtRTEI = {
    69,              /* lineNo */
    21,              /* colNo */
    "imfindcircles", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m" /* pName
                                                                            */
};

static emlrtRTEInfo jd_emlrtRTEI = {
    1,               /* lineNo */
    43,              /* colNo */
    "imfindcircles", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m" /* pName
                                                                            */
};

static emlrtRTEInfo kd_emlrtRTEI = {
    31,     /* lineNo */
    6,      /* colNo */
    "find", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                       */
};

static emlrtRTEInfo ld_emlrtRTEI = {
    14,              /* lineNo */
    1,               /* colNo */
    "chradiiphcode", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcod"
    "e.m" /* pName */
};

static emlrtRSInfo gk_emlrtRSI = {
    18,              /* lineNo */
    "imfindcircles", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m" /* pathName
                                                                            */
};

/* Function Declarations */
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *m1,
                                emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *m1,
                                emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 1, &pArray, "sprintf",
                               true, location);
}

void imfindcircles(Fonction_SommeStackData *SD, const emlrtStack *sp,
                   const boolean_T varargin_1[374400], emxArray_real_T *centers,
                   emxArray_real_T *r_estimated, emxArray_real_T *metric)
{
  static const int32_T b_iv[2] = {1, 119};
  static const char_T u[119] = {
      '\\', 't', '[',  'C', 'E',  'N', 'T', 'E', 'R', 'S', '1', ',', ' ', 'R',
      'A',  'D', 'I',  'I', '1',  ',', ' ', 'M', 'E', 'T', 'R', 'I', 'C', '1',
      ']',  ' ', '=',  ' ', 'I',  'M', 'F', 'I', 'N', 'D', 'C', 'I', 'R', 'C',
      'L',  'E', 'S',  '(', 'A',  ',', ' ', '[', '2', '0', ' ', '6', '0', ']',
      ')',  ';', '\\', 'n', '\\', 't', '[', 'C', 'E', 'N', 'T', 'E', 'R', 'S',
      '2',  ',', ' ',  'R', 'A',  'D', 'I', 'I', '2', ',', ' ', 'M', 'E', 'T',
      'R',  'I', 'C',  '2', ']',  ' ', '=', ' ', 'I', 'M', 'F', 'I', 'N', 'D',
      'C',  'I', 'R',  'C', 'L',  'E', 'S', '(', 'A', ',', ' ', '[', '6', '1',
      ' ',  '1', '0',  '0', ']',  ')', ';'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_boolean_T *c_centers;
  emxArray_boolean_T *x;
  emxArray_creal_T *b_x;
  emxArray_int32_T *ii;
  emxArray_real_T *b_centers;
  emxArray_real_T *b_metric;
  emxArray_real_T *cenPhase;
  emxArray_real_T *idx2Keep;
  const mxArray *m;
  const mxArray *y;
  creal_T *b_x_data;
  real_T *centers_data;
  real_T *idx2Keep_data;
  real_T *metric_data;
  real_T *r_estimated_data;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T *ii_data;
  boolean_T b_y;
  boolean_T exitg1;
  boolean_T *x_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  centers->size[0] = 0;
  centers->size[1] = 0;
  r_estimated->size[0] = 0;
  r_estimated->size[1] = 0;
  metric->size[0] = 0;
  metric->size[1] = 0;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 119, m, &u[0]);
  emlrtAssign(&y, m);
  st.site = &if_emlrtRSI;
  b_st.site = &gk_emlrtRSI;
  d_warning(&st, b_sprintf(&b_st, y, &c_emlrtMCI));
  st.site = &jf_emlrtRSI;
  chaccum(SD, &st, varargin_1, SD->u3.f11.accumMatrix, SD->u3.f11.gradientImg);
  b_y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 374400)) {
    if (((SD->u3.f11.accumMatrix[k].re == 0.0) &&
         (SD->u3.f11.accumMatrix[k].im == 0.0)) ||
        (muDoubleScalarIsNaN(SD->u3.f11.accumMatrix[k].re) ||
         muDoubleScalarIsNaN(SD->u3.f11.accumMatrix[k].im))) {
      k++;
    } else {
      b_y = true;
      exitg1 = true;
    }
  }
  emxInit_real_T(sp, &idx2Keep, 1, &xc_emlrtRTEI, true);
  emxInit_real_T(sp, &b_centers, 2, &jd_emlrtRTEI, true);
  emxInit_boolean_T(sp, &x, 2, &uc_emlrtRTEI);
  emxInit_int32_T(sp, &ii, 1, &kd_emlrtRTEI);
  emxInit_real_T(sp, &cenPhase, 1, &ld_emlrtRTEI, true);
  emxInit_creal_T(sp, &b_x, 1, &hd_emlrtRTEI);
  emxInit_real_T(sp, &b_metric, 2, &ad_emlrtRTEI, true);
  emxInit_boolean_T(sp, &c_centers, 1, &cd_emlrtRTEI);
  if (b_y) {
    int32_T idx;
    st.site = &kf_emlrtRSI;
    chcenters(SD, &st, SD->u3.f11.accumMatrix, b_centers, metric);
    metric_data = metric->data;
    r_estimated_data = b_centers->data;
    i = centers->size[0] * centers->size[1];
    centers->size[0] = b_centers->size[0];
    centers->size[1] = b_centers->size[1];
    emxEnsureCapacity_real_T(sp, centers, i, &tc_emlrtRTEI);
    centers_data = centers->data;
    idx = b_centers->size[0] * b_centers->size[1];
    for (i = 0; i < idx; i++) {
      centers_data[i] = r_estimated_data[i];
    }
    if ((b_centers->size[0] != 0) && (b_centers->size[1] != 0)) {
      int32_T nx;
      st.site = &lf_emlrtRSI;
      i = x->size[0] * x->size[1];
      x->size[0] = metric->size[0];
      x->size[1] = metric->size[1];
      emxEnsureCapacity_boolean_T(&st, x, i, &uc_emlrtRTEI);
      x_data = x->data;
      idx = metric->size[0] * metric->size[1];
      for (i = 0; i < idx; i++) {
        x_data[i] = (metric_data[i] >= 0.15000000000000002);
      }
      c_st.site = &si_emlrtRSI;
      nx = x->size[0] * x->size[1];
      d_st.site = &ti_emlrtRSI;
      idx = 0;
      i = ii->size[0];
      ii->size[0] = nx;
      emxEnsureCapacity_int32_T(&d_st, ii, i, &vc_emlrtRTEI);
      ii_data = ii->data;
      e_st.site = &ui_emlrtRSI;
      if (nx > 2147483646) {
        f_st.site = &y_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k <= nx - 1)) {
        if (x_data[k]) {
          idx++;
          ii_data[idx - 1] = k + 1;
          if (idx >= nx) {
            exitg1 = true;
          } else {
            k++;
          }
        } else {
          k++;
        }
      }
      if (idx > nx) {
        emlrtErrorWithMessageIdR2018a(&d_st, &o_emlrtRTEI,
                                      "Coder:builtins:AssertionFailed",
                                      "Coder:builtins:AssertionFailed", 0);
      }
      if (nx == 1) {
        if (idx == 0) {
          ii->size[0] = 0;
        }
      } else {
        int32_T iv1[2];
        if (idx < 1) {
          i = 0;
        } else {
          i = idx;
        }
        iv1[0] = 1;
        iv1[1] = i;
        e_st.site = &vi_emlrtRSI;
        indexShapeCheck(&e_st, ii->size[0], iv1);
        i1 = ii->size[0];
        ii->size[0] = i;
        emxEnsureCapacity_int32_T(&d_st, ii, i1, &wc_emlrtRTEI);
        ii_data = ii->data;
      }
      i = idx2Keep->size[0];
      idx2Keep->size[0] = ii->size[0];
      emxEnsureCapacity_real_T(&st, idx2Keep, i, &xc_emlrtRTEI);
      idx2Keep_data = idx2Keep->data;
      idx = ii->size[0];
      for (i = 0; i < idx; i++) {
        idx2Keep_data[i] = ii_data[i];
      }
      i = centers->size[0] * centers->size[1];
      centers->size[0] = idx2Keep->size[0];
      centers->size[1] = b_centers->size[1];
      emxEnsureCapacity_real_T(sp, centers, i, &yc_emlrtRTEI);
      centers_data = centers->data;
      idx = b_centers->size[1];
      for (i = 0; i < idx; i++) {
        k = idx2Keep->size[0];
        for (i1 = 0; i1 < k; i1++) {
          nx = (int32_T)idx2Keep_data[i1];
          if (nx > b_centers->size[0]) {
            emlrtDynamicBoundsCheckR2012b((int32_T)idx2Keep_data[i1], 1,
                                          b_centers->size[0], &gb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          centers_data[i1 + centers->size[0] * i] =
              r_estimated_data[(nx + b_centers->size[0] * i) - 1];
        }
      }
      k = metric->size[1];
      i = b_metric->size[0] * b_metric->size[1];
      b_metric->size[0] = idx2Keep->size[0];
      b_metric->size[1] = metric->size[1];
      emxEnsureCapacity_real_T(sp, b_metric, i, &ad_emlrtRTEI);
      r_estimated_data = b_metric->data;
      for (i = 0; i < k; i++) {
        idx = idx2Keep->size[0];
        for (i1 = 0; i1 < idx; i1++) {
          nx = (int32_T)idx2Keep_data[i1];
          if (nx > metric->size[0]) {
            emlrtDynamicBoundsCheckR2012b((int32_T)idx2Keep_data[i1], 1,
                                          metric->size[0], &hb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          r_estimated_data[i1] = metric_data[nx - 1];
        }
      }
      i = metric->size[0] * metric->size[1];
      metric->size[0] = b_metric->size[0];
      metric->size[1] = b_metric->size[1];
      emxEnsureCapacity_real_T(sp, metric, i, &bd_emlrtRTEI);
      metric_data = metric->data;
      idx = b_metric->size[0] * b_metric->size[1];
      for (i = 0; i < idx; i++) {
        metric_data[i] = r_estimated_data[i];
      }
      if (idx2Keep->size[0] == 0) {
        centers->size[0] = 0;
        centers->size[1] = 0;
        metric->size[0] = 0;
        metric->size[1] = 0;
      } else {
        boolean_T guard1 = false;
        st.site = &mf_emlrtRSI;
        c_st.site = &wi_emlrtRSI;
        d_st.site = &aj_emlrtRSI;
        e_st.site = &cj_emlrtRSI;
        f_st.site = &we_emlrtRSI;
        b_y = true;
        i = idx2Keep->size[0] * b_centers->size[1];
        k = 0;
        exitg1 = false;
        while ((!exitg1) && (k <= i - 1)) {
          if (!(centers_data[k] <= 0.0)) {
            k++;
          } else {
            b_y = false;
            exitg1 = true;
          }
        }
        if (!b_y) {
          emlrtErrorWithMessageIdR2018a(
              &f_st, &m_emlrtRTEI,
              "Coder:toolbox:ValidateattributesexpectedPositive",
              "MATLAB:chradiiphcode:expectedPositive", 3, 4, 24,
              "input number 1, centers,");
        }
        f_st.site = &we_emlrtRSI;
        if (b_centers->size[1] != 2) {
          emlrtErrorWithMessageIdR2018a(
              &f_st, &l_emlrtRTEI,
              "Coder:toolbox:ValidateattributesincorrectNumcols",
              "MATLAB:chradiiphcode:incorrectNumcols", 5, 4, 24,
              "input number 1, centers,", 6, 2.0);
        }
        d_st.site = &bj_emlrtRSI;
        i = c_centers->size[0];
        c_centers->size[0] = idx2Keep->size[0];
        emxEnsureCapacity_boolean_T(&d_st, c_centers, i, &cd_emlrtRTEI);
        x_data = c_centers->data;
        idx = idx2Keep->size[0];
        for (i = 0; i < idx; i++) {
          x_data[i] = (centers_data[i] <= 900.0);
        }
        guard1 = false;
        e_st.site = &dj_emlrtRSI;
        if (all(&e_st, c_centers)) {
          i = c_centers->size[0];
          c_centers->size[0] = idx2Keep->size[0];
          emxEnsureCapacity_boolean_T(&d_st, c_centers, i, &dd_emlrtRTEI);
          x_data = c_centers->data;
          idx = idx2Keep->size[0];
          for (i = 0; i < idx; i++) {
            x_data[i] = (centers_data[i + centers->size[0]] <= 416.0);
          }
          e_st.site = &ej_emlrtRSI;
          if (!all(&e_st, c_centers)) {
            guard1 = true;
          }
        } else {
          guard1 = true;
        }
        if (guard1) {
          emlrtErrorWithMessageIdR2018a(
              &d_st, &n_emlrtRTEI, "images:imfindcircles:outOfBoundCenters",
              "images:imfindcircles:outOfBoundCenters", 0);
        }
        c_st.site = &xi_emlrtRSI;
        i = cenPhase->size[0];
        cenPhase->size[0] = idx2Keep->size[0];
        emxEnsureCapacity_real_T(&c_st, cenPhase, i, &ed_emlrtRTEI);
        metric_data = cenPhase->data;
        idx = idx2Keep->size[0];
        for (i = 0; i < idx; i++) {
          metric_data[i] = centers_data[i + centers->size[0]];
        }
        d_st.site = &xi_emlrtRSI;
        b_round(&d_st, cenPhase);
        k = idx2Keep->size[0];
        i = idx2Keep->size[0];
        idx2Keep->size[0] = k;
        emxEnsureCapacity_real_T(&c_st, idx2Keep, i, &fd_emlrtRTEI);
        idx2Keep_data = idx2Keep->data;
        for (i = 0; i < k; i++) {
          idx2Keep_data[i] = centers_data[i];
        }
        d_st.site = &xi_emlrtRSI;
        b_round(&d_st, idx2Keep);
        d_st.site = &cb_emlrtRSI;
        eml_sub2ind(&d_st, cenPhase, idx2Keep, ii);
        ii_data = ii->data;
        i = idx2Keep->size[0];
        idx2Keep->size[0] = ii->size[0];
        emxEnsureCapacity_real_T(&c_st, idx2Keep, i, &gd_emlrtRTEI);
        idx2Keep_data = idx2Keep->data;
        idx = ii->size[0];
        for (i = 0; i < idx; i++) {
          idx2Keep_data[i] = ii_data[i];
        }
        c_st.site = &xi_emlrtRSI;
        i = b_x->size[0];
        b_x->size[0] = idx2Keep->size[0];
        emxEnsureCapacity_creal_T(&c_st, b_x, i, &hd_emlrtRTEI);
        b_x_data = b_x->data;
        idx = idx2Keep->size[0];
        for (i = 0; i < idx; i++) {
          i1 = (int32_T)idx2Keep_data[i];
          if ((i1 < 1) || (i1 > 374400)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)idx2Keep_data[i], 1, 374400,
                                          &ib_emlrtBCI, &c_st);
          }
          b_x_data[i].re = SD->u3.f11.accumMatrix[i1 - 1].re;
          b_x_data[i].im = SD->u3.f11.accumMatrix[i1 - 1].im;
        }
        d_st.site = &gj_emlrtRSI;
        nx = idx2Keep->size[0];
        i = cenPhase->size[0];
        cenPhase->size[0] = idx2Keep->size[0];
        emxEnsureCapacity_real_T(&d_st, cenPhase, i, &sc_emlrtRTEI);
        metric_data = cenPhase->data;
        e_st.site = &te_emlrtRSI;
        if (idx2Keep->size[0] > 2147483646) {
          f_st.site = &y_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }
        for (k = 0; k < nx; k++) {
          metric_data[k] = muDoubleScalarAtan2(b_x_data[k].im, b_x_data[k].re);
        }
        c_st.site = &yi_emlrtRSI;
        idx = cenPhase->size[0];
        for (i = 0; i < idx; i++) {
          metric_data[i] = (metric_data[i] + 3.1415926535897931) /
                               6.2831853071795862 * 2.7080502011022096 +
                           2.3025850929940459;
        }
        d_st.site = &hj_emlrtRSI;
        nx = cenPhase->size[0];
        e_st.site = &ii_emlrtRSI;
        if (cenPhase->size[0] > 2147483646) {
          f_st.site = &y_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }
        for (k = 0; k < nx; k++) {
          metric_data[k] = muDoubleScalarExp(metric_data[k]);
        }
        i = r_estimated->size[0] * r_estimated->size[1];
        r_estimated->size[0] = cenPhase->size[0];
        r_estimated->size[1] = 1;
        emxEnsureCapacity_real_T(sp, r_estimated, i, &id_emlrtRTEI);
        r_estimated_data = r_estimated->data;
        idx = cenPhase->size[0];
        for (i = 0; i < idx; i++) {
          r_estimated_data[i] = metric_data[i];
        }
      }
    }
  }
  emxFree_boolean_T(sp, &c_centers);
  emxFree_real_T(sp, &b_metric);
  emxFree_creal_T(sp, &b_x);
  emxFree_real_T(sp, &cenPhase);
  emxFree_int32_T(sp, &ii);
  emxFree_boolean_T(sp, &x);
  emxFree_real_T(sp, &b_centers);
  emxFree_real_T(sp, &idx2Keep);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (imfindcircles.c) */
