/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mean2.c
 *
 * Code generation for function 'mean2'
 *
 */

/* Include files */
#include "mean2.h"
#include "Fonction_Somme_data.h"
#include "Fonction_Somme_types.h"
#include "combineVectorElements.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo bk_emlrtRSI = {
    20,      /* lineNo */
    "mean2", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\mean2.m" /* pathName
                                                                           */
};

/* Function Definitions */
real_T mean2(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T c_x;
  real_T y;
  int32_T b_x;
  int32_T d_x;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bk_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &hh_emlrtRSI;
  b_x = x->size[0] * x->size[1];
  c_x = *x;
  d_x = b_x;
  c_x.size = &d_x;
  c_x.numDimensions = 1;
  c_st.site = &ih_emlrtRSI;
  y = combineVectorElements(&c_st, &c_x);
  y /= (real_T)(x->size[0] * x->size[1]);
  return y;
}

/* End of code generation (mean2.c) */
