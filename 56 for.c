#include<stdio.h>
int main()
{
	//sum of even nos in for loop 
	int a,s=0;
	for(a=1;a<=20;a++)
	{
		if(a%2==0)
		{
			s+=a;
		}
	}
	printf("%d",s);
	
}
