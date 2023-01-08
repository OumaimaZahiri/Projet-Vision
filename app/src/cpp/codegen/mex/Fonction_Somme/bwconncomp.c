/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * bwconncomp.c
 *
 * Code generation for function 'bwconncomp'
 *
 */

/* Include files */
#include "bwconncomp.h"
#include "Fonction_Somme_data.h"
#include "Fonction_Somme_emxutil.h"
#include "Fonction_Somme_types.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "useConstantDim.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ug_emlrtRSI = {
    79,           /* lineNo */
    "bwconncomp", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m" /* pathName
                                                                         */
};

static emlrtRSInfo vg_emlrtRSI = {
    71,           /* lineNo */
    "bwconncomp", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m" /* pathName
                                                                         */
};

static emlrtRSInfo wg_emlrtRSI = {
    70,           /* lineNo */
    "bwconncomp", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m" /* pathName
                                                                         */
};

static emlrtRSInfo xg_emlrtRSI = {
    69,           /* lineNo */
    "bwconncomp", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m" /* pathName
                                                                         */
};

static emlrtRSInfo yg_emlrtRSI = {
    57,           /* lineNo */
    "bwconncomp", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m" /* pathName
                                                                         */
};

static emlrtRSInfo ah_emlrtRSI = {
    44,           /* lineNo */
    "bwconncomp", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m" /* pathName
                                                                         */
};

static emlrtRSInfo bh_emlrtRSI = {
    23,           /* lineNo */
    "bwconncomp", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m" /* pathName
                                                                         */
};

static emlrtRSInfo ch_emlrtRSI = {
    51,                      /* lineNo */
    "intermediateLabelRuns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m" /* pathName */
};

static emlrtRSInfo dh_emlrtRSI = {
    114,                     /* lineNo */
    "intermediateLabelRuns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m" /* pathName */
};

static emlrtRSInfo eh_emlrtRSI = {
    149,           /* lineNo */
    "uf_new_pair", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m" /* pathName */
};

static emlrtRSInfo fh_emlrtRSI = {
    150,           /* lineNo */
    "uf_new_pair", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m" /* pathName */
};

static emlrtRSInfo gh_emlrtRSI = {
    153,           /* lineNo */
    "uf_new_pair", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m" /* pathName */
};

static emlrtRSInfo kh_emlrtRSI = {
    16,      /* lineNo */
    "cumop", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop."
    "m" /* pathName */
};

