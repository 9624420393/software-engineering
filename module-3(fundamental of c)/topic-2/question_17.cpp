//Write a C program to check whether a triangle can be formed with the given values for the angles//

#include<stdio.h>
int main()
{
	float a,b,c,total=0;
	//inputs//
	printf("enter the a:");
	scanf("%f",&a);
	printf("enter the b:");
	scanf("%f",&b);
	printf("enter the c:");
	scanf("%f",&c);
	
	//total of all three float values//
	
	total=a+b+c;
	printf("total:%f\n",total);
	
	//condition to check whether triangle can be create or not//
	
	if(total==180)
	{
		printf("triangle can be formed");
	}
	else
	{
		printf("triangle cannot ne formed");
	}
	return 0;
	
}
