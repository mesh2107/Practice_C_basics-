#include<stdio.h>
int main()
{
	//factorial with while loop
	int a,b,fact=1;
	printf("enter any value of A:");
	scanf("%d",&a);
	b=a;
	
	while(a>=1)
	{
		fact*=a;
		a--;
	}
	printf("factorial of %d is %d",b,fact);
}
