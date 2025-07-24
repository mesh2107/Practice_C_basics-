#include<stdio.h>
int main()
{
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
	
	int min=a[0][0];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
			if(min>a[i][j])
			{
				min=a[i][j];
			}
		}
		printf("\n");
	}
	printf("minimum number is %d",min);
}
