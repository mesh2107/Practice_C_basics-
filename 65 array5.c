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
		printf("%d, ",a[i]);
		if(a[i]==9)
		{
			printf("number exist in array.");
			break;
		}
	}
}
