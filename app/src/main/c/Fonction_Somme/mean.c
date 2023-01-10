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
#include "Fonction_Somme_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"

/* Function Definitions */
double b_mean(const emxArray_real_T *x)
{
  const double *x_data;
  double bsum;
  double y;
  int counts;
  int firstBlockLength;
  int hi;
  int ib;
  int k;
  int lastBlockLength;
  int nblocks;
  int xoffset;
  x_data = x->data;
  if (x->size[0] == 0) {
    y = 0.0;
    counts = 0;
  } else {
    if (x->size[0] <= 1024) {
      firstBlockLength = x->size[0];
      lastBlockLength = 0;
      nblocks = 1;
    } else {
      firstBlockLength = 1024;
      nblocks = (int)((unsigned int)x->size[0] >> 10);
      lastBlockLength = x->size[0] - (nblocks << 10);
      if (lastBlockLength > 0) {
        nblocks++;
      } else {
        lastBlockLength = 1024;
      }
    }
    if (rtIsNaN(x_data[0])) {
      y = 0.0;
      counts = 0;
    } else {
      y = x_data[0];
      counts = 1;
    }
    for (k = 2; k <= firstBlockLength; k++) {
      bsum = x_data[k - 1];
      if (!rtIsNaN(bsum)) {
        y += bsum;
        counts++;
      }
    }
    for (ib = 2; ib <= nblocks; ib++) {
      firstBlockLength = (ib - 1) << 10;
      if (rtIsNaN(x_data[firstBlockLength])) {
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
        xoffset = (firstBlockLength + k) - 1;
        if (!rtIsNaN(x_data[xoffset])) {
          bsum += x_data[xoffset];
          counts++;
        }
      }
      y += bsum;
    }
  }
  y /= (double)counts;
  return y;
}

void mean(const emxArray_real_T *x, double y[2])
{
  const double *x_data;
  double bsum;
  int firstBlockLength;
  int hi;
  int ib;
  int k;
  int lastBlockLength;
  int nblocks;
  int xblockoffset;
  int xi;
  int xpageoffset;
  x_data = x->data;
  if (x->size[0] == 0) {
    y[0] = 0.0;
    y[1] = 0.0;
  } else {
    if (x->size[0] <= 1024) {
      firstBlockLength = x->size[0];
      lastBlockLength = 0;
      nblocks = 1;
    } else {
      firstBlockLength = 1024;
      nblocks = (int)((unsigned int)x->size[0] >> 10);
      lastBlockLength = x->size[0] - (nblocks << 10);
      if (lastBlockLength > 0) {
        nblocks++;
      } else {
        lastBlockLength = 1024;
      }
    }
    for (xi = 0; xi < 2; xi++) {
      xpageoffset = xi * x->size[0];
      y[xi] = x_data[xpageoffset];
      for (k = 2; k <= firstBlockLength; k++) {
        y[xi] += x_data[(xpageoffset + k) - 1];
      }
      for (ib = 2; ib <= nblocks; ib++) {
        xblockoffset = xpageoffset + ((ib - 1) << 10);
        bsum = x_data[xblockoffset];
        if (ib == nblocks) {
          hi = lastBlockLength;
        } else {
          hi = 1024;
        }
        for (k = 2; k <= hi; k++) {
          bsum += x_data[(xblockoffset + k) - 1];
        }
        y[xi] += bsum;
      }
    }
  }
  y[0] /= (double)x->size[0];
  y[1] /= (double)x->size[0];
}

/* End of code generation (mean.c) */
