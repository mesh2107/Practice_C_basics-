#include<stdio.h>
int main()
{
	//sum of numbers using while loop
	int a=1,sum=0;
	while(a<=15)
	{
		printf("%d\n",a);
		sum+=a;
		a++;
		
	}
	printf(" sum of numbers:%d",sum);
}
