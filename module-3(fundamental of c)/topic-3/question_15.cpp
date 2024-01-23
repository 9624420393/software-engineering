//.Calculate sum of 10 numbers using of while loop//

#include<stdio.h>
int main()
{
	int i=1,sum=0;

     // loop will perform summation of 1 to 10 numbers//
	while(i<=10)
	{
	   sum=sum+i;
	   i++;
	}
	printf("summation:%d",sum);	
}
