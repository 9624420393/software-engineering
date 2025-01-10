//Write a C++ program to display the multiplication table of a given number using a for loop.//
#include<iostream>
using namespace std;

main()
{
	int num,result;
	cout<<"Enter the number:"<<endl;
	cin>>num;
	
	for(int i=1;i<=10;i++)
	{
		result= num * i;
		
		cout<<result<<endl;
	
	}
	
	return 0;
	
}
