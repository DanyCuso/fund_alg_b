
/****************************************************************
 *      Determina si la entrada argv/argc es par o inpar        *
 ****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utils.h"

int main (int argc, char** argv) {

    argc = argc - 1;
    
    if ( argc == 0 ){
        
        printf("(System): System Error; Imvalid inpud detected, input detected equal %d.\n", argc);

        return 0;

    }

    printf("(System):Verified Input %d.\t\n\n", argc);

    for (int i = 1; i <= argc; i++){
        
        bool is_A_Number = (argv[i][0] >= 48 && argv[i][0] <= 57);
        


        if (!is_A_Number) {
    
        
            printf ("(System): Input [%s] is invalid for this function.\n\n", argv[i]);
            
            sleep(1000);
        }
    
        else {

            printf("(System): Input [%s] is valid for this function.\n\n", argv[i]);

            sleep(1000);
        
        int testNumber = i;
        int module = atoi(argv[i]);
        
        bool result = (module % 2 == 0);

        if (result){
        printf("(Function): Input [%d]\t--->\t par\n\n",module);
    
        sleep(1000);
    }
        else {
        printf("(Function): Input [%d]\t --->\t impar\n\n", module);
        sleep(1000);
        }

        }
        sleep(1000);
    }

return 0;
}