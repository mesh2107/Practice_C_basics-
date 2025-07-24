#include<stdio.h>
int main()
{
	//reverse of no 
	int a=123,b,c,s=0;
	c=a;
	while(a>0)
	{
		b=a%10;
		s=(s*10)+b;
		a=a/10;
	}
	if(c==s)
	{
			printf("no is palindrome\n");
	}
	else
	{
		printf("no is not palindrome\n");
	}
		
	printf("reverse of %d is %d",c,s);
}
