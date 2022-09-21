#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (){
    int i;
    int limite =1000; //contidad macima de n enteros positivos 
    double suma =0; // guarda la sumad e los enteros positivos 
    float pi =0; // guarda el valor final de pi

    for (i=1;i<=limite;i++)
    {
        suma= suma+1/ (pow(i,2));

    }
    pi=sqrt(suma*6);
    printf("El valor de pi es de %f  \n",pi);
    return 0;
}