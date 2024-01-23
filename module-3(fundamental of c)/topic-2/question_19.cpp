//Write a program in C to calculate and print the electricity bill of a given customer.The customer ID, name, and unit consumed by the user should
//be captured from the keyboard to display the total amount to be paid to the customer//

#include<stdio.h>
int main()
{
	int customerid,unit,electricitybill;
	float charge;
	char consumer[20];
	
	//input //
	printf("enter the customer id:");
	scanf("%d",&customerid);
	
	printf("enter the consumer name:");
	scanf("%s",&consumer);
	
	printf("enter the consumed unit:");
	scanf("%d",&unit);
	
	//condition to get the electricity according to the provided criteria//
	
	if(unit<350)
	{
		charge=1.20;
	}
	else if(unit>350 && unit<600)
	{
		charge=1.50;
	}
	else if(unit>600 && unit<800)
	{
		charge=1.80;
	 }
	else if(unit>=800)
	{
		charge=2.00;
	}
	else
	{
		printf("default");
	}
	
	electricitybill= unit*charge;
	
	printf("===============electricity bill=================\n");
	printf("\n customerid:%d",customerid);
	printf("\n consumername:%s",consumer);
	printf("\n unit:%d",unit);
	printf("\n electricitybill:%d",electricitybill);
	
	return 0;
	
	
}
