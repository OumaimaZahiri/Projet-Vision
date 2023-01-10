/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Fonction_Somme.c
 *
 * Code generation for function 'Fonction_Somme'
 *
 */

/* Include files */
#include "Fonction_Somme.h"
#include "Fonction_Somme_data.h"
#include "Fonction_Somme_emxutil.h"
#include "Fonction_Somme_initialize.h"
#include "Fonction_Somme_rtwutil.h"
#include "Fonction_Somme_types.h"
#include "combineVectorElements.h"
#include "imfindcircles.h"
#include "imresize.h"
#include "mean.h"
#include "multithresh.h"
#include "rgb2lab.h"
#include "libmwrgb2gray_tbb.h"
#include "libmwippreconstruct.h"
#include "libmwimregionalmax.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwordfilt2.h"
#include "libmwordfilt2.h"
#include "libmwrgb2gray_tbb.h"
#include "imregionalmax.h"
#include "imresize.h"
#include "imhist.h"
#include "multithresh.h"
#include "rt_defines.h"
#include "rtGetNaN.h"
#include "rtGetInf.h"
#include "libmwtbbhist.h"
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>
#include <math.h>

/* Function Definitions */
double Fonction_Somme(const unsigned char b_I[29630592])
{
  static unsigned char A[1123200];
  static unsigned char B[1123200];
  static unsigned char b_B[374400];
  static boolean_T c_B[374400];
  emxArray_real_T c_lab_fabric;
  emxArray_real_T *RadiusDeux;
  emxArray_real_T *RadiusJaunes;
  emxArray_real_T *RadiusRouges;
  emxArray_real_T *RadiusUn;
  emxArray_real_T *b_lab_fabric;
  emxArray_real_T *centers;
  emxArray_real_T *lab_fabric;
  emxArray_real_T *metric;
  emxArray_real_T *radii;
  emxArray_uint8_T *Ar;
  double C1;
  double C10;
  double C2;
  double C20;
  double C5;
  double C50;
  double Deux;
  double Jaunes;
  double Ma;
  double Mb;
  double R;
  double R2;
  double Rad;
  double Rouges;
  double Un;
  double b_x;
  double r;
  double x;
  double *RadiusDeux_data;
  double *RadiusJaunes_data;
  double *RadiusRouges_data;
  double *RadiusUn_data;
  double *b_lab_fabric_data;
  double *centers_data;
  double *lab_fabric_data;
  double *radii_data;
  unsigned int b_u;
  int b_u1;
  int colIdx1;
  int colIdx2;
  unsigned int d;
  int d_lab_fabric;
  int e_lab_fabric;
  int f_lab_fabric;
  int i;
  int i1;
  int i2;
  unsigned int ja;
  int k;
  unsigned int ro;
  int rowIdx1;
  int rowIdx2;
  unsigned char uv[3];
  unsigned char threshRGB[2];
  unsigned char u;
  unsigned char u1;
  unsigned char u2;
  unsigned char *Ar_data;
  if (!isInitialized_Fonction_Somme) {
    Fonction_Somme_initialize();
  }
  imresize(b_I, A);
  multithresh(A, threshRGB);
  uv[0] = 0U;
  uv[1] = threshRGB[1];
  uv[2] = MAX_uint8_T;
  u = threshRGB[0];
  u1 = threshRGB[1];
  for (rowIdx1 = 0; rowIdx1 < 1123200; rowIdx1++) {
    u2 = A[rowIdx1];
    B[rowIdx1] = uv[(u2 > u) + (u2 > u1)];
  }
  rgb2gray_tbb_uint8(&B[0], 374400.0, &b_B[0]);
  for (i = 0; i < 374400; i++) {
    c_B[i] = (b_B[i] > 252.45);
  }
  emxInit_real_T(&centers, 2);
  emxInit_real_T(&radii, 2);
  emxInit_real_T(&metric, 2);
  imfindcircles(c_B, centers, radii, metric);
  radii_data = radii->data;
  centers_data = centers->data;
  emxFree_real_T(&metric);
  Rouges = 0.0;
  if ((centers->size[0] == 0) || (centers->size[1] == 0)) {
    b_u1 = 0;
  } else {
    rowIdx1 = centers->size[0];
    b_u1 = centers->size[1];
    if (rowIdx1 >= b_u1) {
      b_u1 = rowIdx1;
    }
  }
  emxInit_real_T(&RadiusRouges, 1);
  i = RadiusRouges->size[0];
  RadiusRouges->size[0] = b_u1;
  emxEnsureCapacity_real_T(RadiusRouges, i);
  RadiusRouges_data = RadiusRouges->data;
  for (i = 0; i < b_u1; i++) {
    RadiusRouges_data[i] = 0.0;
  }
  ro = 1U;
  Jaunes = 0.0;
  if ((centers->size[0] == 0) || (centers->size[1] == 0)) {
    b_u1 = 0;
  } else {
    rowIdx1 = centers->size[0];
    b_u1 = centers->size[1];
    if (rowIdx1 >= b_u1) {
      b_u1 = rowIdx1;
    }
  }
  emxInit_real_T(&RadiusJaunes, 1);
  i = RadiusJaunes->size[0];
  RadiusJaunes->size[0] = b_u1;
  emxEnsureCapacity_real_T(RadiusJaunes, i);
  RadiusJaunes_data = RadiusJaunes->data;
  for (i = 0; i < b_u1; i++) {
    RadiusJaunes_data[i] = 0.0;
  }
  ja = 1U;
  Deux = 0.0;
  if ((centers->size[0] == 0) || (centers->size[1] == 0)) {
    b_u1 = 0;
  } else {
    rowIdx1 = centers->size[0];
    b_u1 = centers->size[1];
    if (rowIdx1 >= b_u1) {
      b_u1 = rowIdx1;
    }
  }
  emxInit_real_T(&RadiusDeux, 1);
  i = RadiusDeux->size[0];
  RadiusDeux->size[0] = b_u1;
  emxEnsureCapacity_real_T(RadiusDeux, i);
  RadiusDeux_data = RadiusDeux->data;
  for (i = 0; i < b_u1; i++) {
    RadiusDeux_data[i] = 0.0;
  }
  d = 1U;
  Un = 0.0;
  if ((centers->size[0] == 0) || (centers->size[1] == 0)) {
    b_u1 = 0;
  } else {
    rowIdx1 = centers->size[0];
    b_u1 = centers->size[1];
    if (rowIdx1 >= b_u1) {
      b_u1 = rowIdx1;
    }
  }
  emxInit_real_T(&RadiusUn, 1);
  i = RadiusUn->size[0];
  RadiusUn->size[0] = b_u1;
  emxEnsureCapacity_real_T(RadiusUn, i);
  RadiusUn_data = RadiusUn->data;
  for (i = 0; i < b_u1; i++) {
    RadiusUn_data[i] = 0.0;
  }
  b_u = 1U;
  C1 = 0.0;
  C2 = 0.0;
  C5 = 0.0;
  C10 = 0.0;
  C20 = 0.0;
  C50 = 0.0;
  R = 1.0;
  Rad = 1.0;
  if ((centers->size[0] == 0) || (centers->size[1] == 0)) {
    b_u1 = 0;
  } else {
    rowIdx1 = centers->size[0];
    b_u1 = centers->size[1];
    if (rowIdx1 >= b_u1) {
      b_u1 = rowIdx1;
    }
  }
  emxInit_uint8_T(&Ar, 3);
  Ar_data = Ar->data;
  emxInit_real_T(&lab_fabric, 3);
  emxInit_real_T(&b_lab_fabric, 2);
  for (k = 0; k < b_u1; k++) {
    r = fabs(radii_data[k]);
    Mb = centers_data[k] - r;
    R2 = centers_data[k + centers->size[0]] - r;
    x = rt_roundd_snf(((R2 - 1.0) + 1.0) + 2.0 * r);
    rowIdx2 = (int)x;
    Ma = rt_roundd_snf((R2 - 1.0) + 1.0);
    rowIdx1 = (int)Ma;
    b_x = rt_roundd_snf(((Mb - 1.0) + 1.0) + 2.0 * r);
    colIdx2 = (int)b_x;
    R2 = rt_roundd_snf((Mb - 1.0) + 1.0);
    colIdx1 = (int)R2;
    if (((int)Ma > 416) || ((int)x < 1) || ((int)R2 > 900) || ((int)b_x < 1)) {
      Ar->size[0] = 0;
      Ar->size[1] = 0;
      Ar->size[2] = 1;
    } else {
      if ((int)Ma < 1) {
        rowIdx1 = 1;
      }
      if ((int)x > 416) {
        rowIdx2 = 416;
      }
      if ((int)R2 < 1) {
        colIdx1 = 1;
      }
      if ((int)b_x > 900) {
        colIdx2 = 900;
      }
      if (rowIdx1 > rowIdx2) {
        i = 0;
        rowIdx2 = 0;
      } else {
        i = rowIdx1 - 1;
      }
      if (colIdx1 > colIdx2) {
        i1 = 0;
        colIdx2 = 0;
      } else {
        i1 = colIdx1 - 1;
      }
      colIdx1 = rowIdx2 - i;
      i2 = Ar->size[0] * Ar->size[1] * Ar->size[2];
      Ar->size[0] = colIdx1;
      rowIdx1 = colIdx2 - i1;
      Ar->size[1] = rowIdx1;
      Ar->size[2] = 3;
      emxEnsureCapacity_uint8_T(Ar, i2);
      Ar_data = Ar->data;
      for (i2 = 0; i2 < 3; i2++) {
        for (rowIdx2 = 0; rowIdx2 < rowIdx1; rowIdx2++) {
          for (colIdx2 = 0; colIdx2 < colIdx1; colIdx2++) {
            Ar_data[(colIdx2 + Ar->size[0] * rowIdx2) +
                    Ar->size[0] * Ar->size[1] * i2] =
                A[((i + colIdx2) + 416 * (i1 + rowIdx2)) + 374400 * i2];
          }
        }
      }
    }
    i = Ar->size[0];
    for (rowIdx2 = 0; rowIdx2 < i; rowIdx2++) {
      i1 = Ar->size[1];
      for (rowIdx1 = 0; rowIdx1 < i1; rowIdx1++) {
        R2 = fabs(((double)rowIdx2 + 1.0) - r);
        Mb = fabs(((double)rowIdx1 + 1.0) - r);
        if (sqrt(R2 * R2 + Mb * Mb) > r) {
          colIdx1 = Ar->size[2];
          for (i2 = 0; i2 < colIdx1; i2++) {
            Ar_data[(rowIdx2 + Ar->size[0] * rowIdx1) +
                    Ar->size[0] * Ar->size[1] * i2] = MAX_uint8_T;
          }
        }
      }
    }
    rgb2lab(Ar, lab_fabric);
    lab_fabric_data = lab_fabric->data;
    i = b_lab_fabric->size[0] * b_lab_fabric->size[1];
    b_lab_fabric->size[0] = lab_fabric->size[0];
    b_lab_fabric->size[1] = lab_fabric->size[1];
    emxEnsureCapacity_real_T(b_lab_fabric, i);
    b_lab_fabric_data = b_lab_fabric->data;
    colIdx1 = lab_fabric->size[1];
    for (i = 0; i < colIdx1; i++) {
      rowIdx1 = lab_fabric->size[0];
      for (i1 = 0; i1 < rowIdx1; i1++) {
        b_lab_fabric_data[i1 + b_lab_fabric->size[0] * i] =
            lab_fabric_data[(i1 + lab_fabric->size[0] * i) +
                            lab_fabric->size[0] * lab_fabric->size[1]];
      }
    }
    rowIdx1 = lab_fabric->size[0] * lab_fabric->size[1];
    c_lab_fabric = *b_lab_fabric;
    d_lab_fabric = rowIdx1;
    c_lab_fabric.size = &d_lab_fabric;
    c_lab_fabric.numDimensions = 1;
    Ma = combineVectorElements(&c_lab_fabric) /
         (double)(lab_fabric->size[0] * lab_fabric->size[1]);
    i = b_lab_fabric->size[0] * b_lab_fabric->size[1];
    b_lab_fabric->size[0] = lab_fabric->size[0];
    b_lab_fabric->size[1] = lab_fabric->size[1];
    emxEnsureCapacity_real_T(b_lab_fabric, i);
    b_lab_fabric_data = b_lab_fabric->data;
    colIdx1 = lab_fabric->size[1];
    for (i = 0; i < colIdx1; i++) {
      rowIdx1 = lab_fabric->size[0];
      for (i1 = 0; i1 < rowIdx1; i1++) {
        b_lab_fabric_data[i1 + b_lab_fabric->size[0] * i] =
            lab_fabric_data[(i1 + lab_fabric->size[0] * i) +
                            lab_fabric->size[0] * lab_fabric->size[1] * 2];
      }
    }
    rowIdx1 = lab_fabric->size[0] * lab_fabric->size[1];
    c_lab_fabric = *b_lab_fabric;
    e_lab_fabric = rowIdx1;
    c_lab_fabric.size = &e_lab_fabric;
    c_lab_fabric.numDimensions = 1;
    Mb = combineVectorElements(&c_lab_fabric) /
         (double)(lab_fabric->size[0] * lab_fabric->size[1]);
    if ((Ma < 4.0) && (Mb < 15.0)) {
      i = Ar->size[0];
      for (rowIdx2 = 0; rowIdx2 < i; rowIdx2++) {
        i1 = Ar->size[1];
        for (rowIdx1 = 0; rowIdx1 < i1; rowIdx1++) {
          R2 = fabs(((double)rowIdx2 + 1.0) - r);
          Mb = fabs(((double)rowIdx1 + 1.0) - r);
          if (sqrt(R2 * R2 + Mb * Mb) > 0.6 * r) {
            colIdx1 = Ar->size[2];
            for (i2 = 0; i2 < colIdx1; i2++) {
              Ar_data[(rowIdx2 + Ar->size[0] * rowIdx1) +
                      Ar->size[0] * Ar->size[1] * i2] = MAX_uint8_T;
            }
          }
        }
      }
      rgb2lab(Ar, lab_fabric);
      lab_fabric_data = lab_fabric->data;
      i = b_lab_fabric->size[0] * b_lab_fabric->size[1];
      b_lab_fabric->size[0] = lab_fabric->size[0];
      b_lab_fabric->size[1] = lab_fabric->size[1];
      emxEnsureCapacity_real_T(b_lab_fabric, i);
      b_lab_fabric_data = b_lab_fabric->data;
      colIdx1 = lab_fabric->size[1];
      for (i = 0; i < colIdx1; i++) {
        rowIdx1 = lab_fabric->size[0];
        for (i1 = 0; i1 < rowIdx1; i1++) {
          b_lab_fabric_data[i1 + b_lab_fabric->size[0] * i] =
              lab_fabric_data[(i1 + lab_fabric->size[0] * i) +
                              lab_fabric->size[0] * lab_fabric->size[1] * 2];
        }
      }
      rowIdx1 = lab_fabric->size[0] * lab_fabric->size[1];
      c_lab_fabric = *b_lab_fabric;
      f_lab_fabric = rowIdx1;
      c_lab_fabric.size = &f_lab_fabric;
      c_lab_fabric.numDimensions = 1;
      Mb = combineVectorElements(&c_lab_fabric) /
           (double)(lab_fabric->size[0] * lab_fabric->size[1]);
      if (Mb > 4.0) {
        Deux++;
        RadiusDeux_data[(int)d - 1] = r;
        d++;
      } else {
        Un++;
        RadiusUn_data[(int)b_u - 1] = r;
        b_u++;
      }
    }
    if ((Ma < 7.0) && (Mb > 12.0)) {
      Jaunes++;
      RadiusJaunes_data[(int)ja - 1] = r;
      ja++;
    }
    if (Ma > 6.0) {
      Rouges++;
      RadiusRouges_data[(int)ro - 1] = r;
      ro++;
    }
  }
  emxFree_real_T(&b_lab_fabric);
  emxFree_real_T(&radii);
  emxFree_real_T(&centers);
  emxFree_real_T(&lab_fabric);
  emxFree_uint8_T(&Ar);
  rowIdx1 = RadiusUn->size[0];
  for (rowIdx2 = 0; rowIdx2 < rowIdx1; rowIdx2++) {
    if (RadiusUn_data[rowIdx2] == 0.0) {
      RadiusUn_data[rowIdx2] = rtNaN;
    }
  }
  /*  remplace les 0 par NaN dans la liste */
  Mb = b_mean(RadiusUn);
  emxFree_real_T(&RadiusUn);
  if (rtIsNaN(Mb)) {
    Mb = 0.0;
  }
  rowIdx1 = RadiusDeux->size[0];
  for (rowIdx2 = 0; rowIdx2 < rowIdx1; rowIdx2++) {
    if (RadiusDeux_data[rowIdx2] == 0.0) {
      RadiusDeux_data[rowIdx2] = rtNaN;
    }
  }
  /*  remplace les 0 par NaN dans la liste */
  R2 = b_mean(RadiusDeux);
  emxFree_real_T(&RadiusDeux);
  if (rtIsNaN(R2)) {
    R2 = 0.0;
  }
  if (Un != 0.0) {
    Rad = Mb;
    R = 11.625;
  } else if (Deux != 0.0) {
    Rad = R2;
    R = 12.875;
  }
  i = (int)Jaunes;
  for (k = 0; k < i; k++) {
    Mb = RadiusJaunes_data[k] * R / Rad;
    if ((Mb > 11.55) && (Mb < 14.0)) {
      C50++;
    } else if ((Mb > 10.6) && (Mb < 11.55)) {
      C20++;
    } else if ((Mb > 9.0) && (Mb < 10.6)) {
      C10++;
    }
  }
  emxFree_real_T(&RadiusJaunes);
  i = (int)Rouges;
  for (k = 0; k < i; k++) {
    Mb = RadiusRouges_data[k] * R / Rad;
    if ((Mb > 10.0) && (Mb < 15.0)) {
      C5++;
    } else if ((Mb > 9.0) && (Mb < 10.0)) {
      C2++;
    } else if ((Mb > 7.5) && (Mb < 9.0)) {
      C1++;
    }
  }
  emxFree_real_T(&RadiusRouges);
  return ((((((C1 * 0.01 + C2 * 0.02) + C5 * 0.05) + C10 * 0.1) + C20 * 0.2) +
           C50 * 0.5) +
          Un) +
         Deux * 2.0;
}

/* End of code generation (Fonction_Somme.c) */
