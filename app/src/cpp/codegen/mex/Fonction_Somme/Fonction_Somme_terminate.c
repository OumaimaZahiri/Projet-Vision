/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Fonction_Somme_terminate.c
 *
 * Code generation for function 'Fonction_Somme_terminate'
 *
 */

/* Include files */
#include "Fonction_Somme_terminate.h"
#include "Fonction_Somme_data.h"
#include "_coder_Fonction_Somme_mex.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void Fonction_Somme_atexit(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  /* Free instance data */
  covrtFreeInstanceData(&emlrtCoverageInstance);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void Fonction_Somme_terminate(void)
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (Fonction_Somme_terminate.c) */
