//WAP to Check Uppercase or Lowercase or Digit or Special Character//

#include<stdio.h>
int main()
{
	char ch;
	
	//enter any character//
	
	printf("enter the character:");
	scanf("%c",&ch);
	
	// condition to check the given character//
	
	if(ch>='A'&& ch<='Z')
	{
		printf("upper case");
	}
	else if(ch>='a'&& ch<='z')
	{
		printf("lower case");
	}
	else if(ch>'0' && ch<='9')
	{
		printf("digit");
	}
	else
	{
		printf("operator");
	}
	
	
	
	return 0;
}
