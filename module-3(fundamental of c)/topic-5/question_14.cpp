//Write a program in C to combine two strings manually//
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    int i,j;
    
    // enter the two strings to be combined//
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);


    // Move till the end of str1 //
    i=0;
    while(str1[i] != '\0')
    {
        i++;
    }

    // Copy str2 to str1 //
    j = 0;
    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    //str1 is NULL terminated//
    str1[i] = '\0';

    printf("Combined string = %s",str1);

    return 0;
}

