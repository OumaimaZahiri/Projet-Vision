/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * chaccum.c
 *
 * Code generation for function 'chaccum'
 *
 */

/* Include files */
#include "chaccum.h"
#include "Fonction_Somme_data.h"
#include "Fonction_Somme_emxutil.h"
#include "Fonction_Somme_types.h"
#include "imfilter.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "sub2ind.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo ye_emlrtRSI =
    {
        205,            /* lineNo */
        "getGrayImage", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pathName */
};

static emlrtRSInfo gf_emlrtRSI =
    {
        163,               /* lineNo */
        "imgradientlocal", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pathName */
};

static emlrtRSInfo hf_emlrtRSI =
    {
        164,               /* lineNo */
        "imgradientlocal", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pathName */
};

static emlrtRSInfo nf_emlrtRSI =
    {
        24,        /* lineNo */
        "chaccum", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pathName */
};

static emlrtRSInfo of_emlrtRSI =
    {
        28,        /* lineNo */
        "chaccum", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pathName */
};

static emlrtRSInfo pf_emlrtRSI =
    {
        31,        /* lineNo */
        "chaccum", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pathName */
};

static emlrtRSInfo qf_emlrtRSI =
    {
        32,        /* lineNo */
        "chaccum", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pathName */
};

static emlrtRSInfo rf_emlrtRSI =
    {
        78,        /* lineNo */
        "chaccum", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pathName */
};

static emlrtRSInfo sf_emlrtRSI =
    {
        139,       /* lineNo */
        "chaccum", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pathName */
};

static emlrtRSInfo tf_emlrtRSI =
    {
        184,             /* lineNo */
        "getEdgePixels", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pathName */
};

static emlrtRSInfo uf_emlrtRSI =
    {
        150,               /* lineNo */
        "accumarraylocal", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pathName */
};

