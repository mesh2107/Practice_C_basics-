#include<stdio.h>
int main()
{
	//palindrome no 1 to 100
	int a=1,b,c,s=0,count=0;
	while(a<=100)
	{
		c=a;
		s=0;
		while(c>0)
		{
			b=c%10;
			s=(s*10)+b;
			c=c/10;
		}
		if(a==s)
		{
			printf("%d\n",s);
			count++;
		}
		
		a++;
		
		
	}
	
	printf("%d",count);
}
