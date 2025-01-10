//Write a C program that accepts two integers from the user and performs arithmetic, relational, and logical operations on them. 
//Display the results.

#include<stdio.h>
int main()
{
	int a,b,c;
	int x,y,z,result;
	
	printf("enter the integer a:\n");
	scanf("%d",&a);
	
	printf("enter the integer b:\n");
	scanf("%d",&b);
	
	c=a+b;
	
	printf("Arithmetic:%d\n",c);
	
	printf("INCREMENT = %d \n", ++a);
	
	c+=a;
	
	printf("Assignment:%d \n",c);
	
	
	printf("%d > %d is %d \n", a, b, a > b);
	
	result = (x == y) && (z > y);
    printf("(x == y) && (z > y) is %d \n", result);
	
}
