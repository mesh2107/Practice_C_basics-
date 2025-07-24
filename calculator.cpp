#include<stdio.h>
#include<conio.h>
int main()
{
    float num,num2,result;
	char opr;
	
	printf("enter no: ");
	scanf("%f",&num);
	printf("enter operator: ");
	scanf("%c",&opr);
	printf("enter 2nd no: ");
	scanf("%f",&num2);
	switch(opr)
	{
		case'+':
		result=num+num2;
		printf("%f",result);
		break;
		case'-':
		result=num-num2;
		printf("%f",result);
		break;
		case'*':
		result=num*num2;
		printf("%f",result);
		break;
		case'/':
		result=num/num2;
		printf("%f",result);
		break;
		default:
		printf("inavlid operator");
		break;		
	}
	
}
