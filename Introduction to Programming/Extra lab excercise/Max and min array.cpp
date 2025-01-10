//Write a C program that accepts 10 integers from the user and stores them in an array.
// The program should then find and print the maximum and minimum values in the array.
//Challenge: Extend the program to sort the array in ascending order.

#include<Stdio.h>
int main()
{
	int arr[50];
	int max,min,i,n;
	
	for(i=0;i<10;i++)
	{
		printf("elements -%d",i);
		scanf("%d",&arr[i]);
	}
	
	max= arr[0];
	min= arr[0];
	for(i=1;i<10;i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
		else
		{
			min = arr[i];
		}
	}
	
	printf("Max number:%d\n",max);
	printf("Min number:%d\n",min);
	int temp=0;
	for(i=0;i<=10;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	printf("\nElements of Ascending order:\n");
	
	for(i=0;i<10;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n\n");
}
