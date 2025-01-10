//Write a C program that generates Pascal¡¦s Triangle up to N rows using loops.
// Challenge: Implement the same program using a recursive function.

#include<stdio.h>
int main()
{
	int num,i,j,k,c=1;
	
	printf("enter number of rows:");
	scanf("%d",& num);
	
	for(i=0;i<num;i++)
	{
		for(k=1;k<=num-i;k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			if(j==0 || i==0)
			{ 
			    c==1;
			}
			else
			{
				 c=c *(i - j + 1)/j;
				 printf("%4d",c);
			}
		}
		printf("\n");
	}	
}
