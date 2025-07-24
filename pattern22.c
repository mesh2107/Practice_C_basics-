#include<stdio.h>
int main()
{
	int i,j,k=10;
	for (i=1;i<=4;i++)
	{
		for (j=i;j<=k;j++)
		{
			printf("%d",j);
		}
		printf("\n");
		k-=2;
	}
	
}
