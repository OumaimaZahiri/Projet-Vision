/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mean.c
 *
 * Code generation for function 'mean'
 *
 */

/* Include files */
#include "mean.h"
#include "Fonction_Somme_data.h"
#include "Fonction_Somme_types.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo qd_emlrtRSI = {
    49,     /* lineNo */
    "mean", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m" /* pathName
                                                                         */
};

/* Function Definitions */
real_T b_mean(const emxArray_real_T *x)
{
  const real_T *x_data;
  real_T y;
  int32_T counts;
  int32_T ib;
  int32_T k;
  x_data = x->data;
  if (x->size[0] == 0) {
    y = 0.0;
    counts = 0;
  } else {
    real_T bsum;
    int32_T firstBlockLength;
    int32_T lastBlockLength;
    int32_T nblocks;
    if (x->size[0] <= 1024) {
      firstBlockLength = x->size[0];
      lastBlockLength = 0;
      nblocks = 1;
    } else {
      firstBlockLength = 1024;
      nblocks = (int32_T)((uint32_T)x->size[0] >> 10);
      lastBlockLength = x->size[0] - (nblocks << 10);
      if (lastBlockLength > 0) {
        nblocks++;
      } else {
        lastBlockLength = 1024;
      }
    }
    if (muDoubleScalarIsNaN(x_data[0])) {
      y = 0.0;
      counts = 0;
    } else {
      y = x_data[0];
      counts = 1;
    }
    for (k = 2; k <= firstBlockLength; k++) {
      bsum = x_data[k - 1];
      if (!muDoubleScalarIsNaN(bsum)) {
        y += bsum;
        counts++;
      }
    }
    for (ib = 2; ib <= nblocks; ib++) {
      int32_T hi;
      firstBlockLength = (ib - 1) << 10;
      if (muDoubleScalarIsNaN(x_data[firstBlockLength])) {
        bsum = 0.0;
      } else {
        bsum = x_data[firstBlockLength];
        counts++;
      }
      if (ib == nblocks) {
        hi = lastBlockLength;
      } else {
        hi = 1024;
      }
      for (k = 2; k <= hi; k++) {
        int32_T xoffset;
        xoffset = (firstBlockLength + k) - 1;
        if (!muDoubleScalarIsNaN(x_data[xoffset])) {
          bsum += x_data[xoffset];
          counts++;
        }
      }
      y += bsum;
    }
  }
  y /= (real_T)counts;
  return y;
}

void mean(const emlrtStack *sp, const emxArray_real_T *x, real_T y[2])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T col;
  int32_T ib;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  st.site = &qd_emlrtRSI;
  b_st.site = &rd_emlrtRSI;
  if (x->size[0] == 0) {
    y[0] = 0.0;
    y[1] = 0.0;
  } else {
    c_st.site = &sd_emlrtRSI;
    d_st.site = &td_emlrtRSI;
    if (x->size[0] < 4096) {
      e_st.site = &ud_emlrtRSI;
      y[0] = sumColumnB(&e_st, x, 1, x->size[0]);
      e_st.site = &ud_emlrtRSI;
      y[1] = sumColumnB(&e_st, x, 2, x->size[0]);
    } else {
      int32_T inb;
      int32_T nfb;
      int32_T nleft;
      nfb = (int32_T)((uint32_T)x->size[0] >> 12);
      inb = nfb << 12;
      nleft = x->size[0] - inb;
      for (col = 0; col < 2; col++) {
        real_T s;
        s = sumColumnB4(x, col + 1, 1);
        for (ib = 2; ib <= nfb; ib++) {
          s += sumColumnB4(x, col + 1, ((ib - 1) << 12) + 1);
        }
        if (nleft > 0) {
          e_st.site = &vd_emlrtRSI;
          s += b_sumColumnB(&e_st, x, col + 1, nleft, inb + 1);
        }
        y[col] = s;
      }
    }
  }
  y[0] /= (real_T)x->size[0];
  y[1] /= (real_T)x->size[0];
}

/* End of code generation (mean.c) */
