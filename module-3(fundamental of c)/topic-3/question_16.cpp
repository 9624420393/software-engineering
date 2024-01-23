//.Calculate the Sum of Natural Numbers Using the While Loop//

#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	
	// enter the natural number for summation//
	printf("enter the num:\n");
	scanf("%d",&n); 
	
	while(i<=n)
	{
	    sum += i;
		++i;
	}
	// output//
	printf("summation of natural num=%d",sum);
	return 0;
}
