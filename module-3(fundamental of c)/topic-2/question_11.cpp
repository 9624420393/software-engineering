//WAP to find number is even or odd using ternary operator//

#include<stdio.h>
int main()
{
	int n;
	//input//
	printf("enter any integer:");
	scanf("%d",&n);
	
	//ternary operator condition//
	
	(n % 2 == 0)?
	(printf("%d is even",n)):
	(printf("%d is odd",n));
	
	return 0;
	
}
