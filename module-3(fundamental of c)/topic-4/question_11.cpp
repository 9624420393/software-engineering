// WAP to accept 5 numbers from user and display in reverse order using for loop and array//
#include<stdio.h>  
int main()  
{  
    int arr[5],i;  
    
    // input of array numbers//
    printf("Enter the numbers:\n");  
    for(i=0;i<5;i++)  
	{
	 scanf("%d", &arr[i]);  
    }
    
    // output of reverse elements//
    printf("Reverse elements are:\n");  
    for(i=4;i>=0;i--) 
    {
	 printf("%d\n", arr[i]);
	}
  
    return 0;  
}  
