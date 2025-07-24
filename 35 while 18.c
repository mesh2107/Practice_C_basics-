#include<stdio.h>
int main()
{    //printig tables from 1 to 10 using while loop 

	int a,b;
	a=1;
	while(a<=10)  //takin the the value of a till 10 
	{
		printf("Table of %d\n",a);
	    b=1;
	    while(b<=10)
	    {
	    	printf("%d*%d=%d\n",a,b,a*b);
	    	b++;
		}
		a++;
		printf("\n");
		
	}
	
	
	
}
