#include<stdio.h>
int main()
{
	//fibonacci series in do while
	int a=0,b=1,sum=0,c;
	printf("%d\n",a);
	printf("%d\n",b);
	c=1;
	do
	{
		sum=a+b;
		printf("%d\n",sum);
		a=b;
		b=sum;
		c++;
	}while(c<=8);
}
