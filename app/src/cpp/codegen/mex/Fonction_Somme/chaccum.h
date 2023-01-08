/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * chaccum.h
 *
 * Code generation for function 'chaccum'
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
void chaccum(Fonction_SommeStackData *SD, const emlrtStack *sp,
             const boolean_T varargin_1[374400], creal_T accumMatrix[374400],
             real32_T gradientImg[374400]);

/* End of code generation (chaccum.h) */
