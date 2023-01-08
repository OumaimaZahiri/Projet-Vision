/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Fonction_Somme_api.h
 *
 * Code generation for function 'Fonction_Somme'
 *
 */

#ifndef _CODER_FONCTION_SOMME_API_H
#define _CODER_FONCTION_SOMME_API_H

/* Include files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
real_T Fonction_Somme(uint8_T b_I[29630592]);

void Fonction_Somme_api(const mxArray *prhs, const mxArray **plhs);

void Fonction_Somme_atexit(void);

void Fonction_Somme_initialize(void);

void Fonction_Somme_terminate(void);

void Fonction_Somme_xil_shutdown(void);

void Fonction_Somme_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (_coder_Fonction_Somme_api.h) */
