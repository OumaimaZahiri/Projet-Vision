/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imhmax.c
 *
 * Code generation for function 'imhmax'
 *
 */

/* Include files */
#include "imhmax.h"
#include "rt_nonfinite.h"
#include "libmwippreconstruct.h"

/* Function Definitions */
void imhmax(const double b_I[374400], double J[374400])
{
  double imSizeT[2];
  int i;
  for (i = 0; i < 374400; i++) {
    J[i] = b_I[i] - 0.15;
  }
  imSizeT[0] = 416.0;
  imSizeT[1] = 900.0;
  ippreconstruct_real64(&J[0], &b_I[0], &imSizeT[0], 2.0);
}

/* End of code generation (imhmax.c) */
