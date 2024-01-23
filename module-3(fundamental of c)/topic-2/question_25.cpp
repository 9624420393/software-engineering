//Accept the input month number and print number of days in that month//

#include<stdio.h>
int main()
{
	int month;
	
	//input//
	printf("enter the month:");
	scanf("%d",&month);
	
	//month days will be printed using switch case//
	
	if(month==1)
	{
		printf("31 days");
	}
	else if(month==2)
	{
		printf("28 or 29 days");
	}
	else if(month==3)
	{
		printf("31 days");
	}
	else if(month==4)
	{
		printf("30 days");
	}
	else if(month==5)
	{
		printf("31 days");
	}
	else if(month==6)
	{
		printf("30 days");
	}
	else if(month==7)
	{
		printf("31 days");
	}
	else if(month==8)
	{
		printf("31 days");
	}
	else if(month==9)
	{
		printf("30 days");
	}
	else if(month==10)
	{
		printf("31 days");
	}
	else if(month==11)
	{
		printf("30 days");
	}
	else if (month==12)
	{
		printf("31 days");
	}

	
	
	return 0;
}

