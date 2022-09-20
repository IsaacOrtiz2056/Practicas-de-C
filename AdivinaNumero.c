#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main (){
	char jugar1[3] ="SI";
	//char jugar2[3] ="NO";	
	
	while (jugar1 != "NO")
	{
	
	int n1,n2=-1,con=0;
    srand(time(NULL));
    n1=rand()%51;
    
    printf("El numero es %d \n",n1);
    while (n1!=n2)
    {
        printf("Ingresa tus numeros \n");
    	scanf("%d",&n2);
       if (n1==n2)
       {
            printf("GANASTE\n"); 
            con=con+1;
            printf("GANASTE EN %d\n",con);
            //system("pause");
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
        if (con==5){
            printf("Se te acabaron los intentos");
            n2=n1;
	   }    
		
		
	}
	
	printf("Quires volver a jugar\n");
	scanf("%s",jugar1);
    }
    return(0);
}