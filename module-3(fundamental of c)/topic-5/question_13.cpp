//Write a program in C to remove characters from a string except alphabets//
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50];
	int i,j;
	
	printf("enter the string:");
	gets(str1);
	
	// loop for termination of special characters//
	for(i=0;str1[i]!='\0';i++)
    {
        while(!((str1[i]>='a'&&str1[i]<='z')||(str1[i]>='A'&&str1[i]<='Z'||str1[i]=='\0')))
        {
            for(j=i;str1[j]!='\0';j++)
            {
                str1[j]=str1[j+1];
            }
            str1[j]='\0';
        }
    }
	
	printf("output after removal of characters:%s",str1);
	return 0;
}
