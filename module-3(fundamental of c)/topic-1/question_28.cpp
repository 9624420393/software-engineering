//WAP TO CONVERT YEARS INTO MONTHS AND DAYS//

#include<stdio.h>
int main()
{
	int year,month,day;
	
	//input of year//
	printf("enter the year:");
	scanf("%d",&year);
	
	// output//
	month=12*year;
	day=year*365;
	//month will be printed//
	printf("month:%d\n",month);
	//days will be printed//
	printf("day:%d",day);
}
