//WAP TO CHECK WHETHER THE NUM IS EQUAL OR NOT//

#include<stdio.h>
int main()
{
	int a,b;
	
	printf("enter the integer a:");
	scanf("%d",&a);
	printf("enter the integer b:");
	scanf("%d",&b);
	
	// condition to check the equality between two integer//
	
	if(a==b)
	{
		printf("equal\n");   // if condition is satisfied//
	}
	else
	{
		printf("Not equal\n");  //if condition is not satisfied//
	}
	
	return 0;
	
}
