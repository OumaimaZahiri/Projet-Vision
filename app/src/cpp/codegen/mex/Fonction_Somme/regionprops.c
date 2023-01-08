/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * regionprops.c
 *
 * Code generation for function 'regionprops'
 *
 */

/* Include files */
#include "regionprops.h"
#include "Fonction_Somme_data.h"
#include "Fonction_Somme_emxutil.h"
#include "Fonction_Somme_types.h"
#include "bwconncomp.h"
#include "combineVectorElements.h"
#include "rt_nonfinite.h"
#include "useConstantDim.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo og_emlrtRSI = {
    41,            /* lineNo */
    "regionprops", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pathName
                                                                          */
};

static emlrtRSInfo pg_emlrtRSI = {
    97,            /* lineNo */
    "regionprops", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pathName
                                                                          */
};

static emlrtRSInfo qg_emlrtRSI = {
    99,            /* lineNo */
    "regionprops", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pathName
                                                                          */
};

static emlrtRSInfo rg_emlrtRSI = {
    304,           /* lineNo */
    "regionprops", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pathName
                                                                          */
};

static emlrtRSInfo sg_emlrtRSI = {
    306,           /* lineNo */
    "regionprops", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pathName
                                                                          */
};

static emlrtRSInfo tg_emlrtRSI = {
    368,           /* lineNo */
    "regionprops", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pathName
                                                                          */
};

static emlrtRSInfo ph_emlrtRSI = {
    1454,                                /* lineNo */
    "parseInputsAndInitializeOutStruct", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pathName
                                                                          */
};

static emlrtRSInfo qh_emlrtRSI = {
    1639,                                      /* lineNo */
    "getPropsFromInputAndInitializeOutStruct", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pathName
                                                                          */
};

static emlrtRSInfo rh_emlrtRSI = {
    28,       /* lineNo */
    "repmat", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" /* pathName
                                                                         */
};

static emlrtRSInfo sh_emlrtRSI = {
    2011,                    /* lineNo */
    "initializeStatsStruct", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pathName
                                                                          */
};

static emlrtRSInfo th_emlrtRSI = {
    466,                   /* lineNo */
    "ComputePixelIdxList", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pathName
                                                                          */
};

static emlrtRSInfo uh_emlrtRSI = {
    1324,                      /* lineNo */
    "ComputeWeightedCentroid", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pathName
                                                                          */
};

static emlrtRSInfo vh_emlrtRSI = {
    1315,                      /* lineNo */
    "ComputeWeightedCentroid", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pathName
                                                                          */
};

static emlrtRSInfo wh_emlrtRSI = {
    1310,                      /* lineNo */
    "ComputeWeightedCentroid", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pathName
                                                                          */
};

static emlrtRSInfo xh_emlrtRSI = {
    1307,                      /* lineNo */
    "ComputeWeightedCentroid", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pathName
                                                                          */
};

static emlrtRSInfo yh_emlrtRSI = {
    944,                /* lineNo */
    "ComputePixelList", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pathName
                                                                          */
};

static emlrtRSInfo ai_emlrtRSI = {
    942,                /* lineNo */
    "ComputePixelList", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pathName
                                                                          */
};

static emlrtRSInfo bi_emlrtRSI = {
    19,        /* lineNo */
    "ind2sub", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m" /* pathName
                                                                          */
};

static emlrtRSInfo ci_emlrtRSI = {
    1293,                 /* lineNo */
    "ComputePixelValues", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pathName
                                                                          */
};

