//WAP Accept monthly salary from the user and deduct 10% insurance premium,10% loan installment find out of remaining salary.//
//s-salary,p-premium,l-loan,remain-remaining salary//
#include<stdio.h>
int main()
{
	int s,p,l,remain;
	
	//input//
	printf("enter the value of s:");
	scanf("%d",&s);
	
	//10% deducted preminum output//
	printf("p:%d\n",p=s*10/100);
	
	//10% loan installment output// 
	printf("l:%d\n",l=s*10/100);
	
	//remaining salary output//
	remain= s-p-l;
	
	printf("%d",remain);
	
	
	return 0;
}
