//Write a C program that acts as a simple calculator. The program should take two numbers and an operator as input from the user and perform the respective operation 
//(addition,subtraction, multiplication, division, or modulus) using operators.

#include<stdio.h>
#include<math.h>

int main()
{
	char choice;
	char repeat;
	int a,b;
	
	
	printf("Enter any operator(+,-,*,/,%):");
	scanf("%c",&choice);
	
	printf("Enter any two numbers:");
	scanf("%d%d",&a,&b);
	
	
	switch(choice)
	{
		case '+':
			
				printf("%d + %d=%d",a,b,a+b);
				break;
			
		case '-':
			
				printf("%d - %d=%d",a,b,a-b);
				break;
			
		case '*':
			
				printf("%d * %d=%d",a,b,a*b);
				break;
			
		case '/':
			
				printf("%d / %d= %d",a,b,a/b);
				break;
			
		case '%':
			
				printf("%d % %d=%d",a,b,a%b);
				break;
		
		default:
			
				printf("invalid input");
				break;
			
	}
	      
	return 0;   
}
