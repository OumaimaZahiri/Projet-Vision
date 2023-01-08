/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * multithresh.c
 *
 * Code generation for function 'multithresh'
 *
 */

/* Include files */
#include "multithresh.h"
#include "Fonction_Somme_data.h"
#include "Fonction_Somme_emxutil.h"
#include "Fonction_Somme_types.h"
#include "abs.h"
#include "any.h"
#include "colon.h"
#include "eps.h"
#include "find.h"
#include "im2uint8.h"
#include "imhist.h"
#include "mean.h"
#include "ndgrid.h"
#include "nullAssignment.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "unique.h"
#include "warning.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo hb_emlrtRSI = {
    759,      /* lineNo */
    "getpdf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pathName
                                                                          */
};

static emlrtRSInfo ib_emlrtRSI = {
    760,      /* lineNo */
    "getpdf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pathName
                                                                          */
};

static emlrtRSInfo sb_emlrtRSI = {
    35,            /* lineNo */
    "multithresh", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pathName
                                                                          */
};

static emlrtRSInfo tb_emlrtRSI = {
    40,            /* lineNo */
    "multithresh", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pathName
                                                                          */
};

static emlrtRSInfo ub_emlrtRSI = {
    41,            /* lineNo */
    "multithresh", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pathName
                                                                          */
};

static emlrtRSInfo vb_emlrtRSI = {
    96,            /* lineNo */
    "multithresh", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pathName
                                                                          */
};

static emlrtRSInfo wb_emlrtRSI = {
    98,            /* lineNo */
    "multithresh", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pathName
                                                                          */
};

static emlrtRSInfo xb_emlrtRSI = {
    101,           /* lineNo */
    "multithresh", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pathName
                                                                          */
};

static emlrtRSInfo yb_emlrtRSI = {
    103,           /* lineNo */
    "multithresh", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pathName
                                                                          */
};

static emlrtRSInfo ac_emlrtRSI = {
    105,           /* lineNo */
    "multithresh", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pathName
                                                                          */
};

static emlrtRSInfo bc_emlrtRSI = {
    107,           /* lineNo */
    "multithresh", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pathName
                                                                          */
};

static emlrtRSInfo cc_emlrtRSI = {
    149,           /* lineNo */
    "multithresh", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pathName
                                                                          */
};

static emlrtRSInfo dc_emlrtRSI = {
    151,           /* lineNo */
    "multithresh", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pathName
                                                                          */
};

static emlrtRSInfo ec_emlrtRSI = {
    152,           /* lineNo */
    "multithresh", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pathName
                                                                          */
};

static emlrtRSInfo fc_emlrtRSI = {
    155,           /* lineNo */
    "multithresh", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pathName
                                                                          */
};

static emlrtRSInfo gc_emlrtRSI = {
    980,                 /* lineNo */
    "getThreshForNoPdf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pathName
                                                                          */
};

static emlrtRSInfo hc_emlrtRSI = {
    1013,                      /* lineNo */
    "getDegenerateThresholds", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pathName
                                                                          */
};

static emlrtRSInfo ic_emlrtRSI = {
    1042,                      /* lineNo */
    "getDegenerateThresholds", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pathName
                                                                          */
};

static emlrtRSInfo nc_emlrtRSI = {
    32,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m" /* pathName
                                                                         */
};

static emlrtRSInfo ee_emlrtRSI = {
    917,                       /* lineNo */
    "checkForDegenerateInput", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pathName
                                                                          */
};

static emlrtRSInfo fe_emlrtRSI = {
    922,                       /* lineNo */
    "checkForDegenerateInput", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pathName
                                                                          */
};

static emlrtRSInfo ge_emlrtRSI = {
    44,       /* lineNo */
    "unique", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" /* pathName
                                                                       */
};

static emlrtRSInfo re_emlrtRSI = {
    1032,                      /* lineNo */
    "getDegenerateThresholds", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pathName
                                                                          */
};

