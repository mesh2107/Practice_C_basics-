#include<stdio.h>
int main()
{
	//
	int a,b,count=0;
	printf("enter any value for A :");
	scanf("%d",&a);
	printf("enter any value for B:");
	scanf("%d",&b);
	if(a<b)
	{
		do
		{
			count++;
			a++;
		}while(a<=b);
	
		
	}
	else
	{
		do
		{
			count++;
			a--;
		}while(a>=b);
	}
	printf("%d",count);
}
