#include<stdio.h>
int main()
{
	//armstrong nos b\w 100 to 999
	int a=100,b,c,s=0;
	while(a<=999)
	{
		c=a;
		s=0;
		while(c>0)
		{
			b=c%10;
			s=s+(b*b*b);
			c=c/10;
		}
		if(a==s)
		{
			printf("%d\n",s);
		}
		a++;
	}
}
