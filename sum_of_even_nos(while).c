#include<stdio.h>
int main()
{
	//sum of only even numbers using while loop 
	int a=1,sum=0;
	while(a<=10)
	{
		if(a%2==0)// condition to take only even numbers 
		{
			printf("%d\n",a);
			sum+=a;  // summing of even numbers 
		}
		a++;
	}
	printf("%d",sum);
	
}
