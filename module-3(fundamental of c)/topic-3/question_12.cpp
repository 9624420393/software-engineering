//Program of Armstrong Number in C Using For Loop & While Loop//
#include<stdio.h>
int main()
{
	int number,sum,r,temp;
	
	//input //
	printf("enter a number:");
	scanf("%d",&number);
	temp=number;
	
	//condition to check armstrong number//
	while(number>0)
	{
		r=number%10;
		sum=sum+(r*r*r);
		number=number/10;
	}
	if(temp==sum)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not an armstrong number");
	}
	return 0;
}

