
/***************************
 *   argv : argc practice  *
 * *************************/

#include <stdio.h>
#include <string.h>


int main (int argc, char** argv) {

    if (argc > 1) return 0;
    
    printf("program executed: %s, number of imputs elements: %d\n", argv [0], (argc-1));
    printf("hola %s %s %s, bienvenido!", argv[1], argv[2], argv[3]);

    return 0;


}