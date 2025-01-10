//Write a C program that takes an integer from the user and calculates the sum of its digits using a while loop.
// Challenge: Extend the program to reverse the digits of the number.

#include<stdio.h>
int main()
{
  int num,rem,sum=0;
  int rev=0;
  
  printf("enter any num:");
  scanf("%d",&num);	
	
	while(num>0)
	{
		rem = num%10;
		sum= sum + rem;
		num = num /10;
	}
	
	printf("summation:%d\n",sum);
	
	int n;
	printf("enter any number");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem= n % 10;
		rev = rev * 10 + rem ;
		n /= 10;
		
	}
	
	printf("reverse num:%d",rev );
	return 0;
}
