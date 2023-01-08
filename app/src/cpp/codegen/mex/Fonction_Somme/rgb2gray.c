/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rgb2gray.c
 *
 * Code generation for function 'rgb2gray'
 *
 */

/* Include files */
#include "rgb2gray.h"
#include "Fonction_Somme_data.h"
#include "rt_nonfinite.h"
#include "libmwrgb2gray_tbb.h"

/* Function Definitions */
void rgb2gray(const uint8_T X[1123200], uint8_T b_I[374400])
{
  rgb2gray_tbb_uint8(&X[0], 374400.0, &b_I[0], true);
}

/* End of code generation (rgb2gray.c) */
