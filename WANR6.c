#include<iostream>
using namespace std;
class hello
{
	public: 
	void numb(int a,int b)
	{
		if (a<b)
		{
			while(a<=b)
			{
				cout<<a<<endl;
				a++;
			}
		}
		else
		{
			while(a>=b)
			{
				count<<a<<endl;
				a--;
			}
		}
	}
}
int main()
{
	hello obj;
	
	int a,b;
	printf("enter a: ");
	scanf("%d",&a);
	printf("enter b: ");
	scanf("%d",&b);
	
	obj.numb(a,b);
}
