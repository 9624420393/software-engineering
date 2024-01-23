//WAP to find table for the user typed input//


#include<stdio.h>
int main()
{
	int i,num,result;
	
	//input from user//
	printf("enter the input:");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++)
	{
		// logic for table //
		result=num*i;
		
		//output //
		printf("%d  x  %d = %d   \n",num,i,result);
	}

	return 0;

}

