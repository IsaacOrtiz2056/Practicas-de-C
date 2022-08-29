/*********************************
Nombre Alexis Ortiz
Fecha 29/08/22
Proyecto For Tablas de multiplicar
**********************************/



#include<stdio.h>
int main()
{
	int i,j,m;
	for (i=1;i<=10;i++)
	{
		printf("Tabla de multiplicar de %d \n",i);
	//	printf ("%d \n",i);
		for(j=1;j<=10;j++)
		{
			m= i*j;
		//	printf("%d\n",j);
		//	printf("%d\n",m);
			printf("%d X %d = %d \n",i,j,m);
		}	
	} 
return (0);
	}
