#include<stdio.h>
int main()
{
      int a=1,b=1;
      
	  while(a<=100)
      {
      	while(b<=100)
      	{
      		
		  
	      	if(b%a==0)
	      	{
	      		printf("%d\n",b);
	      		
			  }
			  
		}
		b++;
      	a++;
	  }
}
