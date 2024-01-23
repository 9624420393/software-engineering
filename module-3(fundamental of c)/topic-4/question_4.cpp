//WAP to find factorial using recursion//
#include<stdio.h>
int fact(int x)
{
	if(x<=0)
	{
		return 1;
	}
	else
	{
		return x*fact(x-1);
	}
}

int main()
{
	int num;
	printf("enter a num:");
	scanf("%d",& num);
	
	printf("factorial:%d",fact(num));
	
	return 0;
	
	
}
