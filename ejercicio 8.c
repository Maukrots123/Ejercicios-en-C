#include <stdio.h>
 
 int main(){
 	
 	char opc, S,N, conti;
 	int calificacion,n=0,aprob=0,x=0,y=0,op=0,al=0;
   
  
   
   do{
   
   system ("cls");
   do{
   

    printf("Desea analizar las calificaciones de los alumnos? ingrese S:\n");
    
    scanf("%c",&opc);
    
        if ((opc == 'N') || (opc == 'n' )){
	         return 1;
	         }
	  }while((opc == 'S') && (opc == 's' ));
	    
	       if((opc == 'S') || (opc == 's' )){
	
	          printf("Ingrese la calificacion\n");
		      scanf("%i",&calificacion);
			   al+=1;
		       if(calificacion>=4){
		       	printf("\n. El alumno esta aprobado");
		       	 n+=1;
		       	 aprob+=calificacion;
		       	
		       	 
		       	}
		       	
				   
}					   
				if(calificacion<4){
			   	printf(" El alumno esta reprobado");
			    }
           
		 x= n*100/al;        //porcentaje
		y= aprob/n;         //promedio
		
	
		
		printf("                                                            \n");
		printf("\n. Su porcentaje es de:%i",x);
		printf("                                                            \n");
        printf("\n. Su promedio es de:%i",y);
		printf("\n\n Quieres volver a ingresar al programa?");
		printf("\n Escriba  S para si y N para No:");
		
	
	    scanf("%i",&op);
        				                  
	  }while(op = 1); 
	  

 return 0;
}
