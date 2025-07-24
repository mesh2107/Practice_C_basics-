#include<stdio.h>
int main()
{
	//user defined
	int a,b,s=0;
	printf("enter value for A:");
	scanf("%d",&a);
	printf("enter value for B: ");
	scanf("%d",&b);
	if(a<b)
	{
		for(a;a<=b;a++)
		{
			printf("%d\n",a);
			s+=a;
		}
	}
	else
	{
		for(a;a>=b;a--)
		{
			printf("%d\n",a);
			s+=a;
		}
	}
	printf("%d",s);

}
