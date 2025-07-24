#include<stdio.h>
int main()
{
	//table of even nos in for loop 
	int a,b,c;
	printf("enter for A: ");
	scanf("%d",&a);
	printf("enter for B: ");
	scanf("%d",&b);
	
	if(a<b)
	{
		for(a;a<=b;a++)
		{
			if(a%2==0)
			{
				c=1;
				while(c<=10)
				{	
					printf("%d %d %d\n ",a,c,a*c);
					c++;
				}
				
			}
			printf("\n");
		}
	}
	else
	{
		for(a;a>=b;a--)
		{
			if(a%2==0)
			{
				c=1;
				while(c<=10)
				{
					printf("%d %d %d\n",a,c,a*c);
					c++;
				}
				
			}
			printf("\n");
		}
	}
}
