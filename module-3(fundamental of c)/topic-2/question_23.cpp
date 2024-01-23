//WAP to input the week number and print week day.//

#include<stdio.h>
int main()
{
	int num;
	//input//
	printf("enter the num:");
	scanf("%d",&num);
	
	//output --------------number will help to get the day of week//
	
	if(num==1)
	{
		printf("monday");
	}
	else if(num==2)
	{
		printf("tuesday");
	}
	else if(num==3)
	{
		printf("wednesday");
	}
	else if(num==4)
	{
		printf("thrusday");
	}
	else if(num==5)
	{
		printf("friday");
	}
	else if(num==6)
	{
		printf("saturday");
	}
	else
	{
		printf("sunday");
	}
	
	
	return 0;
}

