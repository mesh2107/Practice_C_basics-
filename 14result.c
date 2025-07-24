#include<stdio.h>
int main()
{
	//result
	int r,m1,m2,m3,m4,m5;
	char name[10];
	 int total =0;
	float per;
	printf("enter your roll no");
	scanf("%d",&r);
	printf("enter your name");
	scanf("%s",&name);
	printf("enter marks of sub1:");
	scanf("%d",&m1);
	printf("enter marks of sub2:");
	scanf("%d",&m2);
	printf("enter marks of sub3:");
	scanf("%d",&m3);
	printf("enter marks of sub4:");
	scanf("%d",&m4);
	printf("enter marks of sub5:");
	scanf("%d",&m5);
	total=m1+m2+m3+m4+m5;
	per= total/5;
	
	printf("your result\n");
	printf("roll no: %d\n",r);
	printf("name:%s\n",name);
	printf("marks of sub1:%d\n",m1);
	printf("marks of sub2:%d\n",m2);
	printf("marks of sub3:%d\n",m3);
	printf("marks of sub4:%d\n",m4);
	printf("marks of sub5:%d\n",m5);
	
	
	if(per<0)
	{
		printf("invalid marks ");
	}
	else if (per<=35)
	{
		printf(" %s got fail with %f percentage.",name,per);
	}
		else if (per<=50)
	{
		printf(" %s got pass with %f percentage.",name,per);
	}
		else if (per<=70)
	{
		printf(" %s got second class with %f percentage.",name,per);
	}
		else if (per<=90)
	{
		printf(" %s got  class with %f percentage.",name,per);
	}
		else if (per<=100)
	{
		printf(" %s got distiction with %f percentage.",name,per);
	}
	else 
	{
		printf("invalid mark");
	}
}
