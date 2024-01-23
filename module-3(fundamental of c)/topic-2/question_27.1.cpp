//WAP to show
//i. Monday to Sunday using switch case//

#include<stdio.h>
int main()
{
	int num;
	
	//input//
	printf("enter the num:");
	scanf("%d",&num);
	
	
	// output------entering num will provide you the days//
	switch(num)
	{
		case 1:
			{
				printf("monday");
				break;
			}
		case 2:
			{
				printf("tuesday");
				break;
			}
		case 3:
			{
				printf("wednesday");
				break;
			}
		case 4:
			{
				printf("thrusday");
				break;
			}
		case 5:
			{
				printf("friday");
				break;
			}
		case 6:
			{
				printf("saturday");
				break;
			}
		case 7:
			{
				printf("sunday");
				break;
			}
		default:
			{
				break;
			}
		
		
		
	}
	
}
