#include<stdio.h>
int main()
{
	//ladder if else
	int m;
	printf("enter your marks:");
	scanf("%d",&m);
	if(m<0)
	{
		printf("invalid marks");
	}
	else if(m<=35)
	{
		printf("fail\n");
	}
	else if(m<=50)
	{
		printf("pass\n");
	}
	else if(m<=70)
	{
		printf("second class\n");
	}
	else if(m<=90)
	{
		printf("first class\n");
	}
	else if(m<=100)
	{
		printf("distinction\n");
	}
	else 
	{
		printf("invalid marks");
	}
}
