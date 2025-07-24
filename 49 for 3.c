#include<stdio.h>
int main()
{
	int a,b=1,c=4;
	for(a=0;a<20;a++)
	{
		printf("%d %d %d\n",a,b,c);
		b++;
		c+=2;
	}
}
