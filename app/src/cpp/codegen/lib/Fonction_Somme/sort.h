/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sort.h
 *
 * Code generation for function 'sort'
 *
 */

#ifndef SORT_H
#define SORT_H

/* Include files */
#include "Fonction_Somme_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_sort(emxArray_real_T *x, emxArray_int32_T *idx);

void sort(emxArray_uint8_T *x);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (sort.h) */
