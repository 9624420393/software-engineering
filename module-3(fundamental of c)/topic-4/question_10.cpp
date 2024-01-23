//WAP to perform Palindrome number using for loop and function//
#include<stdio.h>

int palindrome(int num)
{
	int num1=num;
	int revnum=0;
	
	for(;num>0;num/=10)
	{
		int digit=num%10;
		revnum=revnum*10+digit;
		
		return (num1==revnum);
	}
}
int main()
{
	int number;
	printf("enter any number:");
	scanf("%d",&number);
	
	if(palindrome(number))
	{
		printf("%d is not a palindrome\n",number);
	}
	else
	{
		printf("%d is  a palindrome\n",number);
	}
	return 0;
}
