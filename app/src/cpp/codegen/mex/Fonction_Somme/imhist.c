/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imhist.c
 *
 * Code generation for function 'imhist'
 *
 */

/* Include files */
#include "imhist.h"
#include "Fonction_Somme_data.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "libmwgetnumcores.h"
#include "libmwtbbhist.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo mb_emlrtRSI =
    {
        133,      /* lineNo */
        "imhist", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imhist.m" /* pathName
                                                                         */
};

static emlrtRSInfo pb_emlrtRSI =
    {
        207,             /* lineNo */
        "calcHistogram", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imhist.m" /* pathName
                                                                         */
};

static emlrtRSInfo qb_emlrtRSI =
    {
        452,             /* lineNo */
        "calcHistogram", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imhist.m" /* pathName
                                                                         */
};

static emlrtRSInfo rb_emlrtRSI =
    {
        456,             /* lineNo */
        "calcHistogram", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imhist.m" /* pathName
                                                                         */
};

static emlrtBCInfo w_emlrtBCI =
    {
        1,                    /* iFirst */
        1123200,              /* iLast */
        1058,                 /* lineNo */
        48,                   /* colNo */
        "",                   /* aName */
        "imhistAlgo_integer", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imhist.m", /* pName
                                                                          */
        0 /* checkKind */
};

static emlrtBCInfo x_emlrtBCI =
    {
        1,                    /* iFirst */
        1123200,              /* iLast */
        1057,                 /* lineNo */
        48,                   /* colNo */
        "",                   /* aName */
        "imhistAlgo_integer", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imhist.m", /* pName
                                                                          */
        0 /* checkKind */
};

static emlrtBCInfo y_emlrtBCI =
    {
        1,                    /* iFirst */
        1123200,              /* iLast */
        1056,                 /* lineNo */
        48,                   /* colNo */
        "",                   /* aName */
        "imhistAlgo_integer", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imhist.m", /* pName
                                                                          */
        0 /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI =
    {
        1,                    /* iFirst */
        1123200,              /* iLast */
        1055,                 /* lineNo */
        48,                   /* colNo */
        "",                   /* aName */
        "imhistAlgo_integer", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imhist.m", /* pName
                                                                          */
        0 /* checkKind */
};

/* Function Definitions */
void imhist(const emlrtStack *sp, const uint8_T varargin_1[1123200],
            real_T yout[256])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T localBins1[256];
  real_T localBins2[256];
  real_T localBins3[256];
  real_T numCores;
  int32_T i;
  boolean_T nanFlag;
  boolean_T rngFlag;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  st.site = &mb_emlrtRSI;
  numCores = 1.0;
  getnumcores(&numCores);
  if (numCores > 1.0) {
    nanFlag = false;
    rngFlag = false;
    tbbhist_uint8(&varargin_1[0], 1.1232E+6, 1.1232E+6, 1.0, &yout[0], 256.0,
                  256.0, &rngFlag, &nanFlag);
  } else {
    int32_T yout_tmp;
    b_st.site = &pb_emlrtRSI;
    memset(&yout[0], 0, 256U * sizeof(real_T));
    memset(&localBins1[0], 0, 256U * sizeof(real_T));
    memset(&localBins2[0], 0, 256U * sizeof(real_T));
    memset(&localBins3[0], 0, 256U * sizeof(real_T));
    for (i = 1; i + 3 <= 1123200; i += 4) {
      if (i > 1123200) {
        emlrtDynamicBoundsCheckR2012b(i, 1, 1123200, &ab_emlrtBCI, &b_st);
      }
      if (i + 1 > 1123200) {
        emlrtDynamicBoundsCheckR2012b(1123201, 1, 1123200, &y_emlrtBCI, &b_st);
      }
      if (i + 2 > 1123200) {
        emlrtDynamicBoundsCheckR2012b(i + 2, 1, 1123200, &x_emlrtBCI, &b_st);
      }
      if (i + 3 > 1123200) {
        emlrtDynamicBoundsCheckR2012b(i + 3, 1, 1123200, &w_emlrtBCI, &b_st);
      }
      yout_tmp = varargin_1[i - 1];
      localBins1[yout_tmp]++;
      localBins2[varargin_1[i]]++;
      yout_tmp = varargin_1[i + 1];
      localBins3[yout_tmp]++;
      yout_tmp = varargin_1[i + 2];
      yout[yout_tmp]++;
    }
    while (i <= 1123200) {
      yout_tmp = varargin_1[i - 1];
      yout[yout_tmp]++;
      i++;
    }
    for (i = 0; i < 256; i++) {
      yout[i] = ((yout[i] + localBins1[i]) + localBins2[i]) + localBins3[i];
    }
    rngFlag = false;
    nanFlag = false;
  }
  if (rngFlag) {
    b_st.site = &qb_emlrtRSI;
    warning(&b_st);
  }
  if (nanFlag) {
    b_st.site = &rb_emlrtRSI;
    b_warning(&b_st);
  }
}

/* End of code generation (imhist.c) */
