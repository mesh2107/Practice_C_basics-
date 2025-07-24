#include<stdio.h>
void interest(int p,float r,int n)
{
	float i;
	i=p*r*n/100;
	printf("%f",i);
}
int main()
{
	int p1,n1;
	float r1;
	printf("enter principal value:");
	scanf("%d",&p1);
	printf("enter rate of interest :");
	scanf("%f",&r1);
	printf("enter years :");
	scanf("%d",&n1);
	interest(p1,r1,n1);
}
