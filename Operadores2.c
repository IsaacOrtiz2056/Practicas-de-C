/*********************
Nombre; Alexis Ortiz 
Fecha: 23/08/22
Proyecto Operadores 2
*********************/
#include<stdio.h>
int main()
{
	int a=0;
	int b=0;
	printf ("Tabla de verdad AND && \n");
	printf ("a=%d && b=%d = %d\n",a,b,a&&b );
	printf ("a=%d && b=%d = %d\n",a,!b,a&&!b );
	printf ("a=%d && b=%d = %d\n",!a,b,!a&&b );
	printf ("a=%d && b=%d = %d\n",!a,!b,!a&&!b );
	printf ("\n");
	printf ("Tabla de verdad OR || \n");
	printf ("a=%d || b=%d = %d\n",a,b,a||b );
	printf ("a=%d || b=%d = %d\n",a,!b,a||!b );
	printf ("a=%d || b=%d = %d\n",!a,b,!a||b );
	printf ("a=%d || b=%d = %d\n",!a,!b,!a||!b );
	// negaba las variblaes para que dieran 0 o 1 para poder hacer la compracion
	return(0);
}

/*
	int a=1;
	int b=0;
	printf ("Tabla de And\n");
	printf ("%d\n",(a==b)&&(a<b));
	printf ("%d\n",(a=b)&&(a>b));
	printf ("%d\n",(a==b)&&(a>b));
	printf ("%d\n",(a=b)&&(a<b));
	printf ("%d\n",(a==b)&&(a==b));
	
*/
