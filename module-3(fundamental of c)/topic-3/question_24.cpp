//1 + 2 + 3 + 4 + 5 + ... + n//
#include<stdio.h>
int main()
{
	int p,N;
	// input series//
	printf("input value of N:");
	scanf("%d",&N);
	
	// output //
	for(p=1;p<=N;p++)
	{
		printf("%d",p);
	}
	return 0;
}

