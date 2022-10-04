#include<stdio.h>
 int main()
{
    char meses[12][10]= 
    {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    int mes;
    printf("Ingresa el mes\n");
    scanf("%d",&mes);
    printf("%s",meses[mes-1]);

    return 0;
}
//enero, febrero, marzo, abril, mayo, junio, julio, agosto, septiembre, octubre, noviembre y diciembre.