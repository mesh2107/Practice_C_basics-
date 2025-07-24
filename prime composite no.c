#include<stdio.h>
int main()
{
	int a,b=2,count=0;
	printf("enter for A: ");
	scanf("%d",&a);
	
	while(b<a)
	{
		if(a%b==0)
		{
			count++;
			break;
		}
		b++;
	} 
	if(count==0)
	{
		printf("number is a prime.");
	}
	else
	{
		printf("number is a composite.");
	}
}
