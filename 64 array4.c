#include<stdio.h>
int main()
{
	int i,l;
	printf("enter length of array: ");
	scanf("%d",&l);
	int a[l];
	for(i=0;i<l;i++)
	{
		printf("enter the value at %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<l;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",a[i]);
		}
	}
}
