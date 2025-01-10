//Write a C++ program that calculates the factorial of a number using recursion//
#include<iostream>
using namespace std;

int factorial(int n)
{
	if(n>1)
	{
		return n *factorial(n-1);
	}
	else
	{
			return 1;
	} 
		
}

int main()
{
	int n;
	cout<<"enter a positive num:"<<endl;
	cin>>n;
	cout<<"factorial of"<<n<<" = "<<factorial(n);
	return 0;
}
