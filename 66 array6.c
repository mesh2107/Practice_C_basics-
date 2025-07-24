#include<stdio.h>
int main()
{
	int i,l,no,count=0;
	printf("enter the length of array: ");
	scanf("%d",&l);
	
	int a[l];
	for(i=0;i<l;i++)
	{
		printf("enter value : ");
		scanf("%d",&a[i]);
	}
	printf("\nARRAY: \n");
	for(i=0;i<l;i++)
	{
		printf("%d, ",a[i]);
	}
	printf("\n enter the number to find: ");
	scanf("%d",&no);
	
	for(i=0;i<l;i++)
	{
		if(no==a[i])
		{
			count++;
		}
	}
	printf("%d\n",count);
}
