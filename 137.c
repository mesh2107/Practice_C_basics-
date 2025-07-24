#include<stdio.h>
int main()
{
	int l,i,count=0;
	printf("enter the length of array: ");
	scanf("%d",&l);
	
	int a[l];
	for(i=0;i<=l;i++)
	{
		printf("enter values: ");
		scanf("%d",&a[i]);
	}
	printf("\nARRAY:\n");
	for(i=0;i<=l;i++)
	{
		printf("%d, ",a[i]);
		if(a[i]%2!=0)
		{
			count++;
		}
	}
	printf("\n%d",count);
	
	
}
