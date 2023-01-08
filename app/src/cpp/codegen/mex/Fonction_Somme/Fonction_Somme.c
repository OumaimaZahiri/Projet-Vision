/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Fonction_Somme.c
 *
 * Code generation for function 'Fonction_Somme'
 *
 */

/* Include files */
#include "Fonction_Somme.h"
#include "Fonction_Somme_data.h"
#include "Fonction_Somme_emxutil.h"
#include "Fonction_Somme_types.h"
#include "imcrop.h"
#include "imfindcircles.h"
#include "imquantize.h"
#include "imresize.h"
#include "mean.h"
#include "mean2.h"
#include "multithresh.h"
#include "rgb2gray.h"
#include "rgb2lab.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Type Definitions */
#ifndef typedef_rtString
#define typedef_rtString
typedef struct {
  char_T Value[19];
} rtString;
#endif /* typedef_rtString */

#ifndef typedef_b_rtString
#define typedef_b_rtString
typedef struct {
  char_T Value[13];
} b_rtString;
#endif /* typedef_b_rtString */

#ifndef typedef_c_rtString
#define typedef_c_rtString
typedef struct {
  char_T Value[2];
} c_rtString;
#endif /* typedef_c_rtString */

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = {
    63,                                    /* lineNo */
    13,                                    /* colNo */
    "Fonction_Somme",                      /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pName */
};

static emlrtRTEInfo b_emlrtRTEI = {
    113,                                   /* lineNo */
    9,                                     /* colNo */
    "Fonction_Somme",                      /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pName */
};

static emlrtRTEInfo c_emlrtRTEI = {
    118,                                   /* lineNo */
    13,                                    /* colNo */
    "Fonction_Somme",                      /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pName */
};

static emlrtRTEInfo d_emlrtRTEI = {
    114,                                   /* lineNo */
    16,                                    /* colNo */
    "Fonction_Somme",                      /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pName */
};

static emlrtRSInfo emlrtRSI = {
    3,                                     /* lineNo */
    "Fonction_Somme",                      /* fcnName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    5,                                     /* lineNo */
    "Fonction_Somme",                      /* fcnName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    7,                                     /* lineNo */
    "Fonction_Somme",                      /* fcnName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    12,                                    /* lineNo */
    "Fonction_Somme",                      /* fcnName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    55,                                    /* lineNo */
    "Fonction_Somme",                      /* fcnName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    58,                                    /* lineNo */
    "Fonction_Somme",                      /* fcnName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    59,                                    /* lineNo */
    "Fonction_Somme",                      /* fcnName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI = {
    60,                                    /* lineNo */
    "Fonction_Somme",                      /* fcnName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI = {
    61,                                    /* lineNo */
    "Fonction_Somme",                      /* fcnName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI = {
    71,                                    /* lineNo */
    "Fonction_Somme",                      /* fcnName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI = {
    73,                                    /* lineNo */
    "Fonction_Somme",                      /* fcnName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pathName */
};

static emlrtBCInfo emlrtBCI = {
    -1,                                     /* iFirst */
    -1,                                     /* iLast */
    43,                                     /* lineNo */
    20,                                     /* colNo */
    "centers",                              /* aName */
    "Fonction_Somme",                       /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m", /* pName */
    0                                       /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                                     /* iFirst */
    -1,                                     /* iLast */
    43,                                     /* lineNo */
    22,                                     /* colNo */
    "centers",                              /* aName */
    "Fonction_Somme",                       /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m", /* pName */
    0                                       /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                                     /* iFirst */
    -1,                                     /* iLast */
    44,                                     /* lineNo */
    20,                                     /* colNo */
    "centers",                              /* aName */
    "Fonction_Somme",                       /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m", /* pName */
    0                                       /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                                     /* iFirst */
    -1,                                     /* iLast */
    44,                                     /* lineNo */
    22,                                     /* colNo */
    "centers",                              /* aName */
    "Fonction_Somme",                       /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m", /* pName */
    0                                       /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                                     /* iFirst */
    -1,                                     /* iLast */
    45,                                     /* lineNo */
    22,                                     /* colNo */
    "radii",                                /* aName */
    "Fonction_Somme",                       /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m", /* pName */
    0                                       /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                                     /* iFirst */
    -1,                                     /* iLast */
    50,                                     /* lineNo */
    24,                                     /* colNo */
    "Ar",                                   /* aName */
    "Fonction_Somme",                       /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m", /* pName */
    0                                       /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                                     /* iFirst */
    -1,                                     /* iLast */
    50,                                     /* lineNo */
    26,                                     /* colNo */
    "Ar",                                   /* aName */
    "Fonction_Somme",                       /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m", /* pName */
    0                                       /* checkKind */
};

