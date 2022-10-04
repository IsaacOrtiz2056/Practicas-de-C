#include<stdio.h>

int main()
{ //
char meses[2][12][20]= 
{"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre",
                        "January","February","Merch","April","May","June","July","August","September","October","November","December"};
    int mes1, mes2;
    
    printf("Ingresa el mes\n");
    scanf("%d",&mes1);
    printf("El mes en Español es %s\n",meses[0][mes1-1]);
    printf("El mes en Ingles es %s",meses[1][mes1-1]);

    return 0;
}

