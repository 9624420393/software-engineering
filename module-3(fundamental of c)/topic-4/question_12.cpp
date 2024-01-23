//WAP to accept 5 students name and store it in array//
#include <stdio.h>
int main()
{
    int arr[5];
    
    // loop to enter the five students name//
    for(int i=0;i<5;i++)
    {
        printf("enter name");
        scanf("%s",&arr[i]); 
    }
    
    // loop taken to store into array element//
    printf("list of students:\n");
    for(int i=0;i<5;i++)
    {
        printf("%s\n",arr[i]);
    }
    return 0;
}
