#include <stdio.h>

int main (){
	
	int i=1, n, factorial = 1;
	printf("       \n");
	printf("+++++++++++++++++ Programa para determinar el factorial +++++++++++++++++++++   \n");
	printf("       \n");
	printf("       \n");
	printf("                             Ingrese el Numero: ");
	scanf("%i",&n);
	
	for(i=1;i<=n;i++){
	factorial = factorial * i;
	}
	printf("       \n");
	printf("       \n");
	printf("\n                          El numero factorial es: %i",factorial);
	printf("       \n");
	printf("       \n");
	return 0;	
}
