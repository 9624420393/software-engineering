//Write a C++ program that accepts an array of integers, calculates the sum and average, and displays the results.
#include<iostream>
using namespace std;

int main()
{
	int a[5];
	int i;
	int sum=0;
	int avg=0;
	
	for(i=1;i<=5;i++)
	{
		cout<<"Enter any five numbers:"<<endl;
		cin>>a[i];
		sum+=a[i];
		avg=sum/i;
		
	}
	
	cout<<"Array addition:"<<sum<<endl;
	cout<<"Average:"<<avg<<endl;
	return 0;
}
