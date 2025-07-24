#include<stdio.h>
int main()
{
	int t=1,p=321,o;
	printf("enter OTP: ");
	scanf("%d",&o);
	while(o!=p)
	{
		printf("re enter OTP: ");
		scanf("%d",&o);
		if(t==3)
		{
			printf("account blocked");
			break;
		}
		t++;
	}
	if(o==p)
	{
		printf("login successful");
	}
}
