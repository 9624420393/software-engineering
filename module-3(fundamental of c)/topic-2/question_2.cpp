//WAP to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0//

#include<stdio.h>
int main()
{
	int m,n=1;
	
	printf("enter the value of m:");
	scanf("%d",&m);
	
	if(m>n)
	{
		printf("1");  // when m i greater than 0//
	}
	else if(m<n)
	{
		printf("-1");  // when m is less than 0//
	}
	else
	{
		printf("0");  // when m=0//
	}
	
	
}

