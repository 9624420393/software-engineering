//WAP TO SWAP TWO NUMBERS WITH USING THIRD VARIABLE//

#include<stdio.h>
int main()
{
	int a,b,c;
	
	//input of two number//
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	
	// third variable c://
	c=b;
	printf("third var:%d\n",c);
	
	// output of swapping//
	b=a;
	printf("b:%d\n",b);
	printf("a:%d\n",c);
	
}
