//Write a program in C to extract a substring from a given string//
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],result[50];
	int start;
	int end;
	
	//input//
	printf("enter a string:");
	gets(str);
	
	printf("enter the starting index:");
	scanf("%d",&start);
	
	printf("enter ending string:");
	scanf("%d",&end);
	
	//loop to combine two strings//
	for(int i=start;i<=end;i++)
	{
		result[i-start]=str[i];
	}
	
	//output//
	printf("the substring:%s\n",result);
}

