#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the age of 1st person A:");
	scanf("%d",&a);
	printf("enter the age of 2nd person B:");
	scanf("%d",&b);
	
	//ladder else if
	//1
	if((a<18 && b<18) && (a>0 && b>0))
	{
		printf("A and B are not eligible to vote. ");
	}
	//2
	else if((a<18 && b>=18) && a>0)
	{
		printf("A is not eligible to vote but B is.");
	}
	//3
	else if((a<18 && b<0) && a>0)
	{
		printf("A is not eligible to vote and invalid age of B");
	}
	//4
	else if((a>=18 && b<18) && (a>0 && b>0))
	{
		printf("A is eligible to vote but B is not.");
	}
	//5
	else if(a>=18 && b>=18)
	{
		printf("A and B are eligible to vote.");
	}
	//6
	else if(a>=18 && b<0)
	{
		printf("A is eligible to vote and invalid age of B");
	}
	//7
	else if((a<0 && b<18) && b>0)
	{
		printf("invalid age of A and B is not eligible.");
	}
	//8
	else if(a<0 && b>=18)
	{
		printf("invalid age of A and B is eligible.");
	}
	//9
	else
	{
		printf("invalid ages of A and B. ");
	}
}
