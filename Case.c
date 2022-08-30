


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int  op=1,la,an,h,b,area;
	float r,a;
	while(op!=4)
	{
		system("cls");
		printf("1 Calcula el area de un circulo\n");
		printf("2 Calcula el area de un triangulo\n");
		printf("3 Calcula el area de un rectangulo\n");
		printf("4 Salida\n");
		printf("Opcion escogida\n");
		scanf("%d",&op);
		switch (op)
		{
			case 1:
				//intruccion si es op=1
			printf("Calcular el area de un circulo\n");
			printf("El valor el radio del circulo");
			scanf("%d",&r);
			a= 3.1416*pow(r,2);
			printf("El area del circulo del radio  %.2f es de %.2f\n",r,a);
			system("pause");
			break;
				case 2:
				//intruccion si es op=1
			printf("Calcular el area de un traingulo\n");
			printf("Base del triangulo\n");
			scanf("%d",&b);
			printf("Altura del traingulo\n");
			scanf("%d",&h);
			a =(b*h)/2;
			printf("El area del triangulo es de %.2f\n",a);
			system("pause");
			break;
				case 3:
				//intruccion si es op=1
			printf("Calcular el area de un rectangulo\n");
			printf("Largo de rectangulo\n");
			scanf("%d",&la);
			printf("Ancho del rectangulo\n");
			scanf("%d",&an);
			a=(la*an);
			printf("El area del rectangulo es de %.2f\n",a);
			system("pause");
			break;
				
				case 4:
			printf("Escogiste la opcion 4\n");
			system("pause");
			break;
			
			default:
				printf("Seleccionaste una opcion que no esta definida");
				break;
				
		} //cierre switch
	}//cierre de while
	system("pause");
	return(0);
}
