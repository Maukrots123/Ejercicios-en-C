#include <stdio.h>
#include <conio.h>

int main(){
	int anno;
    printf("       \n");
	printf("+++++++++++++++ Programa para determinar si un anio es bisiesto ++++++++++++++++ \n");
	printf("       \n");
	printf("       \n");
    int anio;
    printf("                            Escribe el anno: ");
    scanf("%i", &anio);
    if(anno % 4 == 0){
	printf("       \n");
	printf("       \n");	
	printf("                            El anio si es bisiesto");
}   else{
	printf("       \n");
	printf("       \n");
	printf("                            El anio no es bisiesto");
}
    printf("       \n");
	printf("       \n");
    getch();
    return 0;
}

