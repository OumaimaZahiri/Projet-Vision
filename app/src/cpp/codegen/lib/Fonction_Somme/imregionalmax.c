/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imregionalmax.c
 *
 * Code generation for function 'imregionalmax'
 *
 */

/* Include files */
#include "imregionalmax.h"
#include "rt_nonfinite.h"
#include "libmwimregionalmax.h"

/* Function Definitions */
void imregionalmax(const double varargin_1[374400], boolean_T BW[374400])
{
  double imSizeT[2];
  int i;
  boolean_T conn[9];
  imSizeT[0] = 416.0;
  imSizeT[1] = 900.0;
  for (i = 0; i < 9; i++) {
    conn[i] = true;
  }
  double connSizeT[2];
  connSizeT[0] = 3.0;
  connSizeT[1] = 3.0;
  imregionalmax_real64(&varargin_1[0], &BW[0], 2.0, &imSizeT[0], &conn[0], 2.0,
                       &connSizeT[0]);
}

/* End of code generation (imregionalmax.c) */
