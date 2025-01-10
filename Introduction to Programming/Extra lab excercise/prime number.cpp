//Write a C program that checks whether a given number is a prime number or not using a for loop.
//Challenge: Modify the program to print all prime numbers between 1 and a given number.
#include <stdio.h>

int main()

{

    int i, num, temp = 0; 
    printf("Enter any number to Check for Prime: ");
    scanf("%d", &num);

    for (i=2;i<=num/2;i++)
    {
        if (num%i == 0)
        {
            temp++;
            break;
        }
    } 
    if (temp == 0 && num != 1)
    {
        printf("%d is a Prime number", num);
    }
    else
    {
        printf("%d is not a Prime number", num);
    }
    
    for(i=2;i<=50;i++)
    {
        int n=1;
       for(int j=2;j<=i/2;j++)
       {
       	  if(i % j == 0)
       	  {
       	  	n=0;
       	  	break;
		   }
	   }
	   if(n == 1)
	   {
	   	   printf("%d, ",i);
	   }
	}
    return 0;

}
