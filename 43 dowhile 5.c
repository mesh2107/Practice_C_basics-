#include<stdio.h>
int main()
{
	
	int a,b,sum=0;
	printf("enter any value for A :");
	scanf("%d",&a);
	printf("enter any value for B:");
	scanf("%d",&b);
	if(a<b)
	{
		do
		{
			printf("%d\n",a);
			sum+=a;
			a++;
		}while(a<b);
	}
	else
	{
		do
		{
			printf("%d\n",a);
			sum+=a;
			a--;
		}while(a>=b);
		
	}
	printf("%d",sum);
		
		
	
	
		
	
}
