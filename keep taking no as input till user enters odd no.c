#include<stdio.h>
int main()
{
	int num;
	printf("enter number: ");
	scanf("%d",&num);
	while (num%2==0)
	{
		printf("enter number: ");
		scanf("%d",&num);
	}
	
	
}
