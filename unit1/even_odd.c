
/***********************
 *  Even or Odd method *
 ***********************/


#include <stdio.h>
#include "utils.h"
#include <stdbool.h>


int main (void) {

    int num;
    int result;
    bool module;

printf("ingresa un numero natural:\t");
scanf("%d", &num);
result = num % 2;
module = (result > 0);

    if(module) {
        printf("impar \n");
    }
    else {
        printf("par \n");
    }      
return 0;
}