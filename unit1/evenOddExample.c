
/********************************
 *      Even Odd Example        *
 ********************************/


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main (int argc, char** argv) {

    if (argc != 2) {

        printf("Error programm: U need to insert a number, eg: ./%s argv[1] \n", argv[0] );
        return 0;
    }
    bool isANumber = (argv[1][0] >= 48 && argv [1][0] <= 57);

    if (!isANumber) {

        printf("Error programm: U need to insert a number, no a letter eg: %s 8 \n", argv [0] );
        
    }
    
    int numberToTest = atoi(argv[1]);
    int result = numberToTest % 2;
    bool hasModule = (result > 0);

    if (hasModule) {

        printf("is an odd number \n");
    }
    else {
        printf("is an even number \n");
    
    }
return 0;
}