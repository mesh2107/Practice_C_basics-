#include<stdio.h>
int main()
{
	int a;
	printf("enter your age :");
	scanf("%d",&a);
	
	if(a>=18)
	{
		printf("you are eligible to vote .");
	}
	else if(a<18 && a!=0 && a>0)
	{
		printf("you are not eligible to vote.");
	}
	else 
	{
		printf("invalid age.");
	}
}
