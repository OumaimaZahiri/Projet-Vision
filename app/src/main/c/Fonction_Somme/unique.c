/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * unique.c
 *
 * Code generation for function 'unique'
 *
 */

/* Include files */
#include "unique.h"
#include "Fonction_Somme_emxutil.h"
#include "Fonction_Somme_types.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"

/* Function Definitions */
void unique_vector(const unsigned char a[1123200], emxArray_uint8_T *b)
{
  static int idx[1123200];
  int k;
  int nb;
  unsigned char x;
  unsigned char *b_data;
  sortIdx(a, idx);
  k = b->size[0];
  b->size[0] = 1123200;
  emxEnsureCapacity_uint8_T(b, k);
  b_data = b->data;
  for (k = 0; k < 1123200; k++) {
    b_data[k] = a[idx[k] - 1];
  }
  nb = 0;
  k = 1;
  while (k <= 1123200) {
    x = b_data[k - 1];
    do {
      k++;
    } while (!((k > 1123200) || (b_data[k - 1] != x)));
    nb++;
    b_data[nb - 1] = x;
  }
  k = b->size[0];
  if (nb < 1) {
    b->size[0] = 0;
  } else {
    b->size[0] = nb;
  }
  emxEnsureCapacity_uint8_T(b, k);
}

/* End of code generation (unique.c) */
