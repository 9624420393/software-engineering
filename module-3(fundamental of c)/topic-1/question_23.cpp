//WAP to swap two numbers using multiplication and divison method//

#include<stdio.h>
int main()
{
	int a,b;
	
	// inputs//
	
	printf("enter the number of a:");
	scanf("%d",&a);
	
	printf("enter the number of b:");
	scanf("%d",&b);
	
	// multiplicatio and divison//
	a=a*b;
	b=a/b;
	a=a/b;
	
	// outputs//
	printf("a=%d and b=%d",a,b);
	
	return 0;
	
}
