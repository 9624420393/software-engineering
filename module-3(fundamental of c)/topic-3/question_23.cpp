//C Program to Reverse a Number Using FOR Loop Series Program//
#include<stdio.h>
int main()
{
	int i,number,remainder,reverse;
	
	// input the number to reverse//
	printf("enter the num:");
	scanf("%d",&number);
	
	//loop to get output///
	
	for(i=number;i>0;)
	{
		
		remainder=number%10;
		
		reverse=reverse*10+remainder;
		number=number/10;
	}
	printf("the reverse number is %d",reverse);
	
}
