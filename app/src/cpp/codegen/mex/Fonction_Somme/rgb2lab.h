/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rgb2lab.h
 *
 * Code generation for function 'rgb2lab'
 *
 */

#pragma once

/* Include files */
#include "Fonction_Somme_types.h"
#include "rtwtypes.h"
#include "covrt.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void rgb2lab(const emlrtStack *sp, const emxArray_uint8_T *rgb,
             emxArray_real_T *lab);

/* End of code generation (rgb2lab.h) */
