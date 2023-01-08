/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Fonction_Somme_terminate.c
 *
 * Code generation for function 'Fonction_Somme_terminate'
 *
 */

/* Include files */
#include "Fonction_Somme_terminate.h"
#include "Fonction_Somme_data.h"
#include "rt_nonfinite.h"
#include "omp.h"

/* Function Definitions */
void Fonction_Somme_terminate(void)
{
  omp_destroy_nest_lock(&Fonction_Somme_nestLockGlobal);
  isInitialized_Fonction_Somme = false;
}

/* End of code generation (Fonction_Somme_terminate.c) */
