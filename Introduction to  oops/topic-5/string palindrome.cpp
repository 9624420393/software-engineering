//Write a C++ program to check if a given string is a palindrome (reads the same forwards and backwards).
//WAP to find the string is palindrome or not//

#include<iostream>
#include<String.h>
using namespace std;
int main()
{
	char str1[50];
	int i,len=0,count=0;
	
	cout<<"enter the string:"<<endl;
	gets(str1);
	
	len=strlen(str1);
	
	for(i=0;i<len/2;i++)
	{
		if(str1[i]!=str1[len-i-1])
		count=1;

	}
    if(count)
    {
    	cout<<" not palindrome"<<str1<<endl;
    	
	}
	else
	{
		cout<<" palindrome"<<str1<<endl;
	}
}
