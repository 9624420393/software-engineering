//Write a C program that counts the number of words in a sentence entered by the user.
// Challenge: Modify the program to find the longest word in the sentence.


#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int i, words;
    
    printf("Enter any string: ");
    gets(str);

    i = 0;
    words = 1;
    while(str[i] != '\0')
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            words++;
        }
        i++;
    }

    printf("Total number of words = %d", words);

    return 0;
}
