// DETERMINAR LA SUMA DE LOS DIGITOS DE UN NUMERO
#include <stdio.h>

int main(){
	
	int n; // numero
	int s=0; //suma digitos
    
	printf("Ingresar un digito:");
	scanf("%i",&n);
	
	while(n>0){
		s = s + n%10;
		n = n/10;
	}
	
	printf("La suma de los digitos es: %i",s);
	
	return 0;
}

