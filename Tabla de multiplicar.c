/*****************************
NOMBRE: Alexis Ortiz
FECHA 24/08/22
PROYECTO:Tabla de multiplicar
*****************************/

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
		contador++; 	
	}
	return(0);

}

