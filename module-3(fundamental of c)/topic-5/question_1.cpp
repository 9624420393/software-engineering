//Write a program in C to find the length of a string without using library functions//
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50];
	int i,length=0;
	
	// input of string//
	printf("enter the string:");
	gets(str1);
	
	//loop to find the length //
	for(i=0;str1[i]!='\0';i++)
	{
		length++;
	}
	
	printf("length of string:%d",length);
	return 0;
}
