//WAP TO CONVERT YEAR-DAYS AND DAY-YEAR//

#include<stdio.h>
int main()
{
	int year,day;
	
	//input//
	printf("enter the year:");
	scanf("%d",&year);
	
	// logic to find days//
	day=year*365;
	
	printf("day:%d\n",day);
	
	printf("enter the day:");
	scanf("%d",&day);
	
	//logic to find year//
	year=day/365;

	printf("year:%d",year);
}
