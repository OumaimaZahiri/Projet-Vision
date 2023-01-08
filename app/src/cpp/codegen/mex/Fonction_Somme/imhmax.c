/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imhmax.c
 *
 * Code generation for function 'imhmax'
 *
 */

/* Include files */
#include "imhmax.h"
#include "Fonction_Somme_data.h"
#include "rt_nonfinite.h"
#include "validateattributes.h"
#include "libmwippreconstruct.h"

/* Variable Definitions */
static emlrtRSInfo hg_emlrtRSI = {
    66,       /* lineNo */
    "imhmax", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\imhmax.m" /* pathName
                                                                            */
};

static emlrtRSInfo ig_emlrtRSI = {
    10,              /* lineNo */
    "imreconstruct", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imreconstruct.m" /* pathName
                                                                            */
};

static emlrtRSInfo jg_emlrtRSI = {
    14,              /* lineNo */
    "imreconstruct", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imreconstruct.m" /* pathName
                                                                            */
};

/* Function Definitions */
void imhmax(const emlrtStack *sp, const real_T b_I[374400], real_T J[374400])
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (i = 0; i < 374400; i++) {
    J[i] = b_I[i] - 0.15;
  }
  real_T imSizeT[2];
  b_st.site = &ig_emlrtRSI;
  validateattributes(&b_st, J);
  b_st.site = &jg_emlrtRSI;
  validateattributes(&b_st, b_I);
  imSizeT[0] = 416.0;
  imSizeT[1] = 900.0;
  ippreconstruct_real64(&J[0], &b_I[0], &imSizeT[0], 2.0);
}

/* End of code generation (imhmax.c) */
