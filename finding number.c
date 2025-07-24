#include<stdio.h>
int main()
{
	int a,b,num,c;
		printf("enter number: ");
	scanf("%d",&a);
	printf("enter number: ");
	scanf("%d",&b);
			printf("number to find: ");
			scanf("%d",&num);
	if (a<b)
	{
		while(a<=b)
		{
			if (a==num)
			{
				for (c=1;c<=10;c++)
				{
					printf("%d %d %d\n",num,c,num*c);
				}
			}
			
			a++;
		}	
	}
	else
	{
		while(a>=b)
		{
			if (a==num)
			{
				for (c=1;c<=10;c++)
				{
					printf("%d %d %d\n",num,c,num*c);	
				}
			}
		
			a--;	
		}
	}
}
