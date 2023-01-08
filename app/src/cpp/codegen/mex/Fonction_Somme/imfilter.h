/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imfilter.h
 *
 * Code generation for function 'imfilter'
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
void b_imfilter(Fonction_SommeStackData *SD, const emlrtStack *sp,
                const real32_T varargin_1[374400], real32_T b[374400]);

void c_imfilter(Fonction_SommeStackData *SD, const emlrtStack *sp,
                const real32_T varargin_1[374400], real32_T b[374400]);

void imfilter(Fonction_SommeStackData *SD, const emlrtStack *sp,
              const real32_T varargin_1[374400], real32_T b[374400]);

/* End of code generation (imfilter.h) */
