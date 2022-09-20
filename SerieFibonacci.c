#include<stdio.h>
#include<stdlib.h>

int main(){
    int i=1, acu1=1,acu2=1,acu3=0,serie;
    printf("Numero de series que quieres?\n");
    scanf("%d",&serie);
    printf("%d,",acu1);
    printf("%d,",acu2);
    while (i<=serie)
    {
        acu3=acu1+acu2;   
        printf("%d,",acu3);   
        acu1=acu2;
        acu2=acu3;
        i++;   
    }
    return(0);
}