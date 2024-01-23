//Write a program in C to separate individual characters from a string//
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20];
    printf("Enter the string: ");
    gets(str1);
	   
    // separation of individual ch//
    printf("displaying the characters:\n");
    for (int i=0;str1[i]!='\0';i++)
	 {
        if(str1[i]!=' ') 
		{
            printf("%c\n",str1[i]);
        }
    }
    return 0;
}