static emlrtBCInfo ad_emlrtBCI = {
    -1,                             /* iFirst */
    -1,                             /* iLast */
    2069,                           /* lineNo */
    42,                             /* colNo */
    "",                             /* aName */
    "populateOutputStatsStructure", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = {
    -1,                             /* iFirst */
    -1,                             /* iLast */
    2067,                           /* lineNo */
    56,                             /* colNo */
    "",                             /* aName */
    "populateOutputStatsStructure", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    469,                   /* lineNo */
    64,                    /* colNo */
    "",                    /* aName */
    "ComputePixelIdxList", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    469,                   /* lineNo */
    78,                    /* colNo */
    "",                    /* aName */
    "ComputePixelIdxList", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    469,                   /* lineNo */
    55,                    /* colNo */
    "",                    /* aName */
    "ComputePixelIdxList", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    469,                   /* lineNo */
    69,                    /* colNo */
    "",                    /* aName */
    "ComputePixelIdxList", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtRTEInfo w_emlrtRTEI = {
    1442,                                /* lineNo */
    5,                                   /* colNo */
    "parseInputsAndInitializeOutStruct", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pName
                                                                          */
};

static emlrtBCInfo gd_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    469,                   /* lineNo */
    17,                    /* colNo */
    "",                    /* aName */
    "ComputePixelIdxList", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = {
    -1,                             /* iFirst */
    -1,                             /* iLast */
    2070,                           /* lineNo */
    55,                             /* colNo */
    "",                             /* aName */
    "populateOutputStatsStructure", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = {
    -1,                             /* iFirst */
    -1,                             /* iLast */
    2070,                           /* lineNo */
    26,                             /* colNo */
    "",                             /* aName */
    "populateOutputStatsStructure", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtRTEInfo x_emlrtRTEI = {
    58,                   /* lineNo */
    23,                   /* colNo */
    "assertValidSizeArg", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\assertValidSizeArg.m" /* pName */
};

static emlrtECInfo d_emlrtECI = {
    1,                         /* nDims */
    1324,                      /* lineNo */
    21,                        /* colNo */
    "ComputeWeightedCentroid", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pName
                                                                          */
};

static emlrtBCInfo hg_emlrtBCI = {
    -1,                        /* iFirst */
    -1,                        /* iLast */
    1324,                      /* lineNo */
    27,                        /* colNo */
    "",                        /* aName */
    "ComputeWeightedCentroid", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo ig_emlrtBCI = {
    -1,                        /* iFirst */
    -1,                        /* iLast */
    1316,                      /* lineNo */
    30,                        /* colNo */
    "",                        /* aName */
    "ComputeWeightedCentroid", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo jg_emlrtBCI = {
    -1,                        /* iFirst */
    -1,                        /* iLast */
    1314,                      /* lineNo */
    27,                        /* colNo */
    "",                        /* aName */
    "ComputeWeightedCentroid", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo kg_emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    942,                /* lineNo */
    47,                 /* colNo */
    "",                 /* aName */
    "ComputePixelList", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo lg_emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    941,                /* lineNo */
    27,                 /* colNo */
    "",                 /* aName */
    "ComputePixelList", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo mg_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    1295,                 /* lineNo */
    19,                   /* colNo */
    "",                   /* aName */
    "ComputePixelValues", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo ng_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    1294,                 /* lineNo */
    33,                   /* colNo */
    "",                   /* aName */
    "ComputePixelValues", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo og_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    1293,                 /* lineNo */
    39,                   /* colNo */
    "",                   /* aName */
    "ComputePixelValues", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo pg_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    1292,                 /* lineNo */
    63,                   /* colNo */
    "",                   /* aName */
    "ComputePixelValues", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo qg_emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    946,                /* lineNo */
    19,                 /* colNo */
    "",                 /* aName */
    "ComputePixelList", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo rg_emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    944,                /* lineNo */
    13,                 /* colNo */
    "",                 /* aName */
    "ComputePixelList", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo sg_emlrtBCI = {
    1,                    /* iFirst */
    416,                  /* iLast */
    1295,                 /* lineNo */
    45,                   /* colNo */
    "",                   /* aName */
    "ComputePixelValues", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo tg_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    1295,                 /* lineNo */
    47,                   /* colNo */
    "",                   /* aName */
    "ComputePixelValues", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo ug_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    1295,                 /* lineNo */
    54,                   /* colNo */
    "",                   /* aName */
    "ComputePixelValues", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo vg_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    1295,                 /* lineNo */
    34,                   /* colNo */
    "",                   /* aName */
    "ComputePixelValues", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo wg_emlrtBCI = {
    -1,                        /* iFirst */
    -1,                        /* iLast */
    1328,                      /* lineNo */
    9,                         /* colNo */
    "",                        /* aName */
    "ComputeWeightedCentroid", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtRTEInfo cf_emlrtRTEI = {
    1454,          /* lineNo */
    9,             /* colNo */
    "regionprops", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pName
                                                                          */
};

static emlrtRTEInfo df_emlrtRTEI = {
    2011,          /* lineNo */
    1,             /* colNo */
    "regionprops", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pName
                                                                          */
};

static emlrtRTEInfo ef_emlrtRTEI = {
    466,           /* lineNo */
    9,             /* colNo */
    "regionprops", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pName
                                                                          */
};

static emlrtRTEInfo ff_emlrtRTEI = {
    469,           /* lineNo */
    17,            /* colNo */
    "regionprops", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pName
                                                                          */
};

static emlrtRTEInfo gf_emlrtRTEI = {
    35,            /* lineNo */
    13,            /* colNo */
    "regionprops", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pName
                                                                          */
};

static emlrtRTEInfo hf_emlrtRTEI = {
    1,             /* lineNo */
    23,            /* colNo */
    "regionprops", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pName
                                                                          */
};

static emlrtRTEInfo if_emlrtRTEI = {
    391,           /* lineNo */
    13,            /* colNo */
    "regionprops", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pName
                                                                          */
};

static emlrtRTEInfo jf_emlrtRTEI = {
    405,           /* lineNo */
    17,            /* colNo */
    "regionprops", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pName
                                                                          */
};

static emlrtRTEInfo kf_emlrtRTEI = {
    1890,          /* lineNo */
    5,             /* colNo */
    "regionprops", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pName
                                                                          */
};

static emlrtRTEInfo jg_emlrtRTEI = {
    1292,          /* lineNo */
    47,            /* colNo */
    "regionprops", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pName
                                                                          */
};

static emlrtRTEInfo kg_emlrtRTEI = {
    42,        /* lineNo */
    1,         /* colNo */
    "ind2sub", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m" /* pName
                                                                          */
};

static emlrtRTEInfo lg_emlrtRTEI = {
    946,           /* lineNo */
    13,            /* colNo */
    "regionprops", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pName
                                                                          */
};

static emlrtRTEInfo mg_emlrtRTEI = {
    44,        /* lineNo */
    5,         /* colNo */
    "ind2sub", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m" /* pName
                                                                          */
};

static emlrtRTEInfo ng_emlrtRTEI = {
    21,        /* lineNo */
    5,         /* colNo */
    "ind2sub", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m" /* pName
                                                                          */
};

static emlrtRTEInfo og_emlrtRTEI = {
    1324,          /* lineNo */
    21,            /* colNo */
    "regionprops", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pName
                                                                          */
};

static emlrtRTEInfo pg_emlrtRTEI = {
    944,           /* lineNo */
    13,            /* colNo */
    "regionprops", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m" /* pName
                                                                          */
};

/* Function Declarations */
static void ComputeWeightedCentroid(const emlrtStack *sp,
                                    const real_T b_I[374400],
                                    b_emxArray_struct_T *stats);

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                             const b_emxArray_struct_T *in2, int32_T in3,
                             int32_T in4);

/* Function Definitions */
static void ComputeWeightedCentroid(const emlrtStack *sp,
                                    const real_T b_I[374400],
                                    b_emxArray_struct_T *stats)
{
  b_struct_T *stats_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *v1;
  emxArray_int32_T *vk;
  emxArray_real_T *b_i;
  real_T *i_data;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T idx;
  int32_T k;
  int32_T loop_ub;
  int32_T *v1_data;
  int32_T *vk_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  stats_data = stats->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &xh_emlrtRSI;
  i = stats->size[0];
  emxInit_real_T(&st, &b_i, 1, &og_emlrtRTEI, true);
  emxInit_int32_T(&st, &v1, 1, &kg_emlrtRTEI);
  emxInit_int32_T(&st, &vk, 1, &mg_emlrtRTEI);
  for (k = 0; k < i; k++) {
    i1 = stats->size[0];
    if (k + 1 > i1) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &lg_emlrtBCI, &st);
    }
    if (stats_data[k].PixelIdxList->size[0] != 0) {
      b_st.site = &ai_emlrtRSI;
      i1 = stats->size[0];
      if (k + 1 > i1) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &kg_emlrtBCI, &b_st);
      }
      c_st.site = &bi_emlrtRSI;
      i1 = v1->size[0];
      v1->size[0] = stats_data[k].PixelIdxList->size[0];
      emxEnsureCapacity_int32_T(&c_st, v1, i1, &kg_emlrtRTEI);
      v1_data = v1->data;
      loop_ub = stats_data[k].PixelIdxList->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        v1_data[i1] = (int32_T)stats_data[k].PixelIdxList->data[i1] - 1;
      }
      i1 = vk->size[0];
      vk->size[0] = v1->size[0];
      emxEnsureCapacity_int32_T(&c_st, vk, i1, &mg_emlrtRTEI);
      vk_data = vk->data;
      loop_ub = v1->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        vk_data[i1] = v1_data[i1] / 416;
      }
      loop_ub = v1->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        v1_data[i1] -= vk_data[i1] * 416;
      }
      i1 = b_i->size[0];
      b_i->size[0] = v1->size[0];
      emxEnsureCapacity_real_T(&b_st, b_i, i1, &ng_emlrtRTEI);
      i_data = b_i->data;
      loop_ub = v1->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        i_data[i1] = v1_data[i1] + 1;
      }
      loop_ub = vk->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        vk_data[i1]++;
      }
      b_st.site = &yh_emlrtRSI;
      c_st.site = &od_emlrtRSI;
      d_st.site = &pd_emlrtRSI;
      if (b_i->size[0] != vk->size[0]) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &h_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      i1 = stats->size[0];
      if (k + 1 > i1) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &rg_emlrtBCI, &c_st);
      }
      i1 = stats_data[k].PixelList->size[0] * stats_data[k].PixelList->size[1];
      stats_data[k].PixelList->size[0] = vk->size[0];
      emxEnsureCapacity_real_T(&c_st, stats_data[k].PixelList, i1,
                               &pg_emlrtRTEI);
      i1 = stats->size[0];
      if (k + 1 > i1) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &rg_emlrtBCI, &c_st);
      }
      i1 = stats_data[k].PixelList->size[0] * stats_data[k].PixelList->size[1];
      stats_data[k].PixelList->size[1] = 2;
      emxEnsureCapacity_real_T(&c_st, stats_data[k].PixelList, i1,
                               &pg_emlrtRTEI);
      loop_ub = vk->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        i2 = stats->size[0];
        if (k + 1 > i2) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, i2, &rg_emlrtBCI, &c_st);
        }
        stats_data[k].PixelList->data[i1] = vk_data[i1];
      }
      loop_ub = b_i->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        i2 = stats->size[0];
        if (k + 1 > i2) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, i2, &rg_emlrtBCI, &c_st);
        }
        stats_data[k].PixelList->data[i1 + stats_data[k].PixelList->size[0]] =
            i_data[i1];
      }
    } else {
      i1 = stats->size[0];
      if (k + 1 > i1) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &qg_emlrtBCI, &st);
      }
      stats_data[k].PixelList->size[0] = 0;
      i1 = stats->size[0];
      if (k + 1 > i1) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &qg_emlrtBCI, &st);
      }
      i1 = stats_data[k].PixelList->size[0] * stats_data[k].PixelList->size[1];
      stats_data[k].PixelList->size[1] = 2;
      emxEnsureCapacity_real_T(&st, stats_data[k].PixelList, i1, &lg_emlrtRTEI);
      i1 = stats->size[0];
      if (k + 1 > i1) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &qg_emlrtBCI, &st);
      }
    }
  }
  st.site = &wh_emlrtRSI;
  i = stats->size[0];
  for (k = 0; k < i; k++) {
    i1 = stats->size[0];
    if (k + 1 > i1) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &pg_emlrtBCI, &st);
    }
    i1 = stats_data[k].PixelValues->size[0];
    stats_data[k].PixelValues->size[0] = stats_data[k].PixelIdxList->size[0];
    emxEnsureCapacity_real_T(&st, stats_data[k].PixelValues, i1, &jg_emlrtRTEI);
    b_st.site = &ci_emlrtRSI;
    i1 = stats->size[0];
    if (k + 1 > i1) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &og_emlrtBCI, &b_st);
    }
    c_st.site = &bi_emlrtRSI;
    i1 = v1->size[0];
    v1->size[0] = stats_data[k].PixelIdxList->size[0];
    emxEnsureCapacity_int32_T(&c_st, v1, i1, &kg_emlrtRTEI);
    v1_data = v1->data;
    loop_ub = stats_data[k].PixelIdxList->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      v1_data[i1] = (int32_T)stats_data[k].PixelIdxList->data[i1] - 1;
    }
    i1 = vk->size[0];
    vk->size[0] = v1->size[0];
    emxEnsureCapacity_int32_T(&c_st, vk, i1, &mg_emlrtRTEI);
    vk_data = vk->data;
    loop_ub = v1->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      vk_data[i1] = v1_data[i1] / 416;
    }
    loop_ub = v1->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      v1_data[i1] -= vk_data[i1] * 416;
    }
    i1 = b_i->size[0];
    b_i->size[0] = v1->size[0];
    emxEnsureCapacity_real_T(&b_st, b_i, i1, &ng_emlrtRTEI);
    i_data = b_i->data;
    loop_ub = v1->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      i_data[i1] = v1_data[i1] + 1;
    }
    loop_ub = vk->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      vk_data[i1]++;
    }
    i1 = stats->size[0];
    if (k + 1 > i1) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &ng_emlrtBCI, &st);
    }
    i1 = stats_data[k].PixelValues->size[0];
    for (idx = 0; idx < i1; idx++) {
      i2 = stats->size[0];
      if (k + 1 > i2) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, i2, &mg_emlrtBCI, &st);
      }
      if (idx + 1 > b_i->size[0]) {
        emlrtDynamicBoundsCheckR2012b(idx + 1, 1, b_i->size[0], &tg_emlrtBCI,
                                      &st);
      }
      i2 = (int32_T)i_data[idx];
      if ((i2 < 1) || (i2 > 416)) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, 416, &sg_emlrtBCI, &st);
      }
      if (idx + 1 > vk->size[0]) {
        emlrtDynamicBoundsCheckR2012b(idx + 1, 1, vk->size[0], &ug_emlrtBCI,
                                      &st);
      }
      loop_ub = stats_data[k].PixelValues->size[0];
      if (idx + 1 > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(idx + 1, 1, loop_ub, &vg_emlrtBCI, &st);
      }
      stats_data[k].PixelValues->data[idx] =
          b_I[(i2 + 416 * (vk_data[idx] - 1)) - 1];
    }
  }
  emxFree_int32_T(&st, &vk);
  emxFree_int32_T(&st, &v1);
  i = stats->size[0];
  for (k = 0; k < i; k++) {
    real_T wc[2];
    real_T sumIntensity;
    i1 = stats->size[0];
    if (k + 1 > i1) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &jg_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    st.site = &vh_emlrtRSI;
    b_st.site = &hh_emlrtRSI;
    c_st.site = &ih_emlrtRSI;
    sumIntensity = combineVectorElements(&c_st, stats_data[k].PixelValues);
    i1 = stats->size[0];
    if (k + 1 > i1) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &ig_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    for (idx = 0; idx < 2; idx++) {
      real_T M;
      i1 = stats->size[0];
      if (k + 1 > i1) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &hg_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i1 = stats_data[k].PixelList->size[0];
      i2 = stats_data[k].PixelValues->size[0];
      if ((i1 != i2) && ((i1 != 1) && (i2 != 1))) {
        emlrtDimSizeImpxCheckR2021b(i1, i2, &d_emlrtECI, (emlrtConstCTX)sp);
      }
      st.site = &uh_emlrtRSI;
      if (stats_data[k].PixelList->size[0] ==
          stats_data[k].PixelValues->size[0]) {
        loop_ub = stats_data[k].PixelList->size[0];
        i1 = b_i->size[0];
        b_i->size[0] = loop_ub;
        emxEnsureCapacity_real_T(&st, b_i, i1, &og_emlrtRTEI);
        i_data = b_i->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          i_data[i1] = stats_data[k]
                           .PixelList
                           ->data[i1 + stats_data[k].PixelList->size[0] * idx] *
                       stats_data[k].PixelValues->data[i1];
        }
      } else {
        b_st.site = &uh_emlrtRSI;
        binary_expand_op(&b_st, b_i, stats, k, idx);
      }
      b_st.site = &hh_emlrtRSI;
      c_st.site = &ih_emlrtRSI;
      M = combineVectorElements(&c_st, b_i);
      wc[idx] = M / sumIntensity;
    }
    i1 = stats->size[0];
    if (k + 1 > i1) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &wg_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    stats_data[k].WeightedCentroid[0] = wc[0];
    i1 = stats->size[0];
    if (k + 1 > i1) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &wg_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    stats_data[k].WeightedCentroid[1] = wc[1];
  }
  emxFree_real_T(sp, &b_i);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                             const b_emxArray_struct_T *in2, int32_T in3,
                             int32_T in4)
{
  const b_struct_T *in2_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in2_data = in2->data;
  i = in2_data[in3].PixelList->size[0];
  stride_0_0 = in1->size[0];
  if (in2_data[in3].PixelValues->size[0] == 1) {
    in1->size[0] = i;
  } else {
    in1->size[0] = in2_data[in3].PixelValues->size[0];
  }
  emxEnsureCapacity_real_T(sp, in1, stride_0_0, &og_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (in2_data[in3].PixelValues->size[0] != 1);
  if (in2_data[in3].PixelValues->size[0] == 1) {
    loop_ub = i;
  } else {
    loop_ub = in2_data[in3].PixelValues->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] =
        in2_data[in3].PixelList->data[i * stride_0_0 +
                                      in2_data[in3].PixelList->size[0] * in4] *
        in2_data[in3].PixelValues->data[i * stride_1_0];
  }
}

