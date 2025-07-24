#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("enter value of A:");
	scanf("%d",&a);
	
	printf("enter value of B :");
	scanf("%d",&b);
	
	printf("before swapping A is %d\n",a);
	printf("before swapping B is %d\n",b);
	    c=a;
	    a=b;
	    b=c;
	printf("after swapping A is %d\n",a);
	printf("after swapping B id %d\n",b);   
}
