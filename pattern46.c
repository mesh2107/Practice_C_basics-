#include<stdio.h>
int main()
{
	int i,j,s=0;
	for (i=1;i<=5;i++)
	{
		s+=i;
		for(j=1;j<=(15-s);j++)
		{
			printf(" ");
		}
		for (j=1;j<=s;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}
