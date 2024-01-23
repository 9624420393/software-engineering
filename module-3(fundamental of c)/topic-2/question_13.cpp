//WAP to find minimum number among 3 numbers using ternary operator//

#include<stdio.h>
int main()
{
	int a,b,c,minimum;
	//input//
	printf("enter the a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	
	//ternary condition //
	
	minimum=(a<b)?(a<c?a :c):(b<c?b:c);
	
	//output//
	printf("minimum:%d",minimum);
}
