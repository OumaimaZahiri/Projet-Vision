/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * chcenters.c
 *
 * Code generation for function 'chcenters'
 *
 */

/* Include files */
#include "chcenters.h"
#include "Fonction_Somme_emxutil.h"
#include "Fonction_Somme_rtwutil.h"
#include "Fonction_Somme_types.h"
#include "imhmax.h"
#include "imregionalmax.h"
#include "medfilt2.h"
#include "regionprops.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Declarations */
static double rt_hypotd_snf(double u0, double u1);

/* Function Definitions */
static double rt_hypotd_snf(double u0, double u1)
{
  double a;
  double b;
  double y;
  a = fabs(u0);
  b = fabs(u1);
  if (a < b) {
    a /= b;
    y = b * sqrt(a * a + 1.0);
  } else if (a > b) {
    b /= a;
    y = a * sqrt(b * b + 1.0);
  } else if (rtIsNaN(b)) {
    y = rtNaN;
  } else {
    y = a * 1.4142135623730951;
  }
  return y;
}

void chcenters(const creal_T varargin_1[374400], emxArray_real_T *centers,
               emxArray_real_T *metric)
{
  static double Hd[374400];
  static double accumMatrixRe[374400];
  static double b_Hd[374400];
  static boolean_T bw[374400];
  emxArray_int32_T *iidx;
  emxArray_real_T *b_centers;
  emxArray_real_T *b_metric;
  emxArray_real_T *b_x;
  emxArray_real_T *c_x;
  emxArray_real_T *x;
  emxArray_struct_T *s;
  struct_T *s_data;
  double *b_metric_data;
  double *centers_data;
  double *metric_data;
  double *x_data;
  int b_i;
  int i;
  int i1;
  int idx;
  int j;
  int k;
  int nrows;
  int *iidx_data;
  boolean_T exitg1;
  boolean_T flat;
  centers->size[0] = 0;
  centers->size[1] = 0;
  metric->size[0] = 0;
  metric->size[1] = 0;
  for (k = 0; k < 374400; k++) {
    accumMatrixRe[k] = rt_hypotd_snf(varargin_1[k].re, varargin_1[k].im);
    bw[k] = (accumMatrixRe[k] == accumMatrixRe[0]);
  }
  flat = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 374400)) {
    if (!bw[k]) {
      flat = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!flat) {
    medfilt2(accumMatrixRe, Hd);
    memcpy(&b_Hd[0], &Hd[0], 374400U * sizeof(double));
    imhmax(b_Hd, Hd);
    imregionalmax(Hd, bw);
    emxInit_struct_T(&s);
    regionprops(bw, accumMatrixRe, s);
    s_data = s->data;
    if (s->size[0] != 0) {
      i = centers->size[0] * centers->size[1];
      centers->size[0] = s->size[0];
      centers->size[1] = 2;
      emxEnsureCapacity_real_T(centers, i);
      centers_data = centers->data;
      i = s->size[0];
      for (idx = 0; idx < i; idx++) {
        centers_data[idx] = s_data[idx].WeightedCentroid[0];
        centers_data[idx + centers->size[0]] = s_data[idx].WeightedCentroid[1];
      }
      i = centers->size[0] - 1;
      i1 = centers->size[0];
      emxInit_real_T(&x, 2);
      for (idx = 0; idx < i1; idx++) {
        k = i - idx;
        if (rtIsNaN(centers_data[k]) ||
            rtIsNaN(centers_data[k + centers->size[0]])) {
          j = x->size[0] * x->size[1];
          x->size[0] = centers->size[0];
          x->size[1] = 2;
          emxEnsureCapacity_real_T(x, j);
          metric_data = x->data;
          nrows = centers->size[0] * 2;
          for (j = 0; j < nrows; j++) {
            metric_data[j] = centers_data[j];
          }
          nrows = centers->size[0] - 1;
          for (j = 0; j < 2; j++) {
            for (b_i = k + 1; b_i <= nrows; b_i++) {
              metric_data[(b_i + x->size[0] * j) - 1] =
                  metric_data[b_i + x->size[0] * j];
            }
          }
          if (x->size[0] - 1 < 1) {
            nrows = 0;
          } else {
            nrows = centers->size[0] - 1;
          }
          for (j = 0; j < 2; j++) {
            for (k = 0; k < nrows; k++) {
              metric_data[k + nrows * j] = metric_data[k + x->size[0] * j];
            }
          }
          j = x->size[0] * x->size[1];
          x->size[0] = nrows;
          x->size[1] = 2;
          emxEnsureCapacity_real_T(x, j);
          metric_data = x->data;
          j = centers->size[0] * centers->size[1];
          centers->size[0] = nrows;
          centers->size[1] = 2;
          emxEnsureCapacity_real_T(centers, j);
          centers_data = centers->data;
          nrows <<= 1;
          for (j = 0; j < nrows; j++) {
            centers_data[j] = metric_data[j];
          }
        }
      }
      emxFree_real_T(&x);
      if (centers->size[0] != 0) {
        emxInit_real_T(&b_x, 1);
        i = b_x->size[0];
        b_x->size[0] = centers->size[0];
        emxEnsureCapacity_real_T(b_x, i);
        metric_data = b_x->data;
        nrows = centers->size[0];
        for (i = 0; i < nrows; i++) {
          metric_data[i] = centers_data[i + centers->size[0]];
        }
        nrows = centers->size[0];
        for (k = 0; k < nrows; k++) {
          metric_data[k] = rt_roundd_snf(metric_data[k]);
        }
        emxInit_real_T(&c_x, 1);
        i = c_x->size[0];
        c_x->size[0] = centers->size[0];
        emxEnsureCapacity_real_T(c_x, i);
        x_data = c_x->data;
        nrows = centers->size[0];
        for (i = 0; i < nrows; i++) {
          x_data[i] = centers_data[i];
        }
        nrows = centers->size[0];
        for (k = 0; k < nrows; k++) {
          x_data[k] = rt_roundd_snf(x_data[k]);
        }
        emxInit_real_T(&b_metric, 1);
        i = b_metric->size[0];
        b_metric->size[0] = b_x->size[0];
        emxEnsureCapacity_real_T(b_metric, i);
        b_metric_data = b_metric->data;
        nrows = b_x->size[0];
        for (i = 0; i < nrows; i++) {
          b_metric_data[i] =
              Hd[((int)metric_data[i] + 416 * ((int)x_data[i] - 1)) - 1];
        }
        emxFree_real_T(&c_x);
        i = metric->size[0] * metric->size[1];
        metric->size[0] = b_x->size[0];
        metric->size[1] = 1;
        emxEnsureCapacity_real_T(metric, i);
        metric_data = metric->data;
        nrows = b_x->size[0];
        emxFree_real_T(&b_x);
        for (i = 0; i < nrows; i++) {
          metric_data[i] = b_metric_data[i];
        }
        emxFree_real_T(&b_metric);
        emxInit_int32_T(&iidx, 2);
        b_sort(metric, iidx);
        iidx_data = iidx->data;
        emxInit_real_T(&b_centers, 2);
        i = b_centers->size[0] * b_centers->size[1];
        b_centers->size[0] = iidx->size[0];
        b_centers->size[1] = 2;
        emxEnsureCapacity_real_T(b_centers, i);
        metric_data = b_centers->data;
        nrows = iidx->size[0];
        for (i = 0; i < 2; i++) {
          for (i1 = 0; i1 < nrows; i1++) {
            metric_data[i1 + b_centers->size[0] * i] =
                centers_data[(iidx_data[i1] + centers->size[0] * i) - 1];
          }
        }
        emxFree_int32_T(&iidx);
        i = centers->size[0] * centers->size[1];
        centers->size[0] = b_centers->size[0];
        centers->size[1] = 2;
        emxEnsureCapacity_real_T(centers, i);
        centers_data = centers->data;
        nrows = b_centers->size[0] * 2;
        for (i = 0; i < nrows; i++) {
          centers_data[i] = metric_data[i];
        }
        emxFree_real_T(&b_centers);
      }
    }
    emxFree_struct_T(&s);
  }
}

/* End of code generation (chcenters.c) */
