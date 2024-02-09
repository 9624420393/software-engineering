//Write a program of to swap the two values using template//
#include<iostream>
using namespace std;
template <class T>
// template function created///
T swap(T a,T b )
{
	cout<<"before swapping:"<<a<<" "<<b<<endl;
	a = a+b;
	b = a-b;
	a = a-b;
	cout<<"After swapping: "<<a<<" "<<b<<endl;
} 

int main()
{
//	function call
	swap(2,3);
	
	return 0;
}

