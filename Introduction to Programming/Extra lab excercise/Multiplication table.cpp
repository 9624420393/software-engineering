//Write a C program that takes an integer input from the user and prints its multiplication table using a for loop.
//Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).

#include<Stdio.h>
int main()
{
	int  num;
	
	printf("enter any number");
	scanf("%d",&num);
	
	for(int i=1;i<=10;i++)
	{
		
		
		printf("%d* %d = %d\n ",num ,i,num *i);
	}
	int range;
	
	printf("enter the range\n");
	scanf("%d",&range);
	for(int j=1;j<=range;j++)
	{
		printf("%d * %d = %d\n",range,j,range *j);
	}
	
	return 0;
}
