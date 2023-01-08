/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imregionalmax.c
 *
 * Code generation for function 'imregionalmax'
 *
 */

/* Include files */
#include "imregionalmax.h"
#include "Fonction_Somme_data.h"
#include "rt_nonfinite.h"
#include "libmwimregionalmax.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo lg_emlrtRSI = {
    14,              /* lineNo */
    "imregionalmax", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imregionalmax.m" /* pathName
                                                                            */
};

static emlrtRSInfo mg_emlrtRSI = {
    35,              /* lineNo */
    "imregionalmax", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imregionalmax.m" /* pathName
                                                                            */
};

static emlrtRSInfo ng_emlrtRSI = {
    37,              /* lineNo */
    "imregionalmax", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imregionalmax.m" /* pathName
                                                                            */
};

static emlrtRTEInfo v_emlrtRTEI = {
    13,               /* lineNo */
    13,               /* colNo */
    "toLogicalCheck", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\toLogicalCheck.m" /* pName */
};

/* Function Definitions */
void imregionalmax(const emlrtStack *sp, const real_T varargin_1[374400],
                   boolean_T BW[374400])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T imSizeT[2];
  int32_T k;
  boolean_T conn[9];
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &lg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &we_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 374400)) {
    if (!muDoubleScalarIsNaN(varargin_1[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &u_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedNonNaN",
        "MATLAB:imregionalmax:expectedNonNaN", 3, 4, 18, "input number 1, I,");
  }
  st.site = &mg_emlrtRSI;
  for (k = 0; k < 374400; k++) {
    if (muDoubleScalarIsNaN(varargin_1[k])) {
      emlrtErrorWithMessageIdR2018a(&st, &v_emlrtRTEI, "MATLAB:nologicalnan",
                                    "MATLAB:nologicalnan", 0);
    }
  }
  st.site = &ng_emlrtRSI;
  imSizeT[0] = 416.0;
  imSizeT[1] = 900.0;
  for (k = 0; k < 9; k++) {
    conn[k] = true;
  }
  real_T connSizeT[2];
  connSizeT[0] = 3.0;
  connSizeT[1] = 3.0;
  imregionalmax_real64(&varargin_1[0], &BW[0], 2.0, &imSizeT[0], &conn[0], 2.0,
                       &connSizeT[0]);
}

/* End of code generation (imregionalmax.c) */
