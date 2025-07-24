#include<stdio.h>
void factorial()//NANR
{
	int a,fact=1;
	printf("enter number A:");
	scanf("%d",&a);
	while(a>=1)
	{
		fact*=a;
		a--;
	}
	printf("%d\n",fact);
}


int factorial1()//NAWR
{
	int b,fact1=1;
	printf("enter B:");
	scanf("%d",&b);
	while(b>=1)
	{
		fact1*=b;
		b--;
	}
	return(fact1);
}


void factorial2(int c,int fact2)//WANR
{
	while(c>=1)
	{
		fact2*=c;
		c--;
	}
	printf("%d\n",fact2);
}

int factorial3(int d,int fact3)//WAWR
{
	while(d>=1)
	{
		fact3*=d;
		d--;
	}
	return(fact3);
}


int main()
{
	factorial();//NANR
	
	printf("%d\n",factorial1()); //NAWR
	
	int c;//WANR
	int fact2=1;
	printf("enter for C:");
	scanf("%d",&c);
	factorial2(c,fact2);
	
	int d,fact3=1;//WAWR
	printf("enter D:");
	scanf("%d",&d);
	printf("%d\n",factorial3(d,fact3));
	
	
	
	
	
}
