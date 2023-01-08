/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imcrop.c
 *
 * Code generation for function 'imcrop'
 *
 */

/* Include files */
#include "imcrop.h"
#include "Fonction_Somme_data.h"
#include "Fonction_Somme_emxutil.h"
#include "Fonction_Somme_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRTEInfo bg_emlrtRTEI =
    {
        41,       /* lineNo */
        1,        /* colNo */
        "imcrop", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imcrop.m" /* pName
                                                                         */
};

/* Function Definitions */
void imcrop(const emlrtStack *sp, const uint8_T varargin_1[1123200],
            const real_T varargin_2[4], emxArray_uint8_T *varargout_1)
{
  real_T b_x;
  real_T b_x_tmp;
  real_T x;
  real_T x_tmp;
  int32_T colIdx1;
  int32_T colIdx2;
  int32_T i2;
  int32_T rowIdx1;
  int32_T rowIdx2;
  uint8_T *varargout_1_data;
  x = muDoubleScalarRound(((varargin_2[1] - 1.0) + 1.0) + varargin_2[3]);
  rowIdx2 = (int32_T)x;
  x_tmp = muDoubleScalarRound((varargin_2[1] - 1.0) + 1.0);
  rowIdx1 = (int32_T)x_tmp;
  b_x = muDoubleScalarRound(((varargin_2[0] - 1.0) + 1.0) + varargin_2[2]);
  colIdx2 = (int32_T)b_x;
  b_x_tmp = muDoubleScalarRound((varargin_2[0] - 1.0) + 1.0);
  colIdx1 = (int32_T)b_x_tmp;
  if (((int32_T)x_tmp > 416) || ((int32_T)x < 1) || ((int32_T)b_x_tmp > 900) ||
      ((int32_T)b_x < 1)) {
    varargout_1->size[0] = 0;
    varargout_1->size[1] = 0;
    varargout_1->size[2] = 1;
  } else {
    int32_T i;
    int32_T i1;
    if ((int32_T)x_tmp < 1) {
      rowIdx1 = 1;
    }
    if ((int32_T)x > 416) {
      rowIdx2 = 416;
    }
    if ((int32_T)b_x_tmp < 1) {
      colIdx1 = 1;
    }
    if ((int32_T)b_x > 900) {
      colIdx2 = 900;
    }
    if (rowIdx1 > rowIdx2) {
      i = 0;
      rowIdx2 = 0;
    } else {
      i = rowIdx1 - 1;
    }
    if (colIdx1 > colIdx2) {
      i1 = 0;
      colIdx2 = 0;
    } else {
      i1 = colIdx1 - 1;
    }
    colIdx1 = rowIdx2 - i;
    i2 = varargout_1->size[0] * varargout_1->size[1] * varargout_1->size[2];
    varargout_1->size[0] = colIdx1;
    rowIdx1 = colIdx2 - i1;
    varargout_1->size[1] = rowIdx1;
    varargout_1->size[2] = 3;
    emxEnsureCapacity_uint8_T(sp, varargout_1, i2, &bg_emlrtRTEI);
    varargout_1_data = varargout_1->data;
    for (i2 = 0; i2 < 3; i2++) {
      for (rowIdx2 = 0; rowIdx2 < rowIdx1; rowIdx2++) {
        for (colIdx2 = 0; colIdx2 < colIdx1; colIdx2++) {
          varargout_1_data[(colIdx2 + varargout_1->size[0] * rowIdx2) +
                           varargout_1->size[0] * varargout_1->size[1] * i2] =
              varargin_1[((i + colIdx2) + 416 * (i1 + rowIdx2)) + 374400 * i2];
        }
      }
    }
  }
}

/* End of code generation (imcrop.c) */
