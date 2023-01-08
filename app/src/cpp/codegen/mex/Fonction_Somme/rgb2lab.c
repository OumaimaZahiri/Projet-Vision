/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rgb2lab.c
 *
 * Code generation for function 'rgb2lab'
 *
 */

/* Include files */
#include "rgb2lab.h"
#include "Fonction_Somme_data.h"
#include "Fonction_Somme_emxutil.h"
#include "Fonction_Somme_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo nj_emlrtRSI = {
    51,        /* lineNo */
    "rgb2lab", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m" /* pathName
                                                                           */
};

static emlrtBCInfo ef_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    81,        /* lineNo */
    25,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo ff_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    81,        /* lineNo */
    29,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo gf_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    82,        /* lineNo */
    25,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo hf_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    82,        /* lineNo */
    29,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo if_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    82,        /* lineNo */
    33,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo jf_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    83,        /* lineNo */
    25,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo kf_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    83,        /* lineNo */
    29,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo lf_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    83,        /* lineNo */
    33,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo mf_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    104,       /* lineNo */
    17,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo nf_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    104,       /* lineNo */
    19,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo of_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    105,       /* lineNo */
    17,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo pf_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    105,       /* lineNo */
    19,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo qf_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    106,       /* lineNo */
    17,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo rf_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    106,       /* lineNo */
    19,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo sf_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    92,        /* lineNo */
    29,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo tf_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    93,        /* lineNo */
    29,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo uf_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    114,       /* lineNo */
    15,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo vf_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    115,       /* lineNo */
    15,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo wf_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    116,       /* lineNo */
    15,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtRTEInfo y_emlrtRTEI = {
    151,           /* lineNo */
    5,             /* colNo */
    "parseInputs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m" /* pName
                                                                           */
};

static emlrtBCInfo xf_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    91,        /* lineNo */
    21,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo yf_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    91,        /* lineNo */
    25,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo ag_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    114,       /* lineNo */
    13,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo bg_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    92,        /* lineNo */
    21,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo cg_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    92,        /* lineNo */
    25,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo dg_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    115,       /* lineNo */
    13,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo eg_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    93,        /* lineNo */
    21,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo fg_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    93,        /* lineNo */
    25,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtBCInfo gg_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    116,       /* lineNo */
    13,        /* colNo */
    "",        /* aName */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m", /* pName
                                                                            */
    0 /* checkKind */
};

static emlrtRTEInfo cg_emlrtRTEI = {
    68,        /* lineNo */
    28,        /* colNo */
    "rgb2lab", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\images\\colorspaces\\eml\\rgb2lab.m" /* pName
                                                                           */
};

/* Function Declarations */
static void convertRGBToLab(uint8_T encodedR, uint8_T encodedG,
                            uint8_T encodedB, real_T *L, real_T *a, real_T *b);

/* Function Definitions */
static void convertRGBToLab(uint8_T encodedR, uint8_T encodedG,
                            uint8_T encodedB, real_T *L, real_T *a, real_T *b)
{
  real_T G;
  real_T fx;
  real_T fy;
  real_T fz;
  real_T x;
  x = (real_T)encodedR / 255.0;
  fx = (real_T)encodedG / 255.0;
  fz = (real_T)encodedB / 255.0;
  if (x < 0.04045) {
    fy = 0.077399380804953566 * x;
  } else {
    fy = muDoubleScalarPower(0.94786729857819907 * x + 0.052132701421800952,
                             2.4);
  }
  if (fx < 0.04045) {
    G = 0.077399380804953566 * fx;
  } else {
    G = muDoubleScalarPower(0.94786729857819907 * fx + 0.052132701421800952,
                            2.4);
  }
  if (fz < 0.04045) {
    fz *= 0.077399380804953566;
  } else {
    fz = muDoubleScalarPower(0.94786729857819907 * fz + 0.052132701421800952,
                             2.4);
  }
  x = (0.2126728514056225 * fy + 0.71515215528781784 * G) +
      0.072174993306559562 * fz;
  fx = ((0.41245643908969215 * fy + 0.35757607764390892 * G) +
        0.18043748326639891 * fz) /
       0.95047;
  fz = ((0.0193338955823293 * fy + 0.11919202588130294 * G) +
        0.95030407853636767 * fz) /
       1.08883;
  if (fx > 0.0088564516790356311) {
    fx = muDoubleScalarPower(fx, 0.33333333333333331);
  } else {
    fx = (903.2962962962963 * fx + 16.0) / 116.0;
  }
  if (x > 0.0088564516790356311) {
    fy = muDoubleScalarPower(x, 0.33333333333333331);
  } else {
    fy = (903.2962962962963 * x + 16.0) / 116.0;
  }
  if (fz > 0.0088564516790356311) {
    fz = muDoubleScalarPower(fz, 0.33333333333333331);
  } else {
    fz = (903.2962962962963 * fz + 16.0) / 116.0;
  }
  *L = 116.0 * fy - 16.0;
  *a = 500.0 * (fx - fy);
  *b = 200.0 * (fy - fz);
}

