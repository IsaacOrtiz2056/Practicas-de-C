/*
1.Nombre completo de una persona 
2.Edad 
3.Estadura y los este los almacene en el archivo datos.txt
4.Probarlos con almenos 3 datos 
5.Mostrar el contenido de datos.txt
*/
 #include<stdio.h>
 #include<stdlib.h>

 int main (){
    FILE * archivo;
    char nom [40];
    char estatura [4];
    char edad [3];

    archivo=fopen("datos.txt","a");
    printf("Ingresa tu nombre completo\n");
    scanf("%[^\n]",nom); //[^\n] captura todos los datos hasta que detecta el enter 
    fflush(stdin); //para limpiar la entra y poder resivir la entrada de un nuevo dato 
    fputs(nom,archivo);
    fputs(" ",archivo);
    
        printf("Ingresa tu edad\n");
        scanf("%s",edad); //Comando string para que tome bien la varible
        fflush(stdin);
        fputs(edad,archivo);
        fputs(" ",archivo);
        scanf("%s",edad);

            printf("Ingresa tu estatura\n");
            scanf("%s",estatura);
            fflush(stdin);
            fputs(estatura,archivo);
            fputs("\n",archivo);
            fclose(archivo);
                
                printf("Proceso terminado");
    return(0);
 }
