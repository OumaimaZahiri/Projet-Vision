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
#include "Fonction_Somme_emxutil.h"
#include "Fonction_Somme_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void bwconncomp(const boolean_T varargin_1[374400], double *CC_Connectivity,
                double CC_ImageSize[2], double *CC_NumObjects,
                emxArray_real_T *CC_RegionIndices,
                emxArray_int32_T *CC_RegionLengths)
{
  emxArray_int16_T *endRow;
  emxArray_int16_T *startCol;
  emxArray_int16_T *startRow;
  emxArray_int32_T *idxCount;
  emxArray_int32_T *labelsRenumbered;
  emxArray_int32_T *pixelIdxList;
  emxArray_int32_T *x;
  double *CC_RegionIndices_data;
  int firstRunOnPreviousColumn;
  int firstRunOnThisColumn;
  int k;
  int lastRunOnPreviousColumn;
  int numRuns;
  int p;
  int root_k;
  int root_p;
  int *idxCount_data;
  int *labelsRenumbered_data;
  int *pixelIdxList_data;
  int *x_data;
  short *endRow_data;
  short *startCol_data;
  short *startRow_data;
  numRuns = 0;
  for (firstRunOnPreviousColumn = 0; firstRunOnPreviousColumn < 900;
       firstRunOnPreviousColumn++) {
    if (varargin_1[416 * firstRunOnPreviousColumn]) {
      numRuns++;
    }
    for (k = 0; k < 415; k++) {
      p = k + 416 * firstRunOnPreviousColumn;
      if (varargin_1[p + 1] && (!varargin_1[p])) {
        numRuns++;
      }
    }
  }
  emxInit_int16_T(&startRow);
  emxInit_int16_T(&endRow);
  emxInit_int16_T(&startCol);
  if (numRuns == 0) {
    CC_ImageSize[0] = 416.0;
    CC_ImageSize[1] = 900.0;
    firstRunOnThisColumn = 0;
    CC_RegionIndices->size[0] = 0;
    p = CC_RegionLengths->size[0];
    CC_RegionLengths->size[0] = 1;
    emxEnsureCapacity_int32_T(CC_RegionLengths, p);
    idxCount_data = CC_RegionLengths->data;
    idxCount_data[0] = 0;
  } else {
    double y;
    int row;
    int runCounter;
    p = startRow->size[0];
    startRow->size[0] = numRuns;
    emxEnsureCapacity_int16_T(startRow, p);
    startRow_data = startRow->data;
    p = endRow->size[0];
    endRow->size[0] = numRuns;
    emxEnsureCapacity_int16_T(endRow, p);
    endRow_data = endRow->data;
    p = startCol->size[0];
    startCol->size[0] = numRuns;
    emxEnsureCapacity_int16_T(startCol, p);
    startCol_data = startCol->data;
    runCounter = 0;
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
          startCol_data[runCounter] = (short)(firstRunOnPreviousColumn + 1);
          startRow_data[runCounter] = (short)row;
          while ((row <= 416) &&
                 varargin_1[(row + 416 * firstRunOnPreviousColumn) - 1]) {
            row++;
          }
          endRow_data[runCounter] = (short)(row - 1);
          runCounter++;
        }
      }
    }
    p = CC_RegionLengths->size[0];
    CC_RegionLengths->size[0] = numRuns;
    emxEnsureCapacity_int32_T(CC_RegionLengths, p);
    idxCount_data = CC_RegionLengths->data;
    for (p = 0; p < numRuns; p++) {
      idxCount_data[p] = 0;
    }
    k = 0;
    runCounter = 1;
    row = 1;
    firstRunOnPreviousColumn = -1;
    lastRunOnPreviousColumn = -1;
    firstRunOnThisColumn = 0;
    while (k + 1 <= numRuns) {
      if (startCol_data[k] == runCounter + 1) {
        firstRunOnPreviousColumn = firstRunOnThisColumn + 1;
        firstRunOnThisColumn = k;
        lastRunOnPreviousColumn = k;
        runCounter = startCol_data[k];
      } else if (startCol_data[k] > runCounter + 1) {
        firstRunOnPreviousColumn = -1;
        lastRunOnPreviousColumn = -1;
        firstRunOnThisColumn = k;
        runCounter = startCol_data[k];
      }
      if (firstRunOnPreviousColumn >= 0) {
        for (p = firstRunOnPreviousColumn - 1; p < lastRunOnPreviousColumn;
             p++) {
          if ((endRow_data[k] >= startRow_data[p] - 1) &&
              (startRow_data[k] <= endRow_data[p] + 1)) {
            if (idxCount_data[k] == 0) {
              idxCount_data[k] = idxCount_data[p];
              row++;
            } else if (idxCount_data[k] != idxCount_data[p]) {
              for (root_k = k; root_k + 1 != idxCount_data[root_k];
                   root_k = idxCount_data[root_k] - 1) {
                idxCount_data[root_k] =
                    idxCount_data[idxCount_data[root_k] - 1];
              }
              for (root_p = p; root_p + 1 != idxCount_data[root_p];
                   root_p = idxCount_data[root_p] - 1) {
                idxCount_data[root_p] =
                    idxCount_data[idxCount_data[root_p] - 1];
              }
              if (root_k + 1 != root_p + 1) {
                if (root_p + 1 < root_k + 1) {
                  idxCount_data[root_k] = root_p + 1;
                  idxCount_data[k] = root_p + 1;
                } else {
                  idxCount_data[root_p] = root_k + 1;
                  idxCount_data[p] = root_k + 1;
                }
              }
            }
          }
        }
      }
      if (idxCount_data[k] == 0) {
        idxCount_data[k] = row;
        row++;
      }
      k++;
    }
    emxInit_int32_T(&labelsRenumbered, 1);
    p = labelsRenumbered->size[0];
    labelsRenumbered->size[0] = CC_RegionLengths->size[0];
    emxEnsureCapacity_int32_T(labelsRenumbered, p);
    labelsRenumbered_data = labelsRenumbered->data;
    firstRunOnThisColumn = 0;
    for (k = 0; k < numRuns; k++) {
      if (idxCount_data[k] == k + 1) {
        firstRunOnThisColumn++;
        labelsRenumbered_data[k] = firstRunOnThisColumn;
      }
      labelsRenumbered_data[k] = labelsRenumbered_data[idxCount_data[k] - 1];
    }
    p = CC_RegionLengths->size[0];
    CC_RegionLengths->size[0] = firstRunOnThisColumn;
    emxEnsureCapacity_int32_T(CC_RegionLengths, p);
    idxCount_data = CC_RegionLengths->data;
    for (p = 0; p < firstRunOnThisColumn; p++) {
      idxCount_data[p] = 0;
    }
    for (k = 0; k < numRuns; k++) {
      idxCount_data[labelsRenumbered_data[k] - 1] =
          ((idxCount_data[labelsRenumbered_data[k] - 1] + endRow_data[k]) -
           startRow_data[k]) +
          1;
    }
    if (CC_RegionLengths->size[0] == 0) {
      y = 0.0;
    } else {
      if (CC_RegionLengths->size[0] <= 1024) {
        runCounter = CC_RegionLengths->size[0];
        lastRunOnPreviousColumn = 0;
        firstRunOnPreviousColumn = 1;
      } else {
        runCounter = 1024;
        firstRunOnPreviousColumn =
            (int)((unsigned int)CC_RegionLengths->size[0] >> 10);
        lastRunOnPreviousColumn =
            CC_RegionLengths->size[0] - (firstRunOnPreviousColumn << 10);
        if (lastRunOnPreviousColumn > 0) {
          firstRunOnPreviousColumn++;
        } else {
          lastRunOnPreviousColumn = 1024;
        }
      }
      y = idxCount_data[0];
      for (k = 2; k <= runCounter; k++) {
        y += (double)idxCount_data[k - 1];
      }
      for (p = 2; p <= firstRunOnPreviousColumn; p++) {
        double bsum;
        runCounter = (p - 1) << 10;
        bsum = idxCount_data[runCounter];
        if (p == firstRunOnPreviousColumn) {
          row = lastRunOnPreviousColumn;
        } else {
          row = 1024;
        }
        for (k = 2; k <= row; k++) {
          bsum += (double)idxCount_data[(runCounter + k) - 1];
        }
        y += bsum;
      }
    }
    emxInit_int32_T(&pixelIdxList, 1);
    p = pixelIdxList->size[0];
    pixelIdxList->size[0] = (int)y;
    emxEnsureCapacity_int32_T(pixelIdxList, p);
    pixelIdxList_data = pixelIdxList->data;
    emxInit_int32_T(&x, 1);
    p = x->size[0];
    x->size[0] = CC_RegionLengths->size[0];
    emxEnsureCapacity_int32_T(x, p);
    x_data = x->data;
    runCounter = CC_RegionLengths->size[0];
    for (p = 0; p < runCounter; p++) {
      x_data[p] = idxCount_data[p];
    }
    if ((CC_RegionLengths->size[0] != 1) && (CC_RegionLengths->size[0] != 0) &&
        (CC_RegionLengths->size[0] != 1)) {
      p = CC_RegionLengths->size[0];
      for (k = 0; k <= p - 2; k++) {
        x_data[k + 1] += x_data[k];
      }
    }
    emxInit_int32_T(&idxCount, 1);
    p = idxCount->size[0];
    idxCount->size[0] = x->size[0] + 1;
    emxEnsureCapacity_int32_T(idxCount, p);
    idxCount_data = idxCount->data;
    idxCount_data[0] = 0;
    runCounter = x->size[0];
    for (p = 0; p < runCounter; p++) {
      idxCount_data[p + 1] = x_data[p];
    }
    emxFree_int32_T(&x);
    for (k = 0; k < numRuns; k++) {
      runCounter = (startCol_data[k] - 1) * 416;
      row = labelsRenumbered_data[k] - 1;
      p = startRow_data[k];
      firstRunOnPreviousColumn = endRow_data[k];
      for (lastRunOnPreviousColumn = p;
           lastRunOnPreviousColumn <= firstRunOnPreviousColumn;
           lastRunOnPreviousColumn++) {
        idxCount_data[row]++;
        pixelIdxList_data[idxCount_data[row] - 1] =
            lastRunOnPreviousColumn + runCounter;
      }
    }
    emxFree_int32_T(&idxCount);
    emxFree_int32_T(&labelsRenumbered);
    CC_ImageSize[0] = 416.0;
    CC_ImageSize[1] = 900.0;
    p = CC_RegionIndices->size[0];
    CC_RegionIndices->size[0] = pixelIdxList->size[0];
    emxEnsureCapacity_real_T(CC_RegionIndices, p);
    CC_RegionIndices_data = CC_RegionIndices->data;
    runCounter = pixelIdxList->size[0];
    for (p = 0; p < runCounter; p++) {
      CC_RegionIndices_data[p] = pixelIdxList_data[p];
    }
    emxFree_int32_T(&pixelIdxList);
  }
  emxFree_int16_T(&startCol);
  emxFree_int16_T(&endRow);
  emxFree_int16_T(&startRow);
  *CC_Connectivity = 8.0;
  *CC_NumObjects = firstRunOnThisColumn;
}

/* End of code generation (bwconncomp.c) */
