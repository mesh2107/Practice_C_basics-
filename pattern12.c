#include<stdio.h>
int main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=i;j>=0;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
