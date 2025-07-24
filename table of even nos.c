#include<stdio.h>
int main()
{
	int a,b,c;
		printf("enter number: ");
	scanf("%d",&a);
	printf("enter number: ");
	scanf("%d",&b);
	if (a<b)
	{
		while(a<=b)
		{
			if (a%2==0)
			{
				for (c=1;c<=10;c++)
				{
					printf("%d %d %d\n",a,c,a*c);
				
				}
			}
			a++;
		}
	}
	else
	{
		while (a>=b)
		
		{
			if (a%2==0)
			{
				for(c=1;c<=10;c++)
				{
					printf("%d %d %d\n",a,c,a*c);
				
				}
			}
			a++;
		}	
	}
}
