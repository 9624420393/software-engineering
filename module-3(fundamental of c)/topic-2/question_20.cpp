//If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256/-//

#include<stdio.h>
int main()
{
	int customerid,unit,totalbill;
	float charge,surcharge,netamount;
	char consumer[20];
	
	//inputs//
	printf("enter the customer id:");
	scanf("%d",&customerid);
	
	printf("enter the consumer name:");
	scanf("%s",&consumer);
	
	printf("enter the consumed unit:");
	scanf("%d",&unit);
	
	// condition to get electricity if customer has to pay subcharge or not.//
	
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
	
	totalbill = unit*charge;
	
	if(totalbill>800)
	{
		surcharge= totalbill*18/100.00;
	}
	
	netamount=totalbill+surcharge;
	
	if(netamount<256)
	{
		netamount=256;
	}
	printf("===============electricity bill=================\n");
	printf("\n customerid:%d",customerid);
	printf("\n consumername:%s",consumer);
	printf("\n unit:%d",unit);
	printf("\n totalbill:%d",totalbill);
	printf("\n surcharge:%f",surcharge);
	printf("\n netamount:%f",netamount);
	
	
	
	
	return 0;
}


