//Write a C program that calculates the factorial of a number using a function. 
//Include function declaration,definition, and call.
#include<stdio.h>
#include<math.h>
int main()
{
    
    printf("Enter a Number to Find Factorial: ");
    printf("\nFactorial of a Given Number is: %d ",fact());
    return 0;
}
int fact()
{
    int i;
	int fact=1,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}

