/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * multithresh.c
 *
 * Code generation for function 'multithresh'
 *
 */

/* Include files */
#include "multithresh.h"
#include "Fonction_Somme_emxutil.h"
#include "Fonction_Somme_rtwutil.h"
#include "Fonction_Somme_types.h"
#include "find.h"
#include "imhist.h"
#include "mean.h"
#include "minOrMax.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "unique.h"
#include "libmwgrayto8.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void multithresh(const unsigned char varargin_1[1123200],
                 unsigned char thresh[2])
{
  static double allPixC[65536];
  static double b_c[65536];
  static double mu_0_t[65536];
  static double mu_1_t[65536];
  static double omega0[65536];
  static double omega1[65536];
  static float A[1123200];
  static unsigned char Auint8[1123200];
  emxArray_boolean_T *b_x;
  emxArray_int16_T *x;
  emxArray_int32_T *ii;
  emxArray_int32_T *jj;
  emxArray_real_T *b_ii;
  emxArray_uint8_T *b;
  emxArray_uint8_T *threshL;
  emxArray_uint8_T *threshout;
  emxArray_uint8_T *uniqueVals_d;
  double c[256];
  double counts[256];
  double omega[256];
  double dv[2];
  double d;
  double d1;
  double d2;
  double d3;
  double d4;
  double maxval;
  double *b_ii_data;
  int b_exponent;
  int exponent;
  int i;
  int ibtile;
  int k;
  int omega1_tmp;
  int q;
  unsigned int qY;
  int y_tmp;
  int *ii_data;
  int *jj_data;
  short *x_data;
  unsigned char threshL_data[255];
  unsigned char minA;
  unsigned char threshCandidate;
  unsigned char u;
  unsigned char *b_threshL_data;
  unsigned char *threshout_data;
  unsigned char *uniqueVals_d_data;
  boolean_T b_omega0[65536];
  boolean_T exitg1;
  boolean_T y;
  boolean_T *b_x_data;
  minA = varargin_1[0];
  threshCandidate = varargin_1[0];
  for (k = 0; k < 1123199; k++) {
    u = varargin_1[k + 1];
    if (u < minA) {
      minA = u;
    } else if (u > threshCandidate) {
      threshCandidate = u;
    }
  }
  emxInit_uint8_T(&threshout, 2);
  if (minA != threshCandidate) {
    y_tmp = threshCandidate - minA;
    for (i = 0; i < 1123200; i++) {
      A[i] = (float)(varargin_1[i] - minA) / (float)y_tmp;
    }
    grayto8_real32(&A[0], &Auint8[0], 1.1232E+6);
    imhist(Auint8, counts);
    for (ibtile = 0; ibtile < 256; ibtile++) {
      maxval = counts[ibtile] / 1.1232E+6;
      counts[ibtile] = maxval;
      omega[ibtile] = maxval;
    }
    for (k = 0; k < 255; k++) {
      omega[k + 1] += omega[k];
    }
    for (i = 0; i < 256; i++) {
      counts[i] *= (double)i + 1.0;
    }
    for (k = 0; k < 255; k++) {
      counts[k + 1] += counts[k];
    }
    for (q = 0; q < 256; q++) {
      ibtile = q << 8;
      memcpy(&omega0[ibtile], &omega[0], 256U * sizeof(double));
      c[q] = counts[255] - counts[q] / omega[q];
    }
    for (q = 0; q < 256; q++) {
      ibtile = q << 8;
      for (k = 0; k < 256; k++) {
        mu_0_t[ibtile + k] = c[k];
        omega1_tmp = k + (q << 8);
        omega1[omega1_tmp] = omega[q] - omega[k];
        b_c[omega1_tmp] = counts[q] - counts[k];
      }
    }
    for (i = 0; i < 65536; i++) {
      b_c[i] /= omega1[i];
    }
    for (k = 0; k < 256; k++) {
      for (omega1_tmp = 0; omega1_tmp < 256; omega1_tmp++) {
        ibtile = omega1_tmp + (k << 8);
        mu_1_t[ibtile] = counts[255] - b_c[ibtile];
        b_c[ibtile] = (((double)omega1_tmp + 1.0) - 1.0) + 1.0;
        allPixC[ibtile] = (((double)k + 1.0) - 1.0) + 1.0;
      }
    }
    for (k = 0; k < 65536; k++) {
      if ((short)b_c[k] >= (short)allPixC[k]) {
        omega0[k] = rtNaN;
        omega1[k] = rtNaN;
      }
      maxval = mu_0_t[k];
      d = maxval * maxval;
      allPixC[k] = d;
      d1 = omega0[k];
      d2 = omega1[k];
      d3 = 1.0 - (d1 + d2);
      if (d3 <= 0.0) {
        d3 = rtNaN;
      }
      d4 = mu_1_t[k];
      maxval = d1 * maxval + d2 * d4;
      mu_0_t[k] = maxval;
      d1 = (d1 * d + d2 * (d4 * d4)) + maxval * maxval / d3;
      omega0[k] = d1;
    }
    maxval = maximum(omega0);
    if ((!rtIsInf(maxval)) && (!rtIsNaN(maxval))) {
      for (i = 0; i < 65536; i++) {
        b_omega0[i] = (omega0[i] == maxval);
      }
      emxInit_int32_T(&ii, 1);
      emxInit_int32_T(&jj, 1);
      eml_find(b_omega0, ii, jj);
      jj_data = jj->data;
      ii_data = ii->data;
      emxInit_real_T(&b_ii, 2);
      i = b_ii->size[0] * b_ii->size[1];
      b_ii->size[0] = ii->size[0];
      b_ii->size[1] = 2;
      emxEnsureCapacity_real_T(b_ii, i);
      b_ii_data = b_ii->data;
      omega1_tmp = ii->size[0];
      for (i = 0; i < omega1_tmp; i++) {
        b_ii_data[i] = ii_data[i];
      }
      emxFree_int32_T(&ii);
      omega1_tmp = jj->size[0];
      for (i = 0; i < omega1_tmp; i++) {
        b_ii_data[i + b_ii->size[0]] = jj_data[i];
      }
      emxFree_int32_T(&jj);
      mean(b_ii, dv);
      emxFree_real_T(&b_ii);
      i = threshout->size[0] * threshout->size[1];
      threshout->size[0] = 1;
      threshout->size[1] = 2;
      emxEnsureCapacity_uint8_T(threshout, i);
      threshout_data = threshout->data;
      maxval =
          rt_roundd_snf((double)minA + (dv[0] - 1.0) / 255.0 * (double)y_tmp);
      if (maxval < 256.0) {
        if (maxval >= 0.0) {
          u = (unsigned char)maxval;
        } else {
          u = 0U;
        }
      } else if (maxval >= 256.0) {
        u = MAX_uint8_T;
      } else {
        u = 0U;
      }
      threshout_data[0] = u;
      maxval =
          rt_roundd_snf((double)minA + (dv[1] - 1.0) / 255.0 * (double)y_tmp);
      if (maxval < 256.0) {
        if (maxval >= 0.0) {
          u = (unsigned char)maxval;
        } else {
          u = 0U;
        }
      } else if (maxval >= 256.0) {
        u = MAX_uint8_T;
      } else {
        u = 0U;
      }
      threshout_data[1] = u;
    } else {
      emxInit_uint8_T(&b, 1);
      unique_vector(varargin_1, b);
      b_threshL_data = b->data;
      emxInit_uint8_T(&uniqueVals_d, 2);
      i = uniqueVals_d->size[0] * uniqueVals_d->size[1];
      uniqueVals_d->size[0] = 1;
      uniqueVals_d->size[1] = b->size[0];
      emxEnsureCapacity_uint8_T(uniqueVals_d, i);
      uniqueVals_d_data = uniqueVals_d->data;
      omega1_tmp = b->size[0];
      for (i = 0; i < omega1_tmp; i++) {
        uniqueVals_d_data[i] = b_threshL_data[i];
      }
      emxInit_uint8_T(&threshL, 2);
      emxInit_int16_T(&x);
      emxInit_boolean_T(&b_x, 1);
      if (uniqueVals_d->size[1] < 1) {
        i = threshout->size[0] * threshout->size[1];
        threshout->size[0] = 1;
        threshout->size[1] = 2;
        emxEnsureCapacity_uint8_T(threshout, i);
        threshout_data = threshout->data;
        threshout_data[0] = 1U;
        threshout_data[1] = 2U;
      } else if (2 - uniqueVals_d->size[1] > 0) {
        if (uniqueVals_d_data[0] > 1) {
          ibtile = uniqueVals_d_data[0];
          qY = (unsigned int)ibtile - 1U;
          if ((unsigned int)ibtile - 1U > (unsigned int)ibtile) {
            qY = 0U;
          }
          if (2.0 - (double)uniqueVals_d->size[1] >= 0.0) {
            u = (unsigned char)(2.0 - (double)uniqueVals_d->size[1]);
          } else {
            u = 0U;
          }
          if (2 - uniqueVals_d->size[1] > (int)qY) {
            i = 0;
          } else {
            i = u;
          }
          ibtile = (i >= 1);
          i = threshL->size[0] * threshL->size[1];
          threshL->size[0] = 1;
          threshL->size[1] = ibtile + uniqueVals_d->size[1];
          emxEnsureCapacity_uint8_T(threshL, i);
          b_threshL_data = threshL->data;
          for (i = 0; i < ibtile; i++) {
            b_threshL_data[0] = 1U;
          }
          omega1_tmp = uniqueVals_d->size[1];
          for (i = 0; i < omega1_tmp; i++) {
            b_threshL_data[i + ibtile] = uniqueVals_d_data[i];
          }
        } else {
          i = threshL->size[0] * threshL->size[1];
          threshL->size[0] = 1;
          threshL->size[1] = uniqueVals_d->size[1];
          emxEnsureCapacity_uint8_T(threshL, i);
          b_threshL_data = threshL->data;
          omega1_tmp = uniqueVals_d->size[1];
          for (i = 0; i < omega1_tmp; i++) {
            b_threshL_data[i] = uniqueVals_d_data[i];
          }
        }
        if (2 - threshL->size[1] > 0) {
          i = threshout->size[0] * threshout->size[1];
          threshout->size[0] = 1;
          threshout->size[1] = 2;
          emxEnsureCapacity_uint8_T(threshout, i);
          threshout_data = threshout->data;
          omega1_tmp = threshL->size[1];
          for (i = 0; i < omega1_tmp; i++) {
            threshout_data[i] = b_threshL_data[i];
          }
          omega1_tmp = 2 - threshL->size[1];
          for (i = 0; i < omega1_tmp; i++) {
            threshout_data[threshL->size[1]] = 0U;
          }
          threshCandidate = uniqueVals_d_data[0];
          q = 1;
          while (q <= 2 - threshL->size[1]) {
            i = (int)(threshCandidate + 1U);
            if (threshCandidate + 1U > 255U) {
              i = 255;
            }
            threshCandidate = (unsigned char)i;
            frexp((unsigned char)i, &exponent);
            maxval = ldexp(1.0, exponent - 53);
            k = x->size[0];
            x->size[0] = uniqueVals_d->size[1];
            emxEnsureCapacity_int16_T(x, k);
            x_data = x->data;
            omega1_tmp = uniqueVals_d->size[1];
            for (k = 0; k < omega1_tmp; k++) {
              x_data[k] = (short)(uniqueVals_d_data[k] - (unsigned char)i);
            }
            ibtile = x->size[0];
            k = b->size[0];
            b->size[0] = x->size[0];
            emxEnsureCapacity_uint8_T(b, k);
            b_threshL_data = b->data;
            for (k = 0; k < ibtile; k++) {
              b_threshL_data[k] = (unsigned char)fabs((double)x_data[k]);
            }
            k = b_x->size[0];
            b_x->size[0] = b->size[0];
            emxEnsureCapacity_boolean_T(b_x, k);
            b_x_data = b_x->data;
            omega1_tmp = b->size[0];
            for (k = 0; k < omega1_tmp; k++) {
              b_x_data[k] = (b_threshL_data[k] < maxval);
            }
            y = false;
            ibtile = 1;
            exitg1 = false;
            while ((!exitg1) && (ibtile <= b_x->size[0])) {
              if (b_x_data[ibtile - 1]) {
                y = true;
                exitg1 = true;
              } else {
                ibtile++;
              }
            }
            if (!y) {
              threshout_data[threshL->size[1]] = (unsigned char)i;
              q = 2;
            }
          }
          sort(threshout);
        } else {
          i = threshout->size[0] * threshout->size[1];
          threshout->size[0] = 1;
          threshout->size[1] = threshL->size[1];
          emxEnsureCapacity_uint8_T(threshout, i);
          threshout_data = threshout->data;
          omega1_tmp = threshL->size[1];
          for (i = 0; i < omega1_tmp; i++) {
            threshout_data[i] = b_threshL_data[i];
          }
        }
      } else {
        i = threshout->size[0] * threshout->size[1];
        threshout->size[0] = 1;
        threshout->size[1] = uniqueVals_d->size[1];
        emxEnsureCapacity_uint8_T(threshout, i);
        threshout_data = threshout->data;
        omega1_tmp = uniqueVals_d->size[1];
        for (i = 0; i < omega1_tmp; i++) {
          threshout_data[i] = uniqueVals_d_data[i];
        }
      }
      unique_vector(varargin_1, b);
      b_threshL_data = b->data;
      i = uniqueVals_d->size[0] * uniqueVals_d->size[1];
      uniqueVals_d->size[0] = 1;
      uniqueVals_d->size[1] = b->size[0];
      emxEnsureCapacity_uint8_T(uniqueVals_d, i);
      uniqueVals_d_data = uniqueVals_d->data;
      omega1_tmp = b->size[0];
      for (i = 0; i < omega1_tmp; i++) {
        uniqueVals_d_data[i] = b_threshL_data[i];
      }
      if (uniqueVals_d->size[1] < 1) {
        uniqueVals_d->size[1] = 0;
      }
      if (uniqueVals_d->size[1] <= 2) {
        if (uniqueVals_d->size[1] == 0) {
          i = threshout->size[0] * threshout->size[1];
          threshout->size[0] = 1;
          threshout->size[1] = 2;
          emxEnsureCapacity_uint8_T(threshout, i);
          threshout_data = threshout->data;
          threshout_data[0] = 1U;
          threshout_data[1] = 2U;
        } else if (2 - uniqueVals_d->size[1] > 0) {
          if (uniqueVals_d_data[0] > 1) {
            ibtile = uniqueVals_d_data[0];
            qY = (unsigned int)ibtile - 1U;
            if ((unsigned int)ibtile - 1U > (unsigned int)ibtile) {
              qY = 0U;
            }
            if (2 - uniqueVals_d->size[1] > (int)qY) {
              i = 0;
            } else {
              i = (unsigned char)(2 - uniqueVals_d->size[1]);
            }
            ibtile = (i >= 1);
            i = threshL->size[0] * threshL->size[1];
            threshL->size[0] = 1;
            threshL->size[1] = ibtile + uniqueVals_d->size[1];
            emxEnsureCapacity_uint8_T(threshL, i);
            b_threshL_data = threshL->data;
            for (i = 0; i < ibtile; i++) {
              b_threshL_data[0] = 1U;
            }
            omega1_tmp = uniqueVals_d->size[1];
            for (i = 0; i < omega1_tmp; i++) {
              b_threshL_data[i + ibtile] = uniqueVals_d_data[i];
            }
          } else {
            i = threshL->size[0] * threshL->size[1];
            threshL->size[0] = 1;
            threshL->size[1] = uniqueVals_d->size[1];
            emxEnsureCapacity_uint8_T(threshL, i);
            b_threshL_data = threshL->data;
            omega1_tmp = uniqueVals_d->size[1];
            for (i = 0; i < omega1_tmp; i++) {
              b_threshL_data[i] = uniqueVals_d_data[i];
            }
          }
          if (2 - threshL->size[1] > 0) {
            i = threshout->size[0] * threshout->size[1];
            threshout->size[0] = 1;
            threshout->size[1] = 2;
            emxEnsureCapacity_uint8_T(threshout, i);
            threshout_data = threshout->data;
            omega1_tmp = threshL->size[1];
            for (i = 0; i < omega1_tmp; i++) {
              threshout_data[i] = b_threshL_data[i];
            }
            omega1_tmp = 2 - threshL->size[1];
            for (i = 0; i < omega1_tmp; i++) {
              threshout_data[threshL->size[1]] = 0U;
            }
            threshCandidate = uniqueVals_d_data[0];
            q = 1;
            while (q <= 2 - threshL->size[1]) {
              i = (int)(threshCandidate + 1U);
              if (threshCandidate + 1U > 255U) {
                i = 255;
              }
              threshCandidate = (unsigned char)i;
              frexp((unsigned char)i, &b_exponent);
              maxval = ldexp(1.0, b_exponent - 53);
              k = x->size[0];
              x->size[0] = uniqueVals_d->size[1];
              emxEnsureCapacity_int16_T(x, k);
              x_data = x->data;
              omega1_tmp = uniqueVals_d->size[1];
              for (k = 0; k < omega1_tmp; k++) {
                x_data[k] = (short)(uniqueVals_d_data[k] - (unsigned char)i);
              }
              ibtile = x->size[0];
              k = b->size[0];
              b->size[0] = x->size[0];
              emxEnsureCapacity_uint8_T(b, k);
              b_threshL_data = b->data;
              for (k = 0; k < ibtile; k++) {
                b_threshL_data[k] = (unsigned char)fabs((double)x_data[k]);
              }
              k = b_x->size[0];
              b_x->size[0] = b->size[0];
              emxEnsureCapacity_boolean_T(b_x, k);
              b_x_data = b_x->data;
              omega1_tmp = b->size[0];
              for (k = 0; k < omega1_tmp; k++) {
                b_x_data[k] = (b_threshL_data[k] < maxval);
              }
              y = false;
              ibtile = 1;
              exitg1 = false;
              while ((!exitg1) && (ibtile <= b_x->size[0])) {
                if (b_x_data[ibtile - 1]) {
                  y = true;
                  exitg1 = true;
                } else {
                  ibtile++;
                }
              }
              if (!y) {
                threshout_data[threshL->size[1]] = (unsigned char)i;
                q = 2;
              }
            }
            sort(threshout);
            threshout_data = threshout->data;
          } else {
            i = threshout->size[0] * threshout->size[1];
            threshout->size[0] = 1;
            threshout->size[1] = threshL->size[1];
            emxEnsureCapacity_uint8_T(threshout, i);
            threshout_data = threshout->data;
            omega1_tmp = threshL->size[1];
            for (i = 0; i < omega1_tmp; i++) {
              threshout_data[i] = b_threshL_data[i];
            }
          }
        } else {
          i = threshout->size[0] * threshout->size[1];
          threshout->size[0] = 1;
          threshout->size[1] = uniqueVals_d->size[1];
          emxEnsureCapacity_uint8_T(threshout, i);
          threshout_data = threshout->data;
          omega1_tmp = uniqueVals_d->size[1];
          for (i = 0; i < omega1_tmp; i++) {
            threshout_data[i] = uniqueVals_d_data[i];
          }
        }
      } else {
        i = threshout->size[0] * threshout->size[1];
        threshout->size[0] = 1;
        emxEnsureCapacity_uint8_T(threshout, i);
        threshout_data = threshout->data;
        omega1_tmp = threshout->size[1] - 1;
        for (i = 0; i <= omega1_tmp; i++) {
          k = (int)rt_roundd_snf((double)minA + (double)threshout_data[i] /
                                                    255.0 * (double)y_tmp);
          if (k < 256) {
            if (k >= 0) {
              u = (unsigned char)k;
            } else {
              u = 0U;
            }
          } else {
            u = MAX_uint8_T;
          }
          threshout_data[i] = u;
        }
      }
      emxFree_boolean_T(&b_x);
      emxFree_int16_T(&x);
      emxFree_uint8_T(&b);
      emxFree_uint8_T(&uniqueVals_d);
      emxFree_uint8_T(&threshL);
    }
    thresh[0] = threshout_data[0];
    thresh[1] = threshout_data[1];
  } else {
    if (minA == threshCandidate) {
      if (minA > 1) {
        threshL_data[0] = 1U;
        threshL_data[1] = minA;
        i = threshout->size[0] * threshout->size[1];
        threshout->size[0] = 1;
        threshout->size[1] = 2;
        emxEnsureCapacity_uint8_T(threshout, i);
        threshout_data = threshout->data;
        for (i = 0; i < 2; i++) {
          threshout_data[i] = threshL_data[i];
        }
      } else {
        i = threshout->size[0] * threshout->size[1];
        threshout->size[0] = 1;
        threshout->size[1] = 2;
        emxEnsureCapacity_uint8_T(threshout, i);
        threshout_data = threshout->data;
        threshout_data[0] = minA;
        threshout_data[1] = 0U;
        threshCandidate = minA;
        do {
          i = (int)(threshCandidate + 1U);
          if (threshCandidate + 1U > 255U) {
            i = 255;
          }
          threshCandidate = (unsigned char)i;
          frexp((unsigned char)i, &exponent);
        } while (!!(fabs((double)(minA - (unsigned char)i)) <
                    ldexp(1.0, exponent - 53)));
        threshout_data[1] = (unsigned char)i;
        sort(threshout);
        threshout_data = threshout->data;
      }
    } else {
      i = threshout->size[0] * threshout->size[1];
      threshout->size[0] = 1;
      threshout->size[1] = 2;
      emxEnsureCapacity_uint8_T(threshout, i);
      threshout_data = threshout->data;
      threshout_data[0] = minA;
      threshout_data[1] = threshCandidate;
    }
    thresh[0] = threshout_data[0];
    thresh[1] = threshout_data[1];
  }
  emxFree_uint8_T(&threshout);
}

/* End of code generation (multithresh.c) */
