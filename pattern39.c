#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for (j=1;j<=5;j++)
		{
			if(i==j||i+j==6)
			{
				printf("*");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
}
