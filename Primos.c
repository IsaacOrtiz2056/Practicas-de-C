#include<stdio.h>
 int main()
 {
 	int n,num,x,con;
 	printf("Ingresa el numero de primos que quieres");
 	scanf("%d",&n);
	num=0;
 	while(n>0)
	{
		num=num+1;
		x=1;
		con=0;	
		while (x<=num)
		{
			if ((num % x)== 0)
			{
				con=con+1;	
			}
			x=x+1;
		}
		if ((con==2))
		{
			printf("%d\n",num);
			n=n-1;
		}	
	} 	
 	return(0);
 }

