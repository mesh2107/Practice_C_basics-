#include<stdio.h>
int main()
{
	int i,j;
	for(i=2;j<=10;i+=2)
	{
		for(j=0;j<=i;j+=2)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
