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
#include "Fonction_Somme_emxutil.h"
#include "Fonction_Somme_types.h"
#include "bwconncomp.h"
#include "combineVectorElements.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Declarations */
static void binary_expand_op(double in1[2], int in2,
                             const b_emxArray_struct_T *in3, int in4,
                             double in5);

/* Function Definitions */
static void binary_expand_op(double in1[2], int in2,
                             const b_emxArray_struct_T *in3, int in4,
                             double in5)
{
  const b_struct_T *in3_data;
  emxArray_real_T *b_in3;
  double *b_in3_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  in3_data = in3->data;
  i = in3_data[in4].PixelList->size[0];
  emxInit_real_T(&b_in3, 1);
  stride_0_0 = b_in3->size[0];
  if (in3_data[in4].PixelValues->size[0] == 1) {
    b_in3->size[0] = i;
  } else {
    b_in3->size[0] = in3_data[in4].PixelValues->size[0];
  }
  emxEnsureCapacity_real_T(b_in3, stride_0_0);
  b_in3_data = b_in3->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (in3_data[in4].PixelValues->size[0] != 1);
  if (in3_data[in4].PixelValues->size[0] == 1) {
    loop_ub = i;
  } else {
    loop_ub = in3_data[in4].PixelValues->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in3_data[i] =
        in3_data[in4].PixelList->data[i * stride_0_0 +
                                      in3_data[in4].PixelList->size[0] * in2] *
        in3_data[in4].PixelValues->data[i * stride_1_0];
  }
  in1[in2] = combineVectorElements(b_in3) / in5;
  emxFree_real_T(&b_in3);
}

