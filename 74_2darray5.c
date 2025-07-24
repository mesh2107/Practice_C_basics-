#include<stdio.h>
int main()
{//sum of 1 st column
	int i,j,r,c;
	printf("enter the number of rows: ");
	scanf("%d",&r);
	printf("enter the number of columns: ");
	scanf("%d",&c);
	
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter the values: ");
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	int sum=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
			if(j==0)
			{
				sum+=a[i][j];
			}
		}
		printf("\n");
	}
	printf("%d",sum);
}
