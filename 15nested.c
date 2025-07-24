#include<stdio.h>
int main()
{
	//nested if else 
	int a,b;
	printf("enter value of A");
	scanf("%d",&a);
	printf("enter value of B");
	scanf("%d",&b);
	if(a%2==0 && a!=0)
	{
		if(b%2==0 && b!=0)
		{
			printf("A and B are even.");
		}
		else if(b%2!=0 && b!=0)
		{
			printf("A is even and B is odd");
		}
		else
		{
			printf("A is even and B is zero");
		}
	}
	else if(a%2!=0 && a!=0)
	{
		if(b%2==0 && b!=0)
		{
			printf("A is odd and B is even");
		}
		else if(b%2!=0 && b!=0)
		{
			printf("A and B are odd");
		}
		else
		{
			printf("A is odd and B is zero ");
		}
		
	}
	else 
	{
	  if(b%2==0 && b!=0)
		{
			printf("A is zero and B is even");
		}
		else if(b%2!=0 && b!=0)
		{
			printf("A  is zero and B is odd");
		}
		else
		{
			printf("A and B are zero ");
		}
	}
}


