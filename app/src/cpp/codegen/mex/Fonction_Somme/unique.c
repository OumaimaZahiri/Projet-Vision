/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * unique.c
 *
 * Code generation for function 'unique'
 *
 */

/* Include files */
#include "unique.h"
#include "Fonction_Somme_data.h"
#include "Fonction_Somme_emxutil.h"
#include "Fonction_Somme_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "mergesort.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo he_emlrtRSI = {
    244,             /* lineNo */
    "unique_vector", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" /* pathName
                                                                       */
};

static emlrtRSInfo ie_emlrtRSI = {
    238,             /* lineNo */
    "unique_vector", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" /* pathName
                                                                       */
};

static emlrtRSInfo je_emlrtRSI = {
    230,             /* lineNo */
    "unique_vector", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" /* pathName
                                                                       */
};

static emlrtRSInfo ke_emlrtRSI = {
    206,             /* lineNo */
    "unique_vector", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" /* pathName
                                                                       */
};

static emlrtRSInfo le_emlrtRSI = {
    160,             /* lineNo */
    "unique_vector", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" /* pathName
                                                                       */
};

static emlrtRTEInfo qc_emlrtRTEI = {
    161,      /* lineNo */
    20,       /* colNo */
    "unique", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" /* pName
                                                                       */
};

static emlrtRTEInfo rc_emlrtRTEI = {
    238,      /* lineNo */
    1,        /* colNo */
    "unique", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" /* pName
                                                                       */
};

/* Function Definitions */
void unique_vector(Fonction_SommeStackData *SD, const emlrtStack *sp,
                   const uint8_T a[1123200], emxArray_uint8_T *b)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_iv[2];
  int32_T i;
  int32_T k;
  int32_T nb;
  uint8_T *b_data;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &le_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  memset(&SD->u2.f9.idx[0], 0, 1123200U * sizeof(int32_T));
  b_mergesort(SD, SD->u2.f9.idx, a);
  k = b->size[0];
  b->size[0] = 1123200;
  emxEnsureCapacity_uint8_T(sp, b, k, &qc_emlrtRTEI);
  b_data = b->data;
  for (k = 0; k < 1123200; k++) {
    b_data[k] = a[SD->u2.f9.idx[k] - 1];
  }
  nb = 0;
  k = 1;
  while (k <= 1123200) {
    uint8_T x;
    x = b_data[k - 1];
    do {
      k++;
    } while (!((k > 1123200) || (b_data[k - 1] != x)));
    nb++;
    b_data[nb - 1] = x;
    st.site = &ke_emlrtRSI;
  }
  st.site = &je_emlrtRSI;
  if (nb < 1) {
    k = 0;
  } else {
    k = nb;
  }
  b_iv[0] = 1;
  b_iv[1] = k;
  st.site = &ie_emlrtRSI;
  indexShapeCheck(&st, 1123200, b_iv);
  i = b->size[0];
  b->size[0] = k;
  emxEnsureCapacity_uint8_T(sp, b, i, &rc_emlrtRTEI);
  st.site = &he_emlrtRSI;
  if (nb > 2147483646) {
    b_st.site = &y_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
}

/* End of code generation (unique.c) */
