//Write a program that demonstrates the difference between local and global variables in C++. Use functions to show scope.

#include<iostream>
using namespace std;
int x=50,y=20;
void function(){
	
	int a=10;
	cout<<a<<endl;
	
	cout<<"Addition of global:"<<x+y<<endl;
}

 int main()
{
	cout<<"local:";
	function();
	return 0;
	cout<<"x+y:";
}

