/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * warning.c
 *
 * Code generation for function 'warning'
 *
 */

/* Include files */
#include "warning.h"
#include "Fonction_Somme_data.h"
#include "Fonction_Somme_mexutil.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtMCInfo emlrtMCI = {
    14,        /* lineNo */
    25,        /* colNo */
    "warning", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\warning.m" /* pName */
};

static emlrtMCInfo b_emlrtMCI = {
    14,        /* lineNo */
    9,         /* colNo */
    "warning", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\warning.m" /* pName */
};

static emlrtRSInfo fk_emlrtRSI = {
    14,        /* lineNo */
    "warning", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\warning.m" /* pathName */
};

/* Function Declarations */
static void b_feval(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location);

static const mxArray *c_feval(const emlrtStack *sp, const mxArray *m1,
                              const mxArray *m2, const mxArray *m3,
                              emlrtMCInfo *location);

static const mxArray *d_feval(const emlrtStack *sp, const mxArray *m1,
                              const mxArray *m2, const mxArray *m3,
                              const mxArray *m4, const mxArray *m5,
                              const mxArray *m6, const mxArray *m7,
                              const mxArray *m8, emlrtMCInfo *location);

static const mxArray *feval(const emlrtStack *sp, const mxArray *m1,
                            const mxArray *m2, emlrtMCInfo *location);

/* Function Definitions */
static void b_feval(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 2, &pArrays[0], "feval",
                        true, location);
}

static const mxArray *c_feval(const emlrtStack *sp, const mxArray *m1,
                              const mxArray *m2, const mxArray *m3,
                              emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 3, &pArrays[0],
                               "feval", true, location);
}

static const mxArray *d_feval(const emlrtStack *sp, const mxArray *m1,
                              const mxArray *m2, const mxArray *m3,
                              const mxArray *m4, const mxArray *m5,
                              const mxArray *m6, const mxArray *m7,
                              const mxArray *m8, emlrtMCInfo *location)
{
  const mxArray *pArrays[8];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  pArrays[4] = m5;
  pArrays[5] = m6;
  pArrays[6] = m7;
  pArrays[7] = m8;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 8, &pArrays[0],
                               "feval", true, location);
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *m1,
                            const mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 2, &pArrays[0],
                               "feval", true, location);
}

void b_warning(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 7};
  static const int32_T iv2[2] = {1, 27};
  static const char_T msgID[27] = {'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm',
                                   'h', 'i', 's', 't', 'c', ':', 'i', 'n', 'p',
                                   'u', 't', 'H', 'a', 's', 'N', 'a', 'N', 's'};
  static const char_T b_u[7] = {'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7] = {'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 27, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &fk_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &emlrtMCI), &b_emlrtMCI);
}

void c_warning(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 7};
  static const int32_T iv2[2] = {1, 32};
  static const char_T msgID[32] = {'i', 'm', 'a', 'g', 'e', 's', ':', 'm',
                                   'u', 'l', 't', 'i', 't', 'h', 'r', 'e',
                                   's', 'h', ':', 'n', 'o', 'C', 'o', 'n',
                                   'v', 'e', 'r', 'g', 'e', 'n', 'c', 'e'};
  static const char_T b_u[7] = {'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7] = {'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 32, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &fk_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &emlrtMCI), &b_emlrtMCI);
}

void d_warning(const emlrtStack *sp, const mxArray *varargin_6)
{
  static const int32_T b_iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 7};
  static const int32_T iv2[2] = {1, 44};
  static const int32_T iv3[2] = {1, 13};
  static const int32_T iv4[2] = {1, 13};
  static const int32_T iv5[2] = {1, 19};
  static const int32_T iv6[2] = {1, 8};
  static const int32_T iv7[2] = {1, 13};
  static const char_T msgID[44] = {
      'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm', 'f', 'i', 'n', 'd', 'c', 'i',
      'r', 'c', 'l', 'e', 's', ':', 'w', 'a', 'r', 'n', 'F', 'o', 'r', 'L', 'a',
      'r', 'g', 'e', 'R', 'a', 'd', 'i', 'u', 's', 'R', 'a', 'n', 'g', 'e'};
  static const char_T varargin_3[19] = {'(', 'R', 'm', 'a', 'x', ' ', '-',
                                        ' ', 'R', 'm', 'i', 'n', ')', ' ',
                                        '<', ' ', '1', '0', '0'};
  static const char_T varargin_1[13] = {'I', 'M', 'F', 'I', 'N', 'D', 'C',
                                        'I', 'R', 'C', 'L', 'E', 'S'};
  static const char_T varargin_2[13] = {'R', 'm', 'a', 'x', ' ', '<', ' ',
                                        '3', '*', 'R', 'm', 'i', 'n'};
  static const char_T varargin_4[8] = {'[', '2', '0', ' ', '1', '0', '0', ']'};
  static const char_T b_u[7] = {'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7] = {'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 44, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  d_y = NULL;
  m = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 13, m, &varargin_1[0]);
  emlrtAssign(&d_y, m);
  e_y = NULL;
  m = emlrtCreateCharArray(2, &iv4[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 13, m, &varargin_2[0]);
  emlrtAssign(&e_y, m);
  f_y = NULL;
  m = emlrtCreateCharArray(2, &iv5[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 19, m, &varargin_3[0]);
  emlrtAssign(&f_y, m);
  g_y = NULL;
  m = emlrtCreateCharArray(2, &iv6[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 8, m, &varargin_4[0]);
  emlrtAssign(&g_y, m);
  h_y = NULL;
  m = emlrtCreateCharArray(2, &iv7[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 13, m, &varargin_1[0]);
  emlrtAssign(&h_y, m);
  st.site = &fk_emlrtRSI;
  b_feval(&st, y,
          d_feval(&st, b_y, c_y, d_y, e_y, f_y, g_y, h_y,
                  emlrtAlias(varargin_6), &emlrtMCI),
          &b_emlrtMCI);
  emlrtDestroyArray(&varargin_6);
}

void e_warning(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 7};
  static const int32_T iv2[2] = {1, 34};
  static const char_T msgID[34] = {'i', 'm', 'a', 'g', 'e', 's', ':', 'm', 'u',
                                   'l', 't', 'i', 't', 'h', 'r', 'e', 's', 'h',
                                   ':', 'd', 'e', 'g', 'e', 'n', 'e', 'r', 'a',
                                   't', 'e', 'I', 'n', 'p', 'u', 't'};
  static const char_T b_u[7] = {'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7] = {'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 34, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &fk_emlrtRSI;
  b_feval(&st, y, c_feval(&st, b_y, c_y, d_emlrt_marshallOut(2.0), &emlrtMCI),
          &b_emlrtMCI);
}

void warning(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 7};
  static const int32_T iv2[2] = {1, 25};
  static const char_T msgID[25] = {'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm',
                                   'h', 'i', 's', 't', 'c', ':', 'o', 'u', 't',
                                   'O', 'f', 'R', 'a', 'n', 'g', 'e'};
  static const char_T b_u[7] = {'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7] = {'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 25, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &fk_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &emlrtMCI), &b_emlrtMCI);
}

/* End of code generation (warning.c) */
