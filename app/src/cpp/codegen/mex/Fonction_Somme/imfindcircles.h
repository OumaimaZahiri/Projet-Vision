/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imfindcircles.h
 *
 * Code generation for function 'imfindcircles'
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
void imfindcircles(Fonction_SommeStackData *SD, const emlrtStack *sp,
                   const boolean_T varargin_1[374400], emxArray_real_T *centers,
                   emxArray_real_T *r_estimated, emxArray_real_T *metric);

/* End of code generation (imfindcircles.h) */
