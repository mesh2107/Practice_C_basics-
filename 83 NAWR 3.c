#include<stdio.h>
int factorial1()
{
	int a,fact=1;
	printf("enter no : ");
	scanf("%d",&a);
	while(a>=1)
	{
		fact*=a;
		a--;
	}
	return(fact);
}
int factorial2()
{
	int b,fact=1;
	printf("\nenter no : ");
	scanf("%d",&b);
	while(b>=1)
	{
		fact*=b;
		b--;
	}
	return(fact);
	
}

int main()
{
	printf("%d",factorial1());
	printf("%d",factorial2());
}

