#include<stdio.h>
#include<stdlib.h>
  int main()
  {
    FILE * archivo;
    archivo = fopen ("almacen1.txt","w");
    fputs("Ya es tas programndo y trabajando con archivos \n", archivo);
    fputs("Requiere de un gran esfuerzo y de dicacion \n", archivo);
    fputs("Para el resultado vale la pena \n",archivo);
    fclose(archivo);
    printf("Proceso terminado correctamente");
    return(0);

    /*
    Las fromas de abrir el archivo son estas:
    r- abre el arcihivo en modo solo lectura
    w- abre el archivo para escrtura (si no existe la crea, si existe lo remplaza)
    a- abre el archivo para agregar infromacion (si no existe lo crea)
    r+- abre el archivo para Lectura/escritura (comienza al pincipio del archivo)

    */
  }