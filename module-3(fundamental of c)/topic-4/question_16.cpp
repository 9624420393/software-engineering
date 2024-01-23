//Accept 5 numbers from user and perform sum of array//
#include<stdio.h>
int main()
{
	int arr[5];
	int i;
	int sum=0;
	
	// enter five numbers to perform summation of array//
	
	for(i=0;i<5;i++)
    {
		printf("enter a num:");
		scanf("%d",&arr[i]);
	}
	// addition of array elements//
	
	for(i=0;i<5;i++)
	{
		sum+=arr[i];
	}
	
	// output of summation//
	printf("summation:%d",sum);
	return 0;	
}
