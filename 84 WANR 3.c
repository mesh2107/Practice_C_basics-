#include<stdio.h>
void intrest(int p,int n,float r)
{
	float i;
	i=p*r*n/100;
	printf("%f",i);
}
int main()
{ 
    int p,n;
    float r;
	printf("enter pricipal amount: ");
	scanf("%d",&p);
	printf("enter rate of interest: ");
	scanf("%f",&r);
	printf("enter years:");
	scanf("%d",&n);
	intrest(p,n,r);
}	
	
