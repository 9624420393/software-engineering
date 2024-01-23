//WAP to convert celsius to fahrenhit//


#include<stdio.h>
int main()

{
	
	float Fahrenhit,Celsius=0;
	// input from the user //
	printf("enter the Fahrenhit:");
	scanf("%f",&Fahrenhit);
	
	// formula to perform operation//
	
	Celsius=0.55*(Fahrenhit-32);
	
	// output //
	printf("c:%f",Celsius);
	return 0;
	
}
