/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Fonction_Somme_mex.c
 *
 * Code generation for function '_coder_Fonction_Somme_mex'
 *
 */

/* Include files */
#include "_coder_Fonction_Somme_mex.h"
#include "Fonction_Somme_data.h"
#include "Fonction_Somme_initialize.h"
#include "Fonction_Somme_terminate.h"
#include "Fonction_Somme_types.h"
#include "_coder_Fonction_Somme_api.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void Fonction_Somme_mexFunction(Fonction_SommeStackData *SD, int32_T nlhs,
                                mxArray *plhs[1], int32_T nrhs,
                                const mxArray *prhs[1])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        14, "Fonction_Somme");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "Fonction_Somme");
  }
  /* Call the function. */
  Fonction_Somme_api(SD, prhs[0], &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  Fonction_SommeStackData *Fonction_SommeStackDataGlobal = NULL;
  Fonction_SommeStackDataGlobal = (Fonction_SommeStackData *)emlrtMxCalloc(
      (size_t)1, (size_t)1U * sizeof(Fonction_SommeStackData));
  mexAtExit(&Fonction_Somme_atexit);
  /* Module initialization. */
  Fonction_Somme_initialize();
  /* Dispatch the entry-point. */
  Fonction_Somme_mexFunction(Fonction_SommeStackDataGlobal, nlhs, plhs, nrhs,
                             prhs);
  /* Module termination. */
  Fonction_Somme_terminate();
  emlrtMxFree(Fonction_SommeStackDataGlobal);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Fonction_Somme_mex.c) */
