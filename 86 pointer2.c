#include<stdio.h>
int main()
{
	//pointer user defined
	int a;
	printf("enterf value of A: ");
	scanf("%d",&a);
	int *b=&a;
	printf("%d\n",a);
	printf("%d\n",&a);
	printf("%d\n",b);
	printf("%d\n",*b);
}
