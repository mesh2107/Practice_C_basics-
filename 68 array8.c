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
	int max=a[0];
	printf("\nARRAY: \n");
	for(i=0;i<l;i++)
	{
		printf("%d, ",a[i]);
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("\n maximum number is %d",max);
}
