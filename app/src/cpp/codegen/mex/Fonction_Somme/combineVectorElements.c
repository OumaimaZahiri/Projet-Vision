/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * combineVectorElements.c
 *
 * Code generation for function 'combineVectorElements'
 *
 */

/* Include files */
#include "combineVectorElements.h"
#include "Fonction_Somme_data.h"
#include "Fonction_Somme_types.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"

/* Function Definitions */
real_T combineVectorElements(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T y;
  int32_T ib;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &rd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    b_st.site = &sd_emlrtRSI;
    c_st.site = &td_emlrtRSI;
    if (x->size[0] < 4096) {
      d_st.site = &ud_emlrtRSI;
      y = e_sumColumnB(&d_st, x, x->size[0]);
    } else {
      int32_T inb;
      int32_T nfb;
      int32_T nleft;
      nfb = (int32_T)((uint32_T)x->size[0] >> 12);
      inb = nfb << 12;
      nleft = x->size[0] - inb;
      y = c_sumColumnB4(x, 1);
      for (ib = 2; ib <= nfb; ib++) {
        y += c_sumColumnB4(x, ((ib - 1) << 12) + 1);
      }
      if (nleft > 0) {
        d_st.site = &vd_emlrtRSI;
        y += f_sumColumnB(&d_st, x, nleft, inb + 1);
      }
    }
  }
  return y;
}

/* End of code generation (combineVectorElements.c) */
