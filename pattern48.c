#include<stdio.h>
int main()
{
	int i,j,k=1;
	for (i=1;i<=7;i+=2)
	{
		for (j=i;j>=k;j--)
		{
			printf("%d",j);
		}
		printf("\n");
		k++;
	}
}
