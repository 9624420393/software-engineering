//Write a program in C to find the maximum number of characters in a string//
#include<stdio.h>
int main()
{
	char str1[50],ch;
	int i,count=0;
	
	// string to be entered//
	printf("enter the string:");
	gets(str1);
	
	// enter one specific character // 
	printf("enter a character:");
	scanf("%c",&ch);
	
	//loop to search max character//
	for(i=0;str1[i]!='\0';i++)
	{
		if(ch==str1[i])
		count++;
	}
	//output//
	printf("maximum number of character:%d",count);
	
	
	
	
}
