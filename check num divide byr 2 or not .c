#include<stdio.h>
int main()
{
	int num,c;
	printf("enter number to check: ");
	scanf("%d",&num);
	if (num%2==0)
	{
		printf("yes\n");
		for (c=1;c<=10;c++)
		{
			printf("%d %d %d\n",num,c,num*c);
		}
	}
	else
	{
		printf("no");
	}
}
