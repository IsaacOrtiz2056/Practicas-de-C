/**********
Nombre: Alexis Ortiz
Fecha: 23/08/22
Proyecto  
Lectura por teclado
Lectura.c
******************************************************/

#include<stdio.h>
int main()
{
	int val1=1;
	int val2=2;
	
	printf ("Vamos a capturar 2 valores y comprar si son iguales \n");
	printf	("Escribe el primer valor; ");
	scanf ("%d",&val1);
	printf	("Escribe el segundo valor; ");
	scanf ("%d",&val2);
	if (val1==val2)
	{
		printf("Las varibles son iguales \n");
		
	}
	else if (val1>val2)
	{
		printf("El valor 1 es mayor que el Valor 2");
		
	}
	else {
		printf("El valor 2 es mayor que el Valor 1");
	}
	
	return(0);
}
