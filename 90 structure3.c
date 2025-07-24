#include<stdio.h>
#include<string.h>
struct student{
	char name[10];
};
int main()
{
	char n[10]="meshwa";
	struct student n1;
	  strcpy(n1.name,n);
	printf("name is %s",n1.name);  

}
