/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Fonction_Somme_initialize.c
 *
 * Code generation for function 'Fonction_Somme_initialize'
 *
 */

/* Include files */
#include "Fonction_Somme_initialize.h"
#include "Fonction_Somme_data.h"
#include "_coder_Fonction_Somme_mex.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void Fonction_Somme_once(void);

/* Function Definitions */
static void Fonction_Somme_once(void)
{
  const int32_T postfix_exprs_0_0[3] = {0, 1, -3};
  const int32_T postfix_exprs_0_1[3] = {0, 1, -3};
  const int32_T postfix_exprs_0_2[3] = {0, 1, -3};
  const int32_T postfix_exprs_0_3[3] = {0, 1, -3};
  const int32_T postfix_exprs_0_4[3] = {0, 1, -3};
  const int32_T postfix_exprs_0_5[3] = {0, 1, -3};
  const int32_T postfix_exprs_0_6[3] = {0, 1, -3};
  const int32_T postfix_exprs_0_7[3] = {0, 1, -3};
  const int32_T cond_ends_0_0[2] = {1363, 1373};
  const int32_T cond_ends_0_1[2] = {1985, 1995};
  const int32_T cond_ends_0_2[2] = {2829, 2838};
  const int32_T cond_ends_0_3[2] = {2897, 2909};
  const int32_T cond_ends_0_4[2] = {2977, 2988};
  const int32_T cond_ends_0_5[2] = {3152, 3161};
  const int32_T cond_ends_0_6[2] = {3215, 3224};
  const int32_T cond_ends_0_7[2] = {3292, 3300};
  const int32_T cond_starts_0_0[2] = {1359, 1367};
  const int32_T cond_starts_0_1[2] = {1979, 1989};
  const int32_T cond_starts_0_2[2] = {2821, 2833};
  const int32_T cond_starts_0_3[2] = {2890, 2901};
  const int32_T cond_starts_0_4[2] = {2973, 2981};
  const int32_T cond_starts_0_5[2] = {3147, 3156};
  const int32_T cond_starts_0_6[2] = {3211, 3219};
  const int32_T cond_starts_0_7[2] = {3286, 3296};
  mex_InitInfAndNan();
  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);
  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "D:\\FISE 3\\vision\\Fonction_Somme.m", 0U, 1U, 25U, 16U, 0U,
                  0U, 0U, 7U, 0U, 16U, 8U);
  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0U, 0U, "Fonction_Somme", 0, -1, 3477);
  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 24U, 3405, -1, 3475);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 23U, 3321, -1, 3329);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 22U, 3241, -1, 3249);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 21U, 3174, -1, 3182);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 20U, 3110, -1, 3135);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 19U, 3009, -1, 3019);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 18U, 2926, -1, 2936);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 17U, 2851, -1, 2861);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 16U, 2784, -1, 2809);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 15U, 2658, -1, 2688);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 14U, 2562, -1, 2588);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 13U, 2520, -1, 2527);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 12U, 2384, -1, 2495);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 11U, 2359, -1, 2366);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 10U, 2228, -1, 2333);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 9U, 2121, -1, 2190);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 8U, 2008, -1, 2077);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 7U, 1868, -1, 1930);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 6U, 1766, -1, 1834);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 5U, 1641, -1, 1728);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 4U, 1544, -1, 1568);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 3U, 1152, -1, 1347);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 2U, 1066, -1, 1090);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 1U, 821, -1, 932);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 0U, 41, -1, 777);
  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 0U, 0U, 1011, 1045, -1, 1110);
  covrtIfInit(&emlrtCoverageInstance, 0U, 1U, 1356, 1373, -1, 1967);
  covrtIfInit(&emlrtCoverageInstance, 0U, 2U, 1481, 1519, -1, 1592);
  covrtIfInit(&emlrtCoverageInstance, 0U, 3U, 1741, 1748, 1847, 1946);
  covrtIfInit(&emlrtCoverageInstance, 0U, 4U, 1976, 1995, -1, 2089);
  covrtIfInit(&emlrtCoverageInstance, 0U, 5U, 2098, 2107, -1, 2202);
  covrtIfInit(&emlrtCoverageInstance, 0U, 6U, 2339, 2351, -1, 2374);
  covrtIfInit(&emlrtCoverageInstance, 0U, 7U, 2500, 2512, -1, 2535);
  covrtIfInit(&emlrtCoverageInstance, 0U, 8U, 2545, 2553, 2593, 2749);
  covrtIfInit(&emlrtCoverageInstance, 0U, 9U, 2636, 2643, 2697, 2741);
  covrtIfInit(&emlrtCoverageInstance, 0U, 10U, 2818, 2838, 2870, 3067);
  covrtIfInit(&emlrtCoverageInstance, 0U, 11U, 2887, 2909, 2949, 3055);
  covrtIfInit(&emlrtCoverageInstance, 0U, 12U, 2970, 2988, -1, 3039);
  covrtIfInit(&emlrtCoverageInstance, 0U, 13U, 3144, 3161, 3191, 3377);
  covrtIfInit(&emlrtCoverageInstance, 0U, 14U, 3208, 3224, 3262, 3365);
  covrtIfInit(&emlrtCoverageInstance, 0U, 15U, 3283, 3300, -1, 3349);
  /* Initialize MCDC Information */
  covrtMcdcInit(&emlrtCoverageInstance, 0U, 0U, 1359, 1373, 2, 0,
                &cond_starts_0_0[0], &cond_ends_0_0[0], 3,
                &postfix_exprs_0_0[0]);
  covrtMcdcInit(&emlrtCoverageInstance, 0U, 1U, 1979, 1995, 2, 2,
                &cond_starts_0_1[0], &cond_ends_0_1[0], 3,
                &postfix_exprs_0_1[0]);
  covrtMcdcInit(&emlrtCoverageInstance, 0U, 2U, 2821, 2838, 2, 4,
                &cond_starts_0_2[0], &cond_ends_0_2[0], 3,
                &postfix_exprs_0_2[0]);
  covrtMcdcInit(&emlrtCoverageInstance, 0U, 3U, 2890, 2909, 2, 6,
                &cond_starts_0_3[0], &cond_ends_0_3[0], 3,
                &postfix_exprs_0_3[0]);
  covrtMcdcInit(&emlrtCoverageInstance, 0U, 4U, 2973, 2988, 2, 8,
                &cond_starts_0_4[0], &cond_ends_0_4[0], 3,
                &postfix_exprs_0_4[0]);
  covrtMcdcInit(&emlrtCoverageInstance, 0U, 5U, 3147, 3161, 2, 10,
                &cond_starts_0_5[0], &cond_ends_0_5[0], 3,
                &postfix_exprs_0_5[0]);
  covrtMcdcInit(&emlrtCoverageInstance, 0U, 6U, 3211, 3224, 2, 12,
                &cond_starts_0_6[0], &cond_ends_0_6[0], 3,
                &postfix_exprs_0_6[0]);
  covrtMcdcInit(&emlrtCoverageInstance, 0U, 7U, 3286, 3300, 2, 14,
                &cond_starts_0_7[0], &cond_ends_0_7[0], 3,
                &postfix_exprs_0_7[0]);
  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 0U, 0U, 787, 812, 2223);
  covrtForInit(&emlrtCoverageInstance, 0U, 1U, 941, 961, 1138);
  covrtForInit(&emlrtCoverageInstance, 0U, 2U, 974, 994, 1126);
  covrtForInit(&emlrtCoverageInstance, 0U, 3U, 1403, 1423, 1628);
  covrtForInit(&emlrtCoverageInstance, 0U, 4U, 1440, 1460, 1612);
  covrtForInit(&emlrtCoverageInstance, 0U, 5U, 2759, 2775, 3075);
  covrtForInit(&emlrtCoverageInstance, 0U, 6U, 3085, 3101, 3390);
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);
}

void Fonction_Somme_initialize(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2022a(&st, "EMLRT:runTime:MexFunctionNeedsLicense",
                          "image_toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    Fonction_Somme_once();
  }
}

/* End of code generation (Fonction_Somme_initialize.c) */
