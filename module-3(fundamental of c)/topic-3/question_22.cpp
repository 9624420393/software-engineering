//Accept 3 numbers from user using while loop and check each numbers palindrome//
#include<stdio.h>
int main()
{
	int num,temp,rev=0,rem;
	printf("enter a num:");
	scanf("%d",&num);

	temp=num;
	while(temp>0)
	{
		rem=temp % 10;
		rev=rev *10 + rem;
		temp=temp/10;
	}
	printf("rev num is = %d\n",rev);
	if(num==rev)
	{
		printf("%d is palindrome\n",num);
	}
	else
	{
		printf("%d is not palindrome\n",num);
	}
	
	return 0;
}
