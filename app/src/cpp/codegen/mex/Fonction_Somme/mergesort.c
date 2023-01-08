/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mergesort.c
 *
 * Code generation for function 'mergesort'
 *
 */

/* Include files */
#include "mergesort.h"
#include "Fonction_Somme_data.h"
#include "Fonction_Somme_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void b_mergesort(Fonction_SommeStackData *SD, int32_T idx[1123200],
                 const uint8_T x[1123200])
{
  int32_T i;
  int32_T k;
  int32_T pEnd;
  int32_T qEnd;
  for (k = 0; k <= 1123198; k += 2) {
    if (x[k] <= x[k + 1]) {
      idx[k] = k + 1;
      idx[k + 1] = k + 2;
    } else {
      idx[k] = k + 2;
      idx[k + 1] = k + 1;
    }
  }
  i = 2;
  while (i < 1123200) {
    int32_T i2;
    int32_T j;
    i2 = i << 1;
    j = 1;
    for (pEnd = i + 1; pEnd < 1123201; pEnd = qEnd + i) {
      int32_T kEnd;
      int32_T p;
      int32_T q;
      p = j;
      q = pEnd;
      qEnd = j + i2;
      if (qEnd > 1123201) {
        qEnd = 1123201;
      }
      k = 0;
      kEnd = qEnd - j;
      while (k + 1 <= kEnd) {
        int32_T b_i;
        int32_T i1;
        b_i = idx[q - 1];
        i1 = idx[p - 1];
        if (x[i1 - 1] <= x[b_i - 1]) {
          SD->u1.f4.iwork[k] = i1;
          p++;
          if (p == pEnd) {
            while (q < qEnd) {
              k++;
              SD->u1.f4.iwork[k] = idx[q - 1];
              q++;
            }
          }
        } else {
          SD->u1.f4.iwork[k] = b_i;
          q++;
          if (q == qEnd) {
            while (p < pEnd) {
              k++;
              SD->u1.f4.iwork[k] = idx[p - 1];
              p++;
            }
          }
        }
        k++;
      }
      for (k = 0; k < kEnd; k++) {
        idx[(j + k) - 1] = SD->u1.f4.iwork[k];
      }
      j = qEnd;
    }
    i = i2;
  }
}

/* End of code generation (mergesort.c) */
