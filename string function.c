#include<string.h>
int main()
{
	char a[10],c[10];
	printf("enter for A: ");
	scanf("%s",&a);
	    strcpy(c,a);
		strrev(a);
	printf("reverse of %s is %s",c,a);
}
