/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Fonction_Somme_types.h
 *
 * Code generation for function 'Fonction_Somme'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef typedef_struct_T
#define typedef_struct_T
typedef struct {
  real_T WeightedCentroid[2];
} struct_T;
#endif /* typedef_struct_T */

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T {
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_real_T */
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /* typedef_emxArray_real_T */

#ifndef struct_emxArray_uint8_T
#define struct_emxArray_uint8_T
struct emxArray_uint8_T {
  uint8_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_uint8_T */
#ifndef typedef_emxArray_uint8_T
#define typedef_emxArray_uint8_T
typedef struct emxArray_uint8_T emxArray_uint8_T;
#endif /* typedef_emxArray_uint8_T */

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T
struct emxArray_int32_T {
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_int32_T */
#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T
typedef struct emxArray_int32_T emxArray_int32_T;
#endif /* typedef_emxArray_int32_T */

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T
struct emxArray_boolean_T {
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_boolean_T */
#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T
typedef struct emxArray_boolean_T emxArray_boolean_T;
#endif /* typedef_emxArray_boolean_T */

#ifndef typedef_emxArray_creal_T
#define typedef_emxArray_creal_T
typedef struct {
  creal_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} emxArray_creal_T;
#endif /* typedef_emxArray_creal_T */

#ifndef struct_emxArray_int16_T
#define struct_emxArray_int16_T
struct emxArray_int16_T {
  int16_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_int16_T */
#ifndef typedef_emxArray_int16_T
#define typedef_emxArray_int16_T
typedef struct emxArray_int16_T emxArray_int16_T;
#endif /* typedef_emxArray_int16_T */

#ifndef struct_emxArray_real32_T
#define struct_emxArray_real32_T
struct emxArray_real32_T {
  real32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_real32_T */
#ifndef typedef_emxArray_real32_T
#define typedef_emxArray_real32_T
typedef struct emxArray_real32_T emxArray_real32_T;
#endif /* typedef_emxArray_real32_T */

#ifndef typedef_emxArray_struct_T
#define typedef_emxArray_struct_T
typedef struct {
  struct_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} emxArray_struct_T;
#endif /* typedef_emxArray_struct_T */

#ifndef struct_emxArray_boolean_T_0x0
#define struct_emxArray_boolean_T_0x0
struct emxArray_boolean_T_0x0 {
  int32_T size[2];
};
#endif /* struct_emxArray_boolean_T_0x0 */
#ifndef typedef_emxArray_boolean_T_0x0
#define typedef_emxArray_boolean_T_0x0
typedef struct emxArray_boolean_T_0x0 emxArray_boolean_T_0x0;
#endif /* typedef_emxArray_boolean_T_0x0 */

#ifndef struct_emxArray_real_T_1x0
#define struct_emxArray_real_T_1x0
struct emxArray_real_T_1x0 {
  int32_T size[2];
};
#endif /* struct_emxArray_real_T_1x0 */
#ifndef typedef_emxArray_real_T_1x0
#define typedef_emxArray_real_T_1x0
typedef struct emxArray_real_T_1x0 emxArray_real_T_1x0;
#endif /* typedef_emxArray_real_T_1x0 */

#ifndef typedef_b_struct_T
#define typedef_b_struct_T
typedef struct {
  real_T Area;
  real_T Centroid[2];
  real_T BoundingBox[4];
  real_T MajorAxisLength;
  real_T MinorAxisLength;
  real_T Eccentricity;
  real_T Orientation;
  emxArray_boolean_T_0x0 Image;
  emxArray_boolean_T_0x0 FilledImage;
  real_T FilledArea;
  real_T EulerNumber;
  real_T Extrema[16];
  real_T EquivDiameter;
  real_T Extent;
  emxArray_real_T *PixelIdxList;
  emxArray_real_T *PixelList;
  real_T Perimeter;
  real_T Circularity;
  emxArray_real_T *PixelValues;
  real_T WeightedCentroid[2];
  real_T MeanIntensity;
  real_T MinIntensity;
  real_T MaxIntensity;
  emxArray_real_T_1x0 SubarrayIdx;
  real_T SubarrayIdxLengths[2];
} b_struct_T;
#endif /* typedef_b_struct_T */

#ifndef typedef_b_emxArray_struct_T
#define typedef_b_emxArray_struct_T
typedef struct {
  b_struct_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} b_emxArray_struct_T;
#endif /* typedef_b_emxArray_struct_T */

#ifndef typedef_b_medfilt2
#define typedef_b_medfilt2
typedef struct {
  real_T Apad[379680];
} b_medfilt2;
#endif /* typedef_b_medfilt2 */

#ifndef typedef_d_imfilter
#define typedef_d_imfilter
typedef struct {
  real32_T a[377036];
} d_imfilter;
#endif /* typedef_d_imfilter */

#ifndef typedef_e_imfilter
#define typedef_e_imfilter
typedef struct {
  real32_T a[379680];
} e_imfilter;
#endif /* typedef_e_imfilter */

#ifndef typedef_c_mergesort
#define typedef_c_mergesort
typedef struct {
  int32_T iwork[1123200];
} c_mergesort;
#endif /* typedef_c_mergesort */

#ifndef typedef_c_contributions
#define typedef_c_contributions
typedef struct {
  real_T absx2[20700];
  real_T x[20700];
} c_contributions;
#endif /* typedef_c_contributions */

#ifndef typedef_d_contributions
#define typedef_d_contributions
typedef struct {
  real_T absx2[9568];
} d_contributions;
#endif /* typedef_d_contributions */

#ifndef typedef_b_chcenters
#define typedef_b_chcenters
typedef struct {
  real_T accumMatrixRe[374400];
  real_T Hd[374400];
  real_T b_Hd[374400];
  boolean_T bw[374400];
} b_chcenters;
#endif /* typedef_b_chcenters */

#ifndef typedef_b_chaccum
#define typedef_b_chaccum
typedef struct {
  creal_T out[374400];
  real32_T varargin_1[374400];
  real32_T A[374400];
  real32_T Gy[374400];
  boolean_T x[374400];
} b_chaccum;
#endif /* typedef_b_chaccum */

#ifndef typedef_b_unique_vector
#define typedef_b_unique_vector
typedef struct {
  int32_T idx[1123200];
} b_unique_vector;
#endif /* typedef_b_unique_vector */

#ifndef typedef_b_imresize
#define typedef_b_imresize
typedef struct {
  uint8_T APartialResize[5770752];
} b_imresize;
#endif /* typedef_b_imresize */

#ifndef typedef_b_imfindcircles
#define typedef_b_imfindcircles
typedef struct {
  creal_T accumMatrix[374400];
  real32_T gradientImg[374400];
} b_imfindcircles;
#endif /* typedef_b_imfindcircles */

#ifndef typedef_b_multithresh
#define typedef_b_multithresh
typedef struct {
  real32_T varargin_1[1123200];
  uint8_T Auint8[1123200];
  real_T omega0[65536];
  real_T omega1[65536];
  real_T c[65536];
  real_T mu_0_t[65536];
  real_T mu_1_t[65536];
  real_T allPixC[65536];
} b_multithresh;
#endif /* typedef_b_multithresh */

#ifndef typedef_b_Fonction_Somme
#define typedef_b_Fonction_Somme
typedef struct {
  uint8_T A[1123200];
  uint8_T B[1123200];
  uint8_T b_B[374400];
  boolean_T c_B[374400];
} b_Fonction_Somme;
#endif /* typedef_b_Fonction_Somme */

#ifndef typedef_Fonction_SommeStackData
#define typedef_Fonction_SommeStackData
typedef struct {
  union {
    b_medfilt2 f0;
    d_imfilter f1;
    d_imfilter f2;
    e_imfilter f3;
    c_mergesort f4;
    c_contributions f5;
    d_contributions f6;
  } u1;
  union {
    b_chcenters f7;
    b_chaccum f8;
    b_unique_vector f9;
    b_imresize f10;
  } u2;
  union {
    b_imfindcircles f11;
    b_multithresh f12;
  } u3;
  b_Fonction_Somme f13;
} Fonction_SommeStackData;
#endif /* typedef_Fonction_SommeStackData */

/* End of code generation (Fonction_Somme_types.h) */
