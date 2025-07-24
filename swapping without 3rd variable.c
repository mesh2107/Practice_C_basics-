#include<stdio.h>
int main()
{
	int a,b;
	printf("enter A: ");
	scanf("%d",&a);
	printf("enter B: ");
	scanf("%d",&b);
	
	printf("before swapping a is %d\n",a);
	printf("before swapping b is %d\n",b);
	         a=a+b;
	         b=a-b;
	         a=a-b;
	printf("after swapping a is %d\n",a);
	printf("after swapping b is %d\n",b);        
}
