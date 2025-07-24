#include<stdio.h>
int main()
{
	//print only even numbers between numbers using while loop 
	int a=1;
	while(a<=10)
	{
		if(a%2==0)
		{
			printf("%d\n",a);
		}
		a++;
	}
	//put if condition as if(a%2!=0) to print only odd numbers 
}
