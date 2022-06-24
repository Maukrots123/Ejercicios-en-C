#include <stdio.h>

main(){
	
	int n1,n2,n3,n4,n5,n6, negativos=0, positivos=0, contador,promedio;
	
	
	do{
		printf("ingrese un primer numero que no sea cero:");
		scanf("%i",&n1);
		
		if (n1<0){
			negativos=negativos+n1;
        }	
        if (n1>0){
        	positivos=positivos+n1;
        	contador=contador+1;
		}
  }while(n1==0);
  
  printf("       \n");
  
do{
		printf("ingrese el segundo numero que no sea cero:");
		scanf("%i",&n2);
		
		if (n2<0){
			negativos=negativos+n2;
		}
		if (n2>0){
			positivos=positivos+n2;
			contador=contador+1;
		}
		
  }while(n2==0);
  
  printf("       \n");
  
  do{
		printf("ingrese el tercer numero que no sea cero:");
		scanf("%i",&n3);
		if (n3<0){
			negativos=negativos+n3;
		}
		if (n3>0){
			positivos=positivos+n3;
			contador=contador+1;
		}
		
  }while(n3==0);
  
  printf("       \n");
  
do{
		printf("ingrese el cuarto numero que no sea cero:");
		scanf("%i",&n4);
		if (n4<0){
			negativos=negativos+n4;
		}
		if (n4>0){
			positivos=positivos+n4;
			contador=contador+1;
		}
  }while(n4==0);
 
 printf("       \n");
 
  do{
		printf("ingrese el quinto numero que no sea cero:");
		scanf("%i",&n5);
		if (n5<0){
			negativos=negativos+n5;
		}
		if (n5>0){
			positivos=positivos+n5;
			contador=contador+1;
		}
		
  }while(n5==0);
 
 printf("       \n");
 
  do{
		printf("ingrese el sexto numero que no sea cero:");
		scanf("%i",&n6);
		if (n6<0){
			negativos=negativos+n6;
		}
		if (n6>0){
			positivos=positivos+n6;
			contador=contador+1;
		}
		
  }while(n6==0);
  printf("       \n");
  printf("       \n");
  printf("El total de los negativos es de:%i",negativos);
  printf("       \n");
  printf("       \n");
  promedio = positivos / contador;
  printf("       \n");
  printf("       \n");
  printf("El promedio de los numeros positivos es de:%i",promedio);
  
  return 0;
}





