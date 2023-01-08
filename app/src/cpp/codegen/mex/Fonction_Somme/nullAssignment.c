/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * nullAssignment.c
 *
 * Code generation for function 'nullAssignment'
 *
 */

/* Include files */
#include "nullAssignment.h"
#include "Fonction_Somme_data.h"
#include "Fonction_Somme_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void nullAssignment(emxArray_uint8_T *x)
{
  if (x->size[1] < 1) {
    x->size[1] = 0;
  }
}

/* End of code generation (nullAssignment.c) */