static emlrtECInfo emlrtECI = {
    -1,                                    /* nDims */
    50,                                    /* lineNo */
    21,                                    /* colNo */
    "Fonction_Somme",                      /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pName */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                                     /* iFirst */
    -1,                                     /* iLast */
    56,                                     /* lineNo */
    28,                                     /* colNo */
    "lab_fabric",                           /* aName */
    "Fonction_Somme",                       /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m", /* pName */
    0                                       /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                                     /* iFirst */
    -1,                                     /* iLast */
    57,                                     /* lineNo */
    28,                                     /* colNo */
    "lab_fabric",                           /* aName */
    "Fonction_Somme",                       /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m", /* pName */
    0                                       /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,                                     /* iFirst */
    -1,                                     /* iLast */
    67,                                     /* lineNo */
    28,                                     /* colNo */
    "Ar",                                   /* aName */
    "Fonction_Somme",                       /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m", /* pName */
    0                                       /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,                                     /* iFirst */
    -1,                                     /* iLast */
    67,                                     /* lineNo */
    30,                                     /* colNo */
    "Ar",                                   /* aName */
    "Fonction_Somme",                       /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m", /* pName */
    0                                       /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    -1,                                    /* nDims */
    67,                                    /* lineNo */
    25,                                    /* colNo */
    "Fonction_Somme",                      /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pName */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,                                     /* iFirst */
    -1,                                     /* iLast */
    72,                                     /* lineNo */
    32,                                     /* colNo */
    "lab_fabric",                           /* aName */
    "Fonction_Somme",                       /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m", /* pName */
    0                                       /* checkKind */
};

static emlrtRTEInfo e_emlrtRTEI = {
    122,                                   /* lineNo */
    13,                                    /* colNo */
    "Fonction_Somme",                      /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pName */
};

static emlrtRTEInfo f_emlrtRTEI = {
    137,                                   /* lineNo */
    13,                                    /* colNo */
    "Fonction_Somme",                      /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pName */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,                                     /* iFirst */
    -1,                                     /* iLast */
    97,                                     /* lineNo */
    14,                                     /* colNo */
    "RadiusUn",                             /* aName */
    "Fonction_Somme",                       /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m", /* pName */
    0                                       /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,                                     /* iFirst */
    -1,                                     /* iLast */
    103,                                    /* lineNo */
    16,                                     /* colNo */
    "RadiusDeux",                           /* aName */
    "Fonction_Somme",                       /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m", /* pName */
    0                                       /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,                                     /* iFirst */
    -1,                                     /* iLast */
    58,                                     /* lineNo */
    17,                                     /* colNo */
    "MOYENNE",                              /* aName */
    "Fonction_Somme",                       /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m", /* pName */
    0                                       /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,                                     /* iFirst */
    -1,                                     /* iLast */
    59,                                     /* lineNo */
    17,                                     /* colNo */
    "MOYENNE",                              /* aName */
    "Fonction_Somme",                       /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m", /* pName */
    0                                       /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,                                     /* iFirst */
    -1,                                     /* iLast */
    123,                                    /* lineNo */
    25,                                     /* colNo */
    "RadiusJaunes",                         /* aName */
    "Fonction_Somme",                       /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m", /* pName */
    0                                       /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,                                     /* iFirst */
    -1,                                     /* iLast */
    138,                                    /* lineNo */
    25,                                     /* colNo */
    "RadiusRouges",                         /* aName */
    "Fonction_Somme",                       /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m", /* pName */
    0                                       /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,                                     /* iFirst */
    -1,                                     /* iLast */
    87,                                     /* lineNo */
    26,                                     /* colNo */
    "RadiusJaunes",                         /* aName */
    "Fonction_Somme",                       /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m", /* pName */
    0                                       /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,                                     /* iFirst */
    -1,                                     /* iLast */
    92,                                     /* lineNo */
    26,                                     /* colNo */
    "RadiusRouges",                         /* aName */
    "Fonction_Somme",                       /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m", /* pName */
    0                                       /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,                                     /* iFirst */
    -1,                                     /* iLast */
    80,                                     /* lineNo */
    26,                                     /* colNo */
    "RadiusUn",                             /* aName */
    "Fonction_Somme",                       /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m", /* pName */
    0                                       /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,                                     /* iFirst */
    -1,                                     /* iLast */
    76,                                     /* lineNo */
    28,                                     /* colNo */
    "RadiusDeux",                           /* aName */
    "Fonction_Somme",                       /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m", /* pName */
    0                                       /* checkKind */
};

