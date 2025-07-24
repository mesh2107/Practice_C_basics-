#include<stdio.h>
#include<string.h>
struct student{
	char name1[10];
};
int main()
{
	int i;
	char name2[10];
	struct student n[5];
	for(i=0;i<5;i++)
	{
		printf("enter name: ");
		scanf("%s",&name2);
		strcpy(n[i].name1,name2);
	}
	for(i=0;i<5;i++)
	{
		printf("name is: %s\n",n[i].name1 );
	}
	
}
