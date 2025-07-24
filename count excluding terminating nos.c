#include<Stdio.h>
int main()
{
	int a,b,count=0,c;
	printf("enter number: ");
	scanf("%d",&a);
	printf("enter number: ");
	scanf("%d",&b);
	
	if (a<b)
	{
		c=a+1;
		while(c<b)
		{
			count++;
			c++;
		}
	}
	else
	{
		c=a-1;
		while(c>b)
		{
			count++;
			c--;
		}
	}
	printf("%d",count);
}
