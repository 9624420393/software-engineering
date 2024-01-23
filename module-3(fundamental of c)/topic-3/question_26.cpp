//(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)//
#include<stdio.h>
int main()
{
	int i,n,j,sum1=0,sum=0;
	
	//input//
	printf("enter the num:");
	scanf("%d",&n);
	//loop for num input//
	for(i=1;i<=n;i++)
	{
		//loop for addition//
	   for(j=1;j<=i;j++)
	   {
	   	  sum1=sum+j;
	   }	
	   
	   sum=sum1+j;
	}
	printf("the series[%d]=[%d]",n,sum);
}