static emlrtRTEInfo db_emlrtRTEI = {
    15,                                    /* lineNo */
    5,                                     /* colNo */
    "Fonction_Somme",                      /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    18,                                    /* lineNo */
    5,                                     /* colNo */
    "Fonction_Somme",                      /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    22,                                    /* lineNo */
    5,                                     /* colNo */
    "Fonction_Somme",                      /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    26,                                    /* lineNo */
    5,                                     /* colNo */
    "Fonction_Somme",                      /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = {
    30,                                    /* lineNo */
    5,                                     /* colNo */
    "Fonction_Somme",                      /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = {
    56,                                    /* lineNo */
    9,                                     /* colNo */
    "Fonction_Somme",                      /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = {
    57,                                    /* lineNo */
    9,                                     /* colNo */
    "Fonction_Somme",                      /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    72,                                    /* lineNo */
    17,                                    /* colNo */
    "Fonction_Somme",                      /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    46,                                    /* lineNo */
    9,                                     /* colNo */
    "Fonction_Somme",                      /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = {
    55,                                    /* lineNo */
    9,                                     /* colNo */
    "Fonction_Somme",                      /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = {
    1,                                     /* lineNo */
    16,                                    /* colNo */
    "Fonction_Somme",                      /* fName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pName */
};

static emlrtRSInfo ck_emlrtRSI = {
    63,                                    /* lineNo */
    "Fonction_Somme",                      /* fcnName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pathName */
};

static emlrtRSInfo dk_emlrtRSI = {
    113,                                   /* lineNo */
    "Fonction_Somme",                      /* fcnName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pathName */
};

static emlrtRSInfo ek_emlrtRSI = {
    118,                                   /* lineNo */
    "Fonction_Somme",                      /* fcnName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pathName */
};

static emlrtRSInfo hk_emlrtRSI = {
    46,                                    /* lineNo */
    "Fonction_Somme",                      /* fcnName */
    "D:\\FISE 3\\vision\\Fonction_Somme.m" /* pathName */
};

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp,
                                          const rtString u);

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp,
                                          const b_rtString u);

static const mxArray *e_emlrt_marshallOut(void);

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const c_rtString u);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp,
                                          const rtString u)
{
  static const int32_T b_iv[2] = {1, 19};
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *propValues;
  const mxArray *y;
  const char_T *propClasses = "coder.internal.string";
  const char_T *propNames = "Value";
  y = NULL;
  m = NULL;
  emlrtAssign(
      &y, emlrtCreateClassInstance2022a((emlrtCTX)sp, "coder.internal.string"));
  m = NULL;
  b_y = NULL;
  propValues = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 19, propValues, &u.Value[0]);
  emlrtAssign(&b_y, propValues);
  emlrtAssign(&m, b_y);
  propValues = m;
  emlrtSetAllProperties((emlrtCTX)sp, &y, 0, 1, (const char_T **)&propNames,
                        (const char_T **)&propClasses, &propValues);
  emlrtAssign(&y, emlrtConvertInstanceToRedirectSource(
                      (emlrtCTX)sp, y, 0, "coder.internal.string"));
  return y;
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp,
                                          const b_rtString u)
{
  static const int32_T b_iv[2] = {1, 13};
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *propValues;
  const mxArray *y;
  const char_T *propClasses = "coder.internal.string";
  const char_T *propNames = "Value";
  y = NULL;
  m = NULL;
  emlrtAssign(
      &y, emlrtCreateClassInstance2022a((emlrtCTX)sp, "coder.internal.string"));
  m = NULL;
  b_y = NULL;
  propValues = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 13, propValues, &u.Value[0]);
  emlrtAssign(&b_y, propValues);
  emlrtAssign(&m, b_y);
  propValues = m;
  emlrtSetAllProperties((emlrtCTX)sp, &y, 0, 1, (const char_T **)&propNames,
                        (const char_T **)&propClasses, &propValues);
  emlrtAssign(&y, emlrtConvertInstanceToRedirectSource(
                      (emlrtCTX)sp, y, 0, "coder.internal.string"));
  return y;
}

static const mxArray *e_emlrt_marshallOut(void)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateLogicalScalar(true);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const c_rtString u)
{
  static const int32_T b_iv[2] = {1, 2};
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *propValues;
  const mxArray *y;
  const char_T *propClasses = "coder.internal.string";
  const char_T *propNames = "Value";
  y = NULL;
  m = NULL;
  emlrtAssign(
      &y, emlrtCreateClassInstance2022a((emlrtCTX)sp, "coder.internal.string"));
  m = NULL;
  b_y = NULL;
  propValues = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 2, propValues, &u.Value[0]);
  emlrtAssign(&b_y, propValues);
  emlrtAssign(&m, b_y);
  propValues = m;
  emlrtSetAllProperties((emlrtCTX)sp, &y, 0, 1, (const char_T **)&propNames,
                        (const char_T **)&propClasses, &propValues);
  emlrtAssign(&y, emlrtConvertInstanceToRedirectSource(
                      (emlrtCTX)sp, y, 0, "coder.internal.string"));
  return y;
}

