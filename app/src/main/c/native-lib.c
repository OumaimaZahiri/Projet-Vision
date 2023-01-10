//
// Created by oumai on 1/8/2023.
//

// Code for the image analysis part (obsolete).
/*
#include <jni.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "./Fonction_Somme/Fonction_Somme.h"
#include "./Fonction_Somme/rtwtypes.h"
#include "./Fonction_Somme/Fonction_Somme_terminate.h"

unsigned char argInit_uint8_T(void)
{
    return 0U;
}

void argInit_2136x4624x3_uint8_T(unsigned char result[29630592])
{
    int idx0;
    int idx1;
    int idx2;
    */
/* Loop over the array to initialize each element. *//*

    for (idx0 = 0; idx0 < 2136; idx0++) {
        for (idx1 = 0; idx1 < 4624; idx1++) {
            for (idx2 = 0; idx2 < 3; idx2++) {
                */
/* Set the value of the array element.
        Change this value to the value that the application requires. *//*

                result[(idx0 + 2136 * idx1) + 9876864 * idx2] = argInit_uint8_T();
            }
        }
    }
}

double coinCounter(unsigned char b_I[29630592]) {
    argInit_2136x4624x3_uint8_T(b_I);
    double Somme = Fonction_Somme(b_I);
    Fonction_Somme_terminate();
    return Somme;
}


unsigned char image;

JNIEXPORT  int JNICALL
Java_com_vision_kaptkoin_MainActivity_coinCounter(JNIEnv *env, jobject this)
{
    return (real_T) coinCounter(&image);
}*/
