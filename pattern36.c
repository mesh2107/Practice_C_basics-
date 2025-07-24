#include<stdio.h>
int main()
{
	int i,j,s,k;
	for (i=1;i<=5;i++)
	{
		s=0;
		for(j=1;j<=i;j++)
		{
			s+=j;
		}
		for(k=1;k<=s;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
