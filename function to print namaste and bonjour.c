#include<stdio.h>
void indian()
{
	printf("namaste\n");
};
void french()
{
	printf("bonjour");
};
int main()
{
	char user;
	printf("enter i for indian or f for french: ");
	scanf("%c",&user);
	if (user == 'i')
	{
		indian();
	}
	if (user == 'f')
	{
		french();
	}
}
