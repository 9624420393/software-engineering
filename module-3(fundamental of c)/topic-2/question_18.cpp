//WAP to calculate profit and loss on a transaction//

#include<stdio.h>
int main()
{
	int sp,cp,transactionstatus;
	
	//input of selling price and cost price//
	printf("enter the sp:");
	scanf("%d",&sp);
	printf("enter the cp:");
	scanf("%d",&cp);
	
	//condition to get the transaction status whether  profit or loss//
	
	if(sp>cp)
	{
		transactionstatus=sp-cp;
		printf("profitable transaction");
	}
	else if(cp>sp)
	{
		transactionstatus=cp-sp;
		printf("Non profitable transaction");
	}
	else
	{
		printf("default");
	}
	
	
	
	return 0;
}
