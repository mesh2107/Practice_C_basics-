#include<stdio.h>
#include<string.h>
int main()
{
	float disc,gst;
	char ocode[11]="abc";
	char y_n[3],y_n2[3],y[4]="yes",n[3]="no",ecode[11];
	int i,l,price,total=0;
	printf("enter no of items you want to buy: ");
	scanf("%d",&l);
	
	int a[l];
	for (i=0;i<l;i++)
	{
		printf("enter price of %d item:",i+1);
		scanf("%d",&a[i]);
		total+=a[i];
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
		total-=disc;
		printf("payment final:%d",total);
	}
	else
		{
			printf("thank you , your price: %d",total);
		}
		
		
		
		
	printf("\ndo want carrybag?: ");
	scanf("%s",y_n2);
	if (strcmp(y_n2,y)==0)
	{
		printf("carrybag: 10");
		total+=10;
	}
	
	printf("\ntotal amount: %d",total);
	printf("\nYOUR BILL:");
	
	for (i=0;i<l;i++)
	{
		printf("\nitem %d: %d\n",i+1,a[i]);
		
	}
	printf("DISCOUNT: %f",disc);
	gst=(total*14)/100;
	printf("\nGST: %f",gst);
	printf("\nfinally amount: %f",total+gst);
}
