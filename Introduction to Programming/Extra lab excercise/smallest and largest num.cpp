//Write a C program that takes three numbers from the user and determines:
// The largest number.
//The smallest number.
// Challenge: Solve the problem using both if-else and switch-case statements.

#include<stdio.h>s
int main()
{
	int a,b,c;
	
	printf("Enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>= b && a>=c)
	{
		printf("A is greater\n");
	}
	else if(b >= c && b>= a)
	{
		printf("B is greater\n");
	}
	else
	{
		printf("C is greater\n");
	}
	
	if(a<=b && a<= c)
	{
		printf("A is smaller\n");
		
	}
	else if(b<=c && b<=a)
	{
		printf("B is smaller\n");
	}
	else
	{
		printf("C is smaller\n");
	}
}
