/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rgb2lab.c
 *
 * Code generation for function 'rgb2lab'
 *
 */

/* Include files */
#include "rgb2lab.h"
#include "Fonction_Somme_emxutil.h"
#include "Fonction_Somme_rtwutil.h"
#include "Fonction_Somme_types.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void convertRGBToLab(unsigned char encodedR, unsigned char encodedG,
                            unsigned char encodedB, double *L, double *a,
                            double *b);

/* Function Definitions */
static void convertRGBToLab(unsigned char encodedR, unsigned char encodedG,
                            unsigned char encodedB, double *L, double *a,
                            double *b)
{
  double G;
  double fx;
  double fy;
  double fz;
  double x;
  x = (double)encodedR / 255.0;
  fx = (double)encodedG / 255.0;
  fz = (double)encodedB / 255.0;
  if (x < 0.04045) {
    fy = 0.077399380804953566 * x;
  } else {
    fy = rt_powd_snf(0.94786729857819907 * x + 0.052132701421800952, 2.4);
  }
  if (fx < 0.04045) {
    G = 0.077399380804953566 * fx;
  } else {
    G = rt_powd_snf(0.94786729857819907 * fx + 0.052132701421800952, 2.4);
  }
  if (fz < 0.04045) {
    fz *= 0.077399380804953566;
  } else {
    fz = rt_powd_snf(0.94786729857819907 * fz + 0.052132701421800952, 2.4);
  }
  x = (0.2126728514056225 * fy + 0.71515215528781784 * G) +
      0.072174993306559562 * fz;
  fx = ((0.41245643908969215 * fy + 0.35757607764390892 * G) +
        0.18043748326639891 * fz) /
       0.95047;
  fz = ((0.0193338955823293 * fy + 0.11919202588130294 * G) +
        0.95030407853636767 * fz) /
       1.08883;
  if (fx > 0.0088564516790356311) {
    fx = rt_powd_snf(fx, 0.33333333333333331);
  } else {
    fx = (903.2962962962963 * fx + 16.0) / 116.0;
  }
  if (x > 0.0088564516790356311) {
    fy = rt_powd_snf(x, 0.33333333333333331);
  } else {
    fy = (903.2962962962963 * x + 16.0) / 116.0;
  }
  if (fz > 0.0088564516790356311) {
    fz = rt_powd_snf(fz, 0.33333333333333331);
  } else {
    fz = (903.2962962962963 * fz + 16.0) / 116.0;
  }
  *L = 116.0 * fy - 16.0;
  *a = 500.0 * (fx - fy);
  *b = 200.0 * (fy - fz);
}

void rgb2lab(const emxArray_uint8_T *rgb, emxArray_real_T *lab)
{
  double B;
  double a;
  double b;
  double *lab_data;
  int col;
  int i;
  int k;
  int rgb_idx_0;
  int row;
  const unsigned char *rgb_data;
  rgb_data = rgb->data;
  i = lab->size[0] * lab->size[1] * lab->size[2];
  lab->size[0] = (short)rgb->size[0];
  lab->size[1] = (short)rgb->size[1];
  lab->size[2] = (short)rgb->size[2];
  emxEnsureCapacity_real_T(lab, i);
  lab_data = lab->data;
  if ((rgb->size[2] == 1) && (rgb->size[1] == 3)) {
    i = rgb->size[0];
    if (rgb->size[0] - 1 >= 0) {
      rgb_idx_0 = rgb->size[0];
      col = rgb->size[0];
    }
    for (k = 0; k < i; k++) {
      convertRGBToLab(rgb_data[k], rgb_data[k + rgb_idx_0],
                      rgb_data[k + col * 2], &B, &a, &b);
      lab_data[k] = B;
      row = lab->size[0];
      lab_data[k + row] = a;
      row = lab->size[0];
      lab_data[k + row * 2] = b;
    }
  } else {
    i = rgb->size[1];
    for (col = 0; col < i; col++) {
      rgb_idx_0 = rgb->size[0];
      for (row = 0; row < rgb_idx_0; row++) {
        convertRGBToLab(
            rgb_data[row + rgb->size[0] * col],
            rgb_data[(row + rgb->size[0] * col) + rgb->size[0] * rgb->size[1]],
            rgb_data[(row + rgb->size[0] * col) +
                     rgb->size[0] * rgb->size[1] * 2],
            &lab_data[row + lab->size[0] * col], &a, &B);
        lab_data[(row + lab->size[0] * col) + lab->size[0] * lab->size[1]] = a;
        lab_data[(row + lab->size[0] * col) + lab->size[0] * lab->size[1] * 2] =
            B;
      }
    }
  }
}

/* End of code generation (rgb2lab.c) */
