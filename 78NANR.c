#include<stdio.h>
void interest()
{
	int p,r,n,i;
	printf("enter principal value :");
	scanf("%d",&p);
	printf("enter rate of interest :");
	scanf("%d",&r);
	printf("enter year :");
	scanf("%d",&n);
	i=p*r*n/100;
	printf("%d",i);
	
}
int main()
{
	interest();
}
