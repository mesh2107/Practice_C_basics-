#include<stdio.h>
#include<string.h>
int main()
{
	float disc;
	char ocode[11]="abc";
	char y_n[3],y[4]="yes",n[3]="no",ecode[11];
	int i,l,price,total=0;
	printf("enter no of items you want to buy: ");
	scanf("%d",&l);
	
	int a[l];
	for (i=0;i<l;i++)
	{
		printf("enter price of %d item:",i+1);
		scanf("%d",&price);
		total+=price;
	}
	printf("total price :%d",total);
	printf("\ndo have coupon code?: \n");
	scanf("%s",y_n);
	
	if (strcmp(y_n,y)==0)
	{
		printf("enter coupon code: ");
		scanf("%s",&ecode);
		while(strcmp(ocode,ecode)!=0)
		{
			printf("re enter:");
			scanf("%s",&ecode);
			
		}
		disc=(total*20)/100;
		printf("payment final:%f",total-disc);
	}
	else
		{
			printf("thank you , your price: %d",total);
		}
}
