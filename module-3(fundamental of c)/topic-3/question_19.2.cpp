//WAP to perform ABC opertaion 

#include<stdio.h>
int main()
{
	int i,x;
	// character is used to get ABC pattern//
	char y='A';
	
	//outer loop//
	for(i=0;i<=4;i++)
	{
		//inner loop//
		for(x=0;x<=i;x++)
		{
			// character will be incremented //
			printf("%c",y++);
		}
		printf("\n");
		
	}
	return 0;
}
