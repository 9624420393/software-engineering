////WAP to convert country's name in abbreviate form////

#include<stdio.h>
int main()
{
	char a[20],b[20];
	
	//input country's name//
	printf("enter country's name a,b:");
	scanf("%s %s",a,b);
	
	// output of abbreviated form//
	printf("abbreviated name:");
	printf("%c.%c\n",a[0],b[0]);
	
	
	return 0;
}
