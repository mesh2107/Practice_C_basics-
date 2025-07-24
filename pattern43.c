#include<stdio.h>
int main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=(5-i);j++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			if (i%2!=0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
		printf("\n");
	}
	for(i=2;i<=5;i++)
	{
		for(j=1;j<=(5-i);j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(i%2!=0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
		printf("\n");
	}
}
