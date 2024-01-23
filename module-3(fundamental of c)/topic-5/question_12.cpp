//Write a program in C to find the number of times a given word 'is' appears in the given string//
#include <stdio.h>
#include<string.h>
int main()
{
    int count=0,t,times=0,i,s;
    char str1[100];
 
    puts("Enter a string:");
    gets(str1);
   
   // while loop used to set counter for string1//
    while(str1[count]!='\0')
    {
        count++;
    }
   /// for loop to count "is" in the provided string///
    for(t=0;t<=count-2;t++)
    {
        i=(str1[t] == 'i' ||str1[t] == 'I');
        s=(str1[t+1]== 's'||str1[t+1] == 'S');
        if(i && s==1)
        {
        	times++;
		}
    }
    printf("Frequency of the word 'is' is %d\n", times);
}


