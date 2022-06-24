#include <stdio.h>

int main (){
	
	int i, suma = 0;
	printf("       \n");
	printf("++ Programa para determinar la suma de todos los numeros entre el 0 y el 100 ++\n");
	printf("       \n");
	printf("       \n");
		
	for(i=1;i<=100;i++){
		suma = suma + i;
	}
	printf("\n                      El resultado de la suma es de: %i",suma);
	printf("       \n");
	printf("       \n");
	return 0;
}
