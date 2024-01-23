//Accept 5 numbers from user and find those numbers factorials//

#include<stdio.h>
int main()
{
	int i=1,factorial=1,num,x=1;
	
	// factorial of total five numbers//
	
	for(i=1;i<=5;i++)
	{
	    printf("enter the num:");
		scanf("%d",&num);
		factorial=factorial*i;
	
	}
	
	// output of each factorial nuber given//
	for(x=1;x<=i;x++)
	{
	     printf("factorial:%d\n",factorial);
    }     
	
	
	
	return 0;
}
