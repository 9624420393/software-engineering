//WAP to accept 5 numbers from user and check entered number is even or odd using of array//
#include<stdio.h>
int main()
{
   int a[5];
   
   // input of array elements//
   printf("Enter array elements:\n");
   for(int i=0;i<5;i++)
   {
     scanf("%d",&a[i]);
   }
  
  // loop to perform even or odd performance for array//
  
   for(int i=0;i<5;i++)
   {
   	// condition for even array//
     if(a[i]%2==0)
     printf("%d: Even\n",a[i]);
     // if array is odd//
     else
     printf("%d: Odd\n",a[i]);
   }

   return 0;
}