void regionprops(const boolean_T varargin_1[374400],
                 const double varargin_2[374400], emxArray_struct_T *outstats)
{
  b_emxArray_struct_T *stats;
  b_struct_T statsOneObj;
  b_struct_T *stats_data;
  emxArray_int32_T *idxCount;
  emxArray_int32_T *regionLengths;
  emxArray_real_T *CC_RegionIndices;
  struct_T s;
  struct_T *outstats_data;
  double wc[2];
  double CC_NumObjects;
  double sumIntensity;
  double *CC_RegionIndices_data;
  int i;
  int i1;
  int k;
  int loop_ub;
  int loop_ub_tmp;
  int *idxCount_data;
  int *regionLengths_data;
  emxInit_real_T(&CC_RegionIndices, 1);
  emxInit_int32_T(&regionLengths, 1);
  bwconncomp(varargin_1, &sumIntensity, wc, &CC_NumObjects, CC_RegionIndices,
             regionLengths);
  regionLengths_data = regionLengths->data;
  CC_RegionIndices_data = CC_RegionIndices->data;
  s.WeightedCentroid[0] = 0.0;
  s.WeightedCentroid[1] = 0.0;
  loop_ub_tmp = (int)CC_NumObjects;
  i = outstats->size[0];
  outstats->size[0] = (int)CC_NumObjects;
  emxEnsureCapacity_struct_T(outstats, i);
  outstats_data = outstats->data;
  for (i = 0; i < loop_ub_tmp; i++) {
    outstats_data[i] = s;
  }
  emxInitStruct_struct_T(&statsOneObj);
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
  memset(&statsOneObj.Extrema[0], 0, 16U * sizeof(double));
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
  emxInit_struct_T1(&stats);
  i = stats->size[0];
  stats->size[0] = (int)CC_NumObjects;
  emxEnsureCapacity_struct_T1(stats, i);
  stats_data = stats->data;
  for (i = 0; i < loop_ub_tmp; i++) {
    emxCopyStruct_struct_T(&stats_data[i], &statsOneObj);
  }
  emxFreeStruct_struct_T(&statsOneObj);
  emxInit_int32_T(&idxCount, 1);
  if (CC_NumObjects != 0.0) {
    if ((regionLengths->size[0] != 1) && (regionLengths->size[0] != 0) &&
        (regionLengths->size[0] != 1)) {
      i = regionLengths->size[0];
      for (k = 0; k <= i - 2; k++) {
        regionLengths_data[k + 1] += regionLengths_data[k];
      }
    }
    i = idxCount->size[0];
    idxCount->size[0] = regionLengths->size[0] + 1;
    emxEnsureCapacity_int32_T(idxCount, i);
    idxCount_data = idxCount->data;
    idxCount_data[0] = 0;
    loop_ub = regionLengths->size[0];
    for (i = 0; i < loop_ub; i++) {
      idxCount_data[i + 1] = regionLengths_data[i];
    }
    for (k = 0; k < loop_ub_tmp; k++) {
      i = idxCount_data[k + 1];
      if (idxCount_data[k] + 1 > i) {
        i1 = 0;
        i = 0;
      } else {
        i1 = idxCount_data[k];
      }
      loop_ub = i - i1;
      i = stats_data[k].PixelIdxList->size[0];
      stats_data[k].PixelIdxList->size[0] = loop_ub;
      emxEnsureCapacity_real_T(stats_data[k].PixelIdxList, i);
      for (i = 0; i < loop_ub; i++) {
        stats_data[k].PixelIdxList->data[i] = CC_RegionIndices_data[i1 + i];
      }
    }
  }
  i = stats->size[0];
  for (k = 0; k < i; k++) {
    loop_ub = stats_data[k].PixelIdxList->size[0];
    if (stats_data[k].PixelIdxList->size[0] != 0) {
      i1 = regionLengths->size[0];
      regionLengths->size[0] = stats_data[k].PixelIdxList->size[0];
      emxEnsureCapacity_int32_T(regionLengths, i1);
      regionLengths_data = regionLengths->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        regionLengths_data[i1] = (int)stats_data[k].PixelIdxList->data[i1] - 1;
      }
      i1 = idxCount->size[0];
      idxCount->size[0] = regionLengths->size[0];
      emxEnsureCapacity_int32_T(idxCount, i1);
      idxCount_data = idxCount->data;
      loop_ub = regionLengths->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        idxCount_data[i1] = regionLengths_data[i1] / 416;
      }
      loop_ub = regionLengths->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        regionLengths_data[i1] -= idxCount_data[i1] * 416;
      }
      i1 = stats_data[k].PixelList->size[0] * stats_data[k].PixelList->size[1];
      stats_data[k].PixelList->size[0] = idxCount->size[0];
      stats_data[k].PixelList->size[1] = 2;
      emxEnsureCapacity_real_T(stats_data[k].PixelList, i1);
      loop_ub = idxCount->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        stats_data[k].PixelList->data[i1] = idxCount_data[i1] + 1;
      }
      loop_ub = regionLengths->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        stats_data[k].PixelList->data[i1 + stats_data[k].PixelList->size[0]] =
            regionLengths_data[i1] + 1;
      }
    } else {
      stats_data[k].PixelList->size[0] = 0;
      stats_data[k].PixelList->size[1] = 2;
    }
  }
  i = stats->size[0];
  for (k = 0; k < i; k++) {
    loop_ub = stats_data[k].PixelIdxList->size[0];
    i1 = stats_data[k].PixelValues->size[0];
    stats_data[k].PixelValues->size[0] = stats_data[k].PixelIdxList->size[0];
    emxEnsureCapacity_real_T(stats_data[k].PixelValues, i1);
    i1 = regionLengths->size[0];
    regionLengths->size[0] = stats_data[k].PixelIdxList->size[0];
    emxEnsureCapacity_int32_T(regionLengths, i1);
    regionLengths_data = regionLengths->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      regionLengths_data[i1] = (int)stats_data[k].PixelIdxList->data[i1] - 1;
    }
    i1 = idxCount->size[0];
    idxCount->size[0] = regionLengths->size[0];
    emxEnsureCapacity_int32_T(idxCount, i1);
    idxCount_data = idxCount->data;
    loop_ub = regionLengths->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      idxCount_data[i1] = regionLengths_data[i1] / 416;
    }
    loop_ub = regionLengths->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      regionLengths_data[i1] -= idxCount_data[i1] * 416;
    }
    loop_ub = regionLengths->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      regionLengths_data[i1]++;
    }
    loop_ub = idxCount->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      idxCount_data[i1]++;
    }
    i1 = stats_data[k].PixelValues->size[0];
    for (loop_ub_tmp = 0; loop_ub_tmp < i1; loop_ub_tmp++) {
      stats_data[k].PixelValues->data[loop_ub_tmp] =
          varargin_2[(regionLengths_data[loop_ub_tmp] +
                      416 * (idxCount_data[loop_ub_tmp] - 1)) -
                     1];
    }
  }
  emxFree_int32_T(&idxCount);
  emxFree_int32_T(&regionLengths);
  i = stats->size[0];
  for (k = 0; k < i; k++) {
    sumIntensity = combineVectorElements(stats_data[k].PixelValues);
    for (loop_ub_tmp = 0; loop_ub_tmp < 2; loop_ub_tmp++) {
      if (stats_data[k].PixelList->size[0] ==
          stats_data[k].PixelValues->size[0]) {
        loop_ub = stats_data[k].PixelList->size[0];
        i1 = CC_RegionIndices->size[0];
        CC_RegionIndices->size[0] = stats_data[k].PixelList->size[0];
        emxEnsureCapacity_real_T(CC_RegionIndices, i1);
        CC_RegionIndices_data = CC_RegionIndices->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          CC_RegionIndices_data[i1] =
              stats_data[k]
                  .PixelList
                  ->data[i1 + stats_data[k].PixelList->size[0] * loop_ub_tmp] *
              stats_data[k].PixelValues->data[i1];
        }
        wc[loop_ub_tmp] =
            combineVectorElements(CC_RegionIndices) / sumIntensity;
      } else {
        binary_expand_op(wc, loop_ub_tmp, stats, k, sumIntensity);
      }
    }
    stats_data[k].WeightedCentroid[0] = wc[0];
    stats_data[k].WeightedCentroid[1] = wc[1];
  }
  emxFree_real_T(&CC_RegionIndices);
  i = stats->size[0];
  for (k = 0; k < i; k++) {
    outstats_data[k].WeightedCentroid[0] = stats_data[k].WeightedCentroid[0];
    outstats_data[k].WeightedCentroid[1] = stats_data[k].WeightedCentroid[1];
  }
  emxFree_struct_T1(&stats);
}

/* End of code generation (regionprops.c) */
