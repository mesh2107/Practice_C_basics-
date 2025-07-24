#include<string.h>
int main()
{
	char a[10]="meshwa";
	char n[10];
	printf("enter name:");
	scanf("%s",&n);
	while(strcmp(a,n)!=0)
	{
		printf("re enter name: ");
		scanf("%s",&n);
	}
	printf("thank you");
}
