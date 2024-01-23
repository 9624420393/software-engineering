//Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
//Temp < 0 then Freezing weather
//Temp 0-10 then Very Cold weather
//Temp 10-20 then Cold weather
//Temp 20-30 then Normal in Temp
//Temp 30-40 then Its Hot
//Temp >=40 then Its Very Hot

#include<stdio.h>
int main()
{
	int temp;
	//input//
	printf("enter the temperature:");
	scanf("%d",&temp);
	
	// check the criteria and gain output according to temp given by user// 
	
	if(temp<0)
	{
		printf("frezzing weather");
	}
	else if(temp<10)
	{
		printf("very cold weather");
	}
	else if(temp<20)
	{
		printf("cold weather");
	}
	else if(temp<30)
	{
		printf("normal in temperature");
	}
	else if(temp<40)
	{
		printf("hot");
	}
	else if(temp>=40)
	{
		printf("very hot");
	}
	else
	{
		printf("invalid");
	}
	
	
	
	
	
	
	
	
	return 0;
}
