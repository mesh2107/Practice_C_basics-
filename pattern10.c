#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<=10;i+=2)
	{
		for(j=i;j<=10;j+=2)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
