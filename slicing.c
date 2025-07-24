#include<stdio.h>
#include<string.h>
int main()
{
	char fname[100],fn[100],pass[100],mobile[12],mo[12];
	int i,j;
	printf("enter first name: ");
	scanf("%s",&fname);
	
	printf("enter mobile no: ");
	scanf("%s",&mobile);
	
	for (i=0;i<2;i++)
	{
		fn[i]=fname[i];
	}
	i=0;
	for (j=6;j<=9;j++)
	{
		mo[i]=mobile[j];
		i++;
		
	}
	
	strcat(fn,mo);
	
	printf("\nenter password: ");
	scanf("%s",&pass);
	if (strcmp(fn,pass)!=0)
	{
		printf("incorrect");
	}
	else
	{
		printf("login");
	}
	
}
