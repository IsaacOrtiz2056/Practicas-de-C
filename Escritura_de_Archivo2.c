 #include<stdio.h>
 #include<stdlib.h>

 int main (){
    FILE * archivo;
    char nom [40];
    char estatura [4];
    char edad [3];
    int con=1;

    //archivo=fopen("datos.csv","a"); //Es una liberia de excel separado por comas 
    while (con<=3)
    {
        archivo=fopen("datos.csv","a"); //Es una liberia de excel separado por comas 
        printf("Ingresa tu nombre completo\n");
        gets(nom); //para obtener un string de una varible 
        fputs(nom,archivo);
        fputs(",",archivo);// separacion por comas 
        
            printf("Ingresa tu edad\n");
            gets(edad);
            fputs(edad,archivo);
            fputs(",",archivo);


                printf("Ingresa tu estatura\n");
                gets(estatura);
                fputs(estatura,archivo);
                fputs("\n",archivo);
                fclose(archivo);
                    
                    con=con+1;
                    //printf("%d",&con);
    }
    printf("Proceso terminado\n");
    printf("%d\n",&con);
    fclose(archivo);
    
    
    return(0);
 }