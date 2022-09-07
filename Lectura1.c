#include<stdio.h>
#include<stdlib.h>
int main (){
    FILE *archivo;
    char caracter;

    archivo =fopen ("datos4.txt","r");
    if (archivo == NULL)
    {
        printf("\nError de apertura de archivo\n\n");
    }
    else
    {
        printf("\n El contador del archivo de priebas es \n\n");
        while ((caracter = fgetc (archivo)) != EOF)
        {
            printf("%c",caracter);

        }
        
    }
fclose(archivo);
    return(0);
}