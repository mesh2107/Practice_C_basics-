#include<stdio.h>
int main()
{
	int num;
	printf("enter number: ");
	scanf("%d",&num);
	while(num%7!=0)
	{
		printf("enter number: ");
		scanf("%d",&num);
		printf("%d\n",num);
	}
}
