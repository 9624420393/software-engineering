// number pattern from 1-15//
#include<stdio.h>
int main()
{
	int i,x,y=1;
	
	// loop to get integer value from 1 to 15//
	//outer loop//
	for(i=1;i<=5;i++)
	{
		//inner loop//
		for(x=1;x<=i;x++)
		{
			// num will be incremented//
			printf("%d",y++);
		}
		printf("\n");
	}
}
