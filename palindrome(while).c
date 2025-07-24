#include<stdio.h>
int main()
{
	//palindrome nos
	int a=121,b,c,s=0;
	c=a;
	while(a>0)
	{
		b=a%10;
		s=(s*10)+b;
		a=a/10;
	}
	if(c==s)
	{
		printf("no is palindrome");
	}
	else
	{
		printf("no is not palindrome");
	}
}
