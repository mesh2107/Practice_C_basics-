#include<stdio.h>
int main()
{
	//count of numbers between 2 numbers using while loop 
	int a,b,count=0;
	printf("enter any 1st value:");
	scanf("%d",&a);
	printf("enter any 2nd value:");
	scanf("%d",&b);
	
	while(a<=b)
	{
		a++;
		count++;
	}
	printf("Count of number between the series:%d",count);
}
