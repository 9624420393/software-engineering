//Write a program in C to copy one string to another string//
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],strCopy[100],i;
    printf("Enter any string:");
    gets(str1);
    
    //loop to copy one string to another//
    for(i=0;str1[i]!='\0'; i++)
    {
      strCopy[i] = str1[i];
    }
    // null termination for string//
    strCopy[i] ='\0';
    
    // outputs//
    printf("\nString 1 = %s", str1);
    printf("\nString 2 = %s", strCopy);

    return 0;
}
