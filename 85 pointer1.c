#include<stdio.h>
int main()
{
	//pointer
	int a=10;
	int *b=&a;
	printf("%d\n",a);
	printf("%d\n",&a);
	printf("%d\n",b);
	//* for pointer to print the value; without * prints memory value;
	printf("%d",*b);
}