static emlrtBCInfo bb_emlrtBCI = {
    -1,                        /* iFirst */
    -1,                        /* iLast */
    1037,                      /* lineNo */
    24,                        /* colNo */
    "",                        /* aName */
    "getDegenerateThresholds", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    43,            /* lineNo */
    31,            /* colNo */
    "",            /* aName */
    "multithresh", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    167,           /* lineNo */
    27,            /* colNo */
    "",            /* aName */
    "multithresh", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtRTEInfo rb_emlrtRTEI = {
    984,           /* lineNo */
    9,             /* colNo */
    "multithresh", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pName
                                                                          */
};

static emlrtRTEInfo sb_emlrtRTEI = {
    1016,          /* lineNo */
    9,             /* colNo */
    "multithresh", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pName
                                                                          */
};

static emlrtRTEInfo tb_emlrtRTEI = {
    980,           /* lineNo */
    9,             /* colNo */
    "multithresh", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pName
                                                                          */
};

static emlrtRTEInfo ub_emlrtRTEI = {
    1013,          /* lineNo */
    9,             /* colNo */
    "multithresh", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pName
                                                                          */
};

static emlrtRTEInfo vb_emlrtRTEI = {
    922,           /* lineNo */
    5,             /* colNo */
    "multithresh", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pName
                                                                          */
};

static emlrtRTEInfo wb_emlrtRTEI = {
    307,   /* lineNo */
    14,    /* colNo */
    "cat", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pName
                                                                          */
};

static emlrtRTEInfo xb_emlrtRTEI = {
    1000,          /* lineNo */
    5,             /* colNo */
    "multithresh", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pName
                                                                          */
};

static emlrtRTEInfo yb_emlrtRTEI = {
    1049,          /* lineNo */
    5,             /* colNo */
    "multithresh", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pName
                                                                          */
};

static emlrtRTEInfo ac_emlrtRTEI = {
    98,            /* lineNo */
    13,            /* colNo */
    "multithresh", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pName
                                                                          */
};

static emlrtRTEInfo bc_emlrtRTEI = {
    1044,          /* lineNo */
    9,             /* colNo */
    "multithresh", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pName
                                                                          */
};

static emlrtRTEInfo cc_emlrtRTEI = {
    1025,          /* lineNo */
    9,             /* colNo */
    "multithresh", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pName
                                                                          */
};

static emlrtRTEInfo dc_emlrtRTEI = {
    141,           /* lineNo */
    5,             /* colNo */
    "multithresh", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pName
                                                                          */
};

static emlrtRTEInfo ec_emlrtRTEI = {
    157,           /* lineNo */
    9,             /* colNo */
    "multithresh", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pName
                                                                          */
};

static emlrtRTEInfo fc_emlrtRTEI = {
    152,           /* lineNo */
    9,             /* colNo */
    "multithresh", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pName
                                                                          */
};

static emlrtRTEInfo gc_emlrtRTEI = {
    1032,          /* lineNo */
    20,            /* colNo */
    "multithresh", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pName
                                                                          */
};

static emlrtRTEInfo hc_emlrtRTEI = {
    15,            /* lineNo */
    5,             /* colNo */
    "multithresh", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pName
                                                                          */
};

static emlrtRTEInfo ic_emlrtRTEI = {
    94,            /* lineNo */
    13,            /* colNo */
    "multithresh", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pName
                                                                          */
};

static emlrtRTEInfo jc_emlrtRTEI = {
    1,             /* lineNo */
    29,            /* colNo */
    "multithresh", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pName
                                                                          */
};

static emlrtRTEInfo kc_emlrtRTEI = {
    1026,          /* lineNo */
    9,             /* colNo */
    "multithresh", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pName
                                                                          */
};

static emlrtRTEInfo lc_emlrtRTEI = {
    917,           /* lineNo */
    18,            /* colNo */
    "multithresh", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\multithresh.m" /* pName
                                                                          */
};

/* Function Definitions */
void multithresh(Fonction_SommeStackData *SD, const emlrtStack *sp,
                 const uint8_T varargin_1[1123200], uint8_T thresh[2])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_boolean_T *r;
  emxArray_int32_T *ii;
  emxArray_int32_T *jj;
  emxArray_real_T *b_ii;
  emxArray_real_T *threshRaw;
  emxArray_uint8_T *b;
  emxArray_uint8_T *threshL;
  emxArray_uint8_T *threshout;
  emxArray_uint8_T *uniqueVals_d;
  real_T counts[256];
  real_T omega[256];
  real_T *threshRaw_data;
  int32_T b_k;
  int32_T b_loop_ub;
  int32_T i;
  int32_T idx;
  int32_T k;
  int32_T loop_ub;
  int32_T uniqueVals_d_idx_0;
  int32_T *ii_data;
  int32_T *jj_data;
  uint8_T threshL_data[255];
  uint8_T y_data[254];
  uint8_T maxA;
  uint8_T minA;
  uint8_T threshCandidate;
  uint8_T *b_threshL_data;
  uint8_T *threshout_data;
  uint8_T *uniqueVals_d_data;
  boolean_T emptyp;
  boolean_T *r1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &sb_emlrtRSI;
  emptyp = true;
  minA = varargin_1[0];
  maxA = varargin_1[0];
  for (k = 0; k < 1123199; k++) {
    threshCandidate = varargin_1[k + 1];
    if (threshCandidate < minA) {
      minA = threshCandidate;
    } else if (threshCandidate > maxA) {
      maxA = threshCandidate;
    }
  }
  if (minA != maxA) {
    idx = maxA - minA;
    for (i = 0; i < 1123200; i++) {
      SD->u3.f12.varargin_1[i] =
          (real32_T)(varargin_1[i] - minA) / (real32_T)idx;
    }
    b_st.site = &hb_emlrtRSI;
    im2uint8(SD->u3.f12.varargin_1, SD->u3.f12.Auint8);
    b_st.site = &ib_emlrtRSI;
    imhist(&b_st, SD->u3.f12.Auint8, counts);
    for (i = 0; i < 256; i++) {
      counts[i] /= 1.1232E+6;
    }
    emptyp = false;
  }
  emxInit_uint8_T(sp, &threshout, 2, &hc_emlrtRTEI);
  if (emptyp) {
    st.site = &tb_emlrtRSI;
    e_warning(&st);
    st.site = &ub_emlrtRSI;
    if (minA == maxA) {
      b_st.site = &gc_emlrtRSI;
      if (minA > 1) {
        int32_T y_size[2];
        c_st.site = &hc_emlrtRSI;
        eml_integer_colon_dispatcher(1U, y_data, y_size);
        idx = y_size[1] + 1;
        b_k = y_size[1];
        if (b_k - 1 >= 0) {
          memcpy(&threshL_data[0], &y_data[0], (uint32_T)b_k * sizeof(uint8_T));
        }
        threshL_data[y_size[1]] = minA;
      } else {
        idx = 1;
        threshL_data[0] = minA;
      }
      if (2 - idx > 0) {
        i = threshout->size[0] * threshout->size[1];
        threshout->size[0] = 1;
        threshout->size[1] = idx + 1;
        emxEnsureCapacity_uint8_T(&b_st, threshout, i, &tb_emlrtRTEI);
        threshout_data = threshout->data;
        for (i = 0; i < idx; i++) {
          threshout_data[i] = threshL_data[i];
        }
        threshout_data[idx] = 0U;
        threshCandidate = minA;
        do {
          i = (int32_T)(threshCandidate + 1U);
          if (threshCandidate + 1U > 255U) {
            i = 255;
          }
          threshCandidate = (uint8_T)i;
        } while (!!(muDoubleScalarAbs(minA - (uint8_T)i) < eps((uint8_T)i)));
        if (idx + 1 > threshout->size[1]) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, threshout->size[1],
                                        &bb_emlrtBCI, &b_st);
        }
        threshout_data[idx] = (uint8_T)i;
        c_st.site = &ic_emlrtRSI;
        d_st.site = &nc_emlrtRSI;
        sort(&d_st, threshout);
        threshout_data = threshout->data;
      } else {
        i = threshout->size[0] * threshout->size[1];
        threshout->size[0] = 1;
        threshout->size[1] = idx;
        emxEnsureCapacity_uint8_T(&b_st, threshout, i, &tb_emlrtRTEI);
        threshout_data = threshout->data;
        for (i = 0; i < idx; i++) {
          threshout_data[i] = threshL_data[i];
        }
      }
    } else {
      i = threshout->size[0] * threshout->size[1];
      threshout->size[0] = 1;
      threshout->size[1] = 2;
      emxEnsureCapacity_uint8_T(&st, threshout, i, &rb_emlrtRTEI);
      threshout_data = threshout->data;
      threshout_data[0] = minA;
      threshout_data[1] = maxA;
    }
    if (threshout->size[1] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, threshout->size[1], &cb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    thresh[0] = threshout_data[0];
    if (threshout->size[1] < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, threshout->size[1], &cb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    thresh[1] = threshout_data[1];
  } else {
    real_T c[256];
    real_T d;
    real_T maxval;
    memcpy(&omega[0], &counts[0], 256U * sizeof(real_T));
    for (k = 0; k < 255; k++) {
      omega[k + 1] += omega[k];
    }
    for (i = 0; i < 256; i++) {
      counts[i] *= (real_T)i + 1.0;
    }
    for (k = 0; k < 255; k++) {
      counts[k + 1] += counts[k];
    }
    repmat(omega, SD->u3.f12.omega0);
    for (k = 0; k < 256; k++) {
      c[k] = counts[255] - counts[k] / omega[k];
      for (b_k = 0; b_k < 256; b_k++) {
        idx = b_k + (k << 8);
        SD->u3.f12.omega1[idx] = omega[k] - omega[b_k];
        SD->u3.f12.c[idx] = counts[k] - counts[b_k];
      }
    }
    repmat(c, SD->u3.f12.mu_0_t);
    for (i = 0; i < 65536; i++) {
      SD->u3.f12.c[i] /= SD->u3.f12.omega1[i];
    }
    for (k = 0; k < 256; k++) {
      for (b_k = 0; b_k < 256; b_k++) {
        idx = b_k + (k << 8);
        SD->u3.f12.mu_1_t[idx] = counts[255] - SD->u3.f12.c[idx];
      }
    }
    ndgrid(SD->u3.f12.c, SD->u3.f12.allPixC);
    for (k = 0; k < 65536; k++) {
      real_T d1;
      real_T d2;
      real_T d3;
      real_T d4;
      if (SD->u3.f12.c[k] >= SD->u3.f12.allPixC[k]) {
        SD->u3.f12.omega0[k] = rtNaN;
        SD->u3.f12.omega1[k] = rtNaN;
      }
      d = SD->u3.f12.mu_0_t[k];
      maxval = d * d;
      SD->u3.f12.allPixC[k] = maxval;
      d1 = SD->u3.f12.omega0[k];
      d2 = SD->u3.f12.omega1[k];
      d3 = 1.0 - (d1 + d2);
      if (d3 <= 0.0) {
        d3 = rtNaN;
      }
      d4 = SD->u3.f12.mu_1_t[k];
      d = d1 * d + d2 * d4;
      SD->u3.f12.mu_0_t[k] = d;
      d1 = (d1 * maxval + d2 * (d4 * d4)) + d * d / d3;
      SD->u3.f12.omega0[k] = d1;
    }
    if (!muDoubleScalarIsNaN(SD->u3.f12.omega0[0])) {
      idx = 1;
    } else {
      boolean_T exitg1;
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k < 65537)) {
        if (!muDoubleScalarIsNaN(SD->u3.f12.omega0[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      maxval = SD->u3.f12.omega0[0];
    } else {
      maxval = SD->u3.f12.omega0[idx - 1];
      i = idx + 1;
      for (k = i; k < 65537; k++) {
        d = SD->u3.f12.omega0[k - 1];
        if (maxval < d) {
          maxval = d;
        }
      }
    }
    if ((!muDoubleScalarIsInf(maxval)) && (!muDoubleScalarIsNaN(maxval))) {
      boolean_T omega0[65536];
      st.site = &vb_emlrtRSI;
      for (i = 0; i < 65536; i++) {
        omega0[i] = (SD->u3.f12.omega0[i] == maxval);
      }
      emxInit_int32_T(&st, &ii, 1, &jc_emlrtRTEI);
      emxInit_int32_T(&st, &jj, 1, &jc_emlrtRTEI);
      b_st.site = &id_emlrtRSI;
      eml_find(&b_st, omega0, ii, jj);
      jj_data = jj->data;
      ii_data = ii->data;
      st.site = &wb_emlrtRSI;
      b_st.site = &od_emlrtRSI;
      c_st.site = &pd_emlrtRSI;
      if (jj->size[0] != ii->size[0]) {
        emlrtErrorWithMessageIdR2018a(
            &c_st, &h_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      emxInit_real_T(sp, &b_ii, 2, &wb_emlrtRTEI, true);
      i = b_ii->size[0] * b_ii->size[1];
      b_ii->size[0] = ii->size[0];
      b_ii->size[1] = 2;
      emxEnsureCapacity_real_T(sp, b_ii, i, &wb_emlrtRTEI);
      threshRaw_data = b_ii->data;
      b_k = ii->size[0];
      for (i = 0; i < b_k; i++) {
        threshRaw_data[i] = ii_data[i];
      }
      emxFree_int32_T(sp, &ii);
      b_k = jj->size[0];
      for (i = 0; i < b_k; i++) {
        threshRaw_data[i + b_ii->size[0]] = jj_data[i];
      }
      real_T dv[2];
      emxFree_int32_T(sp, &jj);
      st.site = &wb_emlrtRSI;
      mean(&st, b_ii, dv);
      emxFree_real_T(sp, &b_ii);
      emxInit_real_T(sp, &threshRaw, 2, &ic_emlrtRTEI, true);
      i = threshRaw->size[0] * threshRaw->size[1];
      threshRaw->size[0] = 1;
      threshRaw->size[1] = 2;
      emxEnsureCapacity_real_T(sp, threshRaw, i, &ac_emlrtRTEI);
      threshRaw_data = threshRaw->data;
      threshRaw_data[0] = dv[0] - 1.0;
      threshRaw_data[1] = dv[1] - 1.0;
      idx = maxA - minA;
      i = threshout->size[0] * threshout->size[1];
      threshout->size[0] = 1;
      threshout->size[1] = 2;
      emxEnsureCapacity_uint8_T(sp, threshout, i, &dc_emlrtRTEI);
      threshout_data = threshout->data;
      for (i = 0; i < 2; i++) {
        d = muDoubleScalarRound((real_T)minA +
                                threshRaw_data[i] / 255.0 * (real_T)idx);
        if (d < 256.0) {
          if (d >= 0.0) {
            threshCandidate = (uint8_T)d;
          } else {
            threshCandidate = 0U;
          }
        } else if (d >= 256.0) {
          threshCandidate = MAX_uint8_T;
        } else {
          threshCandidate = 0U;
        }
        threshout_data[i] = threshCandidate;
      }
      emxFree_real_T(sp, &threshRaw);
    } else {
      int32_T y_size[2];
      uint32_T qY;
      st.site = &xb_emlrtRSI;
      emxInit_uint8_T(&st, &b, 1, &lc_emlrtRTEI);
      b_st.site = &ee_emlrtRSI;
      c_st.site = &ge_emlrtRSI;
      unique_vector(SD, &c_st, varargin_1, b);
      threshout_data = b->data;
      emxInit_uint8_T(&st, &uniqueVals_d, 2, &kc_emlrtRTEI);
      i = uniqueVals_d->size[0] * uniqueVals_d->size[1];
      uniqueVals_d->size[0] = 1;
      uniqueVals_d->size[1] = b->size[0];
      emxEnsureCapacity_uint8_T(&st, uniqueVals_d, i, &vb_emlrtRTEI);
      uniqueVals_d_data = uniqueVals_d->data;
      b_k = b->size[0];
      for (i = 0; i < b_k; i++) {
        uniqueVals_d_data[i] = threshout_data[i];
      }
      b_st.site = &fe_emlrtRSI;
      nullAssignment(uniqueVals_d);
      uniqueVals_d_data = uniqueVals_d->data;
      if (uniqueVals_d->size[1] <= 2) {
        st.site = &yb_emlrtRSI;
        e_warning(&st);
      } else {
        st.site = &ac_emlrtRSI;
        c_warning(&st);
      }
      st.site = &bc_emlrtRSI;
      emxInit_uint8_T(&st, &threshL, 2, &ub_emlrtRTEI);
      emxInit_real_T(&st, &b_ii, 1, &gc_emlrtRTEI, true);
      emxInit_real_T(&st, &threshRaw, 1, &gc_emlrtRTEI, true);
      emxInit_boolean_T(&st, &r, 1, &gc_emlrtRTEI);
      if (uniqueVals_d->size[1] == 0) {
        i = threshout->size[0] * threshout->size[1];
        threshout->size[0] = 1;
        threshout->size[1] = 2;
        emxEnsureCapacity_uint8_T(&st, threshout, i, &xb_emlrtRTEI);
        threshout_data = threshout->data;
        threshout_data[0] = 1U;
        threshout_data[1] = 2U;
      } else if (2 - uniqueVals_d->size[1] > 0) {
        if (uniqueVals_d_data[0] > 1) {
          b_st.site = &hc_emlrtRSI;
          c_st.site = &jc_emlrtRSI;
          idx = uniqueVals_d_data[0];
          qY = (uint32_T)idx - 1U;
          if ((uint32_T)idx - 1U > (uint32_T)idx) {
            qY = 0U;
          }
          if (2.0 - (real_T)uniqueVals_d->size[1] >= 0.0) {
            threshCandidate = (uint8_T)(2.0 - (real_T)uniqueVals_d->size[1]);
          } else {
            threshCandidate = 0U;
          }
          if (2 - uniqueVals_d->size[1] > (int32_T)qY) {
            i = 0;
          } else {
            i = threshCandidate;
          }
          eml_integer_colon_dispatcher((uint8_T)i, y_data, y_size);
          i = threshL->size[0] * threshL->size[1];
          threshL->size[0] = 1;
          threshL->size[1] = y_size[1] + uniqueVals_d->size[1];
          emxEnsureCapacity_uint8_T(&st, threshL, i, &ub_emlrtRTEI);
          b_threshL_data = threshL->data;
          b_k = y_size[1];
          for (i = 0; i < b_k; i++) {
            b_threshL_data[i] = y_data[i];
          }
          b_k = uniqueVals_d->size[1];
          for (i = 0; i < b_k; i++) {
            b_threshL_data[i + y_size[1]] = uniqueVals_d_data[i];
          }
        } else {
          i = threshL->size[0] * threshL->size[1];
          threshL->size[0] = 1;
          threshL->size[1] = uniqueVals_d->size[1];
          emxEnsureCapacity_uint8_T(&st, threshL, i, &sb_emlrtRTEI);
          b_threshL_data = threshL->data;
          b_k = uniqueVals_d->size[1];
          for (i = 0; i < b_k; i++) {
            b_threshL_data[i] = uniqueVals_d_data[i];
          }
        }
        if (2 - threshL->size[1] > 0) {
          i = threshout->size[0] * threshout->size[1];
          threshout->size[0] = 1;
          threshout->size[1] = 2;
          emxEnsureCapacity_uint8_T(&st, threshout, i, &cc_emlrtRTEI);
          threshout_data = threshout->data;
          b_k = threshL->size[1];
          for (i = 0; i < b_k; i++) {
            threshout_data[i] = b_threshL_data[i];
          }
          b_k = 2 - threshL->size[1];
          for (i = 0; i < b_k; i++) {
            threshout_data[threshL->size[1]] = 0U;
          }
          threshCandidate = uniqueVals_d_data[0];
          if (2 - threshL->size[1] >= 1) {
            uniqueVals_d_idx_0 = uniqueVals_d->size[1];
            loop_ub = uniqueVals_d->size[1];
          }
          idx = 1;
          while (idx <= 2 - threshL->size[1]) {
            i = (int32_T)(threshCandidate + 1U);
            if (threshCandidate + 1U > 255U) {
              i = 255;
            }
            threshCandidate = (uint8_T)i;
            k = threshRaw->size[0];
            threshRaw->size[0] = uniqueVals_d_idx_0;
            emxEnsureCapacity_real_T(&st, threshRaw, k, &gc_emlrtRTEI);
            threshRaw_data = threshRaw->data;
            for (k = 0; k < loop_ub; k++) {
              threshRaw_data[k] = uniqueVals_d_data[k] - (uint8_T)i;
            }
            b_st.site = &re_emlrtRSI;
            b_abs(&b_st, threshRaw, b_ii);
            threshRaw_data = b_ii->data;
            d = eps((uint8_T)i);
            k = r->size[0];
            r->size[0] = b_ii->size[0];
            emxEnsureCapacity_boolean_T(&st, r, k, &gc_emlrtRTEI);
            r1 = r->data;
            b_k = b_ii->size[0];
            for (k = 0; k < b_k; k++) {
              r1[k] = (threshRaw_data[k] < d);
            }
            b_st.site = &re_emlrtRSI;
            if (!any(r)) {
              if (threshL->size[1] + 1 > threshout->size[1]) {
                emlrtDynamicBoundsCheckR2012b(threshL->size[1] + 1, 1,
                                              threshout->size[1], &bb_emlrtBCI,
                                              &st);
              }
              threshout_data[threshL->size[1]] = (uint8_T)i;
              idx = 2;
            }
          }
          b_st.site = &ic_emlrtRSI;
          c_st.site = &nc_emlrtRSI;
          sort(&c_st, threshout);
        } else {
          i = threshout->size[0] * threshout->size[1];
          threshout->size[0] = 1;
          threshout->size[1] = threshL->size[1];
          emxEnsureCapacity_uint8_T(&st, threshout, i, &bc_emlrtRTEI);
          threshout_data = threshout->data;
          b_k = threshL->size[1];
          for (i = 0; i < b_k; i++) {
            threshout_data[i] = b_threshL_data[i];
          }
        }
      } else {
        i = threshout->size[0] * threshout->size[1];
        threshout->size[0] = 1;
        threshout->size[1] = uniqueVals_d->size[1];
        emxEnsureCapacity_uint8_T(&st, threshout, i, &yb_emlrtRTEI);
        threshout_data = threshout->data;
        b_k = uniqueVals_d->size[1];
        for (i = 0; i < b_k; i++) {
          threshout_data[i] = uniqueVals_d_data[i];
        }
      }
      st.site = &cc_emlrtRSI;
      b_st.site = &ee_emlrtRSI;
      c_st.site = &ge_emlrtRSI;
      unique_vector(SD, &c_st, varargin_1, b);
      threshout_data = b->data;
      i = uniqueVals_d->size[0] * uniqueVals_d->size[1];
      uniqueVals_d->size[0] = 1;
      uniqueVals_d->size[1] = b->size[0];
      emxEnsureCapacity_uint8_T(&st, uniqueVals_d, i, &vb_emlrtRTEI);
      uniqueVals_d_data = uniqueVals_d->data;
      b_k = b->size[0];
      for (i = 0; i < b_k; i++) {
        uniqueVals_d_data[i] = threshout_data[i];
      }
      emxFree_uint8_T(&st, &b);
      b_st.site = &fe_emlrtRSI;
      nullAssignment(uniqueVals_d);
      uniqueVals_d_data = uniqueVals_d->data;
      if (uniqueVals_d->size[1] <= 2) {
        st.site = &dc_emlrtRSI;
        e_warning(&st);
        st.site = &ec_emlrtRSI;
        if (uniqueVals_d->size[1] == 0) {
          i = threshout->size[0] * threshout->size[1];
          threshout->size[0] = 1;
          threshout->size[1] = 2;
          emxEnsureCapacity_uint8_T(&st, threshout, i, &fc_emlrtRTEI);
          threshout_data = threshout->data;
          threshout_data[0] = 1U;
          threshout_data[1] = 2U;
        } else if (2 - uniqueVals_d->size[1] > 0) {
          if (uniqueVals_d_data[0] > 1) {
            b_st.site = &hc_emlrtRSI;
            c_st.site = &jc_emlrtRSI;
            idx = uniqueVals_d_data[0];
            qY = (uint32_T)idx - 1U;
            if ((uint32_T)idx - 1U > (uint32_T)idx) {
              qY = 0U;
            }
            if (2 - uniqueVals_d->size[1] > (int32_T)qY) {
              i = 0;
            } else {
              i = (uint8_T)(2 - uniqueVals_d->size[1]);
            }
            eml_integer_colon_dispatcher((uint8_T)i, y_data, y_size);
            i = threshL->size[0] * threshL->size[1];
            threshL->size[0] = 1;
            threshL->size[1] = y_size[1] + uniqueVals_d->size[1];
            emxEnsureCapacity_uint8_T(&st, threshL, i, &ub_emlrtRTEI);
            b_threshL_data = threshL->data;
            b_k = y_size[1];
            for (i = 0; i < b_k; i++) {
              b_threshL_data[i] = y_data[i];
            }
            b_k = uniqueVals_d->size[1];
            for (i = 0; i < b_k; i++) {
              b_threshL_data[i + y_size[1]] = uniqueVals_d_data[i];
            }
          } else {
            i = threshL->size[0] * threshL->size[1];
            threshL->size[0] = 1;
            threshL->size[1] = uniqueVals_d->size[1];
            emxEnsureCapacity_uint8_T(&st, threshL, i, &sb_emlrtRTEI);
            b_threshL_data = threshL->data;
            b_k = uniqueVals_d->size[1];
            for (i = 0; i < b_k; i++) {
              b_threshL_data[i] = uniqueVals_d_data[i];
            }
          }
          if (2 - threshL->size[1] > 0) {
            i = threshout->size[0] * threshout->size[1];
            threshout->size[0] = 1;
            threshout->size[1] = 2;
            emxEnsureCapacity_uint8_T(&st, threshout, i, &fc_emlrtRTEI);
            threshout_data = threshout->data;
            b_k = threshL->size[1];
            for (i = 0; i < b_k; i++) {
              threshout_data[i] = b_threshL_data[i];
            }
            b_k = 2 - threshL->size[1];
            for (i = 0; i < b_k; i++) {
              threshout_data[threshL->size[1]] = 0U;
            }
            threshCandidate = uniqueVals_d_data[0];
            if (2 - threshL->size[1] >= 1) {
              uniqueVals_d_idx_0 = uniqueVals_d->size[1];
              b_loop_ub = uniqueVals_d->size[1];
            }
            idx = 1;
            while (idx <= 2 - threshL->size[1]) {
              i = (int32_T)(threshCandidate + 1U);
              if (threshCandidate + 1U > 255U) {
                i = 255;
              }
              threshCandidate = (uint8_T)i;
              k = threshRaw->size[0];
              threshRaw->size[0] = uniqueVals_d_idx_0;
              emxEnsureCapacity_real_T(&st, threshRaw, k, &gc_emlrtRTEI);
              threshRaw_data = threshRaw->data;
              for (k = 0; k < b_loop_ub; k++) {
                threshRaw_data[k] = uniqueVals_d_data[k] - (uint8_T)i;
              }
              b_st.site = &re_emlrtRSI;
              b_abs(&b_st, threshRaw, b_ii);
              threshRaw_data = b_ii->data;
              d = eps((uint8_T)i);
              k = r->size[0];
              r->size[0] = b_ii->size[0];
              emxEnsureCapacity_boolean_T(&st, r, k, &gc_emlrtRTEI);
              r1 = r->data;
              b_k = b_ii->size[0];
              for (k = 0; k < b_k; k++) {
                r1[k] = (threshRaw_data[k] < d);
              }
              b_st.site = &re_emlrtRSI;
              if (!any(r)) {
                if (threshL->size[1] + 1 > threshout->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(threshL->size[1] + 1, 1,
                                                threshout->size[1],
                                                &bb_emlrtBCI, &st);
                }
                threshout_data[threshL->size[1]] = (uint8_T)i;
                idx = 2;
              }
            }
            b_st.site = &ic_emlrtRSI;
            c_st.site = &nc_emlrtRSI;
            sort(&c_st, threshout);
            threshout_data = threshout->data;
          } else {
            i = threshout->size[0] * threshout->size[1];
            threshout->size[0] = 1;
            threshout->size[1] = threshL->size[1];
            emxEnsureCapacity_uint8_T(&st, threshout, i, &fc_emlrtRTEI);
            threshout_data = threshout->data;
            b_k = threshL->size[1];
            for (i = 0; i < b_k; i++) {
              threshout_data[i] = b_threshL_data[i];
            }
          }
        } else {
          i = threshout->size[0] * threshout->size[1];
          threshout->size[0] = 1;
          threshout->size[1] = uniqueVals_d->size[1];
          emxEnsureCapacity_uint8_T(&st, threshout, i, &fc_emlrtRTEI);
          threshout_data = threshout->data;
          b_k = uniqueVals_d->size[1];
          for (i = 0; i < b_k; i++) {
            threshout_data[i] = uniqueVals_d_data[i];
          }
        }
      } else {
        st.site = &fc_emlrtRSI;
        c_warning(&st);
        idx = maxA - minA;
        i = threshout->size[0] * threshout->size[1];
        threshout->size[0] = 1;
        emxEnsureCapacity_uint8_T(sp, threshout, i, &ec_emlrtRTEI);
        threshout_data = threshout->data;
        b_k = threshout->size[1] - 1;
        for (i = 0; i <= b_k; i++) {
          k = (int32_T)muDoubleScalarRound(
              (real_T)minA + (real_T)threshout_data[i] / 255.0 * (real_T)idx);
          if (k < 256) {
            if (k >= 0) {
              threshCandidate = (uint8_T)k;
            } else {
              threshCandidate = 0U;
            }
          } else {
            threshCandidate = MAX_uint8_T;
          }
          threshout_data[i] = threshCandidate;
        }
      }
      emxFree_boolean_T(sp, &r);
      emxFree_real_T(sp, &threshRaw);
      emxFree_real_T(sp, &b_ii);
      emxFree_uint8_T(sp, &uniqueVals_d);
      emxFree_uint8_T(sp, &threshL);
    }
    if (threshout->size[1] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, threshout->size[1], &db_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    thresh[0] = threshout_data[0];
    if (threshout->size[1] < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, threshout->size[1], &db_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    thresh[1] = threshout_data[1];
  }
  emxFree_uint8_T(sp, &threshout);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (multithresh.c) */
