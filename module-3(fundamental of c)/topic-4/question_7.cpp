//WAP Find out length of string without using inbuilt function//
#include<stdio.h>
int main()
{
	char str1[50];
	int i,count=0;
	
	// input string//
	printf("enter the string:");
	gets(str1);
	
	//loop to count each character of string//
	for(i=0;str1[i]!='\0';i++)
	{ 
		count++;
    }
    
    // output//
   printf("length: %d",count);
   return 0;
}
