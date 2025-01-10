//Write a C++ program that takes a student’s marks as input and calculates the grade based on if-else conditions.
#include<iostream>
using namespace std;
main()
{
	int marks;
	
	cout<<"Enter the marks:"<<marks<<endl;
	cin>>marks;
	
	if(marks>=90)
	{
		cout<<"A grade"<<endl;
	}
	else if(marks>=70)
	{
		cout<<"B grade"<<endl;
	}
	else if(marks>=50)
	{
		cout<<"C grade"<<endl;
	}
	else
	{
		cout<<"D grade"<<endl;
	}
	return 0;
}

