/*****************************
NOMBRE: Alexis Ortiz
FECHA 24/08/22
PROYECTO:Tabla de multiplicar 
indicada por el usuario compra Valor
*****************************/

#include<stdio.h>
#include<conio.h>
int main()
{
	int valor;
	do{
		printf ("Ingresa un valor entre el 0 y 999 (0 para finalizar el programa) \n");
		scanf ("%d",&valor);
		if (valor>= 100)
		{
			printf("El valor tiene 3 digitos \n");
		}
		else if (valor>10)
		{
			printf("El valor tiene 2 digitos \n");
		}
		else
		{
			printf("El valor tiene 1 digitos \n");

		}	
		
	}while  (valor!=0);
	getch();
	return(0);
	
}
