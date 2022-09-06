/* Programa para calcular por medio de una fincion suma de todos numeros entre el 0 y el 100 
 * regresando la suma en la variable acumulado
 * para imprimirla despues dentro del main
 */
#include<stdio.h>
int suma()
{
 int i,con;
 for(i=1;i<=100;i++){
 	con=con+i;
 	//printf("%d\n",con);
 }
 return con;
}
int main()
{
    int sal;
    sal= suma();
    printf("El resultado es de %d\n",sal);
    return(0);
}
