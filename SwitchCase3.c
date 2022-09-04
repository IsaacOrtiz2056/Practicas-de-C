/**********************
Autor: Isaac Ortiz
Fecha: 04/09/22
Proyecto: SwitchCase3
**********************/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int main()
 {
 	int op,con,n=0,x,num;
 	con=1;
 	op=1;
 	while(op!=5)
 	{
 		system("cls");
 		printf("1° Realizar la suma del 1 al 100\n");
 		printf("2° Realizar la suma de los numeros pares que existen entre el 1 y el 100\n");
 		printf("3° Realizar la suma de todos los numeros nones que existen entre el 1 y el 100\n");
 		printf("4° Identificar todos los numeros primos existentes \n");
 		printf("5° Salir \n");
 		printf("La opcion es:  ");
 		scanf("%d",&op);
 			switch (op)
 			{
 				case 1:
 					printf ("Imprime la suma de los numeros del 1 al 100 \n");
 					for(con=1;con<=100;con++)
					{
						n=n+con;
					}
					printf("La suma de los numeros del 1 al 100 es de %d\n",n);
 					system("pause");
 					break;
 				
 				case 2:
 				printf ("La suma de los numeros pares que existen entre el 1 al 100 \n");
 					for (con=1;con<=100;con++)
 					{
 						if (con%2==0){
 							n=n+con;
						 }
						printf("%d \n",n);	
					 }
					 printf("La suma de los numeros pares del 1 al 100 es de %d\n",n);
					 
 				system("pause");
 					break;
 					
 				case 3:
 					printf("La suma de todos los numeros nones que existen entre el 1 y el 100 \n");
 					for (con=1;con<=100;con++)
 					{
 						if (con%2==0)
						{
 							//n=n+con;
 							//printf("%d \n",n);
						}else
						{
							n=n+con;
						}	
						printf("%d \n",n);							
					}
					printf("La suma de los numumeros nones del 1 al 100 es de %d \n",n);	
 					system("pause");
 					break;
 					
 				case 4:
 				printf("Los numeros primos que hay entre el 1 y el 100 son\n");
 				num=0;
 				for (n=0;n<=100;n++)
				{
					num=num+1;
					x=1;
					con=0;	
				while (x<=num)
				{
					if ((num % x)== 0)
					{
						con=con+1;	
					}
					x=x+1;
				}
				if ((con==2) && num<=100 )
				{
					printf("%d\n",num);
					n=n-1;
				}	
				} 	
 					system("pause");
 					break;
			}
	}
	return(0);
}
 	
 	
 