void rgb2lab(const emlrtStack *sp, const emxArray_uint8_T *rgb,
             emxArray_real_T *lab)
{
  emlrtStack st;
  real_T B;
  real_T a;
  real_T b;
  real_T *lab_data;
  int32_T col;
  int32_T i;
  int32_T k;
  int32_T row;
  const uint8_T *rgb_data;
  st.prev = sp;
  st.tls = sp->tls;
  rgb_data = rgb->data;
  st.site = &nj_emlrtRSI;
  if (((rgb->size[2] != 1) || (rgb->size[1] != 3)) && (rgb->size[2] != 3)) {
    emlrtErrorWithMessageIdR2018a(&st, &y_emlrtRTEI,
                                  "images:color:invalidShape",
                                  "images:color:invalidShape", 3, 4, 3, "RGB");
  }
  i = lab->size[0] * lab->size[1] * lab->size[2];
  lab->size[0] = (int16_T)rgb->size[0];
  lab->size[1] = (int16_T)rgb->size[1];
  lab->size[2] = (int16_T)rgb->size[2];
  emxEnsureCapacity_real_T(sp, lab, i, &cg_emlrtRTEI);
  lab_data = lab->data;
  if ((rgb->size[2] == 1) && (rgb->size[1] == 3)) {
    i = rgb->size[0];
    if (rgb->size[0] - 1 >= 0) {
      col = rgb->size[0];
      row = rgb->size[0];
    }
    for (k = 0; k < i; k++) {
      int32_T rgb_idx_0;
      rgb_idx_0 = rgb->size[1] * rgb->size[2];
      if (rgb_idx_0 < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, rgb_idx_0, &nf_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (k + 1 > rgb->size[0]) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, rgb->size[0], &mf_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      rgb_idx_0 = rgb->size[1] * rgb->size[2];
      if (rgb_idx_0 < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, rgb_idx_0, &pf_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (k + 1 > rgb->size[0]) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, rgb->size[0], &of_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      rgb_idx_0 = rgb->size[1] * rgb->size[2];
      if (rgb_idx_0 < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, rgb_idx_0, &rf_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (k + 1 > rgb->size[0]) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, rgb->size[0], &qf_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      convertRGBToLab(rgb_data[k], rgb_data[k + col], rgb_data[k + row * 2], &B,
                      &a, &b);
      rgb_idx_0 = lab->size[1] * lab->size[2];
      if (rgb_idx_0 < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, rgb_idx_0, &uf_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (k + 1 > lab->size[0]) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, lab->size[0], &ag_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      lab_data[k] = B;
      rgb_idx_0 = lab->size[1] * lab->size[2];
      if (rgb_idx_0 < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, rgb_idx_0, &vf_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      rgb_idx_0 = lab->size[0];
      if (k + 1 > lab->size[0]) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, lab->size[0], &dg_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      lab_data[k + rgb_idx_0] = a;
      rgb_idx_0 = lab->size[1] * lab->size[2];
      if (rgb_idx_0 < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, rgb_idx_0, &wf_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      rgb_idx_0 = lab->size[0];
      if (k + 1 > lab->size[0]) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, lab->size[0], &gg_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      lab_data[k + rgb_idx_0 * 2] = b;
    }
  } else {
    i = rgb->size[1];
    for (col = 0; col < i; col++) {
      int32_T rgb_idx_0;
      rgb_idx_0 = rgb->size[0];
      for (row = 0; row < rgb_idx_0; row++) {
        if (row + 1 > rgb->size[0]) {
          emlrtDynamicBoundsCheckR2012b(row + 1, 1, rgb->size[0], &ef_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (col + 1 > rgb->size[1]) {
          emlrtDynamicBoundsCheckR2012b(col + 1, 1, rgb->size[1], &ff_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (rgb->size[2] < 2) {
          emlrtDynamicBoundsCheckR2012b(2, 1, rgb->size[2], &if_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (row + 1 > rgb->size[0]) {
          emlrtDynamicBoundsCheckR2012b(row + 1, 1, rgb->size[0], &gf_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (col + 1 > rgb->size[1]) {
          emlrtDynamicBoundsCheckR2012b(col + 1, 1, rgb->size[1], &hf_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (rgb->size[2] < 3) {
          emlrtDynamicBoundsCheckR2012b(3, 1, rgb->size[2], &lf_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (row + 1 > rgb->size[0]) {
          emlrtDynamicBoundsCheckR2012b(row + 1, 1, rgb->size[0], &jf_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (col + 1 > rgb->size[1]) {
          emlrtDynamicBoundsCheckR2012b(col + 1, 1, rgb->size[1], &kf_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (row + 1 > lab->size[0]) {
          emlrtDynamicBoundsCheckR2012b(row + 1, 1, lab->size[0], &xf_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (col + 1 > lab->size[1]) {
          emlrtDynamicBoundsCheckR2012b(col + 1, 1, lab->size[1], &yf_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        convertRGBToLab(
            rgb_data[row + rgb->size[0] * col],
            rgb_data[(row + rgb->size[0] * col) + rgb->size[0] * rgb->size[1]],
            rgb_data[(row + rgb->size[0] * col) +
                     rgb->size[0] * rgb->size[1] * 2],
            &lab_data[row + lab->size[0] * col], &a, &B);
        if (lab->size[2] < 2) {
          emlrtDynamicBoundsCheckR2012b(2, 1, lab->size[2], &sf_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (row + 1 > lab->size[0]) {
          emlrtDynamicBoundsCheckR2012b(row + 1, 1, lab->size[0], &bg_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (col + 1 > lab->size[1]) {
          emlrtDynamicBoundsCheckR2012b(col + 1, 1, lab->size[1], &cg_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        lab_data[(row + lab->size[0] * col) + lab->size[0] * lab->size[1]] = a;
        if (lab->size[2] < 3) {
          emlrtDynamicBoundsCheckR2012b(3, 1, lab->size[2], &tf_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (row + 1 > lab->size[0]) {
          emlrtDynamicBoundsCheckR2012b(row + 1, 1, lab->size[0], &eg_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (col + 1 > lab->size[1]) {
          emlrtDynamicBoundsCheckR2012b(col + 1, 1, lab->size[1], &fg_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        lab_data[(row + lab->size[0] * col) + lab->size[0] * lab->size[1] * 2] =
            B;
      }
    }
  }
}

/* End of code generation (rgb2lab.c) */
