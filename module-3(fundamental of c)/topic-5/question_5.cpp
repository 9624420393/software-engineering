//Write a program in C to compare two strings without using string library functions//
#include<stdio.h>
#include<string.h>
int main()
{
    char string1[5],string2[5];
    int i,count=0;
    
    //inputs of two strings//
    printf("Enter the  1st string :\n");
    gets(string1);
    printf("\n Enter the 2nd String :\n");
    gets(string2);
    
    //comparison of two strings//
    for(i=0;string1[i]!='\0';i++)
    {
    	//counter set for comparison of strings//
      if(string1[i] == string2[i])
      {
	    count = 1;
	  }
	  else
	  {
	  	count = 0;
	  } 
    }
    
    // output loop with condition//
    if(count==1)
    {
	  printf("strings are equal");
    }
	else
	{
		printf("strings are unequal");
	}
	
	return 0;
}
