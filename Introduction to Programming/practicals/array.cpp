//Write a C program that stores 5 integers in a one-dimensional array and prints them.
// Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements.

#include<stdio.h>

int main()
{
	int a1[2][2],a2[2][2],res[2][2];
	int i,j;
	
	printf("\n=========input for Matrrix  : 1==========\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter element : ");
			scanf("%d",&a1[i][j]);
		}
	}
	
	
	printf("\n=========input for Matrrix  : 2==========\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter element : ");
			scanf("%d",&a2[i][j]);
		}
	}
	
	
	printf("\n=======Matrix-1=========\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",a1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n=======Matrix-2=========\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",a2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n=======Matrix-Result=========\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",a1[i][j]*a2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
