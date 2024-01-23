//Store 5 numbers in array and sort it in ascending order//
#include <stdio.h>
int main()
    {
        int i,j,a,number[30];
        
        // input of array//
        
        printf("Enter the numbers \n");
        for(i=0;i<5;i++)
		{
		    scanf("%d",&number[i]);
	    }    
	    
 // logic built for ascending where each number is compared with other numbers and sorted//
        for(i=0;i<5;i++) 
        {
            for (j=i+1;j<5;j++)
            {
               if(number[i]>number[j]) 
                {
                    a= number[i];
                    number[i]=number[j];
                    number[j]=a;
                }
            }
 
        }
 
      // ascending order will be displayed in output//
        printf("ASCENDING ORDERS: \n");
        for(i=0;i<5;i++)
            printf("%d\n",number[i]);
 
    }
