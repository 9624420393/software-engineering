// "abcd" pattern//
#include<stdio.h>
int main()
{
	int i,x;
	char y='A';
	// outer loop//
	for(i=1;i<=5;i++)
	{
		// inner loop//
	  for(x=1;x<=i;x++)
	  {
	  	// letters will be displayed as per condition applied//
		printf("%c",'A'+x-1);
      }
      printf("\n");
	}
	

	 
}
