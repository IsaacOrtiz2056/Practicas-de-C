/*

*/
#include<stdio.h>

int main()
{
    int primo, n,d;
    int es_primo;
    n=2;
    printf("Cuntos numeros primos quieres\n");
    scanf("%d",&primo);
        
        while (primo > 0 )
                {
                    es_primo=1;
                    for(d=2;d<n;d++)
                    {
                        if (n%d==0)
                        {
                            es_primo=0;
                            break;
                        }
                    }
                    if (es_primo)
                    {
                        
                        printf("%d ",n);
                        primo--;
                    }
                    
                    n++;
                }
 return(0);
}
