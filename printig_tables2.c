#include<stdio.h>
int main()
{ //printing table of nos b\w two nos entered by user  .
	int a,b ,c;
	printf("enter any value of A:");
	scanf("%d",&a);
	printf("enter any value of B:");
	scanf("%d",&b);
	while(a<=b)
	{
		printf("Table of %d\n",a);
		c=1;
		while(c<=10)
		{
			printf("%d*%d=%d\n",a,c,a*c);
			c++;
		}
		a++;
		printf("\n");
	}
	
}
