//Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa//
// ASCII value of small (a-z) are (97-122) and capital (A-Z) are (65-90)//
#include<stdio.h>
#include<string.h>
int main()
{
   char str[20];
   int i;
   printf("\n enter a string:");
   gets(str);
   for(i=0;str[i]!='\0';i++)
    {
    //it will convert lowercase to uppercase //
      if(str[i]>=97 && str[i]<=122)
      {  
    	str[i]=str[i]-32;
      } 
    //it will convert uppercase to lowercase
      else if(str[i]>=65 && str[i]<=90)
      {  
    	str[i]=str[i]+32;
      }
    }
    printf(" %s",str);
}
