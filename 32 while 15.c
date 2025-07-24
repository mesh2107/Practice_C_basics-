#include<stdio.h>
int main()
{ // sum of only even nos between 2 numbers using while loop .
	int a,b ,sum=0;
	printf("enter any value of A:");
	scanf("%d",&a);
	printf("enter any value of B:");
	scanf("%d",&b);
	
	if(a<b)
	{
		while(a<=b)
		{
			if(a%2==0)
			{
				sum+=a;
			}
			a++;
		}
		
	}
	else
	{
		while(a>=b)
		{
			if(a%2==0)
			{
				sum+=a;
			}
			a--;
		}
	}
	printf("Sum of even numbers:%d",sum);
}
