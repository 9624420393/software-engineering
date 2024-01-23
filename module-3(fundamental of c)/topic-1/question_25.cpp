//WAP to Accept 5 expense from user and find average of expense//

#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;   // inputs of all five expenses//
	float average=0;
	
	printf("enter the a:");
	scanf("%d",&a);
	
	printf("enter the b:");
	scanf("%d",&b);
	
	printf("enter the c:");
	scanf("%d",&c);
	
	printf("enter the d:");
	scanf("%d",&d);
	
	printf("enter the e:");
	scanf("%d",&e);
	
	printf("enter the f:");
	scanf("%d",&f);
	
	//equation to find average//
	
	average=a+b+c+d+e+f/5;
	printf("average of expenses:%f\n",average);  // output//
	
	
	
	
	
}
