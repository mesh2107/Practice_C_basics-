#include<stdio.h>
int main()
{
	int a,b,g;
	char fname[10],mname[10],lname[10];
	
	//sum of numbers.
	printf("enter value of A:");
	scanf("%d",&a);
	
	printf("enter value of B:");
	scanf("%d",&b);
	//name and age.
	printf("enter your first name :");
	scanf("%s",&fname);
	
	printf("enter your middle name:");
	scanf("%s",&mname);
	
	printf("enter your last name :");
	scanf("%s",&lname);
	
	printf("enter your age:");
	scanf("%d",&g);
	
	printf("A is %d\n",a);
	printf("B is %d\n",b);
	printf("sum of %d and %d is %d\n",a,b,a+b);
	printf("my full name is %s %s %s.\n",fname,mname,lname);
	printf("my age is %d",g);
}
