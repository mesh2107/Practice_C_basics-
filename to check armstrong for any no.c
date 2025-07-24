#include<stdio.h>
#include<math.h>
int main()
{

	int a,b,c,sum=0,d,co,count=0;
	printf("enter number: ");
	scanf("%d",&a);
	     c=a;
	     co=a;
	while(co>0)
	{
		co=co/10;
		count++;
	}
	    d=count;
	     
	while(a>0)
	{
		b=a%10;
		sum=sum+(pow(b,d));
		a=a/10;
	}
	if(c==sum)
	{
		printf("no is armstromg");
	}
	else
	{
		printf("no is not armstrong.");
	}
}
