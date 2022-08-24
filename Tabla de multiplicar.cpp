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
	int contador, num,m;
	contador=1;
	m=0;
	printf ("Que tabla quieres imprimir");
	scanf ("%d,",&num);
	while (contador <= 10)
	{
		m=contador*num;
		printf (" %d X %d = %d \n", num, contador,m );
		contador++;  // el ++ es lo mismo que poner contador+1
		
	}
	
	return(0);

}

