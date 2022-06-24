#include <stdio.h>
#include <conio.h>

int main(){
	
int n=0, total=0,i=1;
printf("Ingrese un numero: ");
scanf("%d", &n);
printf("Los divisores del numero %d son:",n);
for(i=1;i<=n;i++)
{
	total= n % i;

	if (total==0){
		printf("\n %d",i);
	}
}
	getch();
}
