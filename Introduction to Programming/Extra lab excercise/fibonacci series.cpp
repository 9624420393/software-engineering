//Write a C program that generates the Fibonacci sequence up to N terms using a recursive function.
//Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative
//and recursive methods. Compare their efficiency.

#include<stdio.h>

int fibonacci(int num)
{
	if(num == 0)
	{
		return 0;
	}
	else if(num ==1)
	{
		return 1;
	}
	else
	{
		return fibonacci(num -1)+ fibonacci(num -2);
	}
}

int main()
{
	int num;
	printf("Enter the numbers:");
	scanf("%d",&num);
	
	for(int i=0;i<num;i++)
	{
		printf("%d",fibonacci(i));
	}
	return 0;
}
