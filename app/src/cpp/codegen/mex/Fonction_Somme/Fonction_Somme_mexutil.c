/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Fonction_Somme_mexutil.c
 *
 * Code generation for function 'Fonction_Somme_mexutil'
 *
 */

/* Include files */
#include "Fonction_Somme_mexutil.h"
#include "Fonction_Somme_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
const mxArray *d_emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

/* End of code generation (Fonction_Somme_mexutil.c) */
