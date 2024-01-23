//Write a program in C to count the total number of words in a string//
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    int i=0,words=1;

    printf("Enter any string: ");
    gets(str1);

// loop to count the words//
    while(str1[i] != '\0')
    {
        
        if(str1[i]==' '|| str1[i]=='\n')
        {
            words++;
        }

        i++;
    }
   /// output of total words///
    printf("Total number of words = %d", words);

    return 0;
}


