#include<stdio.h>
int main()
{
	int a=1;
	while(a<=300)
	{
		if(a%3==0 && a%5==0)
		{
			printf("%d is divided by both\n",a);
		}
		else if(a%3==0)
		{
			printf("%d is divided by 3.\n",a);
		}
		else if(a%5==0)
		{
			printf("%d is divided by 5.\n",a);
		}
		a++;
	}
}
