/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imhist.c
 *
 * Code generation for function 'imhist'
 *
 */

/* Include files */
#include "imhist.h"
#include "rt_nonfinite.h"
#include "libmwgetnumcores.h"
#include "libmwtbbhist.h"
#include <string.h>

/* Function Definitions */
void imhist(const unsigned char varargin_1[1123200], double yout[256])
{
  double localBins1[256];
  double localBins2[256];
  double localBins3[256];
  double numCores;
  int i;
  int localBins2_tmp;
  boolean_T nanFlag;
  boolean_T rngFlag;
  numCores = 1.0;
  getnumcores(&numCores);
  if (numCores > 1.0) {
    nanFlag = false;
    rngFlag = false;
    tbbhist_uint8(&varargin_1[0], 1.1232E+6, 1.1232E+6, 1.0, &yout[0], 256.0,
                  256.0, &rngFlag, &nanFlag);
  } else {
    memset(&yout[0], 0, 256U * sizeof(double));
    memset(&localBins1[0], 0, 256U * sizeof(double));
    memset(&localBins2[0], 0, 256U * sizeof(double));
    memset(&localBins3[0], 0, 256U * sizeof(double));
    for (i = 0; i + 4 <= 1123200; i += 4) {
      localBins1[varargin_1[i]]++;
      localBins2_tmp = varargin_1[i + 1];
      localBins2[localBins2_tmp]++;
      localBins2_tmp = varargin_1[i + 2];
      localBins3[localBins2_tmp]++;
      localBins2_tmp = varargin_1[i + 3];
      yout[localBins2_tmp]++;
    }
    while (i + 1 <= 1123200) {
      yout[varargin_1[i]]++;
      i++;
    }
    for (i = 0; i < 256; i++) {
      yout[i] = ((yout[i] + localBins1[i]) + localBins2[i]) + localBins3[i];
    }
  }
}

/* End of code generation (imhist.c) */
