#include<stdio.h>
int main()
{
	//2d array 
	int a[4][3]={{9,3,6,},{4,15,123},{15,36,489,}};
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
