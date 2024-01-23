//WAP to find odd and even numbers//
//also find how many numbers are odd or even//
//summation of the given input//

#include<stdio.h>
int main()
{
	int i,num,total,te,to;
	
	//inputs using for loop//
	for(i=0;i<10;i++)
	{
		// enter all the inputs//
		
		printf("enter num:");
		scanf("%d",&num);
		
		//condition to be satisfied//
		if(num%2==0)
		{
			te++;   // if yes then  even total will be incremented//
		}
		else
		{
			to++;   //if no then odd total will be incremented//
		}
		
		total+=num;	
	}
	// outputs//
	//summation of all inputs//
	printf("\n total=%d",total);
	
	//output of even number//
	
	printf("\nte=%d",te);
	
	//output of odd numbers//
	printf("\n to=%d",to);
		
	return 0;
}
