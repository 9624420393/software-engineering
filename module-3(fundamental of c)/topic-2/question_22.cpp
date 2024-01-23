//Write a C program to input basic salary of an employee and calculate its
//Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%//

#include<stdio.h>
int main()
{
	float basic,gross,hra,da;
	
	//input salary//
	
	printf("enter the basic salary:");
	scanf("%f",&basic);
	
	
	//condition to get salary while adding the da and hra//
	if(basic<=10000)
	{
		da=basic*0.8;
		hra=basic*0.2;
	}
	else if(basic<=20000)
	{
		da=basic*0.9;
		hra=basic*0.25;
	}
	else if(basic>20000)
	{
		da=basic*0.95;
		hra=basic*0.3;
	}
	
	gross=basic+hra+da;
	
	printf("gross salary:%f",gross);
	
	
	
	
	return 0;
}
