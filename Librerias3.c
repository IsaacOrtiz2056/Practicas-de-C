#include<stdio.h>
#include "Areas.h"
int main()
{
    int op; 
    float resultado;
    while (op!=5)
    {
    printf("¿Que opcion quieres realizar?\n");
    printf("1. Calcular el Area de un Circulo\n");
    printf("2. Calcular el Area de un Pentagono\n");
    printf("3. Calcular el Area de un Trapecio\n");
    printf("4. Calcular el Area deun Rectangulo\n\n");
    printf("Elige una opcion: ");
    scanf("%d", &op);
    int radio,nl;
    float lado,ap,baseMay,baseMen,base,alt;
    switch (op)
    {
    case 1:
        
        printf("Calcular el Area de un Circulo\n");
        printf("Ingresa el radio del Circulo ");
        scanf("%d",&radio);
        resultado=areacirculo (radio);
        printf("El Area del Circulo es de %f ",resultado);
        break;
    case 2:
        
        printf("2. Calcular el Area de un Pentagono\n");
        printf("Numero de lados del pentagono ");
        scanf("%d",&nl);
        printf("Ingresa el lado ");
        scanf("%f",&lado);
        printf("Ingresa la AP del pentagono ");
        scanf("%f",&ap);
        resultado=areapentagono(nl,lado,ap);
        printf("El Area del pentagono es de %f ",resultado);
        break;
    case 3:
        printf("3. Calcular el Area de un Trapecio\n");
        printf("Ingresa la Base Mayor");
        scanf("%f",&baseMay);
        printf("Ingresa la Base Menor");
        scanf("%f",&baseMen);
        printf("Ingresa la altura");
        scanf("%f",&alt);
        resultado=areatrapecio(baseMay,baseMen,alt);
        printf("El Area del Trapecio es de %f",resultado);
        break;

    case 4:
        printf("4. Calcular el Area deun Rectangulo\n");
        printf("Ingresa la base del Rectangulo");
        scanf("%f",&base);
        printf("Ingresa la Altura del Rectangulo");
        scanf("%f",&alt);
        resultado=arearectangulo(base,alt);
        break;
    }
    }
    
    return 0;


}