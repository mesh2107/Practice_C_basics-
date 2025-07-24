#include<stdio.h>
int main()
{
	//leap year b\w 2000 to 3000
	int a=2000,count=0;
	while(a<=3000)
	{
		if((a%100==0 &&a%400==0) ||(a%100!=0 &&a%4==0))
		{
			printf("%d, ",a);
		}
		a++;
		count++;
	}
	printf("\n%d",count);
}
