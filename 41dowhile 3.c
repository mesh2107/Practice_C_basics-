#include<stdio.h>
int main()
{ //do while loop (sum)
	int a=1,sum=0;
	do
	{
		
		printf("%d\n",a);
		sum+=a;
		a++;
		
	}while(a<=50);
	
	printf("%d\n",sum);
	
}
