/*************************************************************
 *      calculadora de numeros rectangulares a polares       *
 *************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "../unit1/utils.h"
#include <string.h>

typedef struct POLAR_STRUCT {
    float modMag;
    float modGradeR;
    float modGradeI;
    //  4 (5 + 5i)
} polar_struct;

polar_struct* polar_function(float real, float imag) {
    const float PI = 3.1416;

    polar_struct* resultado = (polar_struct*)malloc(sizeof(polar_struct));
    resultado->modMag = 0;
    resultado->modGradeI = 0;
    resultado->modGradeR = 0;

    bool isEqualCero = (real == 0 && imag == 0);

    if (isEqualCero) return 0;


    float real_2 = pow(real, 2);
    float imag_2 = pow(imag, 2);

    resultado->modMag = sqrt(real_2 + imag_2);
    float modDiv = (imag / real);
    float modRad = atan(modDiv);

    resultado->modGradeI = (180 * modRad) / PI;
    resultado->modGradeR = (180 * modRad) / PI;

    return resultado;
};