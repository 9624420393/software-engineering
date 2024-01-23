#include<stdio.h>
int main()
{
	int x,fact=1,n;
	
	// input to find the factorial of any number//
	printf("enter the number:");
	scanf("%d",&n);
	
	// logic to get factorial using equation//
	for(x=1;x<=n;x++)
	{
		fact=fact*n;
		
	}
	// output//
	printf("factorial:%d",fact);
}
