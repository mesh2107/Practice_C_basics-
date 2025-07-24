#include<stdio.h>
int main()
{
	//array in loop 
	int i,s=0,a[]={11,12,13,14,15,16,17,18,19,20};
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
		s+=a[i];
	}
	printf("%d\n",s);
}
