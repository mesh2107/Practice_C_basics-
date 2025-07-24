#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j==1)
			{
				printf("1");
			}
			else if(j%2==0)
			{
				printf("p");
			}
			else if(j==3)
			{
				printf("*");
			}
			else
			{
				printf("5");
			}
		}
		printf("\n");
	}
}
