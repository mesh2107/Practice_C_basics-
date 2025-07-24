#include<stdio.h>
float interest(int p,float r,int n)
{
    float i;
	i=p*r*n/100;
	return(i);	
}
int main()
{
	int p,n;
	float r;
	printf("enter principal value:");
	scanf("%d",&p);
	printf("enter rate of interest :");
	scanf("%f",&r);
	printf("enter years:");
	scanf("%d",&n);
	printf("%f",interest(p,r,n));
	
}
