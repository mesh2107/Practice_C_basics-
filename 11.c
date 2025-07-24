#include<stdio.h>
int main()
{
	int a,b;
	char n1[10],n2[10];
	printf("enter name of 1st person:");
	scanf("%s",&n1);
	printf("enter age of 1st person:");
	scanf("%d",&a);
	printf("enter name of 2nd person:");
	scanf("%s",&n2);
	printf("enter age of 2nd person:");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("%s is older than %s.",n1,n2);
	}
	else if(a<b)
	{
		printf("%s is younger than %s ",n1,n2);
	}
	else 
	{
		printf("%s and %s are of same age",n1,n2);
	}
}
