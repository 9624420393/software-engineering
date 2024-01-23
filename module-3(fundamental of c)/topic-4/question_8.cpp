//WAP to reverse a string and check that the string is palindrome or not//

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50];
	int i,len=0,count=0;
	
	// input string//
	printf("enter the string:");
	gets(str1);
	
	printf("reverse string:%s\n",strrev(str1));
	
	// logic to find string palindrome using strlen inbuilt function//
	len=strlen(str1);
	
	for(i=0;i<len/2;i++)
	{
		if(str1[i]!=str1[len-i-1])
		count=1;

	}
	// condition //
    if(count)
    {
    	printf("%s is not palindrome\n",str1);
    	
	}
	else
	{
		printf("%s is palindrome\n",str1);
	}
}
