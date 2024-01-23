//WAP to provide grades to students including three subjects marks//


#include<stdio.h>
main()
{
	int english,maths,gk;
	float total,percentage;
	
	
	// inputs of three subjects marks//
	printf("enter the marks of english:");
	scanf("%d",&english);
	printf("enter the marks of maths:");
	scanf("%d",&maths);
	printf("enter the marks of gk:");
	scanf("%d",&gk);
	
	//find the total of all subjects//
	
	total=english+maths+gk;
	
	// average percantage//
	percentage=(total/300)*100;
	
	// condition//
	if(percentage>=80)
	{
	    printf("A GRADE");  // if input is >=80 then 'A grade'
	}
	else if(percentage>=50)
	{
		printf("B GRADE");  // if input is >=50 then 'B grade'
	}
	else
	{
		printf("FAIL");	 // if input is expect above condition the 'fail'	
	}
	return 0;
}
