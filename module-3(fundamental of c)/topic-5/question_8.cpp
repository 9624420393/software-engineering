//Write a program in C to count the total number of vowels or consonants in a string//
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50];
	int i=0,vowel=0,consonant=0;
	printf("enter the string:");
	gets(str1);
	
	// loop to find total num of vowels and consonants in the given string//
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'&& str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U')
		{
			vowel++;
		}
		else
		{
			consonant++;
		}
    }
    //output//
	printf("vowel:%d\n",vowel);
    printf("consonant:%d\n",consonant);
	return 0; 
   
}
