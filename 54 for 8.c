#include<stdio.h>
int main()
{
	int a,b,count=0;
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
				
				count++;
			}
		}
	}
	else
	{
		for(a;a>=b;a--)
		{
			if(a%2==0)
			{
				
				count++;
			}
		}
	}
	printf("%d",count);
}
