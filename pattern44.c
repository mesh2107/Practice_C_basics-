#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<=8;i+=2)
	{
		for(j=0;j<=(8-i);j+=2)
		{
			printf(" ");
		}
		for(j=i;j>=0;j-=2)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	for(i=8;i>=0;i-=2)
	{
		for(j=0;j<=(8-i);j+=2)
		{
			printf(" ");
		}
		for (j=i;j>=0;j-=2)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
