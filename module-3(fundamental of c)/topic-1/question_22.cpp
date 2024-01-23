//WAP to find compound interest//

// a=amount,p=principal balance,r=interest rate,n=number of times \\
   
   
#include<stdio.h>
int main()
{
	// inputs taken from user to perform operation//
	
	int A,p,r,n=100,CI,t;
	
	printf("enter the value of p:");
	scanf("%d",&p);
	
	printf("enter the value of r:");
	scanf("%d",&r);
	
	printf("enter the value of t:");
	scanf("%d",&t);
	
	//output//
	
	A= p*(1+r/n)^t;
	
	printf("CI:%d",A);	
	
	
	return 0;
}
