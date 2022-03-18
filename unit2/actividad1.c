






#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//////Estructura Central de Programa  
int main(int argc, char *argv[]){

	///Iniciando contador y mostrando numero de entradas por usuario
	argc = argc - 1;
	if(argc == 0){
		printf("(Program): Invalid input, no arguments\n");
		return 0;
	}
	printf("(Program): Number of user inputs = %d\n\n",argc);

	///Validando cual entrada es entera y continuar el proceso	
	for(int i=1; i <= argc; i++){
		bool isANumber = (argv[i][0] >= 48 && argv[i][0] <= 57);
		if (!isANumber){
			printf("(Program): Input [#%d] equals to [%s] is invalid\n\n", i, argv[i]);
		}else{
		
	///De las inputs enteras validas tomarlas como rango
			printf("(Program): Input [#%d] is valid, for numbers in range [%s]\n\n", i, argv[i]);
			int rango = atoi(argv[i]);
			for (int i = 1; i <= rango; i++){
				int numberToTest = i;
				int result = numberToTest % 2;
				bool hasModule = (result > 0);
				if (hasModule){
					printf("Number %d is an odd\n", numberToTest);
				}
				else{
					printf("Number %d is an even\n", numberToTest);
				}	
        		}printf("\n");
		}
	}
	return 0;
}