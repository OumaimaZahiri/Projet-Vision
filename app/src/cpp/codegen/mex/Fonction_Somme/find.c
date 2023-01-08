/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * find.c
 *
 * Code generation for function 'find'
 *
 */

/* Include files */
#include "find.h"
#include "Fonction_Somme_data.h"
#include "Fonction_Somme_emxutil.h"
#include "Fonction_Somme_types.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void eml_find(const emlrtStack *sp, const boolean_T x[65536],
              emxArray_int32_T *i, emxArray_int32_T *j)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_iv[2];
  int32_T idx;
  int32_T ii;
  int32_T jj;
  int32_T *i_data;
  int32_T *j_data;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &jd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  idx = 0;
  ii = i->size[0];
  i->size[0] = 65536;
  emxEnsureCapacity_int32_T(&st, i, ii, &mc_emlrtRTEI);
  i_data = i->data;
  ii = j->size[0];
  j->size[0] = 65536;
  emxEnsureCapacity_int32_T(&st, j, ii, &nc_emlrtRTEI);
  j_data = j->data;
  ii = 1;
  jj = 1;
  exitg1 = false;
  while ((!exitg1) && (jj <= 256)) {
    boolean_T guard1 = false;
    guard1 = false;
    if (x[(ii + ((jj - 1) << 8)) - 1]) {
      idx++;
      i_data[idx - 1] = ii;
      j_data[idx - 1] = jj;
      if (idx >= 65536) {
        exitg1 = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    if (guard1) {
      ii++;
      if (ii > 256) {
        ii = 1;
        jj++;
      }
    }
  }
  if (idx < 1) {
    ii = 0;
  } else {
    ii = idx;
  }
  b_iv[0] = 1;
  b_iv[1] = ii;
  b_st.site = &md_emlrtRSI;
  indexShapeCheck(&b_st, 65536, b_iv);
  jj = i->size[0];
  i->size[0] = ii;
  emxEnsureCapacity_int32_T(&st, i, jj, &oc_emlrtRTEI);
  if (idx < 1) {
    ii = 0;
  } else {
    ii = idx;
  }
  b_iv[0] = 1;
  b_iv[1] = ii;
  b_st.site = &ld_emlrtRSI;
  indexShapeCheck(&b_st, 65536, b_iv);
  jj = j->size[0];
  j->size[0] = ii;
  emxEnsureCapacity_int32_T(&st, j, jj, &pc_emlrtRTEI);
  b_iv[0] = 1;
  if (idx < 1) {
    b_iv[1] = 0;
  } else {
    b_iv[1] = idx;
  }
  b_st.site = &kd_emlrtRSI;
  indexShapeCheck(&b_st, 65536, b_iv);
}

/* End of code generation (find.c) */
