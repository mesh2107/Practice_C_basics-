#include<stdio.h>
int main ()
{  //printing table of even nos only b\w the nos.
	int a,b ,c;
	printf("enter any value of A:");
	scanf("%d",&a);
	printf("enter any value of B:");
	scanf("%d",&b);
	if(a<b)
	{
	
	while(a<=b)
	{
		if(a%2==0)
		{
			printf("Table of %d\n",a);
		    c=1;
		    while(c<=10)
		    {
		    	printf("%d %d %d\n",a,c,a*c);
		    	c++;
			}
		
			
		}
		a++;
		printf("\n");
	}
}
else
{
	while(a>=b)
	{
		if(a%2==0)
		{
			c=1;
			while(c<=10)
			{
				printf("%d %d %d \n",a,c,a*c);
				c++;
			}
		}
		a--;
		printf("\n");
	}
}
	
}
