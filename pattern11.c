#include<stdio.h>
int main()
{
	int i,j;
	for(i=9;i>=5;i--)
	{
		for(j=i;j>=0;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
