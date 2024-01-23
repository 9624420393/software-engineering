//Write a program in C to print individual characters of a string in reverse order//
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	int i,n;
	
	printf("enter the string:");
	gets(str1);
	
	n=strlen(str1);
		
	for(i=n-1;i>=0;i--)
	{
		printf("%c",str1[i]);
	}
}
