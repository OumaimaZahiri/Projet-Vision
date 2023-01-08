/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * colon.c
 *
 * Code generation for function 'colon'
 *
 */

/* Include files */
#include "colon.h"
#include "Fonction_Somme_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void eml_integer_colon_dispatcher(uint8_T b, uint8_T y_data[],
                                  int32_T y_size[2])
{
  int32_T k;
  int32_T n;
  if (b < 1) {
    n = 0;
  } else {
    n = b;
  }
  y_size[0] = 1;
  y_size[1] = n;
  for (k = 0; k < n; k++) {
    y_data[k] = (uint8_T)(k + 1);
  }
}

/* End of code generation (colon.c) */
