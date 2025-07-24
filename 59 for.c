#include<stdio.h>
int main()
{
	//tables in for loop 
	int a,b,c;
	printf("enter for A: ");
	scanf("%d",&a);
	printf("enter for B: ");
	scanf("%d",&b);
	
	if(a<b)
	{
		for(a;a<=b;a++)
		{
			c=1;
			while(c<=10)
			{
				printf("%d %d %d\n ",a,c,a*c);
				c++;
			}
			printf("\n");
		}
	}
	else
	{
		for(a;a>=b;a--)
		{
			c=1;
			while(c<=10)
			{
				printf("%d %d %d\n",a,c,a*c);
				c++;
			}
			printf("\n");
		}
	}
	
}
