#include<stdio.h>
int main()
{
	//sum of even nos.
	int a=1,sum=0;
	do
	{
		if(a%2==0)
		{
			printf("%d\n",a);
			sum+=a;
		
		}
		a++;
	}while(a<=50);
	printf("%d",sum);
}
