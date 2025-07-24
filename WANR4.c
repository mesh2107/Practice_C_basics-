#include<stdio.h>
void number(int num)
{
	if (num%2==0 && num!=0)
	{
		printf("even");
	}
	else if (num%2!=0)
	{
		printf("odd");
	}
	else
	{
		printf("zero");
	}
}
int main()
{
	int numb;
	printf("enter number: ");
	scanf("%d",&numb);
	number(numb);
}
