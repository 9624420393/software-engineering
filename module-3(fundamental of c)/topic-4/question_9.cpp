//WAP to show difference between Structure and Union//
#include<stdio.h>
// structure created//
struct s_tag
{
	int a;
	long int b;
}x;
//union created//
union u_tag
{
	int a;
	long int b;
}y;

int main()
{
	//output//
	printf("memory allocation for structure=%d",sizeof(x));
	printf("\n memory allocation for union=%d",sizeof(y));
	return 0;
}
