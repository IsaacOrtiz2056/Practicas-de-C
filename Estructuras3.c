#include<stdio.h>
#include<string.h>
int main ()
{
    struct datoPer
    {
        char nombre[20];
        int edad;
        float calif1;

    }persona[5]; //Trabaja con un rango de 20 personas
    int i,edad,calif1;
    char nom[20];
    for ( i = 0; i <=4; i++)
    {
        printf("%d",i);
        printf("Ingresa el Nombre\n");
        gets(persona[i].nombre);
        printf("Ingresa la edad\n");
        scanf("%d",&edad);
        persona[i].edad=edad;
        printf("Ingresa la calificacion\n");
        scanf("%d",&calif1);
        persona[i].calif1=calif1;
        fflush(stdin);//limpia el teclado
        //printf("Nombre %s\n",persona[i].nombre);
        //printf("Edad %d\n",persona[i].edad);
        //printf("Calificacion %.2f\n",persona[i].calif1);
    }

    for ( i = 0; i <=4; i++)
    {
        printf("Nombre %s\n",persona[i].nombre);
        printf("Edad %d\n",persona[i].edad);
        printf("Calificacion %.2f\n",persona[i].calif1);
    }
    
    
    
    //persona[1].nombre='Alexis'
    

    

    return 0;
}