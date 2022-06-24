#include <stdio.h>

main(){
	
	int n1, n2=0;
	
	printf("++++++++ Escribir numeros indefinidos positivos y mostrar el numero mayor+++++++ \n");
	do{
		printf("\n.Ingrese algun numero: ");
		scanf ("%i",&n1);	
		
		if(n1>n2){
			n2=n1;
    	}
		
	}while (n1>0);
	
	printf("       \n");
	printf("       \n");
	printf("El numero mayor es:%i",n2);
	
	return 0;
}



