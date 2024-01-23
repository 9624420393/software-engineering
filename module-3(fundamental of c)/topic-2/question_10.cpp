//WAP to check whether a number is negative, positive or zero//

#include<stdio.h>
int main()
{
	int a;
	
	//enter the input//
	
	printf("enter the a:");
	scanf("%d",&a);
	
	//condition after entering the input//
	
	if(a==0)
	{
		printf("zero");
	}
	else if(a<0)
	{
		printf("negative");
	}
	else
	{
		printf("positive");
	}
	
	
	
	return 0;
}

