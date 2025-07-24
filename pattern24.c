#include<stdio.h>
int main()
{
	int i,j,k=0;
	for (i=10;i>=4;i-=2)
	{
		for (j=i;j>=k;j--)
		{
			printf("%d",j);
		}
		printf("\n");
		k++;
	}
}
