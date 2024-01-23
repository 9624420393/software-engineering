//Write a program in C to count the total number of alphabets, digits and special characters in a string.//
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	int i=0,alphabets=0,digits=0,special_ch=0;
	
	// input of string//
	printf("enter the string:");
	gets(str1);
	
	// loop//
	for(i=0;str1[i]!='\0';i++)
	{
		// alphabetic loop//
		if((str1[i]>='A'&&str1[i]<='Z')||(str1[i]>='a'&&str1[i]<='z'))
		{
			alphabets++;
		}
		// digits //
		else if(str1[i]>='0'&& str1[i]<='9')
		{
			digits++;
		}
		// special character//
		else
		{
			special_ch++;
		}	
	}
	/// output///
	printf("alphabets:%d\n",alphabets);
	printf("digits:%d\n",digits);
	printf("special_ch:%d\n",special_ch);
}
