#include<stdio.h>
int main()
{
	int num=1,sum=0;
	while(num<=4)
	{
		sum+=num;
		num++;
	}
	printf("%d",sum);
	while(num>=1)
	{
		printf("%d\n",num);
		num--;
	}
}
