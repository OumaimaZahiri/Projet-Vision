/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * im2uint8.c
 *
 * Code generation for function 'im2uint8'
 *
 */

/* Include files */
#include "im2uint8.h"
#include "Fonction_Somme_data.h"
#include "rt_nonfinite.h"
#include "libmwgrayto8.h"

/* Function Definitions */
void im2uint8(const real32_T img[1123200], uint8_T u[1123200])
{
  grayto8_real32(&img[0], &u[0], 1.1232E+6);
}

/* End of code generation (im2uint8.c) */
