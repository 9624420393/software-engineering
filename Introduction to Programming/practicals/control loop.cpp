//Write a C program that uses the break statement to stop printing numbers when it reaches 5.
// Modify the program to skip printing the number 3 using the continue statement.

#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		if(i == 5)
		{
			break;
		 } 
		 else{
		 	printf("%d\n",i);
		 }
	}
	
	printf("continue:\n");
	for(j=1;j<=5;j++)
	{
		if(j == 3)
		{
			continue;
			
		}
	printf("%d\n",j);	
	}
}
