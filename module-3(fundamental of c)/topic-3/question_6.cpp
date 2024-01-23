//WAP to print Fibonacci series up to given numbers//
#include<stdio.h>
int main()
{
	int i,num,t1=0,t2=1,t3;
	
	// enter the number to get wanted the series//
	
	printf("enter the num:");
	scanf("%d",&num);
	
	printf("the fibonacci series:\n");
	
	printf("%d \n %d \n",t1,t2);
	
	// for loop to add one number to other and then get fibonacci series in the end//
	for(i=2;i<=num;i++)
	{
		t3=t1+t2;
		printf("%d\n",t3);
		t1=t2;
		t2=t3;
	}
	return 0;
}

