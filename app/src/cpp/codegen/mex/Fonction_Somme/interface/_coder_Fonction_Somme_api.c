/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Fonction_Somme_api.c
 *
 * Code generation for function '_coder_Fonction_Somme_api'
 *
 */

/* Include files */
#include "_coder_Fonction_Somme_api.h"
#include "Fonction_Somme.h"
#include "Fonction_Somme_data.h"
#include "Fonction_Somme_mexutil.h"
#include "Fonction_Somme_types.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static uint8_T (
    *b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId))[29630592];

static uint8_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId))[29630592];

static uint8_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_I,
                                  const char_T *identifier))[29630592];

/* Function Definitions */
static uint8_T (
    *b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId))[29630592]
{
  uint8_T(*y)[29630592];
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static uint8_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId))[29630592]
{
  static const int32_T dims[3] = {2136, 4624, 3};
  uint8_T(*ret)[29630592];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "uint8", false, 3U,
                          (const void *)&dims[0]);
  ret = (uint8_T(*)[29630592])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static uint8_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_I,
                                  const char_T *identifier))[29630592]
{
  emlrtMsgIdentifier thisId;
  uint8_T(*y)[29630592];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(b_I), &thisId);
  emlrtDestroyArray(&b_I);
  return y;
}

void Fonction_Somme_api(Fonction_SommeStackData *SD, const mxArray *prhs,
                        const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T Somme;
  uint8_T(*b_I)[29630592];
  st.tls = emlrtRootTLSGlobal;
  /* Marshall function inputs */
  b_I = emlrt_marshallIn(&st, emlrtAlias(prhs), "I");
  /* Invoke the target function */
  Somme = Fonction_Somme(SD, &st, *b_I);
  /* Marshall function outputs */
  *plhs = d_emlrt_marshallOut(Somme);
}

/* End of code generation (_coder_Fonction_Somme_api.c) */
