#include<stdio.h>
int main()
{
	int a,b;
	printf("enter any value of A:");
	scanf("%d",&a);
	printf("enter value of B:");
	scanf("%d",&b);
	
	if(a>10)
	{
		printf("A is greater than 10");
	}
	if(a<10)
	{
		printf("A is less than 10");
	}
	if(a>b)
	{
		printf("%d is greater than %d",a,b);
	}
	if(a<b)
	{
		printf("%d is less than %d",a,b);
	}
	if(a==b)
	{
		printf("A and B are equal .");
	}
	
}
