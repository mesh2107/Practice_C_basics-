#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==0||i==5||j==1||j==5)
			{
				printf("0");
			}
			else if(i==3 && j==3)
			{
				printf("3");
			}
			else
			{
				printf("2");
			}
		}
		printf("\n");
	}
}
