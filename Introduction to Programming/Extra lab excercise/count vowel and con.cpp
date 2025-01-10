//Write a C program that takes a string from the user and counts the number of vowels and consonants in the string.
//Challenge: Extend the program to also count digits and special characters.
#include<stdio.h>
int main()
{
	char str1[50];
	int i=0,vowel=0,con=0,digit,character,space=0;
	printf("enter the string:");
	gets(str1);
	
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'&& str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U')
		{
			vowel++;
		}
		else if(str1[i]>='a'&&str1[i]<='z'||str1[i]>='A'&&str1[i]<='Z')
		{
			con++;
		}
		else if(str1[i]>='0'&& str1[i]<='9')
		{
			digit++;
		}
		else if(str1[i]==' ')
		{
			space++;	
		}
		else
		{
			character++;
		}	
	}
	printf("vowel:%d\n",vowel);
	printf("consonant:%d\n",con);
	printf("digit:%d\n",digit);
	printf("space:%d\n",space);
	printf("character:%d",character);
	
}
