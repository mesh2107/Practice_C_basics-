#include<stdio.h>
void swap(int a,int b)
{
	int c;
	printf("before swapping a is %d\n",a);
	printf("before swapping b is %d\n",b);
	
	    c=a;
	    a=b;
	    b=c;
	printf("after swapping a is %d\n",a);
	printf("after swapping b is %d\n",b);    
	    
}
int main()
{
	int a,b;
	printf("enter for A: ");
	scanf("%d",&a);
	printf("enter for B: ");
	scanf("%d",&b);
	swap(a,b);
}

