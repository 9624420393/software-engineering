//WAP program to print below output using for loop
//01 02 03 04 05 06 07 08 09 10
//11 12 13 14 15 16 17 18 19 20
//..............
//..............
//41 42 43 44 45 46 47 48 49 50//

#include<stdio.h>

int main()
{
    int num=1;
    
    // outer loop ,where four lines are used for output//
    for(int i=0;i<=4;i++)
    {
    	// inner loop to get 10 num in one line//
        for(int j=1;j<=10;j++)
        {
        	// number gets incremented //
            printf("%02d ",num++);
        }
        
        printf("\n");
    }
    return 0;
}
