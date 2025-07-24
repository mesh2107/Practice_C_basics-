#include<stdio.h>
int main()
{
	//odd nos, sum , table in do while loop 
	int a,b, sum=0,c;
	printf("enter any value of A:");
	scanf("%d",&a);
	printf("enterf value of B:");
	scanf("%d",&b);
	
	if(a<b)
	{
		do
		{
			if(a%2!=0)
			{
				sum+=a;
				printf("%d\n",a);
			}	
			a++;
		}while(a<=b);
		c=1;
		do
		{
			printf("%d %d %d\n",sum,c,sum*c);
			c++;
		}while(c<=10);
	}
	else
	{
		do
		{
			if(a%2!=0)
			{
				sum+=0;
				printf("%d\n",a);
			}
			a++;
		}while(a<=b);
		c=1;
		do
		{
			printf("%d %d %d\n",sum, c, sum*c);
			c++;
		}while(c<=10);
	}
		
		printf("%d\n",sum);
		
		do
		{
			if(sum%2==0)
			{
				printf("%d\n",sum);
			}
			sum--;
		}while(sum>=1);
	
}

