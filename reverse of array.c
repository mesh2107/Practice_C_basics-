#include<stdio.h>
int main()
{
	int i,l;
	printf("enter lemgth of an array: ");
	scanf("%d",&l);
	int a[l];
	for (i=0;i<l;i++)
	{
		printf("enter values in array: ");
		scanf("%d",&a[i]);
		
	}
	printf("\nARRAY\n");
	for (i=0;i<l;i++)
	{
		printf("%d, ",a[i]);
	}
	printf("\nthe reverse of this array is: \n");
	for (i=l-1;i>=0;i--)
	{
		printf("%d, ",a[i]);	
	}
}
