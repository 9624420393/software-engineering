//WAP to perform 1-0 operation//

#include<stdio.h>
int main()
{
	int i,x;
	// outer loop//
	for(x=1;x<=5;x++)
	{
		//inner loop//
		for(i=1;i<=x;i++)
		{
			// "1" will be printed for this particular condition//
			if(i%2!=0)
			{
				printf("1");
			}
			else    // "0"will be displayed//
			{
				printf("0");
			}
		}
		printf("\n");
	}
	
	
	
	return 0;
}
