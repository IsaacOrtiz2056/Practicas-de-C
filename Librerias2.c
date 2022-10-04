#include<stdio.h>
#include "operaciones.h"

int main()
{
    float primerValor, segundoValor , resultado;
    int opcion;

    printf("Calculadora.\n\n");
    printf("?Que operacion quieres realizar?\n");
    printf("1. Suma.\n");
    printf("2. Resta.\n");
    printf("3. Multiplicacion.\n");
    printf("4. Division.\n\n");
    printf("Elige una opcion: ");
    scanf("%d", &opcion);
    printf("Ingresa el primer valor ");
    scanf("%f",&primerValor);
    printf("Ingresa el segundo valor ");
    scanf("%f",&segundoValor);
    switch(opcion)
    {
        case 1:
            resultado = sumar(primerValor, segundoValor);
            break;
        case 2:
            resultado = restar(primerValor, segundoValor);
            break;
        case 3:
            resultado = multiplicar(primerValor, segundoValor);
            break;
        case 4:
            resultado = dividir(primerValor, segundoValor);
            break;
        default:
            printf("No existe la opcion elegida.\n");
        break;
    }

    printf("El resultado de la operacion es: %.2f \n\n", resultado);
    return 0;
}

