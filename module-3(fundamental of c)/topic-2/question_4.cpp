//WAP to make simple calculator (operation include Addition, Subtraction,Multiplication, Division, modulo) using conditional statement//

#include<stdio.h>
int main()
{
	int a,b,cal;
	char op;
	
	//enter two inputs//
	
	printf("enter the a:");
	scanf("%d",&a);
	printf("enter the b:");
	scanf("%d",&b);
	
	//enter the operator to perform operation//
	
	printf("enter the operator:");
	scanf("%c",&op);
	
	//condition for choosen operator//
	
	if(op=='+')
	{
		cal=a+b;
		printf("addition:%d",cal);
	}
	else if(op=='-')
	{
		cal=a-b;
		printf("sub:%d",cal);
	}
	else if(op=='*')
	{
		cal=a*b;
		printf("mul:%d",cal);
	}	
	else if(op=='/')
	{
		cal=a/b;
		printf("div:%d",a/b);
	}
	else if(op=='%')
	{
		cal=a%b;
		printf("modulo:%d",cal);
	}	
	else
	{
		printf("invalid input:");
		
	}
	return 0;
	
	
	
}
