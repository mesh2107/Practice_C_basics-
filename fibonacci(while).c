#include<stdio.h>
int main()
{
	//fibonacci series
	int a=0,b=1,c,sum=0;
	printf("%d\n",a);
	printf("%d\n",b);
	c=1;
	while(c<=8)//need 10 nos only ;
	{
		sum=a+b;
		printf("%d\n",sum);
		a=b;
		b=sum;
		c++;
	}
}
