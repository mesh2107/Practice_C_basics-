#include<stdio.h>
int main()
{
	int i,len,num,count=0;
	printf("enter length of an array: ");
	scanf("%d",&len);
	int a[len];
	for (i=0;i<len;i++)
	{
		printf("enter values for array: ");
		scanf("%d",&a[i]);
	
	}
	printf("\nARRAY\n");
	for (i=1;i<len;i++)
	{
		printf("%d, ",a[i]);
	}
	for (i=0;i<len;i++)
	{
		if(a[i]%2!=0)
		{
			count++;
		}
	}
	printf("\ncount of odd nos in array is %d",count);
}
