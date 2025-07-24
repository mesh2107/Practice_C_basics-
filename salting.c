#include<stdio.h>
#include<string.h>
int main()
{
	char pass[100],salt[100]="123",newpass[100];
	printf("enter password: ");
	scanf("%s",&pass);
	strcat(pass,salt);
	strcpy(newpass,pass);
	printf("new password: %s",newpass);
}
