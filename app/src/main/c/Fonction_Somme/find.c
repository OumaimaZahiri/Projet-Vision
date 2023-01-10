/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * find.c
 *
 * Code generation for function 'find'
 *
 */

/* Include files */
#include "find.h"
#include "Fonction_Somme_emxutil.h"
#include "Fonction_Somme_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void eml_find(const boolean_T x[65536], emxArray_int32_T *i,
              emxArray_int32_T *j)
{
  int idx;
  int ii;
  int jj;
  int *i_data;
  int *j_data;
  boolean_T exitg1;
  boolean_T guard1 = false;
  idx = 0;
  ii = i->size[0];
  i->size[0] = 65536;
  emxEnsureCapacity_int32_T(i, ii);
  i_data = i->data;
  ii = j->size[0];
  j->size[0] = 65536;
  emxEnsureCapacity_int32_T(j, ii);
  j_data = j->data;
  ii = 1;
  jj = 1;
  exitg1 = false;
  while ((!exitg1) && (jj <= 256)) {
    guard1 = false;
    if (x[(ii + ((jj - 1) << 8)) - 1]) {
      idx++;
      i_data[idx - 1] = ii;
      j_data[idx - 1] = jj;
      if (idx >= 65536) {
        exitg1 = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    if (guard1) {
      ii++;
      if (ii > 256) {
        ii = 1;
        jj++;
      }
    }
  }
  ii = i->size[0];
  if (idx < 1) {
    i->size[0] = 0;
  } else {
    i->size[0] = idx;
  }
  emxEnsureCapacity_int32_T(i, ii);
  ii = j->size[0];
  if (idx < 1) {
    j->size[0] = 0;
  } else {
    j->size[0] = idx;
  }
  emxEnsureCapacity_int32_T(j, ii);
}

/* End of code generation (find.c) */
