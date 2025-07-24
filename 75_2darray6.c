#include<stdio.h>
#include<string.h>
int main()
{
	char a[10]="meshwa";
	char b[10];
	printf("%d\n",strlen(a));
	printf("%s\n",strrev(a));
	strcpy(b,a);
	printf("%s\n",b);
	strcat(a,b);
	printf("%s\n",a);
	printf("%s\n",strupr(a));
	printf("%s\n",strlwr(a));
}
