#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../unit2/utils.h"


int main (void){

const float pi = 3.14159265;
int rango;
float magnitud;
int angulo;

printf("ingresa un numero\n\n");
scanf("%d", &rango);

printf("ingresa magnitud\n\n");
scanf("%f", &magnitud);

printf("ingresa tu angulo\n\n");
scanf("%d", &angulo);


for ( int i = 0; i < rango; i++){

    float mag_res = (pow(magnitud, 1/rango));
    float radAngulo = (angulo/180*pi);
    float modulo1 = 2*(i*pi);
    printf("%f\n\n", modulo1);
    float modulo2 = (modulo1/rango);
    float modulo3 = (radAngulo + modulo2);
    float modulo4 = sin(modulo3);

    
    sleep(2000);

}
return 0;
}