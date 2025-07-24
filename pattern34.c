#include<stdio.h>
int main()
{
	int i,j,s;
	for(i=1;i<=5;i++)
	{
		s=0;
		for(j=1;j<=i;j++)
		{
			s+=j;
		}
		printf("%d",s);
		printf("\n");
	}
}
