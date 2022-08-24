/*
ReaLiz: Alexis Ortiz
Fecha: 22 Ago 2033
Programa para conocer el mensaje de la condicion if 
*/
#include<stdio.h>
int  main()
{
	int x=20; //con un igual es asignacion 
	int y=30;
	if(x==y) // con dos igailes compracion
	{
		printf("el resultado es igual %d", y); // %d apuntador de la variable 
	}
	 else if (x>y)
	{
		printf("x=%d es mayor que y=%d",x,y);
	}
	else
	{
		printf("x=%d es menor que y=%d",x,y);
	}
	return (0);
}
