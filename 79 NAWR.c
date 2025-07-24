#include<stdio.h>
float interest()
{
	int p,n;
	float r,i;
	printf("enter principale value:");
	scanf("%d",&p);
	printf("enter rate of interest :");
	scanf("%f",&r);
	printf("enter years :");
	scanf("%d",&n);
	i=p*r*n/100;
	return (i);
}
int main()
{
	printf("%f",interest());
}
