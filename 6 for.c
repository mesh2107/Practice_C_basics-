#include<stdio.h>
int main()
{
	int a,b,c,s=0;
	
	printf("enter for A: ");
	scanf("%d",&a);
	printf("enter for B: ");
	scanf("%d",&b);
	s=a+b;
	printf("%d\n",s);
	
	
	for(c=1;c<=10;c++)
	{
		printf("%d %d %d\n",s,c,s*c);
	}
}
