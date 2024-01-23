//WAP to find maximum number among 3 numbers using ternary operator//
#include<stdio.h>
int main()
{
	int a=5,b=3,c=1,max;
	
	//comparison created to gain output----it will one int will compare with other two //
	
	max = (a>b)?(a>c?a :c):(b>c?b:c);
	
	printf("maximum num:%d",max);
	
	
}
