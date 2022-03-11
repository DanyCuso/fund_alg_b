
/*******************
 * contador 1 - 10 *
 * *****************/

#include <stdio.h>
#include "utils.h"
#include <time.h>

int main (void) {

    int num;
    int memoria;

    while (memoria < 10) {

        num++;
        printf("%d \n", num);
        memoria = num;
        sleep(1000);

            


        
    }    

return 0;

}