static emlrtRTEInfo p_emlrtRTEI =
    {
        77,        /* lineNo */
        9,         /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtBCInfo jb_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        104,       /* lineNo */
        44,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        104,       /* lineNo */
        80,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        105,       /* lineNo */
        44,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        105,       /* lineNo */
        80,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        108,       /* lineNo */
        38,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        108,       /* lineNo */
        84,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        85,        /* lineNo */
        28,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        85,        /* lineNo */
        18,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        86,        /* lineNo */
        28,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        86,        /* lineNo */
        18,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        87,        /* lineNo */
        32,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        87,        /* lineNo */
        20,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        104,       /* lineNo */
        16,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        105,       /* lineNo */
        16,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        107,       /* lineNo */
        15,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        130,       /* lineNo */
        29,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        130,       /* lineNo */
        45,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        132,       /* lineNo */
        64,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        132,       /* lineNo */
        24,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        108,       /* lineNo */
        20,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI =
    {
        1,                 /* iFirst */
        416,               /* iLast */
        151,               /* lineNo */
        32,                /* colNo */
        "",                /* aName */
        "accumarraylocal", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI =
    {
        -1,                /* iFirst */
        -1,                /* iLast */
        151,               /* lineNo */
        35,                /* colNo */
        "",                /* aName */
        "accumarraylocal", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI =
    {
        1,                 /* iFirst */
        900,               /* iLast */
        151,               /* lineNo */
        40,                /* colNo */
        "",                /* aName */
        "accumarraylocal", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI =
    {
        -1,                /* iFirst */
        -1,                /* iLast */
        151,               /* lineNo */
        43,                /* colNo */
        "",                /* aName */
        "accumarraylocal", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI =
    {
        -1,                /* iFirst */
        -1,                /* iLast */
        151,               /* lineNo */
        53,                /* colNo */
        "",                /* aName */
        "accumarraylocal", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI =
    {
        1,                 /* iFirst */
        416,               /* iLast */
        151,               /* lineNo */
        9,                 /* colNo */
        "",                /* aName */
        "accumarraylocal", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        3    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI =
    {
        -1,                /* iFirst */
        -1,                /* iLast */
        151,               /* lineNo */
        12,                /* colNo */
        "",                /* aName */
        "accumarraylocal", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI =
    {
        1,                 /* iFirst */
        900,               /* iLast */
        151,               /* lineNo */
        17,                /* colNo */
        "",                /* aName */
        "accumarraylocal", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        3    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI =
    {
        -1,                /* iFirst */
        -1,                /* iLast */
        151,               /* lineNo */
        20,                /* colNo */
        "",                /* aName */
        "accumarraylocal", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        111,       /* lineNo */
        23,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        133,       /* lineNo */
        64,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        133,       /* lineNo */
        24,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        112,       /* lineNo */
        30,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        134,       /* lineNo */
        38,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        134,       /* lineNo */
        23,        /* colNo */
        "",        /* aName */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtRTEInfo md_emlrtRTEI = {
    36,     /* lineNo */
    5,      /* colNo */
    "find", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                       */
};

static emlrtRTEInfo nd_emlrtRTEI = {
    37,     /* lineNo */
    5,      /* colNo */
    "find", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                       */
};

static emlrtRTEInfo od_emlrtRTEI =
    {
        28,      /* lineNo */
        9,       /* colNo */
        "colon", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName
                                                                          */
};

static emlrtRTEInfo pd_emlrtRTEI =
    {
        79,        /* lineNo */
        31,        /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtRTEInfo qd_emlrtRTEI =
    {
        80,        /* lineNo */
        31,        /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtRTEInfo rd_emlrtRTEI =
    {
        81,        /* lineNo */
        33,        /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtRTEInfo sd_emlrtRTEI =
    {
        93,        /* lineNo */
        25,        /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtRTEInfo td_emlrtRTEI =
    {
        94,        /* lineNo */
        25,        /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtRTEInfo ud_emlrtRTEI =
    {
        96,        /* lineNo */
        24,        /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtRTEInfo vd_emlrtRTEI =
    {
        97,        /* lineNo */
        29,        /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtRTEInfo wd_emlrtRTEI =
    {
        100,       /* lineNo */
        5,         /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtRTEInfo xd_emlrtRTEI =
    {
        123,       /* lineNo */
        29,        /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtRTEInfo yd_emlrtRTEI =
    {
        124,       /* lineNo */
        29,        /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtRTEInfo ae_emlrtRTEI =
    {
        125,       /* lineNo */
        28,        /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtRTEInfo be_emlrtRTEI =
    {
        79,        /* lineNo */
        5,         /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtRTEInfo ce_emlrtRTEI =
    {
        80,        /* lineNo */
        5,         /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtRTEInfo de_emlrtRTEI =
    {
        81,        /* lineNo */
        5,         /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtRTEInfo ee_emlrtRTEI =
    {
        93,        /* lineNo */
        5,         /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtRTEInfo fe_emlrtRTEI =
    {
        94,        /* lineNo */
        5,         /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtRTEInfo ge_emlrtRTEI =
    {
        96,        /* lineNo */
        5,         /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtRTEInfo he_emlrtRTEI =
    {
        97,        /* lineNo */
        5,         /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtRTEInfo ie_emlrtRTEI =
    {
        123,       /* lineNo */
        5,         /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtRTEInfo je_emlrtRTEI =
    {
        124,       /* lineNo */
        5,         /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtRTEInfo ke_emlrtRTEI =
    {
        125,       /* lineNo */
        5,         /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtRTEInfo le_emlrtRTEI =
    {
        1,         /* lineNo */
        39,        /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtRTEInfo me_emlrtRTEI =
    {
        32,        /* lineNo */
        8,         /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

static emlrtRTEInfo ne_emlrtRTEI =
    {
        78,        /* lineNo */
        23,        /* colNo */
        "chaccum", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum."
        "m" /* pName */
};

/* Function Definitions */
void chaccum(Fonction_SommeStackData *SD, const emlrtStack *sp,
             const boolean_T varargin_1[374400], creal_T accumMatrix[374400],
             real32_T gradientImg[374400])
{
  static const creal_T Opca[281] = {{
                                        -1.0,                   /* re */
                                        -1.2246467991473532E-16 /* im */
                                    },
                                    {
                                        -0.993599453656165,  /* re */
                                        -0.11296072633517529 /* im */
                                    },
                                    {
                                        -0.97564857615634992, /* re */
                                        -0.21933959023415517  /* im */
                                    },
                                    {
                                        -0.94788230519396832, /* re */
                                        -0.31862067651075093  /* im */
                                    },
                                    {
                                        -0.91185323097427484, /* re */
                                        -0.41051636406089315  /* im */
                                    },
                                    {
                                        -0.86894240223136909, /* re */
                                        -0.49491322633809004  /* im */
                                    },
                                    {
                                        -0.820372387071367,  /* re */
                                        -0.57182964817402326 /* im */
                                    },
                                    {
                                        -0.767221165166596,  /* re */
                                        -0.64138263440820631 /* im */
                                    },
                                    {
                                        -0.71043597985973173, /* re */
                                        -0.70376183366302469  /* im */
                                    },
                                    {
                                        -0.65084663591498415, /* re */
                                        -0.759209231054357    /* im */
                                    },
                                    {
                                        -0.5891779588032634, /* re */
                                        -0.80800330003064968 /* im */
                                    },
                                    {
                                        -0.526061278439412,  /* re */
                                        -0.85044666577433969 /* im */
                                    },
                                    {
                                        -0.46204489282623673, /* re */
                                        -0.88685653688361088  /* im */
                                    },
                                    {
                                        -0.39760352387254055, /* re */
                                        -0.91755732126343914  /* im */
                                    },
                                    {
                                        -0.33314681110846084, /* re */
                                        -0.94287496639176049  /* im */
                                    },
                                    {
                                        -0.26902690729913292, /* re */
                                        -0.96313266124094443  /* im */
                                    },
                                    {
                                        -0.205545248475799,  /* re */
                                        -0.97864761320355864 /* im */
                                    },
                                    {
                                        -0.14295857325402264, /* re */
                                        -0.98972867308832391  /* im */
                                    },
                                    {
                                        -0.081484264868872891, /* re */
                                        -0.996674628240721     /* im */
                                    },
                                    {
                                        -0.02130508569329263, /* re */
                                        -0.99977302090204523  /* im */
                                    },
                                    {
                                        0.037426630856927434, /* re */
                                        -0.99929937821590742  /* im */
                                    },
                                    {
                                        0.094585271528439083, /* re */
                                        -0.99551676350018914  /* im */
                                    },
                                    {
                                        0.15006866356119278, /* re */
                                        -0.98867557682839391 /* im */
                                    },
                                    {
                                        0.20379517553922233, /* re */
                                        -0.97901354762175663 /* im */
                                    },
                                    {
                                        0.25570115524501491, /* re */
                                        -0.96675587363427218 /* im */
                                    },
                                    {
                                        0.30573866572084007, /* re */
                                        -0.952115470036718   /* im */
                                    },
                                    {
                                        0.35387348505623423, /* re */
                                        -0.935293299759041   /* im */
                                    },
                                    {
                                        0.40008333932746737, /* re */
                                        -0.91647876221578783 /* im */
                                    },
                                    {
                                        0.44435634162487747, /* re */
                                        -0.89585012231832351 /* im */
                                    },
                                    {
                                        0.48668961323998378, /* re */
                                        -0.87357496550915137 /* im */
                                    },
                                    {
                                        0.52708806587472756, /* re */
                                        -0.84981066762687729 /* im */
                                    },
                                    {
                                        0.56556332621013117, /* re */
                                        -0.82470487087571687 /* im */
                                    },
                                    {
                                        0.60213278636186,    /* re */
                                        -0.79839595915066019 /* im */
                                    },
                                    {
                                        0.63681876568493945, /* re */
                                        -0.77101352755416042 /* im */
                                    },
                                    {
                                        0.66964777109691409, /* re */
                                        -0.74267884220902314 /* im */
                                    },
                                    {
                                        0.70064984459357593, /* re */
                                        -0.71350528748636333 /* im */
                                    },
                                    {
                                        0.729857987957238,   /* re */
                                        -0.68359879857633765 /* im */
                                    },
                                    {
                                        0.757307655825297,   /* re */
                                        -0.65305827797248961 /* im */
                                    },
                                    {
                                        0.78303630931526014, /* re */
                                        -0.62197599494991462 /* im */
                                    },
                                    {
                                        0.80708302330816928, /* re */
                                        -0.5904379675188115  /* im */
                                    },
                                    {
                                        0.829488141290198,   /* re */
                                        -0.55852432664919127 /* im */
                                    },
                                    {
                                        0.85029297235516876, /* re */
                                        -0.52630966280642444 /* im */
                                    },
                                    {
                                        0.86953952559036518, /* re */
                                        -0.49386335502452772 /* im */
                                    },
                                    {
                                        0.88727027761436561, /* re */
                                        -0.46124988288575919 /* im */
                                    },
                                    {
                                        0.9035279695176418,  /* re */
                                        -0.42852912188009734 /* im */
                                    },
                                    {
                                        0.91835542988208951, /* re */
                                        -0.39575662269390077 /* im */
                                    },
                                    {
                                        0.93179542093139989, /* re */
                                        -0.3629838750292847  /* im */
                                    },
                                    {
                                        0.94389050519616358, /* re */
                                        -0.33025855658942616 /* im */
                                    },
                                    {
                                        0.95468293037115015, /* re */
                                        -0.29762476788391407 /* im */
                                    },
                                    {
                                        0.9642145303018903,  /* re */
                                        -0.26512325351561505 /* im */
                                    },
                                    {
                                        0.97252664026757341, /* re */
                                        -0.23279161060885725 /* im */
                                    },
                                    {
                                        0.97966002493088888, /* re */
                                        -0.20066448503013731 /* im */
                                    },
                                    {
                                        0.98565481750589734, /* re */
                                        -0.16877375603871647 /* im */
                                    },
                                    {
                                        0.9905504688550707,  /* re */
                                        -0.13714870998664014 /* im */
                                    },
                                    {
                                        0.99438570536862869, /* re */
                                        -0.10581620366718357 /* im */
                                    },
                                    {
                                        0.99719849460539844,  /* re */
                                        -0.074800817888088969 /* im */
                                    },
                                    {
                                        0.99902601778641864,  /* re */
                                        -0.044125001822212941 /* im */
                                    },
                                    {
                                        0.99990464833207249, /* re */
                                        -0.01380920866358463 /* im */
                                    },
                                    {
                                        0.99986993572207139, /* re */
                                        0.0161279769078733   /* im */
                                    },
                                    {
                                        0.99895659403639125, /* re */
                                        0.0456697189745312   /* im */
                                    },
                                    {
                                        0.99719849460539844, /* re */
                                        0.074800817888088969 /* im */
                                    },
                                    {
                                        0.99462866225986757, /* re */
                                        0.10350760460539242  /* im */
                                    },
                                    {
                                        0.9912792747272543, /* re */
                                        0.13177784144615742 /* im */
                                    },
                                    {
                                        0.98718166477020974, /* re */
                                        0.15960062888822588  /* im */
                                    },
                                    {
                                        0.98236632470757035, /* re */
                                        0.18696631803760944  /* im */
                                    },
                                    {
                                        0.97686291299754313, /* re */
                                        0.21386642843128645  /* im */
                                    },
                                    {
                                        0.97070026259804176, /* re */
                                        0.24029357085051753  /* im */
                                    },
                                    {
                                        0.96390639085058361, /* re */
                                        0.26624137484133065  /* im */
                                    },
                                    {
                                        0.9565085106622595, /* re */
                                        0.29170442065670882 /* im */
                                    },
                                    {
                                        0.94853304278537809, /* re */
                                        0.31667817535206316  /* im */
                                    },
                                    {
                                        0.940005629016815, /* re */
                                        0.341158932781632  /* im */
                                    },
                                    {
                                        0.93095114615913244, /* re */
                                        0.36514375725869619  /* im */
                                    },
                                    {
                                        0.92139372060345948, /* re */
                                        0.38863043065683123  /* im */
                                    },
                                    {
                                        0.91135674341011574, /* re */
                                        0.41161740274301867  /* im */
                                    },
                                    {
                                        0.90086288577730489, /* re */
                                        0.4341037445461472   /* im */
                                    },
                                    {
                                        0.88993411480097484, /* re */
                                        0.45608910457651286  /* im */
                                    },
                                    {
                                        0.87859170944041631, /* re */
                                        0.4775736677231765   /* im */
                                    },
                                    {
                                        0.86685627661437925, /* re */
                                        0.49855811666670791  /* im */
                                    },
                                    {
                                        0.85474776736164415, /* re */
                                        0.51904359565482028  /* im */
                                    },
                                    {
                                        0.8422854930081648, /* re */
                                        0.53903167649776651 /* im */
                                    },
                                    {
                                        0.829488141290198,  /* re */
                                        0.55852432664919127 /* im */
                                    },
                                    {
                                        0.81637379238936925, /* re */
                                        0.57752387924639015  /* im */
                                    },
                                    {
                                        0.802959934841451,  /* re */
                                        0.59603300499168055 /* im */
                                    },
                                    {
                                        0.78926348128583423, /* re */
                                        0.61405468576387046  /* im */
                                    },
                                    {
                                        0.7753007840273286, /* re */
                                        0.63159218985561372 /* im */
                                    },
                                    {
                                        0.76108765038605064, /* re */
                                        0.64864904873886986  /* im */
                                    },
                                    {
                                        0.74663935781487112, /* re */
                                        0.66522903526664923  /* im */
                                    },
                                    {
                                        0.73197066876717065, /* re */
                                        0.68133614322487024  /* im */
                                    },
                                    {
                                        0.71709584530057779, /* re */
                                        0.69697456815342251  /* im */
                                    },
                                    {
                                        0.70202866340496861, /* re */
                                        0.71214868936046871  /* im */
                                    },
                                    {
                                        0.68678242704531689, /* re */
                                        0.7268630530586514   /* im */
                                    },
                                    {
                                        0.67136998191203168, /* re */
                                        0.74112235655621561  /* im */
                                    },
                                    {
                                        0.655803728873219, /* re */
                                        0.754931433440138  /* im */
                                    },
                                    {
                                        0.64009563712495021, /* re */
                                        0.76829523969214075  /* im */
                                    },
                                    {
                                        0.62425725703696111, /* re */
                                        0.78121884068210334  /* im */
                                    },
                                    {
                                        0.60829973269253468, /* re */
                                        0.79370739898667375  /* im */
                                    },
                                    {
                                        0.59223381412235754, /* re */
                                        0.80576616298407877  /* im */
                                    },
                                    {
                                        0.57606986923309977, /* re */
                                        0.81740045617907464  /* im */
                                    },
                                    {
                                        0.55981789543236338, /* re */
                                        0.82861566721471025  /* im */
                                    },
                                    {
                                        0.54348753095227664, /* re */
                                        0.83941724053023725  /* im */
                                    },
                                    {
                                        0.52708806587472867, /* re */
                                        0.84981066762687663  /* im */
                                    },
                                    {
                                        0.51062845286173342, /* re */
                                        0.85980147890546943  /* im */
                                    },
                                    {
                                        0.49411731759490629, /* re */
                                        0.86939523604216662  /* im */
                                    },
                                    {
                                        0.47756296892837108, /* re */
                                        0.87859752487035814  /* im */
                                    },
                                    {
                                        0.46097340875985304, /* re */
                                        0.88741394873887436  /* im */
                                    },
                                    {
                                        0.44435634162487631, /* re */
                                        0.89585012231832406  /* im */
                                    },
                                    {
                                        0.42771918401930181, /* re */
                                        0.903911665829058    /* im */
                                    },
                                    {
                                        0.41106907345556176, /* re */
                                        0.91160419966583417  /* im */
                                    },
                                    {
                                        0.39441287725814345, /* re */
                                        0.91893333939571087  /* im */
                                    },
                                    {
                                        0.37775720110393884, /* re */
                                        0.92590469110709139  /* im */
                                    },
                                    {
                                        0.36110839731319,   /* re */
                                        0.93252384708912373 /* im */
                                    },
                                    {
                                        0.34447257289679795, /* re */
                                        0.93879638182188374  /* im */
                                    },
                                    {
                                        0.32785559736579017, /* re */
                                        0.94472784825891576  /* im */
                                    },
                                    {
                                        0.31126311030873877, /* re */
                                        0.95032377438477778  /* im */
                                    },
                                    {
                                        0.29470052874296077, /* re */
                                        0.95558966003123924  /* im */
                                    },
                                    {
                                        0.27817305424521027, /* re */
                                        0.96053097393675513  /* im */
                                    },
                                    {
                                        0.26168567986763674, /* re */
                                        0.96515315103470123  /* im */
                                    },
                                    {
                                        0.24524319684463877, /* re */
                                        0.96946158995672527  /* im */
                                    },
                                    {
                                        0.22885020109623769, /* re */
                                        0.97346165073833879  /* im */
                                    },
                                    {
                                        0.21251109953350983, /* re */
                                        0.97715865271462377  /* im */
                                    },
                                    {
                                        0.19623011617148589, /* re */
                                        0.98055787259463945  /* im */
                                    },
                                    {
                                        0.18001129805494,   /* re */
                                        0.98366454270374892 /* im */
                                    },
                                    {
                                        0.16385852100225404, /* re */
                                        0.98648384938373612  /* im */
                                    },
                                    {
                                        0.14777549517260952, /* re */
                                        0.9890209315411328   /* im */
                                    },
                                    {
                                        0.13176577046150648, /* re */
                                        0.99128087933475528  /* im */
                                    },
                                    {
                                        0.11583274172961297, /* re */
                                        0.993268732993947    /* im */
                                    },
                                    {
                                        0.099979653869768745, /* re */
                                        0.99498948175952151   /* im */
                                    },
                                    {
                                        0.08420960671691087, /* re */
                                        0.996448062939852    /* im */
                                    },
                                    {
                                        0.068525559805547434, /* re */
                                        0.99764936107499025   /* im */
                                    },
                                    {
                                        0.052930336979296666, /* re */
                                        0.9985982072021049    /* im */
                                    },
                                    {
                                        0.037426630856928315, /* re */
                                        0.99929937821590742   /* im */
                                    },
                                    {
                                        0.022017007159177218, /* re */
                                        0.9997575963181039    /* im */
                                    },
                                    {
                                        0.0067039089005534536, /* re */
                                        0.99997752855024347    /* im */
                                    },
                                    {
                                        -0.0085103395497750211, /* re */
                                        0.99996378640466155     /* im */
                                    },
                                    {
                                        -0.023623528534077239, /* re */
                                        0.99972092550851388    /* im */
                                    },
                                    {
                                        -0.038633559295211083, /* re */
                                        0.99925344537618854    /* im */
                                    },
                                    {
                                        -0.053538440285128788, /* re */
                                        0.99856578922564521    /* im */
                                    },
                                    {
                                        -0.068336283589031169, /* re */
                                        0.99766234385449248    /* im */
                                    },
                                    {
                                        -0.083025301461638987, /* re */
                                        0.996547439571847      /* im */
                                    },
                                    {
                                        -0.097603802972113254, /* re */
                                        0.99522535018224934    /* im */
                                    },
                                    {
                                        -0.11207019075428805, /* re */
                                        0.99370029301812      /* im */
                                    },
                                    {
                                        -0.12642295785893795, /* re */
                                        0.99197642901744254   /* im */
                                    },
                                    {
                                        -0.14066068470490878, /* re */
                                        0.99005786284355435   /* im */
                                    },
                                    {
                                        -0.1547820361260748, /* re */
                                        0.98794864304409391  /* im */
                                    },
                                    {
                                        -0.16878575851112046, /* re */
                                        0.98565276224633269   /* im */
                                    },
                                    {
                                        -0.1826706770332312, /* re */
                                        0.98317415738627967  /* im */
                                    },
                                    {
                                        -0.19643569296695482, /* re */
                                        0.98051670996908169   /* im */
                                    },
                                    {
                                        -0.2100797810894261, /* re */
                                        0.97768424635841344  /* im */
                                    },
                                    {
                                        -0.22360198716340732, /* re */
                                        0.97468053809264876   /* im */
                                    },
                                    {
                                        -0.23700142549952333, /* re */
                                        0.97150930222576559   /* im */
                                    },
                                    {
                                        -0.25027727659522447, /* re */
                                        0.96817420169103741   /* im */
                                    },
                                    {
                                        -0.26342878484809773, /* re */
                                        0.9646788456856793    /* im */
                                    },
                                    {
                                        -0.276455256341182, /* re */
                                        0.96102679007472591 /* im */
                                    },
                                    {
                                        -0.28935605669802467, /* re */
                                        0.95722153781252206   /* im */
                                    },
                                    {
                                        -0.30213060900528876, /* re */
                                        0.95326653938030015   /* im */
                                    },
                                    {
                                        -0.31477839180083517, /* re */
                                        0.9491651932383951    /* im */
                                    },
                                    {
                                        -0.32729893712514885, /* re */
                                        0.94492084629176631   /* im */
                                    },
                                    {
                                        -0.33969182863420416, /* re */
                                        0.94053679436753057   /* im */
                                    },
                                    {
                                        -0.35195669977179161, /* re */
                                        0.936016282703324     /* im */
                                    },
                                    {
                                        -0.36409323199943411, /* re */
                                        0.93136250644537233   /* im */
                                    },
                                    {
                                        -0.37610115308213476, /* re */
                                        0.92657861115519424   /* im */
                                    },
                                    {
                                        -0.38798023542815763, /* re */
                                        0.92166769332396115   /* im */
                                    },
                                    {
                                        -0.39973029448116654, /* re */
                                        0.9166328008935748    /* im */
                                    },
                                    {
                                        -0.41135118716308622, /* re */
                                        0.91147693378358163   /* im */
                                    },
                                    {
                                        -0.42284281036606908, /* re */
                                        0.90620304442311639   /* im */
                                    },
                                    {
                                        -0.43420509949207736, /* re */
                                        0.90081403828707907   /* im */
                                    },
                                    {
                                        -0.44543802703852836, /* re */
                                        0.89531277443585222   /* im */
                                    },
                                    {
                                        -0.45654160122861165, /* re */
                                        0.88970206605785473   /* im */
                                    },
                                    {
                                        -0.46751586468485629, /* re */
                                        0.88398468101430983   /* im */
                                    },
                                    {
                                        -0.47836089314459174, /* re */
                                        0.87816334238563409   /* im */
                                    },
                                    {
                                        -0.48907679421600331, /* re */
                                        0.87224072901888572   /* im */
                                    },
                                    {
                                        -0.49966370617351241, /* re */
                                        0.86621947607575178   /* im */
                                    },
                                    {
                                        -0.510121796791245, /* re */
                                        0.86010217558059443 /* im */
                                    },
                                    {
                                        -0.52045126221340254, /* re */
                                        0.853891376968099     /* im */
                                    },
                                    {
                                        -0.530652325860393, /* re */
                                        0.8475895876300954  /* im */
                                    },
                                    {
                                        -0.54072523736958644, /* re */
                                        0.8411992734611724    /* im */
                                    },
                                    {
                                        -0.55067027156963966, /* re */
                                        0.83472285940269975   /* im */
                                    },
                                    {
                                        -0.56048772748732334, /* re */
                                        0.82816272998493234   /* im */
                                    },
                                    {
                                        -0.5701779273858586, /* re */
                                        0.821521229866865    /* im */
                                    },
                                    {
                                        -0.5797412158337607, /* re */
                                        0.8148006643735588   /* im */
                                    },
                                    {
                                        -0.58917795880326407, /* re */
                                        0.80800330003064913   /* im */
                                    },
                                    {
                                        -0.59848854279738839, /* re */
                                        0.80113136509579908   /* im */
                                    },
                                    {
                                        -0.60767337400478427, /* re */
                                        0.794187050086843     /* im */
                                    },
                                    {
                                        -0.61673287748145356, /* re */
                                        0.78717250830643626   /* im */
                                    },
                                    {
                                        -0.62566749635855934, /* re */
                                        0.78008985636297823   /* im */
                                    },
                                    {
                                        -0.63447769107547958, /* re */
                                        0.77294117468765255   /* im */
                                    },
                                    {
                                        -0.64316393863733912, /* re */
                                        0.76572850804740522   /* im */
                                    },
                                    {
                                        -0.65172673189626373, /* re */
                                        0.75845386605370768   /* im */
                                    },
                                    {
                                        -0.660166578855615, /* re */
                                        0.75111922366697093 /* im */
                                    },
                                    {
                                        -0.66848400199649916, /* re */
                                        0.74372652169647979   /* im */
                                    },
                                    {
                                        -0.67667953762585731, /* re */
                                        0.73627766729573974   /* im */
                                    },
                                    {
                                        -0.68475373524548755, /* re */
                                        0.7287745344531138    /* im */
                                    },
                                    {
                                        -0.69270715694132134, /* re */
                                        0.72121896447769007   /* im */
                                    },
                                    {
                                        -0.700540376792368, /* re */
                                        0.71361276648025784 /* im */
                                    },
                                    {
                                        -0.70825398029868447, /* re */
                                        0.7059577178493559    /* im */
                                    },
                                    {
                                        -0.71584856382781781, /* re */
                                        0.69825556472229466   /* im */
                                    },
                                    {
                                        -0.72332473407911724, /* re */
                                        0.69050802245113285   /* im */
                                    },
                                    {
                                        -0.73068310756540411, /* re */
                                        0.68271677606351822   /* im */
                                    },
                                    {
                                        -0.73792431011143023, /* re */
                                        0.67488348071839011   /* im */
                                    },
                                    {
                                        -0.74504897636863321, /* re */
                                        0.66700976215648577   /* im */
                                    },
                                    {
                                        -0.75205774934567715, /* re */
                                        0.65909721714563074   /* im */
                                    },
                                    {
                                        -0.75895127995429756, /* re */
                                        0.65114741392079056   /* im */
                                    },
                                    {
                                        -0.76573022656997847, /* re */
                                        0.643161892618872     /* im */
                                    },
                                    {
                                        -0.77239525460701719, /* re */
                                        0.635142165708246     /* im */
                                    },
                                    {
                                        -0.77894703610750748, /* re */
                                        0.627089718413027     /* im */
                                    },
                                    {
                                        -0.7853862493438617, /* re */
                                        0.61900600913204507  /* im */
                                    },
                                    {
                                        -0.7917135784344036, /* re */
                                        0.61089246985258494  /* im */
                                    },
                                    {
                                        -0.797929712971678, /* re */
                                        0.60275050655883766 /* im */
                                    },
                                    {
                                        -0.80403534766305929, /* re */
                                        0.59458149963511586   /* im */
                                    },
                                    {
                                        -0.81003118198329138, /* re */
                                        0.58638680426383394   /* im */
                                    },
                                    {
                                        -0.81591791983859985, /* re */
                                        0.57816775081826577   /* im */
                                    },
                                    {
                                        -0.82169626924201222, /* re */
                                        0.5699256452501138    /* im */
                                    },
                                    {
                                        -0.82736694199955607, /* re */
                                        0.56166176947189783   /* im */
                                    },
                                    {
                                        -0.83293065340698569, /* re */
                                        0.553377381734212     /* im */
                                    },
                                    {
                                        -0.83838812195673451, /* re */
                                        0.54507371699785678   /* im */
                                    },
                                    {
                                        -0.84374006905477417, /* re */
                                        0.53675198730088092   /* im */
                                    },
                                    {
                                        -0.84898721874706884, /* re */
                                        0.52841338212058631   /* im */
                                    },
                                    {
                                        -0.8541302974553413, /* re */
                                        0.52005906873051477  /* im */
                                    },
                                    {
                                        -0.85917003372187306, /* re */
                                        0.5116901925524423    /* im */
                                    },
                                    {
                                        -0.86410715796304594, /* re */
                                        0.50330787750344974   /* im */
                                    },
                                    {
                                        -0.86894240223136909, /* re */
                                        0.49491322633809004   /* im */
                                    },
                                    {
                                        -0.87367649998573682, /* re */
                                        0.48650732098568966   /* im */
                                    },
                                    {
                                        -0.8783101858696537, /* re */
                                        0.47809122288284511  /* im */
                                    },
                                    {
                                        -0.88284419549719129, /* re */
                                        0.46966597330115051   /* im */
                                    },
                                    {
                                        -0.88727926524644929, /* re */
                                        0.46123259367017977   /* im */
                                    },
                                    {
                                        -0.89161613206026913, /* re */
                                        0.45279208589581682   /* im */
                                    },
                                    {
                                        -0.89585553325400424, /* re */
                                        0.44434543267393184   /* im */
                                    },
                                    {
                                        -0.8999982063301174, /* re */
                                        0.43589359779947595  /* im */
                                    },
                                    {
                                        -0.90404488879939515, /* re */
                                        0.4274375264710496    /* im */
                                    },
                                    {
                                        -0.9079963180085876, /* re */
                                        0.41897814559096969  /* im */
                                    },
                                    {
                                        -0.91185323097427518, /* re */
                                        0.41051636406089231   /* im */
                                    },
                                    {
                                        -0.915616364222756, /* re */
                                        0.40205307307307236 /* im */
                                    },
                                    {
                                        -0.91928645363580008, /* re */
                                        0.39358914639724762   /* im */
                                    },
                                    {
                                        -0.9228642343020621, /* re */
                                        0.3851254406632581   /* im */
                                    },
                                    {
                                        -0.92635044037399883, /* re */
                                        0.37666279563941341   /* im */
                                    },
                                    {
                                        -0.92974580493011239, /* re */
                                        0.36820203450667865   /* im */
                                    },
                                    {
                                        -0.9330510598423607, /* re */
                                        0.35974396412872217  /* im */
                                    },
                                    {
                                        -0.93626693564858388, /* re */
                                        0.35128937531785748   /* im */
                                    },
                                    {
                                        -0.93939416142977183, /* re */
                                        0.34283904309698432   /* im */
                                    },
                                    {
                                        -0.94243346469205558, /* re */
                                        0.33439372695750141   /* im */
                                    },
                                    {
                                        -0.945385571253245, /* re */
                                        0.32595417111332642 /* im */
                                    },
                                    {
                                        -0.94825120513380323, /* re */
                                        0.3175211047509911    /* im */
                                    },
                                    {
                                        -0.95103108845209661, /* re */
                                        0.30909524227593743   /* im */
                                    },
                                    {
                                        -0.95372594132380839, /* re */
                                        0.30067728355500284   /* im */
                                    },
                                    {
                                        -0.956336481765374, /* re */
                                        0.29226791415519165 /* im */
                                    },
                                    {
                                        -0.95886342560132376, /* re */
                                        0.28386780557874952   /* im */
                                    },
                                    {
                                        -0.96130748637540719, /* re */
                                        0.27547761549461025   /* im */
                                    },
                                    {
                                        -0.96366937526538465, /* re */
                                        0.26709798796625778   /* im */
                                    },
                                    {
                                        -0.96594980100137207, /* re */
                                        0.25872955367605316   /* im */
                                    },
                                    {
                                        -0.96814946978763217, /* re */
                                        0.25037293014606588   /* im */
                                    },
                                    {
                                        -0.97026908522769917, /* re */
                                        0.24202872195548186   /* im */
                                    },
                                    {
                                        -0.97230934825274, /* re */
                                        0.2336975209546136 /* im */
                                    },
                                    {
                                        -0.974270957053051, /* re */
                                        0.22537990647555958 /* im */
                                    },
                                    {
                                        -0.97615460701258716, /* re */
                                        0.2170764455395878    /* im */
                                    },
                                    {
                                        -0.977960990646438, /* re */
                                        0.208787693061247   /* im */
                                    },
                                    {
                                        -0.97969079754115029, /* re */
                                        0.2005141920493031    /* im */
                                    },
                                    {
                                        -0.98134471429781567, /* re */
                                        0.19225647380449506   /* im */
                                    },
                                    {
                                        -0.98292342447783188, /* re */
                                        0.18401505811419852   /* im */
                                    },
                                    {
                                        -0.984427608551258, /* re */
                                        0.17579045344401167 /* im */
                                    },
                                    {
                                        -0.98585794384767811, /* re */
                                        0.16758315712633032   /* im */
                                    },
                                    {
                                        -0.98721510450949823, /* re */
                                        0.15939365554594848   /* im */
                                    },
                                    {
                                        -0.988499761447599, /* re */
                                        0.15122242432271696 /* im */
                                    },
                                    {
                                        -0.98971258229927,  /* re */
                                        0.14306992849131767 /* im */
                                    },
                                    {
                                        -0.99085423138835094, /* re */
                                        0.1349366226782055    /* im */
                                    },
                                    {
                                        -0.9919253696875161, /* re */
                                        0.12682295127572316  /* im */
                                    },
                                    {
                                        -0.99292665478262787, /* re */
                                        0.11872934861347507   /* im */
                                    },
                                    {
                                        -0.99385874083909653, /* re */
                                        0.11065623912697128   /* im */
                                    },
                                    {
                                        -0.99472227857018325, /* re */
                                        0.10260403752359264   /* im */
                                    },
                                    {
                                        -0.99551791520718047, /* re */
                                        0.094573148945929456  /* im */
                                    },
                                    {
                                        -0.99624629447141555, /* re */
                                        0.08656396913250608   /* im */
                                    },
                                    {
                                        -0.99690805654801351, /* re */
                                        0.078576884575952813  /* im */
                                    },
                                    {
                                        -0.99750383806136522, /* re */
                                        0.070612272678661367  /* im */
                                    },
                                    {
                                        -0.99803427205224515, /* re */
                                        0.062670501905961656  /* im */
                                    },
                                    {
                                        -0.99849998795652672, /* re */
                                        0.054751931936836633  /* im */
                                    },
                                    {
                                        -0.99890161158544044, /* re */
                                        0.046856913812264145  /* im */
                                    },
                                    {
                                        -0.99923976510732815, /* re */
                                        0.038985790081151189  /* im */
                                    },
                                    {
                                        -0.9995150670308417, /* re */
                                        0.031138894943976595 /* im */
                                    },
                                    {
                                        -0.99972813218954037, /* re */
                                        0.023316554394095461  /* im */
                                    },
                                    {
                                        -0.99987957172784037, /* re */
                                        0.015519086356825244  /* im */
                                    },
                                    {
                                        -0.99996999308827161, /* re */
                                        0.007746800826275298  /* im */
                                    },
                                    {
                                        -1.0,                  /* re */
                                        1.2246467991473532E-16 /* im */
                                    }};
  static const real_T dv[281] = {
      62.831853071795862, 65.973445725385659, 69.115038378975441,
      72.256631032565238, 75.398223686155035, 78.539816339744831,
      81.681408993334628, 84.823001646924411, 87.964594300514207,
      91.106186954104,    94.247779607693786, 97.389372261283583,
      100.53096491487338, 103.67255756846318, 106.81415022205297,
      109.95574287564276, 113.09733552923255, 116.23892818282235,
      119.38052083641213, 122.52211349000193, 125.66370614359172,
      128.80529879718151, 131.94689145077132, 135.0884841043611,
      138.23007675795088, 141.37166941154069, 144.51326206513048,
      147.65485471872029, 150.79644737231007, 153.93804002589985,
      157.07963267948966, 160.22122533307945, 163.36281798666926,
      166.50441064025904, 169.64600329384882, 172.78759594743863,
      175.92918860102841, 179.0707812546182,  182.212373908208,
      185.35396656179779, 188.49555921538757, 191.63715186897738,
      194.77874452256717, 197.92033717615698, 201.06192982974676,
      204.20352248333654, 207.34511513692635, 210.48670779051614,
      213.62830044410595, 216.76989309769573, 219.91148575128551,
      223.05307840487532, 226.1946710584651,  229.33626371205489,
      232.4778563656447,  235.61944901923448, 238.76104167282426,
      241.90263432641407, 245.04422698000386, 248.18581963359367,
      251.32741228718345, 254.46900494077323, 257.610597594363,
      260.75219024795285, 263.89378290154264, 267.03537555513242,
      270.1769682087222,  273.318560862312,   276.46015351590177,
      279.60174616949161, 282.74333882308139, 285.88493147667117,
      289.02652413026095, 292.16811678385073, 295.30970943744057,
      298.45130209103036, 301.59289474462014, 304.73448739820992,
      307.8760800517997,  311.01767270538954, 314.15926535897933,
      317.30085801256911, 320.44245066615889, 323.58404331974867,
      326.72563597333851, 329.86722862692829, 333.00882128051808,
      336.15041393410786, 339.29200658769764, 342.43359924128742,
      345.57519189487726, 348.71678454846705, 351.85837720205683,
      354.99996985564661, 358.14156250923639, 361.28315516282623,
      364.424747816416,   367.5663404700058,  370.70793312359558,
      373.84952577718536, 376.99111843077515, 380.132711084365,
      383.27430373795477, 386.41589639154455, 389.55748904513433,
      392.69908169872411, 395.84067435231395, 398.98226700590374,
      402.12385965949352, 405.2654523130833,  408.40704496667308,
      411.54863762026292, 414.69023027385271, 417.83182292744249,
      420.97341558103227, 424.11500823462205, 427.25660088821189,
      430.39819354180167, 433.53978619539146, 436.68137884898124,
      439.822971502571,   442.9645641561608,  446.10615680975064,
      449.24774946334043, 452.38934211693021, 455.53093477052,
      458.67252742410977, 461.81412007769961, 464.9557127312894,
      468.09730538487918, 471.23889803846896, 474.38049069205874,
      477.52208334564853, 480.66367599923836, 483.80526865282815,
      486.94686130641793, 490.08845396000771, 493.23004661359749,
      496.37163926718733, 499.51323192077712, 502.6548245743669,
      505.79641722795668, 508.93800988154646, 512.07960253513625,
      515.221195188726,   518.36278784231581, 521.50438049590571,
      524.64597314949549, 527.78756580308527, 530.929158456675,
      534.07075111026484, 537.21234376385462, 540.3539364174444,
      543.49552907103418, 546.637121724624,   549.77871437821375,
      552.92030703180353, 556.06189968539343, 559.20349233898321,
      562.345084992573,   565.48667764616278, 568.62827029975256,
      571.76986295334234, 574.91145560693212, 578.0530482605219,
      581.19464091411169, 584.33623356770147, 587.47782622129137,
      590.61941887488115, 593.76101152847093, 596.90260418206071,
      600.0441968356505,  603.18578948924028, 606.32738214283006,
      609.46897479641984, 612.61056745000963, 615.75216010359941,
      618.89375275718919, 622.03534541077909, 625.17693806436887,
      628.31853071795865, 631.46012337154843, 634.60171602513822,
      637.743308678728,   640.88490133231778, 644.02649398590756,
      647.16808663949735, 650.30967929308713, 653.451271946677,
      656.59286460026681, 659.73445725385659, 662.87604990744637,
      666.01764256103615, 669.15923521462594, 672.30082786821572,
      675.4424205218055,  678.58401317539528, 681.72560582898507,
      684.86719848257485, 688.00879113616475, 691.15038378975453,
      694.29197644334431, 697.43356909693409, 700.57516175052388,
      703.71675440411366, 706.85834705770344, 709.99993971129322,
      713.141532364883,   716.28312501847279, 719.42471767206257,
      722.56631032565247, 725.70790297924225, 728.849495632832,
      731.99108828642181, 735.1326809400116,  738.27427359360138,
      741.41586624719116, 744.557458900781,   747.69905155437073,
      750.84064420796051, 753.98223686155029, 757.12382951514019,
      760.26542216873,    763.40701482231975, 766.54860747590953,
      769.69020012949932, 772.8317927830891,  775.97338543667888,
      779.11497809026866, 782.25657074385845, 785.39816339744823,
      788.53975605103813, 791.68134870462791, 794.82294135821769,
      797.96453401180747, 801.10612666539726, 804.247719318987,
      807.38931197257682, 810.5309046261666,  813.67249727975639,
      816.81408993334617, 819.955682586936,   823.09727524052585,
      826.23886789411563, 829.38046054770541, 832.52205320129519,
      835.663645854885,   838.80523850847476, 841.94683116206454,
      845.08842381565432, 848.23001646924411, 851.37160912283389,
      854.51320177642378, 857.65479443001357, 860.79638708360335,
      863.93797973719313, 867.07957239078291, 870.2211650443727,
      873.36275769796248, 876.50435035155226, 879.645943005142,
      882.78753565873183, 885.92912831232161, 889.07072096591151,
      892.21231361950129, 895.35390627309107, 898.49549892668085,
      901.63709158027063, 904.77868423386042, 907.9202768874502,
      911.06186954104,    914.20346219462976, 917.34505484821955,
      920.48664750180933, 923.62824015539923, 926.769832808989,
      929.91142546257879, 933.05301811616857, 936.19461076975836,
      939.33620342334814, 942.47779607693792};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_boolean_T *inside;
  emxArray_boolean_T *rows_to_keep;
  emxArray_creal_T *w;
  emxArray_creal_T *wkeep;
  emxArray_int16_T *Ex_chunk;
  emxArray_int32_T *Ey_chunk;
  emxArray_int32_T *b_xckeep;
  emxArray_int32_T *idxE_chunk;
  emxArray_int32_T *ndx;
  emxArray_int32_T *yckeep;
  emxArray_real32_T *xc;
  emxArray_real32_T *yc;
  emxArray_real_T *Ex;
  emxArray_real_T *Ey;
  emxArray_real_T *y;
  creal_T *w_data;
  creal_T *wkeep_data;
  real_T *Ex_data;
  real_T *Ey_data;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T idx;
  int32_T ii;
  int32_T jj;
  int32_T *Ey_chunk_data;
  int32_T *idxE_chunk_data;
  int32_T *ndx_data;
  real32_T *xc_data;
  real32_T *yc_data;
  int16_T *Ex_chunk_data;
  boolean_T exitg1;
  boolean_T flat;
  boolean_T *inside_data;
  boolean_T *rows_to_keep_data;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  for (i = 0; i < 374400; i++) {
    SD->u2.f8.x[i] = (varargin_1[i] == varargin_1[0]);
  }
  flat = true;
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii < 374400)) {
    if (!SD->u2.f8.x[ii]) {
      flat = false;
      exitg1 = true;
    } else {
      ii++;
    }
  }
  if (flat) {
    memset(&accumMatrix[0], 0, 374400U * sizeof(creal_T));
    memset(&gradientImg[0], 0, 374400U * sizeof(real32_T));
  } else {
    creal_T w0[281];
    int32_T xckeep[2];
    real32_T Gmax;
    real32_T t;
    st.site = &nf_emlrtRSI;
    for (i = 0; i < 374400; i++) {
      SD->u2.f8.varargin_1[i] = varargin_1[i];
    }
    b_st.site = &ye_emlrtRSI;
    imfilter(SD, &b_st, SD->u2.f8.varargin_1, SD->u2.f8.A);
    st.site = &of_emlrtRSI;
    b_st.site = &gf_emlrtRSI;
    b_imfilter(SD, &b_st, SD->u2.f8.A, SD->u2.f8.varargin_1);
    b_st.site = &hf_emlrtRSI;
    c_imfilter(SD, &b_st, SD->u2.f8.A, SD->u2.f8.Gy);
    for (ii = 0; ii < 374400; ii++) {
      gradientImg[ii] =
          muSingleScalarHypot(SD->u2.f8.varargin_1[ii], SD->u2.f8.Gy[ii]);
    }
    st.site = &pf_emlrtRSI;
    if (!muSingleScalarIsNaN(gradientImg[0])) {
      idx = 1;
    } else {
      idx = 0;
      ii = 2;
      exitg1 = false;
      while ((!exitg1) && (ii < 374401)) {
        if (!muSingleScalarIsNaN(gradientImg[ii - 1])) {
          idx = ii;
          exitg1 = true;
        } else {
          ii++;
        }
      }
    }
    if (idx == 0) {
      Gmax = gradientImg[0];
    } else {
      Gmax = gradientImg[idx - 1];
      i = idx + 1;
      for (ii = i; ii < 374401; ii++) {
        t = gradientImg[ii - 1];
        if (Gmax < t) {
          Gmax = t;
        }
      }
    }
    t = Gmax * 0.5F;
    b_st.site = &tf_emlrtRSI;
    c_st.site = &id_emlrtRSI;
    d_st.site = &jd_emlrtRSI;
    idx = 0;
    emxInit_int32_T(&d_st, &Ey_chunk, 1, &ce_emlrtRTEI);
    i = Ey_chunk->size[0];
    Ey_chunk->size[0] = 374400;
    emxEnsureCapacity_int32_T(&d_st, Ey_chunk, i, &mc_emlrtRTEI);
    Ey_chunk_data = Ey_chunk->data;
    emxInit_int16_T(&d_st, &Ex_chunk, &be_emlrtRTEI);
    i = Ex_chunk->size[0];
    Ex_chunk->size[0] = 374400;
    emxEnsureCapacity_int16_T(&d_st, Ex_chunk, i, &nc_emlrtRTEI);
    Ex_chunk_data = Ex_chunk->data;
    ii = 1;
    jj = 1;
    exitg1 = false;
    while ((!exitg1) && (jj <= 900)) {
      boolean_T guard1 = false;
      guard1 = false;
      if (gradientImg[(ii + 416 * (jj - 1)) - 1] > t) {
        idx++;
        Ey_chunk_data[idx - 1] = ii;
        Ex_chunk_data[idx - 1] = (int16_T)jj;
        if (idx >= 374400) {
          exitg1 = true;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
      if (guard1) {
        ii++;
        if (ii > 416) {
          ii = 1;
          jj++;
        }
      }
    }
    if (idx < 1) {
      jj = 0;
    } else {
      jj = idx;
    }
    xckeep[0] = 1;
    xckeep[1] = jj;
    e_st.site = &md_emlrtRSI;
    indexShapeCheck(&e_st, 374400, xckeep);
    i = Ey_chunk->size[0];
    Ey_chunk->size[0] = jj;
    emxEnsureCapacity_int32_T(&d_st, Ey_chunk, i, &oc_emlrtRTEI);
    Ey_chunk_data = Ey_chunk->data;
    if (idx < 1) {
      ii = 0;
    } else {
      ii = idx;
    }
    xckeep[0] = 1;
    xckeep[1] = ii;
    e_st.site = &ld_emlrtRSI;
    indexShapeCheck(&e_st, 374400, xckeep);
    i = Ex_chunk->size[0];
    Ex_chunk->size[0] = ii;
    emxEnsureCapacity_int16_T(&d_st, Ex_chunk, i, &pc_emlrtRTEI);
    Ex_chunk_data = Ex_chunk->data;
    xckeep[0] = 1;
    if (idx < 1) {
      xckeep[1] = 0;
    } else {
      xckeep[1] = idx;
    }
    e_st.site = &kd_emlrtRSI;
    indexShapeCheck(&e_st, 374400, xckeep);
    emxInit_real_T(&b_st, &Ey, 1, &le_emlrtRTEI, true);
    i = Ey->size[0];
    Ey->size[0] = jj;
    emxEnsureCapacity_real_T(&b_st, Ey, i, &md_emlrtRTEI);
    Ey_data = Ey->data;
    for (i = 0; i < jj; i++) {
      Ey_data[i] = Ey_chunk_data[i];
    }
    emxInit_real_T(&b_st, &Ex, 1, &le_emlrtRTEI, true);
    i = Ex->size[0];
    Ex->size[0] = ii;
    emxEnsureCapacity_real_T(&b_st, Ex, i, &nd_emlrtRTEI);
    Ex_data = Ex->data;
    for (i = 0; i < ii; i++) {
      Ex_data[i] = Ex_chunk_data[i];
    }
    emxInit_int32_T(sp, &ndx, 1, &me_emlrtRTEI);
    st.site = &qf_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    eml_sub2ind(&b_st, Ey, Ex, ndx);
    ndx_data = ndx->data;
    for (i = 0; i < 281; i++) {
      real_T ai;
      real_T ar;
      real_T br;
      ar = Opca[i].re;
      ai = Opca[i].im;
      br = dv[i];
      if (ai == 0.0) {
        w0[i].re = ar / br;
        w0[i].im = 0.0;
      } else if (ar == 0.0) {
        w0[i].re = 0.0;
        w0[i].im = ai / br;
      } else {
        w0[i].re = ar / br;
        w0[i].im = ai / br;
      }
    }
    memset(&accumMatrix[0], 0, 374400U * sizeof(creal_T));
    i = (int32_T)(((real_T)Ex->size[0] + 3557.0) / 3558.0);
    emlrtForLoopVectorCheckR2021a(1.0, 3558.0, Ex->size[0], mxDOUBLE_CLASS, i,
                                  &p_emlrtRTEI, (emlrtConstCTX)sp);
    emxInit_int32_T(sp, &idxE_chunk, 1, &de_emlrtRTEI);
    emxInit_real32_T(sp, &xc, &ee_emlrtRTEI);
    emxInit_real32_T(sp, &yc, &fe_emlrtRTEI);
    emxInit_creal_T(sp, &w, 2, &ge_emlrtRTEI);
    emxInit_boolean_T(sp, &inside, 2, &he_emlrtRTEI);
    emxInit_boolean_T(sp, &rows_to_keep, 1, &wd_emlrtRTEI);
    emxInit_int32_T(sp, &b_xckeep, 1, &ie_emlrtRTEI);
    emxInit_int32_T(sp, &yckeep, 1, &je_emlrtRTEI);
    emxInit_creal_T(sp, &wkeep, 1, &ke_emlrtRTEI);
    emxInit_real_T(sp, &y, 2, &ne_emlrtRTEI, true);
    for (b_i = 0; b_i < i; b_i++) {
      int32_T i2;
      int32_T idxkeep;
      jj = b_i * 3558 + 1;
      ii = (int32_T)muDoubleScalarMin(((real_T)jj + 3558.0) - 1.0, Ex->size[0]);
      st.site = &rf_emlrtRSI;
      b_st.site = &jc_emlrtRSI;
      if (ii < jj) {
        y->size[1] = 0;
      } else {
        i1 = y->size[0] * y->size[1];
        y->size[1] = (ii - jj) + 1;
        emxEnsureCapacity_real_T(&b_st, y, i1, &od_emlrtRTEI);
      }
      i1 = Ex_chunk->size[0];
      Ex_chunk->size[0] = y->size[1];
      emxEnsureCapacity_int16_T(sp, Ex_chunk, i1, &pd_emlrtRTEI);
      Ex_chunk_data = Ex_chunk->data;
      i1 = Ey_chunk->size[0];
      Ey_chunk->size[0] = y->size[1];
      emxEnsureCapacity_int32_T(sp, Ey_chunk, i1, &qd_emlrtRTEI);
      Ey_chunk_data = Ey_chunk->data;
      i1 = idxE_chunk->size[0];
      idxE_chunk->size[0] = y->size[1];
      emxEnsureCapacity_int32_T(sp, idxE_chunk, i1, &rd_emlrtRTEI);
      idxE_chunk_data = idxE_chunk->data;
      i1 = y->size[1];
      for (idx = 0; idx < i1; idx++) {
        i2 = jj + idx;
        if (i2 > Ex->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, Ex->size[0], &pb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (idx + 1 > Ex_chunk->size[0]) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, Ex_chunk->size[0],
                                        &qb_emlrtBCI, (emlrtConstCTX)sp);
        }
        Ex_chunk_data[idx] = (int16_T)Ex_data[i2 - 1];
        if (i2 > Ey->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, Ey->size[0], &rb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (idx + 1 > Ey_chunk->size[0]) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, Ey_chunk->size[0],
                                        &sb_emlrtBCI, (emlrtConstCTX)sp);
        }
        Ey_chunk_data[idx] = (int32_T)Ey_data[i2 - 1];
        if (i2 > ndx->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, ndx->size[0], &tb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (idx + 1 > idxE_chunk->size[0]) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, idxE_chunk->size[0],
                                        &ub_emlrtBCI, (emlrtConstCTX)sp);
        }
        idxE_chunk_data[idx] = ndx_data[i2 - 1];
      }
      i1 = xc->size[0] * xc->size[1];
      xc->size[0] = idxE_chunk->size[0];
      xc->size[1] = 281;
      emxEnsureCapacity_real32_T(sp, xc, i1, &sd_emlrtRTEI);
      xc_data = xc->data;
      i1 = yc->size[0] * yc->size[1];
      yc->size[0] = idxE_chunk->size[0];
      yc->size[1] = 281;
      emxEnsureCapacity_real32_T(sp, yc, i1, &td_emlrtRTEI);
      yc_data = yc->data;
      i1 = w->size[0] * w->size[1];
      w->size[0] = idxE_chunk->size[0];
      w->size[1] = 281;
      emxEnsureCapacity_creal_T(sp, w, i1, &ud_emlrtRTEI);
      w_data = w->data;
      i1 = inside->size[0] * inside->size[1];
      inside->size[0] = idxE_chunk->size[0];
      inside->size[1] = 281;
      emxEnsureCapacity_boolean_T(sp, inside, i1, &vd_emlrtRTEI);
      inside_data = inside->data;
      i1 = rows_to_keep->size[0];
      rows_to_keep->size[0] = idxE_chunk->size[0];
      emxEnsureCapacity_boolean_T(sp, rows_to_keep, i1, &wd_emlrtRTEI);
      rows_to_keep_data = rows_to_keep->data;
      jj = idxE_chunk->size[0];
      for (i1 = 0; i1 < jj; i1++) {
        rows_to_keep_data[i1] = false;
      }
      i1 = idxE_chunk->size[0];
      for (ii = 0; ii < 281; ii++) {
        for (jj = 0; jj < i1; jj++) {
          if (jj + 1 > idxE_chunk->size[0]) {
            emlrtDynamicBoundsCheckR2012b(jj + 1, 1, idxE_chunk->size[0],
                                          &kb_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (jj + 1 > Ex_chunk->size[0]) {
            emlrtDynamicBoundsCheckR2012b(jj + 1, 1, Ex_chunk->size[0],
                                          &jb_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (jj + 1 > xc->size[0]) {
            emlrtDynamicBoundsCheckR2012b(jj + 1, 1, xc->size[0], &vb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          t = gradientImg[idxE_chunk_data[jj] - 1];
          Gmax = (real32_T) - (-0.5 * (real_T)ii - 10.0);
          xc_data[jj + xc->size[0] * ii] = muSingleScalarRound(
              (real32_T)Ex_chunk_data[jj] +
              Gmax * (SD->u2.f8.varargin_1[idxE_chunk_data[jj] - 1] / t));
          if (jj + 1 > idxE_chunk->size[0]) {
            emlrtDynamicBoundsCheckR2012b(jj + 1, 1, idxE_chunk->size[0],
                                          &mb_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (jj + 1 > Ey_chunk->size[0]) {
            emlrtDynamicBoundsCheckR2012b(jj + 1, 1, Ey_chunk->size[0],
                                          &lb_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (jj + 1 > yc->size[0]) {
            emlrtDynamicBoundsCheckR2012b(jj + 1, 1, yc->size[0], &wb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          yc_data[jj + yc->size[0] * ii] = muSingleScalarRound(
              (real32_T)Ey_chunk_data[jj] +
              Gmax * (SD->u2.f8.Gy[idxE_chunk_data[jj] - 1] / t));
          if (jj + 1 > w->size[0]) {
            emlrtDynamicBoundsCheckR2012b(jj + 1, 1, w->size[0], &xb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          w_data[jj + w->size[0] * ii].re = w0[ii].re;
          if (jj + 1 > w->size[0]) {
            emlrtDynamicBoundsCheckR2012b(jj + 1, 1, w->size[0], &xb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          w_data[jj + w->size[0] * ii].im = w0[ii].im;
          if (jj + 1 > xc->size[0]) {
            emlrtDynamicBoundsCheckR2012b(jj + 1, 1, xc->size[0], &nb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (jj + 1 > yc->size[0]) {
            emlrtDynamicBoundsCheckR2012b(jj + 1, 1, yc->size[0], &ob_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (jj + 1 > inside->size[0]) {
            emlrtDynamicBoundsCheckR2012b(jj + 1, 1, inside->size[0],
                                          &dc_emlrtBCI, (emlrtConstCTX)sp);
          }
          inside_data[jj + inside->size[0] * ii] =
              ((xc_data[jj + xc->size[0] * ii] >= 1.0F) &&
               (xc_data[jj + xc->size[0] * ii] <= 900.0F) &&
               (yc_data[jj + yc->size[0] * ii] >= 1.0F) &&
               (yc_data[jj + yc->size[0] * ii] <= 416.0F));
          if (jj + 1 > inside->size[0]) {
            emlrtDynamicBoundsCheckR2012b(jj + 1, 1, inside->size[0],
                                          &nc_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (inside_data[jj + inside->size[0] * ii]) {
            if (jj + 1 > rows_to_keep->size[0]) {
              emlrtDynamicBoundsCheckR2012b(jj + 1, 1, rows_to_keep->size[0],
                                            &qc_emlrtBCI, (emlrtConstCTX)sp);
            }
            rows_to_keep_data[jj] = true;
          }
        }
      }
      i1 = b_xckeep->size[0];
      b_xckeep->size[0] = xc->size[0] * 281;
      emxEnsureCapacity_int32_T(sp, b_xckeep, i1, &xd_emlrtRTEI);
      Ey_chunk_data = b_xckeep->data;
      i1 = yckeep->size[0];
      yckeep->size[0] = yc->size[0] * 281;
      emxEnsureCapacity_int32_T(sp, yckeep, i1, &yd_emlrtRTEI);
      idxE_chunk_data = yckeep->data;
      i1 = wkeep->size[0];
      wkeep->size[0] = w->size[0] * 281;
      emxEnsureCapacity_creal_T(sp, wkeep, i1, &ae_emlrtRTEI);
      wkeep_data = wkeep->data;
      idxkeep = 0;
      i1 = idxE_chunk->size[0];
      for (ii = 0; ii < 281; ii++) {
        for (jj = 0; jj < i1; jj++) {
          if (jj + 1 > rows_to_keep->size[0]) {
            emlrtDynamicBoundsCheckR2012b(jj + 1, 1, rows_to_keep->size[0],
                                          &yb_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (rows_to_keep_data[jj]) {
            if (jj + 1 > inside->size[0]) {
              emlrtDynamicBoundsCheckR2012b(jj + 1, 1, inside->size[0],
                                            &ac_emlrtBCI, (emlrtConstCTX)sp);
            }
            if (inside_data[jj + inside->size[0] * ii]) {
              idxkeep++;
              if (jj + 1 > xc->size[0]) {
                emlrtDynamicBoundsCheckR2012b(jj + 1, 1, xc->size[0],
                                              &bc_emlrtBCI, (emlrtConstCTX)sp);
              }
              if (idxkeep > b_xckeep->size[0]) {
                emlrtDynamicBoundsCheckR2012b(idxkeep, 1, b_xckeep->size[0],
                                              &cc_emlrtBCI, (emlrtConstCTX)sp);
              }
              Ey_chunk_data[idxkeep - 1] =
                  (int32_T)xc_data[jj + xc->size[0] * ii];
              if (jj + 1 > yc->size[0]) {
                emlrtDynamicBoundsCheckR2012b(jj + 1, 1, yc->size[0],
                                              &oc_emlrtBCI, (emlrtConstCTX)sp);
              }
              if (idxkeep > yckeep->size[0]) {
                emlrtDynamicBoundsCheckR2012b(idxkeep, 1, yckeep->size[0],
                                              &pc_emlrtBCI, (emlrtConstCTX)sp);
              }
              idxE_chunk_data[idxkeep - 1] =
                  (int32_T)yc_data[jj + yc->size[0] * ii];
              if (idxkeep > wkeep->size[0]) {
                emlrtDynamicBoundsCheckR2012b(idxkeep, 1, wkeep->size[0],
                                              &sc_emlrtBCI, (emlrtConstCTX)sp);
              }
              if (jj + 1 > w->size[0]) {
                emlrtDynamicBoundsCheckR2012b(jj + 1, 1, w->size[0],
                                              &rc_emlrtBCI, (emlrtConstCTX)sp);
              }
              wkeep_data[idxkeep - 1].re = w_data[jj + w->size[0] * ii].re;
              if (jj + 1 > w->size[0]) {
                emlrtDynamicBoundsCheckR2012b(jj + 1, 1, w->size[0],
                                              &rc_emlrtBCI, (emlrtConstCTX)sp);
              }
              if (idxkeep > wkeep->size[0]) {
                emlrtDynamicBoundsCheckR2012b(idxkeep, 1, wkeep->size[0],
                                              &sc_emlrtBCI, (emlrtConstCTX)sp);
              }
              wkeep_data[idxkeep - 1].im = w_data[jj + w->size[0] * ii].im;
            }
          }
        }
      }
      st.site = &sf_emlrtRSI;
      memset(&SD->u2.f8.out[0], 0, 374400U * sizeof(creal_T));
      b_st.site = &uf_emlrtRSI;
      for (idx = 0; idx < idxkeep; idx++) {
        if (idx + 1 > yckeep->size[0]) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, yckeep->size[0],
                                        &kc_emlrtBCI, &st);
        }
        i1 = idxE_chunk_data[idx];
        if ((i1 < 1) || (i1 > 416)) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, 416, &jc_emlrtBCI, &st);
        }
        if (idx + 1 > b_xckeep->size[0]) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, b_xckeep->size[0],
                                        &mc_emlrtBCI, &st);
        }
        i2 = Ey_chunk_data[idx];
        if ((i2 < 1) || (i2 > 900)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, 900, &lc_emlrtBCI, &st);
        }
        if (idx + 1 > yckeep->size[0]) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, yckeep->size[0],
                                        &fc_emlrtBCI, &st);
        }
        ii = idxE_chunk_data[idx];
        if ((ii < 1) || (ii > 416)) {
          emlrtDynamicBoundsCheckR2012b(ii, 1, 416, &ec_emlrtBCI, &st);
        }
        if (idx + 1 > b_xckeep->size[0]) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, b_xckeep->size[0],
                                        &hc_emlrtBCI, &st);
        }
        jj = Ey_chunk_data[idx];
        if ((jj < 1) || (jj > 900)) {
          emlrtDynamicBoundsCheckR2012b(jj, 1, 900, &gc_emlrtBCI, &st);
        }
        if (idx + 1 > wkeep->size[0]) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, wkeep->size[0],
                                        &ic_emlrtBCI, &st);
        }
        SD->u2.f8.out[(i1 + 416 * (i2 - 1)) - 1].re =
            SD->u2.f8.out[(ii + 416 * (jj - 1)) - 1].re + wkeep_data[idx].re;
        if (idx + 1 > yckeep->size[0]) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, yckeep->size[0],
                                        &fc_emlrtBCI, &st);
        }
        i1 = idxE_chunk_data[idx];
        if ((i1 < 1) || (i1 > 416)) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, 416, &ec_emlrtBCI, &st);
        }
        if (idx + 1 > b_xckeep->size[0]) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, b_xckeep->size[0],
                                        &hc_emlrtBCI, &st);
        }
        i2 = Ey_chunk_data[idx];
        if ((i2 < 1) || (i2 > 900)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, 900, &gc_emlrtBCI, &st);
        }
        if (idx + 1 > wkeep->size[0]) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, wkeep->size[0],
                                        &ic_emlrtBCI, &st);
        }
        if (idx + 1 > yckeep->size[0]) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, yckeep->size[0],
                                        &kc_emlrtBCI, &st);
        }
        ii = idxE_chunk_data[idx];
        if ((ii < 1) || (ii > 416)) {
          emlrtDynamicBoundsCheckR2012b(ii, 1, 416, &jc_emlrtBCI, &st);
        }
        if (idx + 1 > b_xckeep->size[0]) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, b_xckeep->size[0],
                                        &mc_emlrtBCI, &st);
        }
        jj = Ey_chunk_data[idx];
        if ((jj < 1) || (jj > 900)) {
          emlrtDynamicBoundsCheckR2012b(jj, 1, 900, &lc_emlrtBCI, &st);
        }
        SD->u2.f8.out[(ii + 416 * (jj - 1)) - 1].im =
            SD->u2.f8.out[(i1 + 416 * (i2 - 1)) - 1].im + wkeep_data[idx].im;
      }
      for (i1 = 0; i1 < 374400; i1++) {
        accumMatrix[i1].re += SD->u2.f8.out[i1].re;
        accumMatrix[i1].im += SD->u2.f8.out[i1].im;
      }
    }
    emxFree_real_T(sp, &y);
    emxFree_int32_T(sp, &ndx);
    emxFree_real_T(sp, &Ex);
    emxFree_real_T(sp, &Ey);
    emxFree_creal_T(sp, &wkeep);
    emxFree_int32_T(sp, &yckeep);
    emxFree_int32_T(sp, &b_xckeep);
    emxFree_boolean_T(sp, &rows_to_keep);
    emxFree_boolean_T(sp, &inside);
    emxFree_creal_T(sp, &w);
    emxFree_real32_T(sp, &yc);
    emxFree_real32_T(sp, &xc);
    emxFree_int32_T(sp, &idxE_chunk);
    emxFree_int32_T(sp, &Ey_chunk);
    emxFree_int16_T(sp, &Ex_chunk);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (chaccum.c) */
