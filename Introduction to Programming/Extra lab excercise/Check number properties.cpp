//Write a C program that takes an integer from the user and checks the following using different operators:
// Whether the number is even or odd.
//Whether the number is positive, negative, or zero.
//Whether the number is a multiple of both 3 and 5.

#include<stdio.h>
int main()
{
	int num;
	printf("enter any number:");
	scanf("%d",&num);
	
	if(num % 2 == 0)
	{
		printf("%d is even\n",num);
	}
	else
	{
		printf("%d is odd\n",num);
	}
	
	if(num>0)
	{
		printf("%d is positive\n",num);
	}
	else if(num == 0)
	{
		printf("%d is zero\n",num);
		
	}
	else 
	{
		printf("%d is negative\n",num);
	}
	
	if(num % 3 ==0 && num % 5==0)
	{
		printf("%d is divisible by both 3 & 5");
		
	}
	else
	{
		printf("Not divisible");
	}
	
	
}
