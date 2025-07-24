#include<stdio.h>
void hello()
{
	int a;
	printf("enter for A:");
	scanf("%d",&a);
	if(a==1)
	{
		printf("hello world!!!\n");
	}
	
	else if(a==2)
	{
		printf("byee\n");
	}
	else
	{
		printf("invalid");
	}
	
}
int main()
{
	hello();
}
