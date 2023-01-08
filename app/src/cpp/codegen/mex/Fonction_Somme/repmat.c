/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "repmat.h"
#include "Fonction_Somme_data.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void repmat(const real_T a[256], real_T b[65536])
{
  int32_T jtilecol;
  for (jtilecol = 0; jtilecol < 256; jtilecol++) {
    int32_T ibtile;
    ibtile = jtilecol << 8;
    memcpy(&b[ibtile], &a[0], 256U * sizeof(real_T));
  }
}

/* End of code generation (repmat.c) */
