//Write a program to find out the max number from given array using function//
#include<stdio.h>
int max(int arr[])
{
	int i,max=arr[0],temp=0;
	for (i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
		
		if(arr[i]>max)
		{
			temp=arr[i];
			arr[i]=max;
			max=temp;
		}
		
		
	}
	// output of max number//
	printf("maximum:%d",max);
}

int main()
{ 
   int arr[5];
   int i;   
   
   // array input for five num//
   for(i=0;i<5;i++)
   {
   	 printf("enter the array:");
   	 scanf("%d",&arr[i]);
   }
    
    // function call//
    max(arr);
    
    return 0;
}

