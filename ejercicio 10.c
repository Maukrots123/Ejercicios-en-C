#include <stdio.h>

main(){
	
	int n;
	do{
		
		printf("\n \n. Ingresar algun nuemro");
		scanf("%i",&n);
		
		if(n % 2 == 0){
			printf("       \n");
			printf("El numero es par");
			
	
		}else{
			printf("       \n");
			printf ("El numero es impar");
			
		}
		if(n%3==0){
		printf("       \n");
			printf("Es multiplo de 3?: si.");
		}else{
			printf("       \n");
			printf("Es multiplo de 3?: no ");
		}
		
	}
	while(n>=0 || n<-1);
	return 0;
}


