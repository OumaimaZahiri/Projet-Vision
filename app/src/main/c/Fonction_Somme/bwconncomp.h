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

#ifndef BWCONNCOMP_H
#define BWCONNCOMP_H

/* Include files */
#include "Fonction_Somme_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void bwconncomp(const boolean_T varargin_1[374400], double *CC_Connectivity,
                double CC_ImageSize[2], double *CC_NumObjects,
                emxArray_real_T *CC_RegionIndices,
                emxArray_int32_T *CC_RegionLengths);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (bwconncomp.h) */
