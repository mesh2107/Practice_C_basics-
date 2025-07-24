#include<stdio.h>
int main()
{
	int a,b,count=0;
	printf("enter any 1st value ");
	scanf("%d",&a);
	printf("enter any 2nd value");
	scanf("%d",&b);
	a++;
	while(a<b)
	{
		a++;
		count++;
	}
	printf("%d",count);
}
