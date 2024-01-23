// star pattern -------////
#include<stdio.h>
int main()
{
	int i,j,k;
	
	// outer loop//
	for(i=0;i<=5;i++)
	{
		// inner loop//
		// loop to create space//
		for(j=0;j<=i;j++)
		{
		   printf(" ");
	    } 
	    // loop to have star pattern//
		for(k=0;k<=i;k++)
		{
			printf("* ");
	    }   
	    printf("\n");
	}
	
	
}
