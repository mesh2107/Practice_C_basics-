#include<Stdio.h>
int main()
{
	int a=90000;
	int c=0;
	int b;
	while(a>0)
	{
		a=a/10;
		c++;
	}
	printf("%d",c);
}
