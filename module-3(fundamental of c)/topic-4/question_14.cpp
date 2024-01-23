//Perform 2D matrix array//
#include<stdio.h>

int main()
{
	// 2d matrix illustrates about the number of row and column//
	int a[2][2];
	int i,j;
	
	//loop for two row and two column//
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter element : ");
			scanf("%d",&a[i][j]);
		}
	}
	
	// display of 2d array  where elements are converted into array matrix//
	printf("\n=======2-D Array=========\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Element a[%d][%d]: %d\n",i,j,a[i][j]);
		}
	}
	
	return 0;
}
