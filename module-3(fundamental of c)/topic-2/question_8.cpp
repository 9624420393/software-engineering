//WAP  to accept the height of a person in centimeters and categorize the person according to their height//

#include<stdio.h>
int main()
{
	float height;
	//input//
	printf("enter the height:");
	scanf("%f",&height);
	
	//condition categorize according to the height//
	
	if(height<150)
	{
		printf("short");
		
	}
	else if((height>150)&&(height<=165))
	{
		printf("average height");
	}
	else if((height>165)&&(height<=200))
	{
		printf("very tall");
	}
	else
	{
		printf("invalid height");
	}
}

