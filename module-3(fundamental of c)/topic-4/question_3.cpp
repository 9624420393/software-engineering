//WAP to find reverse of string using recursion//
#include<stdio.h>
#include<string.h>

//function //
void rev(char*str)
{
	if(*str=='\0')
	{
		return;
	}
	//recursion function//
	rev(str+1);
	printf("%c",*str);
}

int main()
{
	char str[50];
	//user input//
	printf("enter the string:");
	gets(str);
	
	rev(str);
	return 0;
}
