#include<stdio.h>
int main()
{
	//sum of even nos in for loop 
	int a,sum=0;
	for(a=1;a<=20;a++)
	{
		if(a%2==0)
		{
			printf("%d\n",a);
			sum+=a;
		}
	}
	printf("%d",sum);
}
