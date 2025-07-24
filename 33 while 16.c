#include<stdio.h>
int main()
{ //count of even nos between 2 nos using while loop
	int a,b ,count=0;
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
				count++;
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
				count++;
			}
			a--;
		}
	}
	printf("Count of even numbers between the entered numbers is:%d",count);
}
