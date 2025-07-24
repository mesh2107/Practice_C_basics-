#include<stdio.h>
int main()
{
	int a,b;
	
	
	printf("enter value of A:");
	scanf("%d",&a);
	
	printf("enter value of B:");
	scanf("%d",&b);
	
	//arithmetic.
	printf("%d\n",a+b);
	printf("%d\n",a-b);
	printf("%d\n",a*b);
	printf("%d\n",a/b);
	printf("%d\n",a%b);
	
	//assignment.
	printf("%d\n",a+=b);
	printf("%d\n",a-=b);
	printf("%d\n",a*=b);
	printf("%d\n",a/=b);
	printf("%d\n",a%=b);
	printf("%d\n",a);
	
	//conditional\relational.
	printf("%d\n",a==b);
	printf("%d\n",a!=b);
	printf("%d\n",a<b);
	printf("%d\n",a>b);
	printf("%d\n",a<=b);
	printf("%d\n",a>=b);
	
	//logical.
	printf("%d\n",a==b && a!=b);
	printf("%d\n",a==b || a!=b);
	
}