static emlrtBCInfo jd_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    80,           /* lineNo */
    63,           /* colNo */
    "",           /* aName */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    73,           /* lineNo */
    82,           /* colNo */
    "",           /* aName */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    59,           /* lineNo */
    52,           /* colNo */
    "",           /* aName */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtDCInfo emlrtDCI = {
    48,                      /* lineNo */
    33,                      /* colNo */
    "intermediateLabelRuns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    4                                 /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    46,           /* lineNo */
    25,           /* colNo */
    "",           /* aName */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    52,           /* lineNo */
    44,           /* colNo */
    "",           /* aName */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    52,           /* lineNo */
    60,           /* colNo */
    "",           /* aName */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    52,           /* lineNo */
    22,           /* colNo */
    "",           /* aName */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    48,           /* lineNo */
    26,           /* colNo */
    "",           /* aName */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    233,              /* lineNo */
    15,               /* colNo */
    "",               /* aName */
    "fillRunVectors", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    234,              /* lineNo */
    16,               /* colNo */
    "",               /* aName */
    "fillRunVectors", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = {
    -1,                      /* iFirst */
    -1,                      /* iLast */
    75,                      /* lineNo */
    18,                      /* colNo */
    "",                      /* aName */
    "intermediateLabelRuns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = {
    -1,                      /* iFirst */
    -1,                      /* iLast */
    81,                      /* lineNo */
    22,                      /* colNo */
    "",                      /* aName */
    "intermediateLabelRuns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    62,           /* lineNo */
    46,           /* colNo */
    "",           /* aName */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    62,           /* lineNo */
    62,           /* colNo */
    "",           /* aName */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    62,           /* lineNo */
    76,           /* colNo */
    "",           /* aName */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo yd_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    62,           /* lineNo */
    23,           /* colNo */
    "",           /* aName */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    238,              /* lineNo */
    16,               /* colNo */
    "",               /* aName */
    "fillRunVectors", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo be_emlrtBCI = {
    -1,                      /* iFirst */
    -1,                      /* iLast */
    80,                      /* lineNo */
    34,                      /* colNo */
    "",                      /* aName */
    "intermediateLabelRuns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo ce_emlrtBCI = {
    -1,                      /* iFirst */
    -1,                      /* iLast */
    86,                      /* lineNo */
    34,                      /* colNo */
    "",                      /* aName */
    "intermediateLabelRuns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo de_emlrtBCI = {
    -1,                      /* iFirst */
    -1,                      /* iLast */
    130,                     /* lineNo */
    25,                      /* colNo */
    "",                      /* aName */
    "intermediateLabelRuns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo ee_emlrtBCI = {
    -1,                      /* iFirst */
    -1,                      /* iLast */
    134,                     /* lineNo */
    25,                      /* colNo */
    "",                      /* aName */
    "intermediateLabelRuns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo fe_emlrtBCI = {
    -1,                      /* iFirst */
    -1,                      /* iLast */
    95,                      /* lineNo */
    25,                      /* colNo */
    "",                      /* aName */
    "intermediateLabelRuns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo ge_emlrtBCI = {
    -1,                      /* iFirst */
    -1,                      /* iLast */
    95,                      /* lineNo */
    41,                      /* colNo */
    "",                      /* aName */
    "intermediateLabelRuns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo he_emlrtBCI = {
    -1,                      /* iFirst */
    -1,                      /* iLast */
    95,                      /* lineNo */
    66,                      /* colNo */
    "",                      /* aName */
    "intermediateLabelRuns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo ie_emlrtBCI = {
    -1,                      /* iFirst */
    -1,                      /* iLast */
    95,                      /* lineNo */
    80,                      /* colNo */
    "",                      /* aName */
    "intermediateLabelRuns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    69,           /* lineNo */
    37,           /* colNo */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m", /* pName
                                                                          */
    1 /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    69,           /* lineNo */
    37,           /* colNo */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m", /* pName
                                                                          */
    4 /* checkKind */
};

static emlrtBCInfo je_emlrtBCI = {
    -1,                      /* iFirst */
    -1,                      /* iLast */
    99,                      /* lineNo */
    37,                      /* colNo */
    "",                      /* aName */
    "intermediateLabelRuns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = {
    -1,                      /* iFirst */
    -1,                      /* iLast */
    108,                     /* lineNo */
    41,                      /* colNo */
    "",                      /* aName */
    "intermediateLabelRuns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo le_emlrtBCI = {
    -1,                      /* iFirst */
    -1,                      /* iLast */
    108,                     /* lineNo */
    63,                      /* colNo */
    "",                      /* aName */
    "intermediateLabelRuns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = {
    -1,                      /* iFirst */
    -1,                      /* iLast */
    103,                     /* lineNo */
    58,                      /* colNo */
    "",                      /* aName */
    "intermediateLabelRuns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo ne_emlrtBCI = {
    -1,                      /* iFirst */
    -1,                      /* iLast */
    103,                     /* lineNo */
    37,                      /* colNo */
    "",                      /* aName */
    "intermediateLabelRuns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo oe_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    181,            /* lineNo */
    23,             /* colNo */
    "",             /* aName */
    "uf_find_root", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo pe_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    182,            /* lineNo */
    27,             /* colNo */
    "",             /* aName */
    "uf_find_root", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo qe_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    182,            /* lineNo */
    34,             /* colNo */
    "",             /* aName */
    "uf_find_root", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo re_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    182,            /* lineNo */
    12,             /* colNo */
    "",             /* aName */
    "uf_find_root", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo se_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    183,            /* lineNo */
    19,             /* colNo */
    "",             /* aName */
    "uf_find_root", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo te_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    170,        /* lineNo */
    12,         /* colNo */
    "",         /* aName */
    "uf_union", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo ue_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    167,        /* lineNo */
    12,         /* colNo */
    "",         /* aName */
    "uf_union", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo ve_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    171,        /* lineNo */
    12,         /* colNo */
    "",         /* aName */
    "uf_union", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo we_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    168,        /* lineNo */
    12,         /* colNo */
    "",         /* aName */
    "uf_union", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo xe_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    76,           /* lineNo */
    52,           /* colNo */
    "",           /* aName */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo ye_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    79,           /* lineNo */
    31,           /* colNo */
    "",           /* aName */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo af_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    79,           /* lineNo */
    41,           /* colNo */
    "",           /* aName */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo bf_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    80,           /* lineNo */
    22,           /* colNo */
    "",           /* aName */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo cf_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    81,           /* lineNo */
    26,           /* colNo */
    "",           /* aName */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo df_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    81,           /* lineNo */
    35,           /* colNo */
    "",           /* aName */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtRTEInfo lf_emlrtRTEI = {
    48,                      /* lineNo */
    27,                      /* colNo */
    "intermediateLabelRuns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m" /* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = {
    49,                      /* lineNo */
    25,                      /* colNo */
    "intermediateLabelRuns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m" /* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = {
    50,                      /* lineNo */
    28,                      /* colNo */
    "intermediateLabelRuns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m" /* pName */
};

static emlrtRTEInfo of_emlrtRTEI = {
    39,           /* lineNo */
    35,           /* colNo */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m" /* pName
                                                                         */
};

static emlrtRTEInfo pf_emlrtRTEI = {
    55,                      /* lineNo */
    1,                       /* colNo */
    "intermediateLabelRuns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\intermediateLabelRuns.m" /* pName */
};

static emlrtRTEInfo qf_emlrtRTEI = {
    55,           /* lineNo */
    1,            /* colNo */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m" /* pName
                                                                         */
};

static emlrtRTEInfo rf_emlrtRTEI = {
    33,           /* lineNo */
    5,            /* colNo */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m" /* pName
                                                                         */
};

static emlrtRTEInfo sf_emlrtRTEI = {
    69,           /* lineNo */
    31,           /* colNo */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m" /* pName
                                                                         */
};

static emlrtRTEInfo tf_emlrtRTEI = {
    14,       /* lineNo */
    5,        /* colNo */
    "cumsum", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\cumsum.m" /* pName
                                                                           */
};

static emlrtRTEInfo uf_emlrtRTEI = {
    70,           /* lineNo */
    1,            /* colNo */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m" /* pName
                                                                         */
};

static emlrtRTEInfo vf_emlrtRTEI = {
    89,           /* lineNo */
    1,            /* colNo */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m" /* pName
                                                                         */
};

static emlrtRTEInfo wf_emlrtRTEI = {
    11,           /* lineNo */
    6,            /* colNo */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m" /* pName
                                                                         */
};

static emlrtRTEInfo xf_emlrtRTEI = {
    39,           /* lineNo */
    1,            /* colNo */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m" /* pName
                                                                         */
};

static emlrtRTEInfo yf_emlrtRTEI = {
    1,            /* lineNo */
    15,           /* colNo */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m" /* pName
                                                                         */
};

static emlrtRTEInfo ag_emlrtRTEI = {
    70,           /* lineNo */
    46,           /* colNo */
    "bwconncomp", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m" /* pName
                                                                         */
};

/* Function Definitions */
void bwconncomp(const emlrtStack *sp, const boolean_T varargin_1[374400],
                real_T *CC_Connectivity, real_T CC_ImageSize[2],
                real_T *CC_NumObjects, emxArray_real_T *CC_RegionIndices,
                emxArray_int32_T *CC_RegionLengths)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emxArray_int16_T *endRow;
  emxArray_int16_T *startCol;
  emxArray_int16_T *startRow;
  emxArray_int32_T *idxCount;
  emxArray_int32_T *labelsRenumbered;
  emxArray_int32_T *pixelIdxList;
  emxArray_int32_T *x;
  real_T *CC_RegionIndices_data;
  int32_T firstRunOnPreviousColumn;
  int32_T firstRunOnThisColumn;
  int32_T i;
  int32_T k;
  int32_T lastRunOnPreviousColumn;
  int32_T numRuns;
  int32_T p;
  int32_T row;
  int32_T runCounter;
  int32_T *idxCount_data;
  int32_T *labelsRenumbered_data;
  int32_T *pixelIdxList_data;
  int32_T *x_data;
  int16_T *endRow_data;
  int16_T *startCol_data;
  int16_T *startRow_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  idxCount_data = CC_RegionLengths->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &bh_emlrtRSI;
  numRuns = 0;
  for (firstRunOnPreviousColumn = 0; firstRunOnPreviousColumn < 900;
       firstRunOnPreviousColumn++) {
    if (varargin_1[416 * firstRunOnPreviousColumn]) {
      numRuns++;
    }
    for (k = 0; k < 415; k++) {
      i = k + 416 * firstRunOnPreviousColumn;
      if (varargin_1[i + 1] && (!varargin_1[i])) {
        numRuns++;
      }
    }
  }
  emxInit_int16_T(&st, &startRow, &yf_emlrtRTEI);
  startRow_data = startRow->data;
  emxInit_int16_T(&st, &endRow, &yf_emlrtRTEI);
  endRow_data = endRow->data;
  emxInit_int16_T(&st, &startCol, &yf_emlrtRTEI);
  startCol_data = startCol->data;
  if (numRuns == 0) {
    startRow->size[0] = 0;
    endRow->size[0] = 0;
    startCol->size[0] = 0;
    CC_RegionLengths->size[0] = 0;
  } else {
    if (numRuns < 0) {
      emlrtNonNegativeCheckR2012b(numRuns, &emlrtDCI, &st);
    }
    i = startRow->size[0];
    startRow->size[0] = numRuns;
    emxEnsureCapacity_int16_T(&st, startRow, i, &lf_emlrtRTEI);
    startRow_data = startRow->data;
    i = endRow->size[0];
    endRow->size[0] = numRuns;
    emxEnsureCapacity_int16_T(&st, endRow, i, &mf_emlrtRTEI);
    endRow_data = endRow->data;
    i = startCol->size[0];
    startCol->size[0] = numRuns;
    emxEnsureCapacity_int16_T(&st, startCol, i, &nf_emlrtRTEI);
    startCol_data = startCol->data;
    b_st.site = &ch_emlrtRSI;
    runCounter = 1;
    for (firstRunOnPreviousColumn = 0; firstRunOnPreviousColumn < 900;
         firstRunOnPreviousColumn++) {
      row = 1;
      while (row <= 416) {
        while ((row <= 416) &&
               (!varargin_1[(row + 416 * firstRunOnPreviousColumn) - 1])) {
          row++;
        }
        if ((row <= 416) &&
            varargin_1[(row + 416 * firstRunOnPreviousColumn) - 1]) {
          if ((runCounter < 1) || (runCounter > startCol->size[0])) {
            emlrtDynamicBoundsCheckR2012b(runCounter, 1, startCol->size[0],
                                          &rd_emlrtBCI, &b_st);
          }
          startCol_data[runCounter - 1] =
              (int16_T)(firstRunOnPreviousColumn + 1);
          if (runCounter > startRow->size[0]) {
            emlrtDynamicBoundsCheckR2012b(runCounter, 1, startRow->size[0],
                                          &sd_emlrtBCI, &b_st);
          }
          startRow_data[runCounter - 1] = (int16_T)row;
          while ((row <= 416) &&
                 varargin_1[(row + 416 * firstRunOnPreviousColumn) - 1]) {
            row++;
          }
          if (runCounter > endRow->size[0]) {
            emlrtDynamicBoundsCheckR2012b(runCounter, 1, endRow->size[0],
                                          &ae_emlrtBCI, &b_st);
          }
          endRow_data[runCounter - 1] = (int16_T)(row - 1);
          runCounter++;
        }
      }
    }
    i = CC_RegionLengths->size[0];
    CC_RegionLengths->size[0] = numRuns;
    emxEnsureCapacity_int32_T(&st, CC_RegionLengths, i, &pf_emlrtRTEI);
    idxCount_data = CC_RegionLengths->data;
    for (i = 0; i < numRuns; i++) {
      idxCount_data[i] = 0;
    }
    k = 1;
    runCounter = 1;
    row = 1;
    firstRunOnPreviousColumn = -1;
    lastRunOnPreviousColumn = -1;
    firstRunOnThisColumn = 1;
    while (k <= numRuns) {
      if ((k < 1) || (k > startCol->size[0])) {
        emlrtDynamicBoundsCheckR2012b(k, 1, startCol->size[0], &td_emlrtBCI,
                                      &st);
      }
      i = startCol_data[k - 1];
      if (i == runCounter + 1) {
        firstRunOnPreviousColumn = firstRunOnThisColumn;
        firstRunOnThisColumn = k;
        lastRunOnPreviousColumn = k - 1;
        if (k > startCol->size[0]) {
          emlrtDynamicBoundsCheckR2012b(k, 1, startCol->size[0], &be_emlrtBCI,
                                        &st);
        }
        runCounter = startCol_data[k - 1];
      } else {
        if (k > startCol->size[0]) {
          emlrtDynamicBoundsCheckR2012b(k, 1, startCol->size[0], &ud_emlrtBCI,
                                        &st);
        }
        if (i > runCounter + 1) {
          firstRunOnPreviousColumn = -1;
          lastRunOnPreviousColumn = -1;
          firstRunOnThisColumn = k;
          if (k > startCol->size[0]) {
            emlrtDynamicBoundsCheckR2012b(k, 1, startCol->size[0], &ce_emlrtBCI,
                                          &st);
          }
          runCounter = i;
        }
      }
      if (firstRunOnPreviousColumn >= 0) {
        for (p = firstRunOnPreviousColumn; p <= lastRunOnPreviousColumn; p++) {
          if (k > endRow->size[0]) {
            emlrtDynamicBoundsCheckR2012b(k, 1, endRow->size[0], &fe_emlrtBCI,
                                          &st);
          }
          if ((p < 1) || (p > startRow->size[0])) {
            emlrtDynamicBoundsCheckR2012b(p, 1, startRow->size[0], &ge_emlrtBCI,
                                          &st);
          }
          if (endRow_data[k - 1] >= startRow_data[p - 1] - 1) {
            if (k > startRow->size[0]) {
              emlrtDynamicBoundsCheckR2012b(k, 1, startRow->size[0],
                                            &he_emlrtBCI, &st);
            }
            if (p > endRow->size[0]) {
              emlrtDynamicBoundsCheckR2012b(p, 1, endRow->size[0], &ie_emlrtBCI,
                                            &st);
            }
            if (startRow_data[k - 1] <= endRow_data[p - 1] + 1) {
              if (k > CC_RegionLengths->size[0]) {
                emlrtDynamicBoundsCheckR2012b(k, 1, CC_RegionLengths->size[0],
                                              &je_emlrtBCI, &st);
              }
              i = idxCount_data[k - 1];
              if (i == 0) {
                if (p > CC_RegionLengths->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(p, 1, CC_RegionLengths->size[0],
                                                &me_emlrtBCI, &st);
                }
                if (k > CC_RegionLengths->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(k, 1, CC_RegionLengths->size[0],
                                                &ne_emlrtBCI, &st);
                }
                idxCount_data[k - 1] = idxCount_data[p - 1];
                row++;
              } else {
                if (k > CC_RegionLengths->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(k, 1, CC_RegionLengths->size[0],
                                                &ke_emlrtBCI, &st);
                }
                if (p > CC_RegionLengths->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(p, 1, CC_RegionLengths->size[0],
                                                &le_emlrtBCI, &st);
                }
                if (i != idxCount_data[p - 1]) {
                  int32_T exitg1;
                  int32_T root_k;
                  int32_T root_p;
                  b_st.site = &dh_emlrtRSI;
                  c_st.site = &eh_emlrtRSI;
                  root_k = k;
                  do {
                    exitg1 = 0;
                    if ((root_k < 1) || (root_k > CC_RegionLengths->size[0])) {
                      emlrtDynamicBoundsCheckR2012b(root_k, 1,
                                                    CC_RegionLengths->size[0],
                                                    &oe_emlrtBCI, &c_st);
                    }
                    i = idxCount_data[root_k - 1];
                    if (root_k != i) {
                      if (root_k > CC_RegionLengths->size[0]) {
                        emlrtDynamicBoundsCheckR2012b(root_k, 1,
                                                      CC_RegionLengths->size[0],
                                                      &qe_emlrtBCI, &c_st);
                      }
                      if ((i < 1) || (i > CC_RegionLengths->size[0])) {
                        emlrtDynamicBoundsCheckR2012b(i, 1,
                                                      CC_RegionLengths->size[0],
                                                      &pe_emlrtBCI, &c_st);
                      }
                      if (root_k > CC_RegionLengths->size[0]) {
                        emlrtDynamicBoundsCheckR2012b(root_k, 1,
                                                      CC_RegionLengths->size[0],
                                                      &re_emlrtBCI, &c_st);
                      }
                      idxCount_data[root_k - 1] = idxCount_data[i - 1];
                      if (root_k > CC_RegionLengths->size[0]) {
                        emlrtDynamicBoundsCheckR2012b(root_k, 1,
                                                      CC_RegionLengths->size[0],
                                                      &se_emlrtBCI, &c_st);
                      }
                      root_k = idxCount_data[root_k - 1];
                    } else {
                      exitg1 = 1;
                    }
                  } while (exitg1 == 0);
                  c_st.site = &fh_emlrtRSI;
                  root_p = p;
                  do {
                    exitg1 = 0;
                    if ((root_p < 1) || (root_p > CC_RegionLengths->size[0])) {
                      emlrtDynamicBoundsCheckR2012b(root_p, 1,
                                                    CC_RegionLengths->size[0],
                                                    &oe_emlrtBCI, &c_st);
                    }
                    i = idxCount_data[root_p - 1];
                    if (root_p != i) {
                      if (root_p > CC_RegionLengths->size[0]) {
                        emlrtDynamicBoundsCheckR2012b(root_p, 1,
                                                      CC_RegionLengths->size[0],
                                                      &qe_emlrtBCI, &c_st);
                      }
                      if ((i < 1) || (i > CC_RegionLengths->size[0])) {
                        emlrtDynamicBoundsCheckR2012b(i, 1,
                                                      CC_RegionLengths->size[0],
                                                      &pe_emlrtBCI, &c_st);
                      }
                      if (root_p > CC_RegionLengths->size[0]) {
                        emlrtDynamicBoundsCheckR2012b(root_p, 1,
                                                      CC_RegionLengths->size[0],
                                                      &re_emlrtBCI, &c_st);
                      }
                      idxCount_data[root_p - 1] = idxCount_data[i - 1];
                      if (root_p > CC_RegionLengths->size[0]) {
                        emlrtDynamicBoundsCheckR2012b(root_p, 1,
                                                      CC_RegionLengths->size[0],
                                                      &se_emlrtBCI, &c_st);
                      }
                      root_p = idxCount_data[root_p - 1];
                    } else {
                      exitg1 = 1;
                    }
                  } while (exitg1 == 0);
                  if (root_k != root_p) {
                    c_st.site = &gh_emlrtRSI;
                    if (root_p < root_k) {
                      if (root_k > CC_RegionLengths->size[0]) {
                        emlrtDynamicBoundsCheckR2012b(root_k, 1,
                                                      CC_RegionLengths->size[0],
                                                      &ue_emlrtBCI, &c_st);
                      }
                      idxCount_data[root_k - 1] = root_p;
                      if (k > CC_RegionLengths->size[0]) {
                        emlrtDynamicBoundsCheckR2012b(k, 1,
                                                      CC_RegionLengths->size[0],
                                                      &we_emlrtBCI, &c_st);
                      }
                      idxCount_data[k - 1] = root_p;
                    } else {
                      if (root_p > CC_RegionLengths->size[0]) {
                        emlrtDynamicBoundsCheckR2012b(root_p, 1,
                                                      CC_RegionLengths->size[0],
                                                      &te_emlrtBCI, &c_st);
                      }
                      idxCount_data[root_p - 1] = root_k;
                      if (p > CC_RegionLengths->size[0]) {
                        emlrtDynamicBoundsCheckR2012b(p, 1,
                                                      CC_RegionLengths->size[0],
                                                      &ve_emlrtBCI, &c_st);
                      }
                      idxCount_data[p - 1] = root_k;
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (k > CC_RegionLengths->size[0]) {
        emlrtDynamicBoundsCheckR2012b(k, 1, CC_RegionLengths->size[0],
                                      &de_emlrtBCI, &st);
      }
      if (idxCount_data[k - 1] == 0) {
        if (k > CC_RegionLengths->size[0]) {
          emlrtDynamicBoundsCheckR2012b(k, 1, CC_RegionLengths->size[0],
                                        &ee_emlrtBCI, &st);
        }
        idxCount_data[k - 1] = row;
        row++;
      }
      k++;
    }
  }
  if (numRuns == 0) {
    CC_ImageSize[0] = 416.0;
    CC_ImageSize[1] = 900.0;
    firstRunOnThisColumn = 0;
    CC_RegionIndices->size[0] = 0;
    i = CC_RegionLengths->size[0];
    CC_RegionLengths->size[0] = 1;
    emxEnsureCapacity_int32_T(sp, CC_RegionLengths, i, &rf_emlrtRTEI);
    idxCount_data = CC_RegionLengths->data;
    idxCount_data[0] = 0;
  } else {
    real_T s;
    emxInit_int32_T(sp, &labelsRenumbered, 1, &xf_emlrtRTEI);
    i = labelsRenumbered->size[0];
    labelsRenumbered->size[0] = CC_RegionLengths->size[0];
    emxEnsureCapacity_int32_T(sp, labelsRenumbered, i, &of_emlrtRTEI);
    labelsRenumbered_data = labelsRenumbered->data;
    firstRunOnThisColumn = 0;
    st.site = &ah_emlrtRSI;
    for (k = 0; k < numRuns; k++) {
      if (k + 1 > CC_RegionLengths->size[0]) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, CC_RegionLengths->size[0],
                                      &md_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (idxCount_data[k] == k + 1) {
        firstRunOnThisColumn++;
        if (k + 1 > labelsRenumbered->size[0]) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, labelsRenumbered->size[0],
                                        &qd_emlrtBCI, (emlrtConstCTX)sp);
        }
        labelsRenumbered_data[k] = firstRunOnThisColumn;
      }
      if (k + 1 > CC_RegionLengths->size[0]) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, CC_RegionLengths->size[0],
                                      &od_emlrtBCI, (emlrtConstCTX)sp);
      }
      i = idxCount_data[k];
      if ((i < 1) || (i > labelsRenumbered->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i, 1, labelsRenumbered->size[0],
                                      &nd_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (k + 1 > labelsRenumbered->size[0]) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, labelsRenumbered->size[0],
                                      &pd_emlrtBCI, (emlrtConstCTX)sp);
      }
      labelsRenumbered_data[k] = labelsRenumbered_data[i - 1];
    }
    i = CC_RegionLengths->size[0];
    CC_RegionLengths->size[0] = firstRunOnThisColumn;
    emxEnsureCapacity_int32_T(sp, CC_RegionLengths, i, &qf_emlrtRTEI);
    idxCount_data = CC_RegionLengths->data;
    for (i = 0; i < firstRunOnThisColumn; i++) {
      idxCount_data[i] = 0;
    }
    st.site = &yg_emlrtRSI;
    for (k = 0; k < numRuns; k++) {
      if (k + 1 > labelsRenumbered->size[0]) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, labelsRenumbered->size[0],
                                      &ld_emlrtBCI, (emlrtConstCTX)sp);
      }
      i = labelsRenumbered_data[k];
      if ((i < 1) || (i > CC_RegionLengths->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i, 1, CC_RegionLengths->size[0],
                                      &vd_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (k + 1 > endRow->size[0]) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, endRow->size[0], &wd_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (k + 1 > startRow->size[0]) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, startRow->size[0], &xd_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      runCounter = labelsRenumbered_data[k];
      if ((runCounter < 1) || (runCounter > CC_RegionLengths->size[0])) {
        emlrtDynamicBoundsCheckR2012b(runCounter, 1, CC_RegionLengths->size[0],
                                      &yd_emlrtBCI, (emlrtConstCTX)sp);
      }
      idxCount_data[runCounter - 1] =
          ((idxCount_data[i - 1] + endRow_data[k]) - startRow_data[k]) + 1;
    }
    st.site = &xg_emlrtRSI;
    b_st.site = &hh_emlrtRSI;
    c_st.site = &ih_emlrtRSI;
    d_st.site = &rd_emlrtRSI;
    if (CC_RegionLengths->size[0] == 0) {
      s = 0.0;
    } else {
      e_st.site = &sd_emlrtRSI;
      f_st.site = &td_emlrtRSI;
      if (CC_RegionLengths->size[0] < 4096) {
        g_st.site = &ud_emlrtRSI;
        s = c_sumColumnB(&g_st, CC_RegionLengths, CC_RegionLengths->size[0]);
      } else {
        runCounter = (int32_T)((uint32_T)CC_RegionLengths->size[0] >> 12);
        row = runCounter << 12;
        firstRunOnPreviousColumn = CC_RegionLengths->size[0] - row;
        s = b_sumColumnB4(CC_RegionLengths, 1);
        for (lastRunOnPreviousColumn = 2; lastRunOnPreviousColumn <= runCounter;
             lastRunOnPreviousColumn++) {
          s += b_sumColumnB4(CC_RegionLengths,
                             ((lastRunOnPreviousColumn - 1) << 12) + 1);
        }
        if (firstRunOnPreviousColumn > 0) {
          g_st.site = &vd_emlrtRSI;
          s += d_sumColumnB(&g_st, CC_RegionLengths, firstRunOnPreviousColumn,
                            row + 1);
        }
      }
    }
    if (!(s >= 0.0)) {
      emlrtNonNegativeCheckR2012b(s, &c_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (s != (int32_T)muDoubleScalarFloor(s)) {
      emlrtIntegerCheckR2012b(s, &b_emlrtDCI, (emlrtConstCTX)sp);
    }
    emxInit_int32_T(sp, &pixelIdxList, 1, &wf_emlrtRTEI);
    i = pixelIdxList->size[0];
    pixelIdxList->size[0] = (int32_T)s;
    emxEnsureCapacity_int32_T(sp, pixelIdxList, i, &sf_emlrtRTEI);
    pixelIdxList_data = pixelIdxList->data;
    emxInit_int32_T(sp, &x, 1, &ag_emlrtRTEI);
    st.site = &wg_emlrtRSI;
    b_st.site = &jh_emlrtRSI;
    runCounter = 2;
    if (CC_RegionLengths->size[0] != 1) {
      runCounter = 1;
    }
    i = x->size[0];
    x->size[0] = CC_RegionLengths->size[0];
    emxEnsureCapacity_int32_T(&b_st, x, i, &tf_emlrtRTEI);
    x_data = x->data;
    row = CC_RegionLengths->size[0];
    for (i = 0; i < row; i++) {
      x_data[i] = idxCount_data[i];
    }
    c_st.site = &kh_emlrtRSI;
    useConstantDim(x, runCounter);
    x_data = x->data;
    emxInit_int32_T(sp, &idxCount, 1, &uf_emlrtRTEI);
    i = idxCount->size[0];
    idxCount->size[0] = x->size[0] + 1;
    emxEnsureCapacity_int32_T(sp, idxCount, i, &uf_emlrtRTEI);
    idxCount_data = idxCount->data;
    idxCount_data[0] = 0;
    row = x->size[0];
    for (i = 0; i < row; i++) {
      idxCount_data[i + 1] = x_data[i];
    }
    emxFree_int32_T(sp, &x);
    st.site = &vg_emlrtRSI;
    for (k = 0; k < numRuns; k++) {
      if (k + 1 > startCol->size[0]) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, startCol->size[0], &kd_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      row = (startCol_data[k] - 1) * 416;
      if (k + 1 > labelsRenumbered->size[0]) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, labelsRenumbered->size[0],
                                      &xe_emlrtBCI, (emlrtConstCTX)sp);
      }
      firstRunOnPreviousColumn = labelsRenumbered_data[k];
      if (k + 1 > startRow->size[0]) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, startRow->size[0], &ye_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i = startRow_data[k];
      if (k + 1 > endRow->size[0]) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, endRow->size[0], &af_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      runCounter = endRow_data[k];
      st.site = &ug_emlrtRSI;
      for (p = i; p <= runCounter; p++) {
        if ((firstRunOnPreviousColumn < 1) ||
            (firstRunOnPreviousColumn > idxCount->size[0])) {
          emlrtDynamicBoundsCheckR2012b(firstRunOnPreviousColumn, 1,
                                        idxCount->size[0], &jd_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (firstRunOnPreviousColumn > idxCount->size[0]) {
          emlrtDynamicBoundsCheckR2012b(firstRunOnPreviousColumn, 1,
                                        idxCount->size[0], &bf_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        idxCount_data[firstRunOnPreviousColumn - 1]++;
        if (firstRunOnPreviousColumn > idxCount->size[0]) {
          emlrtDynamicBoundsCheckR2012b(firstRunOnPreviousColumn, 1,
                                        idxCount->size[0], &df_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        lastRunOnPreviousColumn = idxCount_data[firstRunOnPreviousColumn - 1];
        if ((lastRunOnPreviousColumn < 1) ||
            (lastRunOnPreviousColumn > pixelIdxList->size[0])) {
          emlrtDynamicBoundsCheckR2012b(lastRunOnPreviousColumn, 1,
                                        pixelIdxList->size[0], &cf_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        pixelIdxList_data[lastRunOnPreviousColumn - 1] = p + row;
      }
    }
    emxFree_int32_T(sp, &idxCount);
    emxFree_int32_T(sp, &labelsRenumbered);
    CC_ImageSize[0] = 416.0;
    CC_ImageSize[1] = 900.0;
    i = CC_RegionIndices->size[0];
    CC_RegionIndices->size[0] = pixelIdxList->size[0];
    emxEnsureCapacity_real_T(sp, CC_RegionIndices, i, &vf_emlrtRTEI);
    CC_RegionIndices_data = CC_RegionIndices->data;
    row = pixelIdxList->size[0];
    for (i = 0; i < row; i++) {
      CC_RegionIndices_data[i] = pixelIdxList_data[i];
    }
    emxFree_int32_T(sp, &pixelIdxList);
  }
  emxFree_int16_T(sp, &startCol);
  emxFree_int16_T(sp, &endRow);
  emxFree_int16_T(sp, &startRow);
  *CC_Connectivity = 8.0;
  *CC_NumObjects = firstRunOnThisColumn;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (bwconncomp.c) */
