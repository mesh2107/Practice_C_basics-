#include<stdio.h>
int main()
{
	//factorial 1 to 10 
	int a=1,b , fact=1;
	while(a<=10)
	{
		fact*=a;
		b=a;
		printf("factorial of %d is %d\n",b,fact);
		a++;
	}
}
