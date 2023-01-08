/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imquantize.c
 *
 * Code generation for function 'imquantize'
 *
 */

/* Include files */
#include "imquantize.h"
#include "Fonction_Somme_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo ve_emlrtRSI = {
    12,           /* lineNo */
    "imquantize", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imquantize.m" /* pathName
                                                                         */
};

static emlrtRTEInfo k_emlrtRTEI = {
    13,                   /* lineNo */
    37,                   /* colNo */
    "validateincreasing", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validateincreasing.m" /* pName */
};

/* Function Definitions */
void imquantize(const emlrtStack *sp, const uint8_T varargin_1[1123200],
                const uint8_T varargin_2[2], const uint8_T varargin_3[3],
                uint8_T quant_a[1123200])
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T pInd;
  uint8_T u;
  uint8_T u1;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ve_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &we_emlrtRSI;
  if (varargin_2[0] >= varargin_2[1]) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &k_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedIncreasing",
        "MATLAB:imquantize:expectedIncreasing", 3, 4, 23,
        "input number 2, LEVELS,");
  }
  u = varargin_2[0];
  u1 = varargin_2[1];
  for (pInd = 0; pInd < 1123200; pInd++) {
    uint8_T u2;
    u2 = varargin_1[pInd];
    quant_a[pInd] = varargin_3[(int8_T)(((u2 > u) + (u2 > u1)) + 1) - 1];
  }
}

/* End of code generation (imquantize.c) */
