/*************************************************************
 *      calculadora de numeros rectangulares a polares       *
 *************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "../unit1/utils.h"
#include <string.h>



int main (void) {



    system("clear");

    //pide los inpts iniciales//


    float real_entrada;
    float imag_entrada;

    printf("\n(Program): ingresa tu numero real \n");
    scanf("%f", &real_entrada);



    printf("\n(Program): ingresa tu numero imaginario\n");
    scanf("%f", &imag_entrada);



    //ruptura de seguridad//

    if (real_entrada == 0 && imag_entrada == 0){
        return 0;
    }

    //confirma que las entradas esten correctas//

    char confirm;

    printf("\n(Program): tu numero es:\t %.02f + i%.02f \n", real_entrada, imag_entrada);
    sleep(1000);


    //procedimineto para en calculo con modulos //

    const float PI = 3.1416;

    float real_2 = pow(real_entrada, 2);
    float imag_2 = pow(imag_entrada, 2);

    float modMag = sqrt(real_2 + imag_2);

    float modDiv = (imag_entrada / real_entrada);

    float modRad = atan(modDiv);

    float modGrade = (180 * modRad) / PI;



    printf ("\n(Program): Numero polar es igual a\t %.02f(Cos (%.f) + isen (%.f)\n\n", modMag, modGrade, modGrade);


    





    return 0;
}