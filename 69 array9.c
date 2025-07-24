#include<stdio.h>
int main()
{
	int i,l;
	printf("enter length of array: ");
	scanf("%d",&l);
	
	int a[l];
	for(i=0;i<l;i++)
	{
		printf("enter value: ");
		scanf("%d",&a[i]);
	}
	int min=a[0];
	printf("\nARRAY: \n");
	for(i=0;i<l;i++)
	{
		printf("%d, ",a[i]);
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("\n minimum number is %d.",min);
}
