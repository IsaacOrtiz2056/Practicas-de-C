#include<stdio.h>
#include<math.h>
float calculo(int x )
{
	float resultado;
	return resultado = sqrt(x);
}
int main()
{
    int valor;
    float salida;
    printf("programa para calcular la raiz cuadrada de un numero\n ");
    printf("Ingrese el valor para calcular la raiz cuadrada\n");
    scanf("%d", &valor);
    salida = calculo(valor);
    printf ("el resultado es %f",salida);
	return (0);
}
