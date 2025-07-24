#include<stdio.h>
int main()
{
	int l,i;
	printf("enter the length of array: ");
	scanf("%d",&l);
	
	int a[l];
	for(i=0;i<l;i++)
	{
		printf("enter values: ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<l;i++)
	{
		printf("%c ",a[i]);
		
	}
}
