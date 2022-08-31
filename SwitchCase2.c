#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
  int main ()
  {
  	int op,a,b;
  	op=1;
  	float raiz,n1,n2;
  	
  	while (op!=5)
  	{
  		system("cls");
  		printf("1° Determinar si un numero pedido por el teclado es par o impar\n"); // 3%2
  		printf("2° Calcular la raiz cuadrada de del numero pedido por declado\n");
  		printf("3° Elevar el numero pedido por el travldo a la potencia indicada por el usuario \n");
  		printf("4° Pedir dos numeros e imprimirlos de mayor a menor \n");
  		printf("5° Salir\n");
  		printf("5° Opcion ?");
  		scanf("%d",&op);
  		switch (op)
  		{
  			case 1:
  			printf("1° Determinar si un numero pedido por el teclado es par o impar\n"); // 3%2
  			scanf("%d",&a);
			if (a%2==0)
			{
				printf("Es un numero par \n");
			
			}
			else  
			{
				printf("El un numero impar\n");
			}
  			system("pause");
  			break;
  			
  			case 2:
  			printf("2° Calcular la raiz cuadrada de del numero pedido por declado\n");
  			printf("Raiz de que numero quieres sacar\n");
  			scanf("%d",&a);
  			raiz=sqrt(a);
  			printf("La raiz de %d es de %.2f\n",a,raiz);
  			system("pause");
			break;	
			  
			case 3:	
			printf("3° Elevar el numero pedido por el teclado a la potencia indicada por el usuario \n");
			printf("Ingresa el numero a elevar");
			scanf("%f",&n1);
			printf("Ingresa la pontecia a elevar");
			scanf("%f",&n2);
			a=pow(n1,n2);
			printf("El resultado es de %d\n",a);
			
			system("pause");
			break;
			
			case 4:
			printf("4° Pedir dos numeros e imprimirlos de mayor a menor \n");	
			printf("Ingresa el numero 1");
			scanf("%d",&a);
			printf("Ingresa el numero 2");
			scanf("%d",&b);
			if(n1>n2)
			{
				printf("El numero mayor es %d\n",a);
				printf("El numero menor es %d\n",b);
			} else
				printf("El numero mayor es %d\n",b);
				printf("El numero menor es %d\n",a);
			system("pause");
			break;
			
			case 5:
			printf("5° Salir");
			system("pause");
			break;
				
  		}
  	}
  	return(0);
  }
