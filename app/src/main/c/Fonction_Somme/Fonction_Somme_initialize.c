/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Fonction_Somme_initialize.c
 *
 * Code generation for function 'Fonction_Somme_initialize'
 *
 */

/* Include files */
#include "Fonction_Somme_initialize.h"
#include "Fonction_Somme_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void Fonction_Somme_initialize(void)
{
  rt_InitInfAndNaN();
  isInitialized_Fonction_Somme = true;
}

/* End of code generation (Fonction_Somme_initialize.c) */
