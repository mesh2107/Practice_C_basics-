#include<stdio.h>
int main()
{
	int a,b,sum=0;
	printf("enter any 1st value:");
	scanf("%d",&a);
	printf("enter any 2nd value:");
	scanf("%d",&b);
	
	while(a<=b)
	{
		printf("%d\n",a);
		sum+=a;
		a++;
	}
	
	printf("%d",sum);
}
