#include<stdio.h>
int main()
{ // table of sum of nos between series .
	int a,b ,c,sum=0;
	printf("enter any value of A:");
	scanf("%d",&a);
	printf("enter any value of B:");
	scanf("%d",&b);
	if(a<b)
	{
	
     	while(a<=b)
		{
				sum+=a;
				a++;
		}
	printf("Sum of numbers between the series:%d\n",sum);
		c=1;
	printf("Table of %d\n",sum);
		while(c<=10)
		{
			printf("%d %d %d\n",sum,c,sum*c);
			c++;
		}
	}	
	else
	{	
		while(a>=b)
		{
			sum+=a;
			a--;
		}
	printf("%d\n",sum);
	c=1;
		while(c<=10)
		{
			printf("%d*%d=%d\n",sum,c,c*sum);
			c++;
		}		
	}
}
