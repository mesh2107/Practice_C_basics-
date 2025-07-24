#include<stdio.h>
int main()
{
	//armstrong nos 
	int a,b,c,sum=0;
	a=153;
	c=a;
	while(a>0)
	{
		b=a%10;
		sum=sum+(b*b*b);
		a=a/10;
	}
	if(c==sum)
	{
		printf("no is armstrong.");
		
	}
	else
	{
		printf("no is not armstrong");
	}
}
