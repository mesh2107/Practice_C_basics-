#include<stdio.h>
struct student{
	int roll;
};
int main()
{
	int i;
	struct student s[5];
	for(i=0;i<5;i++)
	{
		printf("enter roll no: ");
		scanf("%d",&s[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("roll no is %d\n",s[i].roll);
	}
}
