//Write a C program to print numbers from 1 to 10 using all three types of loops (while, for, do-while).

#include<stdio.h>
int main()
{
	int i;
	
	for(i=1;i<=10;i++){
		printf("%d\n",i);
	}
	
	int j;
	do{
		printf("%d\n",j);
		j++;
	}
	while(j<=10);
	
	int k=1;
	
	while(k<=10)
	{
		printf("%d\n",k);
		k++;
	}
	return 0;
}
