#include<stdio.h>
float simple1()
{
	printf("BANK1: ");
	float rate1,time1,inter1;
	int pvalue1;
	printf("enter principal value: ");
	scanf("%d",&pvalue1);
	printf("rate of interest: ");
	scanf("%f",&rate1);
	printf("time to complete: ");
	scanf("%f",&time1);
	inter1=(pvalue1*rate1*time1)/100;
	return("simple interest of 1st bank : %f\n",inter1);
};
float simple2()
{
	printf("\n");
	printf("BANK2");
	float rate2,time2,inter2;
	int pvalue2;
	printf("enter principal value: ");
	scanf("%d",&pvalue2);
	printf("rate of interest: ");
	scanf("%f",&rate2);
	printf("time to complete: ");
	scanf("%f",&time2);
	inter2=(pvalue2*rate2*time2)/100;
	return("simple interest of 1st bank : %f\n",inter2);
};
float simple3()
{	
	printf("\n");
	printf("BANK3: ");
	float rate3,time3,inter3;
	int pvalue3;
	printf("enter principal value: ");
	scanf("%d",&pvalue3);
	printf("rate of interest: ");
	scanf("%f",&rate3);
	printf("time to complete: ");
	scanf("%f",&time3);
	inter3=(pvalue3*rate3*time3)/100;
	return("simple interest of 1st bank : %f",inter3);
};
int main()
{
	printf("%f",simple1());
	printf("%f",simple2());
	printf("%f",simple3());
}
