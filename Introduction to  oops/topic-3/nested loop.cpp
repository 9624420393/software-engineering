//Write a program that prints a right-angled triangle using stars (*) with a nested loop.//
#include<iostream>
using namespace std;
main()
{
	int x,i;
	for(x=1;x<=5;x++)
	{
		for(i=1;i<=x;i++)
		{
			cout<<" *";
		}
		
		
		cout<<endl;
	}
	return 0;
}
