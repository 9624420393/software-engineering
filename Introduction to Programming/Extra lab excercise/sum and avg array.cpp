//Write a C program that takes N numbers from the user and stores them in an array. 
//The program should then calculate and display the sum of all array elements.
//Challenge: Modify the program to also find the average of the numbers.
#include<stdio.h>
int main()
{
	int arr[5];
	int i;
	int sum=0;
	
	for(i=0;i<5;i++)	
	{
		printf("enter a num:");
		scanf("%d",&arr[i]);	
	}
	
	for(i=0;i<5;i++)
	{
		sum+=arr[i];
	}
	
	printf("summation:%d",sum);
	
	int average=0;
	 average = sum /5;
	
	printf("Average=%f",average);
	return 0;	
}
