#include<stdio.h>
int main()
{
	//printing the value of a and b till the value of c is 20
	int a=0,b=1,c=2;
	while(c<=20)
	{
		printf("%d,%d\n",a,b);
		a++;
		b++;
		c+=2;
	}
}
