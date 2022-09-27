#include<stdio.h>
#include<string.h>

int main()
{
    char pal [100],pal1[100],pal2[100];
    int i,cont=0,com;
    printf("Ingresa tu palabra\n");
    gets(pal);



    for ( i = 0; i <=strlen(pal); i++)  //leer la cadena y borra los epsacios 
    {
        
        if (pal[i]!=' '){
            pal1[cont]=pal[i];
            cont++;
        }
    }
    
    cont=0;
    for ( i = strlen(pal1)-1; i >=0; i--)  //voltea la cadena (strlen(tamaño de la cadena))
    {
        pal2[cont]=pal1[i];
        cont++;
    }
    
    puts(pal);      //Cadena 
    puts(pal1);     //Cadena sin espacio
    puts(pal2);     //Cadena sin espacios y volteado
    com=strcmp(pal1,pal2);
    printf("%d\n",com);
    if (com==0) {
        printf("La cadena es un palindromo");
    }
    else
        printf("La cadadena NO es un palindromo");

}

//Para mostras caracteres de tipo String es mejor usar el Puts que el PutsChar 
