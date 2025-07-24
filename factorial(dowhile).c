#include<stdio.h>
int main()
{
	//factorial in do while loop 
	int a,b,fact=1;
	printf("enter any value of A:");
	scanf("%d",&a);
	b=a;
	do
	{
		fact*=a;
		a--;
	}while(a>=1);
	
	printf("factorial of %d is %d",b,fact);
}
