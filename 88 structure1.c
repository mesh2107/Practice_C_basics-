#include<stdio.h>
struct student
{
	int roll;
};
int main()
{
	struct student s1;
	s1.roll=9;
	printf("roll no is %d",s1 .roll);
}
