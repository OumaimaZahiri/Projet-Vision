/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * bwconncomp.h
 *
 * Code generation for function 'bwconncomp'
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
void bwconncomp(const emlrtStack *sp, const boolean_T varargin_1[374400],
                real_T *CC_Connectivity, real_T CC_ImageSize[2],
                real_T *CC_NumObjects, emxArray_real_T *CC_RegionIndices,
                emxArray_int32_T *CC_RegionLengths);

/* End of code generation (bwconncomp.h) */