void regionprops(const emlrtStack *sp, const boolean_T varargin_1[374400],
                 const real_T varargin_2[374400], emxArray_struct_T *outstats)
{
  b_emxArray_struct_T *stats;
  b_struct_T statsOneObj;
  b_struct_T *stats_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *idxCount;
  emxArray_int32_T *regionLengths;
  emxArray_real_T *CC_RegionIndices;
  struct_T s;
  struct_T *outstats_data;
  real_T CC_ImageSize[2];
  real_T CC_NumObjects;
  real_T expl_temp;
  real_T *CC_RegionIndices_data;
  int32_T i;
  int32_T k;
  int32_T loop_ub_tmp;
  int32_T *idxCount_data;
  int32_T *regionLengths_data;
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &CC_RegionIndices, 1, &gf_emlrtRTEI, true);
  emxInit_int32_T(sp, &regionLengths, 1, &if_emlrtRTEI);
  st.site = &og_emlrtRSI;
  bwconncomp(&st, varargin_1, &expl_temp, CC_ImageSize, &CC_NumObjects,
             CC_RegionIndices, regionLengths);
  CC_RegionIndices_data = CC_RegionIndices->data;
  st.site = &pg_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!(CC_ImageSize[k] == 484.0 * (real_T)k + 416.0)) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&st, &w_emlrtRTEI,
                                  "images:regionprops:sizeMismatch",
                                  "images:regionprops:sizeMismatch", 0);
  }
  b_st.site = &ph_emlrtRSI;
  c_st.site = &qh_emlrtRSI;
  d_st.site = &rh_emlrtRSI;
  if ((CC_NumObjects != CC_NumObjects) || muDoubleScalarIsInf(CC_NumObjects) ||
      (CC_NumObjects > 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &x_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  s.WeightedCentroid[0] = 0.0;
  s.WeightedCentroid[1] = 0.0;
  loop_ub_tmp = (int32_T)CC_NumObjects;
  i = outstats->size[0];
  outstats->size[0] = (int32_T)CC_NumObjects;
  emxEnsureCapacity_struct_T(&c_st, outstats, i, &cf_emlrtRTEI);
  outstats_data = outstats->data;
  for (i = 0; i < loop_ub_tmp; i++) {
    outstats_data[i] = s;
  }
  st.site = &qg_emlrtRSI;
  emxInitStruct_struct_T(&st, &statsOneObj, &kf_emlrtRTEI, true);
  statsOneObj.Area = 0.0;
  statsOneObj.Centroid[0] = 0.0;
  statsOneObj.Centroid[1] = 0.0;
  statsOneObj.BoundingBox[0] = 0.0;
  statsOneObj.BoundingBox[1] = 0.0;
  statsOneObj.BoundingBox[2] = 0.0;
  statsOneObj.BoundingBox[3] = 0.0;
  statsOneObj.MajorAxisLength = 0.0;
  statsOneObj.MinorAxisLength = 0.0;
  statsOneObj.Eccentricity = 0.0;
  statsOneObj.Orientation = 0.0;
  statsOneObj.Image.size[0] = 0;
  statsOneObj.Image.size[1] = 0;
  statsOneObj.FilledImage.size[0] = 0;
  statsOneObj.FilledImage.size[1] = 0;
  statsOneObj.FilledArea = 0.0;
  statsOneObj.EulerNumber = 0.0;
  memset(&statsOneObj.Extrema[0], 0, 16U * sizeof(real_T));
  statsOneObj.EquivDiameter = 0.0;
  statsOneObj.Extent = 0.0;
  statsOneObj.PixelIdxList->size[0] = 0;
  statsOneObj.PixelList->size[0] = 0;
  statsOneObj.PixelList->size[1] = 2;
  statsOneObj.Perimeter = 0.0;
  statsOneObj.Circularity = 0.0;
  statsOneObj.PixelValues->size[0] = 0;
  statsOneObj.MeanIntensity = 0.0;
  statsOneObj.MinIntensity = 0.0;
  statsOneObj.MaxIntensity = 0.0;
  statsOneObj.SubarrayIdx.size[0] = 1;
  statsOneObj.SubarrayIdx.size[1] = 0;
  statsOneObj.WeightedCentroid[0] = 0.0;
  statsOneObj.SubarrayIdxLengths[0] = 0.0;
  statsOneObj.WeightedCentroid[1] = 0.0;
  statsOneObj.SubarrayIdxLengths[1] = 0.0;
  b_st.site = &sh_emlrtRSI;
  c_st.site = &rh_emlrtRSI;
  if (muDoubleScalarIsInf(CC_NumObjects)) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &x_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  emxInit_struct_T1(&b_st, &stats, &hf_emlrtRTEI);
  i = stats->size[0];
  stats->size[0] = (int32_T)CC_NumObjects;
  emxEnsureCapacity_struct_T1(&b_st, stats, i, &df_emlrtRTEI);
  stats_data = stats->data;
  for (i = 0; i < loop_ub_tmp; i++) {
    emxCopyStruct_struct_T(&b_st, &stats_data[i], &statsOneObj, &df_emlrtRTEI);
  }
  emxFreeStruct_struct_T(&b_st, &statsOneObj);
  st.site = &rg_emlrtRSI;
  if (CC_NumObjects != 0.0) {
    int32_T dim;
    b_st.site = &th_emlrtRSI;
    c_st.site = &jh_emlrtRSI;
    dim = 2;
    if (regionLengths->size[0] != 1) {
      dim = 1;
    }
    useConstantDim(regionLengths, dim);
    regionLengths_data = regionLengths->data;
    emxInit_int32_T(&st, &idxCount, 1, &jf_emlrtRTEI);
    i = idxCount->size[0];
    idxCount->size[0] = regionLengths->size[0] + 1;
    emxEnsureCapacity_int32_T(&st, idxCount, i, &ef_emlrtRTEI);
    idxCount_data = idxCount->data;
    idxCount_data[0] = 0;
    dim = regionLengths->size[0];
    for (i = 0; i < dim; i++) {
      idxCount_data[i + 1] = regionLengths_data[i];
    }
    for (k = 0; k < loop_ub_tmp; k++) {
      int32_T i1;
      if ((k + 1 < 1) || (k + 1 > idxCount->size[0])) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, idxCount->size[0], &cd_emlrtBCI,
                                      &st);
      }
      if (((int32_T)(((real_T)k + 1.0) + 1.0) < 1) ||
          ((int32_T)(((real_T)k + 1.0) + 1.0) > idxCount->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(((real_T)k + 1.0) + 1.0), 1,
                                      idxCount->size[0], &dd_emlrtBCI, &st);
      }
      i = idxCount_data[k + 1];
      if (idxCount_data[k] + 1 > i) {
        i1 = 0;
        i = 0;
      } else {
        i1 = idxCount_data[k] + 1;
        if ((i1 < 1) || (i1 > CC_RegionIndices->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, CC_RegionIndices->size[0],
                                        &ed_emlrtBCI, &st);
        }
        i1--;
        if ((i < 1) || (i > CC_RegionIndices->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i, 1, CC_RegionIndices->size[0],
                                        &fd_emlrtBCI, &st);
        }
      }
      if ((k + 1 < 1) || (k + 1 > stats->size[0])) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, stats->size[0], &gd_emlrtBCI,
                                      &st);
      }
      dim = i - i1;
      i = stats_data[k].PixelIdxList->size[0];
      stats_data[k].PixelIdxList->size[0] = dim;
      emxEnsureCapacity_real_T(&st, stats_data[k].PixelIdxList, i,
                               &ff_emlrtRTEI);
      for (i = 0; i < dim; i++) {
        if ((k + 1 < 1) || (k + 1 > stats->size[0])) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, stats->size[0], &gd_emlrtBCI,
                                        &st);
        }
        stats_data[k].PixelIdxList->data[i] = CC_RegionIndices_data[i1 + i];
      }
    }
    emxFree_int32_T(&st, &idxCount);
  }
  emxFree_int32_T(&st, &regionLengths);
  emxFree_real_T(&st, &CC_RegionIndices);
  st.site = &sg_emlrtRSI;
  ComputeWeightedCentroid(&st, varargin_2, stats);
  stats_data = stats->data;
  st.site = &tg_emlrtRSI;
  i = stats->size[0];
  for (k = 0; k < i; k++) {
    if (k + 1 > stats->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, stats->size[0], &bd_emlrtBCI,
                                    &st);
    }
    if (k + 1 > outstats->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, outstats->size[0], &ad_emlrtBCI,
                                    &st);
    }
    if (k + 1 > stats->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, stats->size[0], &hd_emlrtBCI,
                                    &st);
    }
    if (k + 1 > outstats->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, outstats->size[0], &id_emlrtBCI,
                                    &st);
    }
    outstats_data[k].WeightedCentroid[0] = stats_data[k].WeightedCentroid[0];
    if (k + 1 > stats->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, stats->size[0], &hd_emlrtBCI,
                                    &st);
    }
    if (k + 1 > outstats->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, outstats->size[0], &id_emlrtBCI,
                                    &st);
    }
    outstats_data[k].WeightedCentroid[1] = stats_data[k].WeightedCentroid[1];
  }
  emxFree_struct_T1(&st, &stats);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (regionprops.c) */
