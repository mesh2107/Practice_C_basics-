#include<stdio.h>
int main()
{
	int a=10,c;
	int b=5;
	int *a1=&a;
	int *b1=&b;
	
	printf("before swapping a1 is %d\n",*a1);
	printf("before swapping b1 is %d\n",*b1);
	     c=*a1;
	    *a1=*b1;
	    *b1=c;
	    printf("\n");
	printf("after swapping a1 is %d\n",*a1);
	printf("after swapping b1 is %d\n",*b1);    
}
