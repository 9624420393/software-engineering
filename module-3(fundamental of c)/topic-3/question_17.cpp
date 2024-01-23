//.Calculate 5 numbers from user and calculate number of even and odd using of while loop//
#include<stdio.h>
int main()
{
	int i,n,even,odd;
	
	while(i<=5)    // input numbers//
	
	{
		printf("enter the number:");
       	scanf("%d",&n);
		if(i%2==0)           // condition to get even//
		{
			printf("even");
			even++;
		}
		
	    else                // condition to get odd//
		{
			printf("odd");
			odd++;
		}
		
	}
	
	
}
