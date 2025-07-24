#include<stdio.h>
int main()
{
	//sum in for loop 
	int a,sum=0;
	for(a=1;a<=10;a++)
	{
		printf("%d\n",a);
		sum+=a;
	}
	printf("%d",sum);
}
