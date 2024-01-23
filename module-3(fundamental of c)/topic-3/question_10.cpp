//Write a program you have to make a summation of first and last Digit//
#include<stdio.h>
int main()
{
	int num,sum=0,first,last;
	
	// input of number//
	printf("enter the num:");
	scanf("%d",&num);
	
	last=num%10;
	
	first=num;
	
	// condition to get addition of first and last digit//
	
	while(num>=10)
	{
		num=num/10;
	}
	
	first=num;
	
	sum=first+last;
	
	printf("summation:%d",sum);
	
	return 0;
}
