#include<stdio.h>
int main()
{
	//armstrong in do while 
	int a=153,b,c,s=0;
	c=a;
	do
	{
		b=a%10;
		s=s+(b*b*b);
		a=a/10;
	}while(a>0);
	if(c==s)
	{
		printf("no is armstrong");
	}
	else
	{
		printf("no is not armstrong");
	}
	
}
