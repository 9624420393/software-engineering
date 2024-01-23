//Write a program in C to read any Month Number in integer and display the number of days for this month//

#include<stdio.h>
int main()
{
	int mon;
	char month[15];
	
	//input any month//
	
	printf("enter the mon:");
	scanf("%d",&mon);
	
	//switch case use to get months into how many days it has//
	
	switch(mon)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			{
				printf("31 days");
				break;
			}
		case 2:
			{
				printf("28 days or 29 days");
				break;
			}
		case 4:
		case 6:
		case 9:
		case 11:
			{
				printf("30 days");
				break;
			}
		default:
		    {
		    	printf("invalid month");
			}			
	}
	
	return 0;
}
