#include<stdio.h>
int main()
{
	int i,j;
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==j)
			{
				printf("1");
			}
			if (j<i)
			{
				printf("2");	
			}
			if(j>i)
			{
				printf("0");
			}
		}
		printf("\n");
	}
}
