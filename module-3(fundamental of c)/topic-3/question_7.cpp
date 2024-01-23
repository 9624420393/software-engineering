//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 8274//

#include<stdio.h>
int main()
{
	int number,remainder,reverse;
	
	// enter the number to be reversed//
	printf("enter the num:");
	scanf("%d",&number);
	
	// condition for reverse operation//
	
	while(number!=0)
	{
		remainder=number%10;
		reverse=reverse*10+remainder;
		number=number/10;
	}
	printf("the reverse number is %d",reverse);
	
}
