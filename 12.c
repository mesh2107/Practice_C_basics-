#include<stdio.h>
int main()
{
	//if else 
	int a;
	printf("enter any year ");
	scanf("%d",&a);
	if((a%100==0 && a%400==0)||(a%100!=0 && a%4==0))
	{
		printf("year is a leap year.");
	}
	else 
	{
		printf("year is not a leap year.");
	}
}
