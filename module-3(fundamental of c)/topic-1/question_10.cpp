//WAP to find area of rectangular prism formula:A=2(wl+hl+hw)

#include<stdio.h>
int main()
{
	int L,H,W,A;
	
	//inputs//
	printf("ENTER THE VALUE OF L:");
	scanf("%d",&L);
	printf("ENTER THE VALUW OF H:");
	scanf("%d",&H);
	printf("ENTER THE VALUE OF W:");
	scanf("%d",&W);
	
	//equation to gain output//
	printf("A:%d",A=2*(L+W+H));
	
	
	return 0;
}
