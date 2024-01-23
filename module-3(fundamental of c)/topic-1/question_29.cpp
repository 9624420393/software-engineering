//WAP TO CONVERT MINUTES INTO SECONDS AND HOURS//

#include<stdio.h>
int main()
{
	int minute,second,hour;
	
	//input of minutes//
	printf("enter the minutes:");
	scanf("%d",&minute);
	
	// output //
	
	second=minute*60;
	hour=minute/60;
	//second will be printed//
	printf("second:%d\n",second);
	//hour will be printed//
	printf("hour:%d",hour);
	
}
