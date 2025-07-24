#include<stdio.h>
int main()
{
	int a,b,count=0;
	printf("enter number: ");
	scanf("%d",&a);
	printf("enter number: ");
	scanf("%d",&b);
	if (a<b)
	{
		while(a<=b)
	{
			count++;
			a++;
			}	
	}
	else
	{
		while(a>=b)
		{
			count++;
			a--;
		}
	}
	printf("%d",count);
}
