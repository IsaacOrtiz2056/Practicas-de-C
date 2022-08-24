/********************
NOMBRE: Alexis Ortiz
FECHA 24/08/22
PROYECTO: Estructura de control
			Whide
			Ciclo.c
********************/

#include<stdio.h>
int main()
{
	int contador, num;
	contador=1;
	printf ("Ingresa un numero: ");
	scanf ("%d",&num);
	while (contador <= num)
	{
		printf ("Contador = %d \n", contador);
		contador++;  // el ++ es lo mismo que poner contador+1
		
	}
	
	return(0);
}
