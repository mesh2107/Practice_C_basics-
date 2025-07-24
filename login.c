#include<stdio.h>
#include<string.h>
int main()
{
	int r;
	char n[10],u[10],p[10];
	printf("enter your roll no: ");
	scanf("%d",&r);
	printf("enter name: ");
	scanf("%s",&n);
	printf("enter password: ");
	scanf("%s",&p);
	printf("enter username: ");
	scanf("%s",&u);
	strrev(n);
	while(strcmp(n,u)!=0)
	{
		printf("re enter username: ");
		scanf("%s",&u);
	}
	printf("LOGIN SUCCESSFUL");
}
