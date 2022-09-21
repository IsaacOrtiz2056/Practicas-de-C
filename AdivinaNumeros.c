#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main (){
	char jugar[] ="SI";
	char jugar1[] ="SI";	
	int x=0;
	while (x==0)
	{
	
		int n1,n2=-1,con=0;
	    srand(time(NULL));
	    n1=rand()%51;
	    printf("Random %d \n",n1);
	    while (n1!=n2)
	    {
		    printf("INGRESA UN NUMERO\n");
		    scanf("%d",&n2);
		    
			if (n1==n2)
			{
				printf("GANASTE\n"); 
			    con=con+1;
			    printf("GANASTE EN %d INTENTOS\n",con);
			    
			}
	       else
		       if (n1<n2)
		       {
			        printf("EL NUMEROS MENOR\n");
			        con=con+1;
		       }
		       else
		       		if (n1>n2)
		       		{
				        printf("UN NUMERO MAYOR\n");
				        con=con+1;
	       			}
	       if (con==5)
		   {
		       	printf("SE TE ACABARON LOS INTENTOS\n");
		       	n2=n1;
		   }    	

		   
		}
		printf("QUIERES VOLVER A JUGAR SI/NO\n");
		scanf("%s\n",jugar1);
		fflush(stdin); //BORRA LO QUE QUE QUEDA DEL TECLADO 
		x=strcmp(jugar1,jugar);
		
    }
    printf("EL JUEGO HA ACABADO\n");
    return(0);
}