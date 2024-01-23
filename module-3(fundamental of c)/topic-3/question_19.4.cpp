/// right side star pattern//

#include<stdio.h>
int main()
{
	int i,j;
	
	// outer loop//
	for(i=0;i<=5;i++)
	{
		// inner loop to get star pattern//
		for(j=0;j<=i;j++)
		{
		   printf("* ");
	    } 
		printf("\n");
	}
	// right hand "star pattern" loop//
	for(i=5;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			printf("* ");
	}
		
		printf("\n");
	}
	
	
	
}
