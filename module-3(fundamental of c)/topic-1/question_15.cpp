//WAP to convert school's name into abbreviated form//

#include<stdio.h>
int main()
{
	
	// input a,b,c includes the school's name //
	char a[20],b[20],c[20];
	printf("enter the school name a,b,c:");
	scanf("%s %s %s",a,b,c);
	
	
	// output to be derived//
	printf("Abbrievated name:");
	
	printf("%c.%c.%c\n",a[0],b[0],c[0])	;
	
	
	return 0;
}
