//Write a C program that takes the marks of a student as input and displays the corresponding grade based on the following conditions:
//Marks > 90: Grade A
//Marks > 75 and <= 90: Grade B
//Marks > 50 and <= 75: Grade C
//Marks <= 50: Grade D
//Use if-else or switch statements for the decision-making process.

#include<stdio.h>
int main()
{
	int marks;
	
	printf("Enter the marks:");
	scanf("%d",&marks);
	
	if(marks> 90)
	{
		printf("A grade");
	}
	else if(marks>75 && marks<=90)
	{
		printf("B grade");
	}
	else if(marks>50 && marks<=75 )
	{
		printf("C grade");
	}
	else
	{
		printf("D grade");
	}
}
