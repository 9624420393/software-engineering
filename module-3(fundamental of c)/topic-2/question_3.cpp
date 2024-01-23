//WAP to find whether the year is leap or not//


#include<stdio.h>
int main()
{
	int year;
	
	// enter the year//
	
	printf("Enter the required year:");
	scanf("%d",&year);
	
	//check whether the year is leap or not//
	
	if(year%4==0)
	{
		printf("%d is leap year",year);
	}
	else
	{
		printf("%d is not leap year",year);
	}
	
	
	return 0;
}




