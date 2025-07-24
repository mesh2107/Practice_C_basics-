#include<stdio.h>
int main()
{
	int i,s=0,l;
	printf("enter the length of array: ");
	scanf("%d",&l);
	int a[l];
	for(i=0;i<l;i++)
	{
		printf("enter value of %d",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<l;i++)
	{
		printf("%d\n",a[i]);
		s+=a[i];
	}
	printf("%d",s);
}
