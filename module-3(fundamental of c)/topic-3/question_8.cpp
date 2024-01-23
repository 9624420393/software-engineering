//Write a program to find out the max from given number //
#include<stdio.h>
int main()
{
	int i,num,x,max=0;
	
	//input of number to find maximum number//
	printf("enter the num:");
	scanf("%d",&num);
	
	// for loop to find the max number and it is being compared to each and every number//
	
	for(i=0;i<=num;i++)
	{
		printf("Enter x-%d:",i);
		scanf("%d",&x);

		if(max<x)
			max=x;
	}
	
	// output //
	
	printf("\n max = %d",max);
	
	
	return 0;
}

