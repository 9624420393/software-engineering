//WAP to find the largest of three numbers//

#include<stdio.h>
int main()
{
	int a,b,c;
	
	//input of three numbers//
	
	printf("enter the a:");
	scanf("%d",&a);
	printf("enter the b:");
	scanf("%d",&b);
	printf("enter the c:");
	scanf("%d",&c);
	
	//condition //
	
	if(a>=b && a>=c)
	{
		printf("largest num is:%d",a);
	}
	 else if(b>=a && b>=c)
	{
		printf("largest num is:%d",b);
	}
	else
	{
		printf("largest num is :%d",c);
	}
	return 0;
	
}

