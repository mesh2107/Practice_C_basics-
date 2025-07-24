#include<stdio.h>
int main()
{
	int i,j;
	for (i=10;i>0;i-=2)
	{
		for (j=i;j>=0;j-=2)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
