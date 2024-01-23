//Accept 5 names from user at run time.//

#include<stdio.h>
int main()
{
    int i;
    char name[10];
    // input//
    
    for(i=0;i<=5;i++)
    {
    	printf("enter the name:");
    	scanf("%s",&name);
	
	// output//
	     printf("NAME:%s\n",name);
    }
    
    return 0;
}

