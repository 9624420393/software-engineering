//write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill

#include<stdio.h>
int main()
{
	int unit;
	float amount,totalamount,surcharge;
	
	//input//
	
	printf("enter the units:");
	scanf("%d",&unit);
	
	//according to the units amount will be charged//
	
	if(unit<=50)
	{
		amount=unit*0.50;
	}
	else if(unit<=150)
	{
		amount=unit*0.75;
	}
	else if(unit<=250)
	{
		amount=unit*1.20;
	}
	else if(unit>250)
	{
		amount=unit*1.50;
	}
	
	surcharge=amount*0.20;
	
	totalamount=amount+surcharge;
	
	
	printf("electricity bill:%f",totalamount);
}
