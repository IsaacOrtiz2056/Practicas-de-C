//Manejor de numeros aleatorios mediante la funcion rand o srand

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
    int valor;
    srand(time(NULL));
    valor=rand()%11;
    printf("El numero es %d \n",valor);

    return(0);
}