real_T Fonction_Somme(Fonction_SommeStackData *SD, const emlrtStack *sp,
                      const uint8_T b_I[29630592])
{
  static const char_T cv[19] = {'p', 'a', 's',    ' ', 'd', 'e', ' ',
                                'p', 'i', '\xe8', 'c', 'e', 's', ' ',
                                'd', 'e', ' ',    'u', 'n'};
  static const char_T cv1[13] = {'p', 'a', 's', ' ', 'd', 'e', ' ',
                                 't', 'a', 'm', 'p', 'o', 'n'};
  emlrtStack st;
  emxArray_real_T *MOYENNE;
  emxArray_real_T *RadiusDeux;
  emxArray_real_T *RadiusJaunes;
  emxArray_real_T *RadiusRouges;
  emxArray_real_T *RadiusUn;
  emxArray_real_T *a;
  emxArray_real_T *b;
  emxArray_real_T *centers;
  emxArray_real_T *lab_fabric;
  emxArray_real_T *metric;
  emxArray_real_T *radii;
  emxArray_uint8_T *Ar;
  real_T C1;
  real_T C10;
  real_T C2;
  real_T C20;
  real_T C5;
  real_T C50;
  real_T Deux;
  real_T Jaunes;
  real_T Mb;
  real_T R;
  real_T R2;
  real_T Rad;
  real_T Rouges;
  real_T Somme;
  real_T Un;
  real_T *MOYENNE_data;
  real_T *RadiusDeux_data;
  real_T *RadiusJaunes_data;
  real_T *RadiusRouges_data;
  real_T *RadiusUn_data;
  real_T *a_data;
  real_T *centers_data;
  real_T *lab_fabric_data;
  real_T *radii_data;
  int32_T b_iv[3];
  int32_T iv1[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T j;
  int32_T k;
  int32_T loop_ub;
  int32_T n;
  uint32_T d;
  uint32_T ja;
  uint32_T ro;
  uint32_T u;
  uint8_T uv[3];
  uint8_T threshRGB[2];
  uint8_T *Ar_data;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  covrtLogFcn(&emlrtCoverageInstance, 0U, 0U);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 0U);
  st.site = &emlrtRSI;
  imresize(SD, &st, b_I, SD->f13.A);
  st.site = &b_emlrtRSI;
  multithresh(SD, &st, SD->f13.A, threshRGB);
  uv[0] = 0U;
  uv[1] = threshRGB[1];
  uv[2] = MAX_uint8_T;
  st.site = &c_emlrtRSI;
  imquantize(&st, SD->f13.A, threshRGB, uv, SD->f13.B);
  rgb2gray(SD->f13.B, SD->f13.b_B);
  for (i = 0; i < 374400; i++) {
    SD->f13.c_B[i] = (SD->f13.b_B[i] > 252.45);
  }
  emxInit_real_T(sp, &centers, 2, &nb_emlrtRTEI, true);
  emxInit_real_T(sp, &radii, 2, &nb_emlrtRTEI, true);
  emxInit_real_T(sp, &metric, 2, &nb_emlrtRTEI, true);
  st.site = &e_emlrtRSI;
  imfindcircles(SD, &st, SD->f13.c_B, centers, radii, metric);
  radii_data = radii->data;
  centers_data = centers->data;
  emxFree_real_T(sp, &metric);
  if ((centers->size[0] == 0) || (centers->size[1] == 0)) {
    n = 0;
  } else {
    n = muIntScalarMax_sint32(centers->size[0], centers->size[1]);
  }
  emxInit_real_T(sp, &MOYENNE, 2, &db_emlrtRTEI, true);
  i = MOYENNE->size[0] * MOYENNE->size[1];
  MOYENNE->size[0] = n;
  MOYENNE->size[1] = 2;
  emxEnsureCapacity_real_T(sp, MOYENNE, i, &db_emlrtRTEI);
  MOYENNE_data = MOYENNE->data;
  loop_ub = n << 1;
  for (i = 0; i < loop_ub; i++) {
    MOYENNE_data[i] = 0.0;
  }
  Rouges = 0.0;
  if ((centers->size[0] == 0) || (centers->size[1] == 0)) {
    n = 0;
  } else {
    n = muIntScalarMax_sint32(centers->size[0], centers->size[1]);
  }
  emxInit_real_T(sp, &RadiusRouges, 1, &eb_emlrtRTEI, true);
  i = RadiusRouges->size[0];
  RadiusRouges->size[0] = n;
  emxEnsureCapacity_real_T(sp, RadiusRouges, i, &eb_emlrtRTEI);
  RadiusRouges_data = RadiusRouges->data;
  for (i = 0; i < n; i++) {
    RadiusRouges_data[i] = 0.0;
  }
  ro = 1U;
  Jaunes = 0.0;
  if ((centers->size[0] == 0) || (centers->size[1] == 0)) {
    n = 0;
  } else {
    n = muIntScalarMax_sint32(centers->size[0], centers->size[1]);
  }
  emxInit_real_T(sp, &RadiusJaunes, 1, &fb_emlrtRTEI, true);
  i = RadiusJaunes->size[0];
  RadiusJaunes->size[0] = n;
  emxEnsureCapacity_real_T(sp, RadiusJaunes, i, &fb_emlrtRTEI);
  RadiusJaunes_data = RadiusJaunes->data;
  for (i = 0; i < n; i++) {
    RadiusJaunes_data[i] = 0.0;
  }
  ja = 1U;
  Deux = 0.0;
  if ((centers->size[0] == 0) || (centers->size[1] == 0)) {
    n = 0;
  } else {
    n = muIntScalarMax_sint32(centers->size[0], centers->size[1]);
  }
  emxInit_real_T(sp, &RadiusDeux, 1, &gb_emlrtRTEI, true);
  i = RadiusDeux->size[0];
  RadiusDeux->size[0] = n;
  emxEnsureCapacity_real_T(sp, RadiusDeux, i, &gb_emlrtRTEI);
  RadiusDeux_data = RadiusDeux->data;
  for (i = 0; i < n; i++) {
    RadiusDeux_data[i] = 0.0;
  }
  d = 1U;
  Un = 0.0;
  if ((centers->size[0] == 0) || (centers->size[1] == 0)) {
    n = 0;
  } else {
    n = muIntScalarMax_sint32(centers->size[0], centers->size[1]);
  }
  emxInit_real_T(sp, &RadiusUn, 1, &hb_emlrtRTEI, true);
  i = RadiusUn->size[0];
  RadiusUn->size[0] = n;
  emxEnsureCapacity_real_T(sp, RadiusUn, i, &hb_emlrtRTEI);
  RadiusUn_data = RadiusUn->data;
  for (i = 0; i < n; i++) {
    RadiusUn_data[i] = 0.0;
  }
  u = 1U;
  C1 = 0.0;
  C2 = 0.0;
  C5 = 0.0;
  C10 = 0.0;
  C20 = 0.0;
  C50 = 0.0;
  R = 1.0;
  Rad = 1.0;
  if ((centers->size[0] == 0) || (centers->size[1] == 0)) {
    n = 0;
  } else {
    n = muIntScalarMax_sint32(centers->size[0], centers->size[1]);
  }
  emxInit_uint8_T(sp, &Ar, 3, &lb_emlrtRTEI);
  emxInit_real_T(sp, &lab_fabric, 3, &mb_emlrtRTEI, true);
  emxInit_real_T(sp, &a, 2, &ib_emlrtRTEI, true);
  emxInit_real_T(sp, &b, 2, &jb_emlrtRTEI, true);
  for (k = 0; k < n; k++) {
    real_T b_centers[4];
    real_T Ma;
    real_T r;
    covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 1U);
    if (centers->size[1] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, centers->size[1], &b_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (k + 1 > centers->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, centers->size[0], &emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (centers->size[1] < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, centers->size[1], &d_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (k + 1 > centers->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, centers->size[0], &c_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = radii->size[0] * radii->size[1];
    if (k + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, i, &e_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    r = muDoubleScalarAbs(radii_data[k]);
    b_centers[0] = centers_data[k] - r;
    b_centers[1] = centers_data[k + centers->size[0]] - r;
    b_centers[2] = 2.0 * r;
    b_centers[3] = 2.0 * r;
    st.site = &hk_emlrtRSI;
    imcrop(&st, SD->f13.A, b_centers, Ar);
    Ar_data = Ar->data;
    i = Ar->size[0];
    for (b_i = 0; b_i < i; b_i++) {
      covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 1, 1);
      i1 = Ar->size[1];
      for (j = 0; j < i1; j++) {
        covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 2, 1);
        R2 = muDoubleScalarAbs(((real_T)b_i + 1.0) - r);
        Mb = muDoubleScalarAbs(((real_T)j + 1.0) - r);
        if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 0,
                       muDoubleScalarSqrt(R2 * R2 + Mb * Mb) > r)) {
          covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 2U);
          if (b_i + 1 > Ar->size[0]) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Ar->size[0], &f_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (j + 1 > Ar->size[1]) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, Ar->size[1], &g_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          b_iv[0] = 1;
          b_iv[1] = 1;
          b_iv[2] = Ar->size[2];
          iv1[0] = 1;
          iv1[1] = 3;
          emlrtSubAssignSizeCheckR2012b(&b_iv[0], 3, &iv1[0], 2, &emlrtECI,
                                        (emlrtCTX)sp);
          loop_ub = Ar->size[2];
          for (i2 = 0; i2 < loop_ub; i2++) {
            Ar_data[(b_i + Ar->size[0] * j) + Ar->size[0] * Ar->size[1] * i2] =
                MAX_uint8_T;
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 2, 0);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 1, 0);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 3U);
    st.site = &g_emlrtRSI;
    rgb2lab(&st, Ar, lab_fabric);
    lab_fabric_data = lab_fabric->data;
    if (lab_fabric->size[2] < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, lab_fabric->size[2], &h_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = a->size[0] * a->size[1];
    a->size[0] = lab_fabric->size[0];
    a->size[1] = lab_fabric->size[1];
    emxEnsureCapacity_real_T(sp, a, i, &ib_emlrtRTEI);
    a_data = a->data;
    loop_ub = lab_fabric->size[1];
    for (i = 0; i < loop_ub; i++) {
      j = lab_fabric->size[0];
      for (i1 = 0; i1 < j; i1++) {
        a_data[i1 + a->size[0] * i] =
            lab_fabric_data[(i1 + lab_fabric->size[0] * i) +
                            lab_fabric->size[0] * lab_fabric->size[1]];
      }
    }
    if (lab_fabric->size[2] < 3) {
      emlrtDynamicBoundsCheckR2012b(3, 1, lab_fabric->size[2], &i_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = b->size[0] * b->size[1];
    b->size[0] = lab_fabric->size[0];
    b->size[1] = lab_fabric->size[1];
    emxEnsureCapacity_real_T(sp, b, i, &jb_emlrtRTEI);
    a_data = b->data;
    loop_ub = lab_fabric->size[1];
    for (i = 0; i < loop_ub; i++) {
      j = lab_fabric->size[0];
      for (i1 = 0; i1 < j; i1++) {
        a_data[i1 + b->size[0] * i] =
            lab_fabric_data[(i1 + lab_fabric->size[0] * i) +
                            lab_fabric->size[0] * lab_fabric->size[1] * 2];
      }
    }
    if (k + 1 > MOYENNE->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, MOYENNE->size[0], &o_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    st.site = &h_emlrtRSI;
    MOYENNE_data[k] = mean2(&st, a);
    if (k + 1 > MOYENNE->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, MOYENNE->size[0], &p_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    st.site = &i_emlrtRSI;
    MOYENNE_data[k + MOYENNE->size[0]] = mean2(&st, b);
    st.site = &j_emlrtRSI;
    Ma = mean2(&st, a);
    st.site = &k_emlrtRSI;
    Mb = mean2(&st, b);
    if (covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 0, Ma < 4.0) &&
        covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 1, Mb < 15.0)) {
      c_rtString c_obj;
      covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 0, true);
      covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 1, true);
      c_obj.Value[0] = 'o';
      c_obj.Value[1] = 'k';
      st.site = &ck_emlrtRSI;
      emlrtDisplayR2012b(emlrt_marshallOut(&st, c_obj), "ans", &emlrtRTEI,
                         (emlrtCTX)sp);
      i = Ar->size[0];
      for (b_i = 0; b_i < i; b_i++) {
        covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 3, 1);
        i1 = Ar->size[1];
        for (j = 0; j < i1; j++) {
          covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 4, 1);
          R2 = muDoubleScalarAbs(((real_T)b_i + 1.0) - r);
          Mb = muDoubleScalarAbs(((real_T)j + 1.0) - r);
          if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 2,
                         muDoubleScalarSqrt(R2 * R2 + Mb * Mb) > 0.6 * r)) {
            covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 4U);
            if (b_i + 1 > Ar->size[0]) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Ar->size[0],
                                            &j_emlrtBCI, (emlrtConstCTX)sp);
            }
            if (j + 1 > Ar->size[1]) {
              emlrtDynamicBoundsCheckR2012b(j + 1, 1, Ar->size[1], &k_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            b_iv[0] = 1;
            b_iv[1] = 1;
            b_iv[2] = Ar->size[2];
            iv1[0] = 1;
            iv1[1] = 3;
            emlrtSubAssignSizeCheckR2012b(&b_iv[0], 3, &iv1[0], 2, &b_emlrtECI,
                                          (emlrtCTX)sp);
            loop_ub = Ar->size[2];
            for (i2 = 0; i2 < loop_ub; i2++) {
              Ar_data[(b_i + Ar->size[0] * j) +
                      Ar->size[0] * Ar->size[1] * i2] = MAX_uint8_T;
            }
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }
        covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 4, 0);
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 3, 0);
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 5U);
      st.site = &m_emlrtRSI;
      rgb2lab(&st, Ar, lab_fabric);
      lab_fabric_data = lab_fabric->data;
      if (lab_fabric->size[2] < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, lab_fabric->size[2], &l_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i = a->size[0] * a->size[1];
      a->size[0] = lab_fabric->size[0];
      a->size[1] = lab_fabric->size[1];
      emxEnsureCapacity_real_T(sp, a, i, &kb_emlrtRTEI);
      a_data = a->data;
      loop_ub = lab_fabric->size[1];
      for (i = 0; i < loop_ub; i++) {
        j = lab_fabric->size[0];
        for (i1 = 0; i1 < j; i1++) {
          a_data[i1 + a->size[0] * i] =
              lab_fabric_data[(i1 + lab_fabric->size[0] * i) +
                              lab_fabric->size[0] * lab_fabric->size[1] * 2];
        }
      }
      st.site = &n_emlrtRSI;
      Mb = mean2(&st, a);
      if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 3, Mb > 4.0)) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 6U);
        Deux++;
        if (((int32_T)d < 1) || ((int32_T)d > RadiusDeux->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, RadiusDeux->size[0],
                                        &v_emlrtBCI, (emlrtConstCTX)sp);
        }
        RadiusDeux_data[(int32_T)d - 1] = r;
        d++;
      } else {
        covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 7U);
        Un++;
        if (((int32_T)u < 1) || ((int32_T)u > RadiusUn->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)u, 1, RadiusUn->size[0],
                                        &u_emlrtBCI, (emlrtConstCTX)sp);
        }
        RadiusUn_data[(int32_T)u - 1] = r;
        u++;
      }
    } else {
      covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 0, false);
      covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 1, false);
    }
    if (covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 2, Ma < 7.0) &&
        covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 3, Mb > 12.0)) {
      covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 1, true);
      covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 4, true);
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 8U);
      Jaunes++;
      if (((int32_T)ja < 1) || ((int32_T)ja > RadiusJaunes->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)ja, 1, RadiusJaunes->size[0],
                                      &s_emlrtBCI, (emlrtConstCTX)sp);
      }
      RadiusJaunes_data[(int32_T)ja - 1] = r;
      ja++;
    } else {
      covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 1, false);
      covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 4, false);
    }
    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 5, Ma > 6.0)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 9U);
      Rouges++;
      if (((int32_T)ro < 1) || ((int32_T)ro > RadiusRouges->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)ro, 1, RadiusRouges->size[0],
                                      &t_emlrtBCI, (emlrtConstCTX)sp);
      }
      RadiusRouges_data[(int32_T)ro - 1] = r;
      ro++;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emxFree_real_T(sp, &radii);
  emxFree_real_T(sp, &centers);
  emxFree_real_T(sp, &b);
  emxFree_real_T(sp, &a);
  emxFree_real_T(sp, &lab_fabric);
  emxFree_uint8_T(sp, &Ar);
  emxFree_real_T(sp, &MOYENNE);
  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 10U);
  j = RadiusUn->size[0];
  for (b_i = 0; b_i < j; b_i++) {
    if (RadiusUn_data[b_i] == 0.0) {
      if (b_i + 1 > RadiusUn->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, RadiusUn->size[0],
                                      &m_emlrtBCI, (emlrtConstCTX)sp);
      }
      RadiusUn_data[b_i] = rtNaN;
    }
  }
  /*  remplace les 0 par NaN dans la liste */
  Mb = b_mean(RadiusUn);
  emxFree_real_T(sp, &RadiusUn);
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 6, muDoubleScalarIsNaN(Mb))) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 11U);
    Mb = 0.0;
  }
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 12U);
  j = RadiusDeux->size[0];
  for (b_i = 0; b_i < j; b_i++) {
    if (RadiusDeux_data[b_i] == 0.0) {
      if (b_i + 1 > RadiusDeux->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, RadiusDeux->size[0],
                                      &n_emlrtBCI, (emlrtConstCTX)sp);
      }
      RadiusDeux_data[b_i] = rtNaN;
    }
  }
  /*  remplace les 0 par NaN dans la liste */
  R2 = b_mean(RadiusDeux);
  emxFree_real_T(sp, &RadiusDeux);
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 7, muDoubleScalarIsNaN(R2))) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 13U);
    R2 = 0.0;
  }
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 8, Un != 0.0)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 14U);
    Rad = Mb;
    R = 11.625;
  } else {
    rtString obj;
    for (i = 0; i < 19; i++) {
      obj.Value[i] = cv[i];
    }
    st.site = &dk_emlrtRSI;
    emlrtDisplayR2012b(b_emlrt_marshallOut(&st, obj), "ans", &b_emlrtRTEI,
                       (emlrtCTX)sp);
    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 9, Deux != 0.0)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 15U);
      emlrtDisplayR2012b(e_emlrt_marshallOut(), "ans", &d_emlrtRTEI,
                         (emlrtCTX)sp);
      Rad = R2;
      R = 12.875;
    } else {
      b_rtString b_obj;
      for (i = 0; i < 13; i++) {
        b_obj.Value[i] = cv1[i];
      }
      st.site = &ek_emlrtRSI;
      emlrtDisplayR2012b(c_emlrt_marshallOut(&st, b_obj), "ans", &c_emlrtRTEI,
                         (emlrtCTX)sp);
    }
  }
  i = (int32_T)Jaunes;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, Jaunes, mxDOUBLE_CLASS,
                                (int32_T)Jaunes, &e_emlrtRTEI,
                                (emlrtConstCTX)sp);
  for (k = 0; k < i; k++) {
    covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 5, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 16U);
    if (((int32_T)((uint32_T)k + 1U) < 1) ||
        ((int32_T)((uint32_T)k + 1U) > RadiusJaunes->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)k + 1U), 1,
                                    RadiusJaunes->size[0], &q_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Mb = RadiusJaunes_data[k] * R / Rad;
    if (covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 4, Mb > 11.55) &&
        covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 5, Mb < 14.0)) {
      covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 2, true);
      covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 10, true);
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 17U);
      C50++;
    } else {
      covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 2, false);
      covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 10, false);
      if (covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 6, Mb > 10.6) &&
          covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 7, Mb < 11.55)) {
        covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 3, true);
        covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 11, true);
        covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 18U);
        C20++;
      } else {
        covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 3, false);
        covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 11, false);
        if (covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 8, Mb > 9.0) &&
            covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 9, Mb < 10.6)) {
          covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 4, true);
          covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 12, true);
          covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 19U);
          C10++;
        } else {
          covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 4, false);
          covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 12, false);
        }
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emxFree_real_T(sp, &RadiusJaunes);
  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 5, 0);
  i = (int32_T)Rouges;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, Rouges, mxDOUBLE_CLASS,
                                (int32_T)Rouges, &f_emlrtRTEI,
                                (emlrtConstCTX)sp);
  for (k = 0; k < i; k++) {
    covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 6, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 20U);
    if (((int32_T)((uint32_T)k + 1U) < 1) ||
        ((int32_T)((uint32_T)k + 1U) > RadiusRouges->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)k + 1U), 1,
                                    RadiusRouges->size[0], &r_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Mb = RadiusRouges_data[k] * R / Rad;
    if (covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 10, Mb > 10.0) &&
        covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 11, Mb < 15.0)) {
      covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 5, true);
      covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 13, true);
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 21U);
      C5++;
    } else {
      covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 5, false);
      covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 13, false);
      if (covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 12, Mb > 9.0) &&
          covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 13, Mb < 10.0)) {
        covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 6, true);
        covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 14, true);
        covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 22U);
        C2++;
      } else {
        covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 6, false);
        covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 14, false);
        if (covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 14, Mb > 7.5) &&
            covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 15, Mb < 9.0)) {
          covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 7, true);
          covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 15, true);
          covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 23U);
          C1++;
        } else {
          covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 7, false);
          covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 15, false);
        }
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emxFree_real_T(sp, &RadiusRouges);
  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 6, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 24U);
  Somme = ((((((C1 * 0.01 + C2 * 0.02) + C5 * 0.05) + C10 * 0.1) + C20 * 0.2) +
            C50 * 0.5) +
           Un) +
          Deux * 2.0;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
  return Somme;
}

/* End of code generation (Fonction_Somme.c) */
