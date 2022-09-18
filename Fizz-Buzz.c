#include<stdio.h>
#include<stdlib.h>

int main  ()
{
    int i;
    for ( i = 0; i <= 100; i++)
    {
        if (i%3 ==0 & i%5==0)
            printf("%d FizzBuzz \n",i);
        else
            if (i % 5 ==0)
                printf("%d Buzz \n",i);
            else
                if (i % 3==0 )
                    printf("%d Fizz \n",i );
                else
                    printf("%d\n",i);
    }
    return(0);
}


/*Imprimir los números del 1 al 100 .
Pero , en lugar de los números
múltiplos de 3 se debe imprimir " Fizz "
y en lugar de los múltiplos de 5 se debe
imprimir " Buzz " . En lugar de los
números que sean múltiplos tanto de 3
como de 5 , imprimir " FizzBuzz " .*/