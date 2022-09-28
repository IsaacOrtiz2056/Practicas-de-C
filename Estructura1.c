// Una estructura es una registro de informacion que peude agrupar distintos tipos de datos 
#include<stdio.h>

int main ()
{
    struct datosPer //Registro de informacion
    {
        char incial;
        int edad;
        float calif1;
    }persona; //Vatible de tipo persona 

    persona.incial ='A';
    persona.edad=19;
    persona.calif1 =7.8;
    printf("Incial del Nombre %c\n",persona.incial);
    printf("La edad %d\n",persona.edad);
    printf("Calificacion %.2f \n",persona.calif1);

    return 0;
}