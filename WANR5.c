#include<stdio.h>
void vote(int age)
{
	int left;
	if (age>=18)
	{
		printf("eligible");
	}
	else if (age<18 && age!=0)
	{
		printf("not eligible\n");
		left=18-age;
		printf("%d years left to vote",left);
	}
	else
	{
		printf("invalid");
	}
}
int main()
{
	int age;
	printf("enter age: ");
	scanf("%d",&age);
	vote(age);
}
