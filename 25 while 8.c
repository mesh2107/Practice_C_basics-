#include<stdio.h>
int main()
{
	//printig value of a till it reaches the value of b entered by user 
	int a,b;
	printf("enter any 1st value: ");
	scanf("%d",&a);
	printf("enter any 2nd value: ");
	scanf("%d",&b);

	while(a<=b)  //taking the value of a till b 
	{
		printf("%d\n",a);
		a++;
	}
	
	
}
