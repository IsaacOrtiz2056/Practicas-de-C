#include<stdio.h>

int main()
{
    char mensaje[5][80] =
    {
        "Archivo no encontrado",
        "El archivo no se peude abrir para escritura",
        "Archivo vacio",
        "El archivoo contiene datos de tipo incorrecto",
        "El archivo esta siendo usado"
    };
    printf("El segundo mesaje de erros es %s\n",mensaje[1]);
    printf("La primera letra del tercer mensaje de erros es %c\n",mensaje[2][0]);


    return 0;
}