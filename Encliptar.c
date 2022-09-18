














/*Tarea: generar un programa que me permita capturar una cadena por teclado de máximo
 50 caracteres (sin caracteres especiales) y encriptarla cambiando las vocales por 
 caracteres especiales, por ejemplo  a=&, e=# etc etc y que imprima la cadena
  original y la nueva cadena*/


#include <stdio.h>
#include <string.h>
int main()
{
char cadena[50];
printf("Ingresa una oracion\n");
gets(cadena);
//char cadena[]="El puerto paralelo del PC";
char *p;
p = cadena;
while (*p != '\0') {
if (*p == 'e') *p = '$';
if (*p == 'a') *p = '%';
if (*p == 'i') *p = '!';
if (*p == 'o') *p = '&';
if (*p == 'u') *p = '/';
p++;
}
printf( "La cadena queda: \"%s\" \n", cadena );
}
