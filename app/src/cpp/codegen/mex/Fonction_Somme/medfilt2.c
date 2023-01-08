/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * medfilt2.c
 *
 * Code generation for function 'medfilt2'
 *
 */

/* Include files */
#include "medfilt2.h"
#include "Fonction_Somme_data.h"
#include "Fonction_Somme_types.h"
#include "rt_nonfinite.h"
#include "libmwordfilt2.h"
#include <string.h>

/* Function Definitions */
void medfilt2(Fonction_SommeStackData *SD, const real_T varargin_1[374400],
              real_T b[374400])
{
  static const int32_T offsets[25] = {
      -842, -841, -840, -839, -838, -422, -421, -420, -419, -418, -2,  -1, 0,
      1,    2,    418,  419,  420,  421,  422,  838,  839,  840,  841, 842};
  int32_T Apad_tmp;
  int32_T j;
  for (Apad_tmp = 0; Apad_tmp < 840; Apad_tmp++) {
    SD->u1.f0.Apad[Apad_tmp] = 0.0;
    SD->u1.f0.Apad[Apad_tmp + 378840] = 0.0;
  }
  for (j = 0; j < 900; j++) {
    Apad_tmp = 420 * (j + 2);
    SD->u1.f0.Apad[Apad_tmp] = 0.0;
    SD->u1.f0.Apad[Apad_tmp + 418] = 0.0;
    SD->u1.f0.Apad[Apad_tmp + 1] = 0.0;
    SD->u1.f0.Apad[Apad_tmp + 419] = 0.0;
    memcpy(&SD->u1.f0.Apad[Apad_tmp + 2], &varargin_1[j * 416],
           416U * sizeof(real_T));
  }
  real_T domainSizeT[2];
  real_T sizeB[2];
  real_T startIdxT[2];
  startIdxT[0] = 2.0;
  domainSizeT[0] = 5.0;
  sizeB[0] = 416.0;
  startIdxT[1] = 2.0;
  domainSizeT[1] = 5.0;
  sizeB[1] = 900.0;
  ordfilt2_real64(&SD->u1.f0.Apad[0], 420.0, &startIdxT[0], &offsets[0], 25.0,
                  &domainSizeT[0], 12.0, &b[0], &sizeB[0], true);
}

/* End of code generation (medfilt2.c) */
