#include<stdio.h>
int main()
{
		int a,b;
	printf("enter any 1st value ");
	scanf("%d",&a);
	printf("enter any 2nd value");
	scanf("%d",&b);
	if(a<b)
	{
		while(a<=b)
		{
			if(a%2==0)
			{
              printf("%d\n",a);
             }
              
			a++;
		}
		
	}
	else
	{
		while(a>=b)
		{
			if(a%2==0)
			{
			printf("%d\n",a);
		}
			a--;
		}
	}


}
