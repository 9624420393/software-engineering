//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array//
#include<stdio.h>

int main()
{
	int a1[2][2],a2[2][2],res[2][2];
	int i,j;
	
	printf("\n=========input for Matrix  : 1==========\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter element : ");
			scanf("%d",&a1[i][j]);
		}
	}
	
	
	printf("\n=========input for Matrix  : 2==========\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter element : ");
			scanf("%d",&a2[i][j]);
		}
	}
	
	//display of matrix-1//
	printf("\n=======Matrix-1=========\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",a1[i][j]);
		}
		printf("\n");
	}
	
	//display of matrix-2//
	printf("\n=======Matrix-2=========\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",a2[i][j]);
		}
		printf("\n");
	}
	
	// output//
	printf("\n=======Matrix-Result=========\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d",a1[i][j]+a2[i][j]);   // addition//
			printf("%d\n",a1[i][j]-a2[i][j]);  //subtraction//
			printf("%d\n",a1[i][j]*a2[i][j]);  //multiplication//
		}
		printf("\n");
	}
	
	return 0;
}

