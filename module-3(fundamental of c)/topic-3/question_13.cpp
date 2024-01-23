//calculate the Factorial of a Given Number using while loop//
#include<stdio.h>
int main()
{
	int i=1,factorial=1,num;
	
	// input the number to find factorial//
	
	printf("enter the num:");
	scanf("%d",&num);
	
	// condition //
	
	while(i<=num)
	{
		factorial=factorial*i;
		i++;
	}
	
	// output//
	printf("factorial of %d is %d",num,factorial);
	
	
}
