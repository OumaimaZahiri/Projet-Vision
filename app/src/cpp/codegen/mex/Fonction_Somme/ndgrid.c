/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ndgrid.c
 *
 * Code generation for function 'ndgrid'
 *
 */

/* Include files */
#include "ndgrid.h"
#include "Fonction_Somme_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void ndgrid(real_T varargout_1[65536], real_T varargout_2[65536])
{
  int32_T b_k;
  int32_T k;
  for (k = 0; k < 256; k++) {
    for (b_k = 0; b_k < 256; b_k++) {
      int32_T varargout_1_tmp;
      varargout_1_tmp = b_k + (k << 8);
      varargout_1[varargout_1_tmp] = (((real_T)b_k + 1.0) - 1.0) + 1.0;
      varargout_2[varargout_1_tmp] = (((real_T)k + 1.0) - 1.0) + 1.0;
    }
  }
}

/* End of code generation (ndgrid.c) */
