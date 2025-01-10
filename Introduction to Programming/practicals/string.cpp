//Write a C program that takes two strings from the user and concatenates them using strcat().
// Display the concatenated string and its length using strlen().

#include<stdio.h>
#include<string.h>
int main(){
	
	char a [100], b[100];
	
	printf("enter the first string");
	gets(a);
	
	printf("enter the second string");
	gets(b);
	
	strcat(a,b);
	
	
	printf("concentrated string:%s\n",a);
	int length= strlen(a);
	
	printf("length of string:%d\n",length);
	return 0;
}
