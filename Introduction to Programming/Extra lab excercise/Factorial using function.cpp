//Write a C program that calculates the factorial of a given number using a function.
//Challenge: Implement both an iterative and a recursive version of the factorial function and
//compare their performance for large numbers.
#include<stdio.h>
int fact(int x)
{
	if(x<=0)
	{
		return 1;
	}
	else
	{
		return x*fact(x-1);
	}
}
int main()
{
	int num=5;
	printf("enter a num:");
	scanf("%d",& num);
	
	printf("factorial:%d",fact(num));
	
	return 0;
}
