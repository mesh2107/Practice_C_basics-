#include<stdio.h>
int main()
{
	//sum of numbers between 2 numbers
	int a,b,sum=0;
	printf("enter any 1st value:");
	scanf("%d",&a);
	printf("enter any 2nd value:");
	scanf("%d",&b);
	printf("The numbers between a and b are:\n");
	
	if(a<b)
	{
		while(a<=b)
		{
			printf("%d\n",a);
			sum+=a;
			a++;
		}
	
	}
	else
	{
		while(a>=b)
		{
			printf("%d\n",a);
			sum+=a;
			a--;
		}
	}
	printf("Sum of numbers:%d",sum);
	
	
}
