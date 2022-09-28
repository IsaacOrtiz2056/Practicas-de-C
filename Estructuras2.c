#include<stdio.h>

int main()
{
    struct datosPer
    {
        char nombre[20];
        int edad;
        float calif1;

    };

    struct datosPer persona = {"Alexis",30,9};  //Asi tambien se puede asignar datos a las variables de tipos Struct
    printf("Nombre %s\n",persona.nombre);
    printf("Edad %d\n",persona.edad);
    printf("Calificacion %.2f\n",persona.calif1);

    return 0;
}