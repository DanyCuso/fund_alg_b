
#include <stdio.h>
#include "utils.h"
#include <time.h>

int main (void) {

    int num = 0;
    int memoria = 0;
    bool module;
    int result;
    int rango;

    printf("inglresa un rango\t ");
    scanf("%d", &rango);

    while (memoria < rango) {
 
        num++;
        printf("%d \t", num);
        memoria = num;
        sleep(1000);

            /*even_odd_method*/

            result = num % 2;
            module = (result > 0);

                if(module) {
                printf("impar \n");
            }
                else {
                printf("par \n");
            }      


        
    }    

return 0;

}