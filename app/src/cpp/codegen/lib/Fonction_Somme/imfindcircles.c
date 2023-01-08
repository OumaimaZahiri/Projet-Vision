/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imfindcircles.c
 *
 * Code generation for function 'imfindcircles'
 *
 */

/* Include files */
#include "imfindcircles.h"
#include "Fonction_Somme_emxutil.h"
#include "Fonction_Somme_rtwutil.h"
#include "Fonction_Somme_types.h"
#include "chaccum.h"
#include "chcenters.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Declarations */
static double rt_atan2d_snf(double u0, double u1);

/* Function Definitions */
static double rt_atan2d_snf(double u0, double u1)
{
  double y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    int i;
    int i1;
    if (u0 > 0.0) {
      i = 1;
    } else {
      i = -1;
    }
    if (u1 > 0.0) {
      i1 = 1;
    } else {
      i1 = -1;
    }
    y = atan2(i, i1);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }
  return y;
}

void imfindcircles(const boolean_T varargin_1[374400], emxArray_real_T *centers,
                   emxArray_real_T *r_estimated, emxArray_real_T *metric)
{
  static creal_T accumMatrix[374400];
  static float gradientImg[374400];
  emxArray_boolean_T *x;
  emxArray_creal_T *d_x;
  emxArray_int32_T *ii;
  emxArray_real_T *b_centers;
  emxArray_real_T *b_metric;
  emxArray_real_T *b_x;
  emxArray_real_T *c_x;
  emxArray_real_T *idx2Keep;
  creal_T *b_x_data;
  double *centers_data;
  double *idx2Keep_data;
  double *metric_data;
  double *r_estimated_data;
  int i;
  int k;
  int nx;
  int *ii_data;
  boolean_T exitg1;
  boolean_T y;
  boolean_T *x_data;
  centers->size[0] = 0;
  centers->size[1] = 0;
  r_estimated->size[0] = 0;
  r_estimated->size[1] = 0;
  metric->size[0] = 0;
  metric->size[1] = 0;
  chaccum(varargin_1, accumMatrix, gradientImg);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 374400)) {
    if (((accumMatrix[k].re == 0.0) && (accumMatrix[k].im == 0.0)) ||
        (rtIsNaN(accumMatrix[k].re) || rtIsNaN(accumMatrix[k].im))) {
      k++;
    } else {
      y = true;
      exitg1 = true;
    }
  }
  emxInit_real_T(&idx2Keep, 1);
  emxInit_boolean_T(&x, 2);
  emxInit_int32_T(&ii, 1);
  emxInit_real_T(&b_x, 1);
  emxInit_real_T(&c_x, 1);
  emxInit_creal_T(&d_x, 1);
  emxInit_real_T(&b_centers, 2);
  emxInit_real_T(&b_metric, 2);
  if (y) {
    chcenters(accumMatrix, centers, metric);
    metric_data = metric->data;
    centers_data = centers->data;
    if ((centers->size[0] != 0) && (centers->size[1] != 0)) {
      int idx;
      i = x->size[0] * x->size[1];
      x->size[0] = metric->size[0];
      x->size[1] = metric->size[1];
      emxEnsureCapacity_boolean_T(x, i);
      x_data = x->data;
      idx = metric->size[0] * metric->size[1];
      for (i = 0; i < idx; i++) {
        x_data[i] = (metric_data[i] >= 0.15000000000000002);
      }
      nx = x->size[0] * x->size[1];
      idx = 0;
      i = ii->size[0];
      ii->size[0] = nx;
      emxEnsureCapacity_int32_T(ii, i);
      ii_data = ii->data;
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k <= nx - 1)) {
        if (x_data[k]) {
          idx++;
          ii_data[idx - 1] = k + 1;
          if (idx >= nx) {
            exitg1 = true;
          } else {
            k++;
          }
        } else {
          k++;
        }
      }
      if (nx == 1) {
        if (idx == 0) {
          ii->size[0] = 0;
        }
      } else {
        i = ii->size[0];
        if (idx < 1) {
          ii->size[0] = 0;
        } else {
          ii->size[0] = idx;
        }
        emxEnsureCapacity_int32_T(ii, i);
        ii_data = ii->data;
      }
      i = idx2Keep->size[0];
      idx2Keep->size[0] = ii->size[0];
      emxEnsureCapacity_real_T(idx2Keep, i);
      idx2Keep_data = idx2Keep->data;
      idx = ii->size[0];
      for (i = 0; i < idx; i++) {
        idx2Keep_data[i] = ii_data[i];
      }
      k = centers->size[1];
      i = b_centers->size[0] * b_centers->size[1];
      b_centers->size[0] = idx2Keep->size[0];
      b_centers->size[1] = centers->size[1];
      emxEnsureCapacity_real_T(b_centers, i);
      r_estimated_data = b_centers->data;
      idx = idx2Keep->size[0];
      for (i = 0; i < k; i++) {
        for (nx = 0; nx < idx; nx++) {
          r_estimated_data[nx + b_centers->size[0] * i] =
              centers_data[((int)idx2Keep_data[nx] + centers->size[0] * i) - 1];
        }
      }
      i = centers->size[0] * centers->size[1];
      centers->size[0] = b_centers->size[0];
      centers->size[1] = b_centers->size[1];
      emxEnsureCapacity_real_T(centers, i);
      centers_data = centers->data;
      idx = b_centers->size[0] * b_centers->size[1];
      for (i = 0; i < idx; i++) {
        centers_data[i] = r_estimated_data[i];
      }
      k = metric->size[1];
      i = b_metric->size[0] * b_metric->size[1];
      b_metric->size[0] = idx2Keep->size[0];
      b_metric->size[1] = metric->size[1];
      emxEnsureCapacity_real_T(b_metric, i);
      r_estimated_data = b_metric->data;
      for (i = 0; i < k; i++) {
        idx = idx2Keep->size[0];
        for (nx = 0; nx < idx; nx++) {
          r_estimated_data[nx] = metric_data[(int)idx2Keep_data[nx] - 1];
        }
      }
      i = metric->size[0] * metric->size[1];
      metric->size[0] = b_metric->size[0];
      metric->size[1] = b_metric->size[1];
      emxEnsureCapacity_real_T(metric, i);
      metric_data = metric->data;
      idx = b_metric->size[0] * b_metric->size[1];
      for (i = 0; i < idx; i++) {
        metric_data[i] = r_estimated_data[i];
      }
      if (idx2Keep->size[0] == 0) {
        centers->size[0] = 0;
        centers->size[1] = 0;
        metric->size[0] = 0;
        metric->size[1] = 0;
      } else {
        i = b_x->size[0];
        b_x->size[0] = idx2Keep->size[0];
        emxEnsureCapacity_real_T(b_x, i);
        r_estimated_data = b_x->data;
        idx = idx2Keep->size[0];
        for (i = 0; i < idx; i++) {
          r_estimated_data[i] = centers_data[i + centers->size[0]];
        }
        nx = idx2Keep->size[0];
        for (k = 0; k < nx; k++) {
          r_estimated_data[k] = rt_roundd_snf(r_estimated_data[k]);
        }
        i = c_x->size[0];
        c_x->size[0] = idx2Keep->size[0];
        emxEnsureCapacity_real_T(c_x, i);
        metric_data = c_x->data;
        idx = idx2Keep->size[0];
        for (i = 0; i < idx; i++) {
          metric_data[i] = centers_data[i];
        }
        nx = idx2Keep->size[0];
        for (k = 0; k < nx; k++) {
          metric_data[k] = rt_roundd_snf(metric_data[k]);
        }
        i = ii->size[0];
        ii->size[0] = b_x->size[0];
        emxEnsureCapacity_int32_T(ii, i);
        ii_data = ii->data;
        idx = b_x->size[0];
        for (i = 0; i < idx; i++) {
          ii_data[i] =
              (int)r_estimated_data[i] + 416 * ((int)metric_data[i] - 1);
        }
        i = d_x->size[0];
        d_x->size[0] = b_x->size[0];
        emxEnsureCapacity_creal_T(d_x, i);
        b_x_data = d_x->data;
        idx = b_x->size[0];
        for (i = 0; i < idx; i++) {
          b_x_data[i] = accumMatrix[((int)r_estimated_data[i] +
                                     416 * ((int)metric_data[i] - 1)) -
                                    1];
        }
        nx = ii->size[0];
        i = idx2Keep->size[0];
        idx2Keep->size[0] = ii->size[0];
        emxEnsureCapacity_real_T(idx2Keep, i);
        idx2Keep_data = idx2Keep->data;
        for (k = 0; k < nx; k++) {
          idx2Keep_data[k] = rt_atan2d_snf(b_x_data[k].im, b_x_data[k].re);
        }
        idx = idx2Keep->size[0];
        for (i = 0; i < idx; i++) {
          idx2Keep_data[i] = (idx2Keep_data[i] + 3.1415926535897931) /
                                 6.2831853071795862 * 2.7080502011022096 +
                             2.3025850929940459;
        }
        nx = idx2Keep->size[0];
        for (k = 0; k < nx; k++) {
          idx2Keep_data[k] = exp(idx2Keep_data[k]);
        }
        i = r_estimated->size[0] * r_estimated->size[1];
        r_estimated->size[0] = idx2Keep->size[0];
        r_estimated->size[1] = 1;
        emxEnsureCapacity_real_T(r_estimated, i);
        r_estimated_data = r_estimated->data;
        idx = idx2Keep->size[0];
        for (i = 0; i < idx; i++) {
          r_estimated_data[i] = idx2Keep_data[i];
        }
      }
    }
  }
  emxFree_real_T(&b_metric);
  emxFree_real_T(&b_centers);
  emxFree_creal_T(&d_x);
  emxFree_real_T(&c_x);
  emxFree_real_T(&b_x);
  emxFree_int32_T(&ii);
  emxFree_boolean_T(&x);
  emxFree_real_T(&idx2Keep);
}

/* End of code generation (imfindcircles.c) */
