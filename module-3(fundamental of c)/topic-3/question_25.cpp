//. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)//
#include<stdio.h>
int main()
{
	int i,num,sum=0;
	
	//input //
    printf("enter the num:");
    scanf("%d",&num);
    
    //output//
	for(i=1;i<=num;i++)
	{
		sum+=(i*i);
	}
	printf("total:%d",sum);
	
}

