//Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise operators.
// Perform operations using each type of operator and display the results//

#include<iostream>
using namespace std;

main()
{
	int a,b;
	
	//ARITHMETIC OPERATOR//
	cout<<"Enter the value of a"<<a<<endl;
	cin>>a;
	
	cout<<"Enter the value of b"<<b<<endl;
	cin>>b;
	
	cout<<"Addition"<<a+b<<endl;
	cout<<"subtraction"<<a-b<<endl;
	cout<<"multiplication"<<a*b<<endl;
	cout<<"division"<<a/b<<endl;
	
	//RELATIONAL OPERATOR//
	cout<<"a==b:"<<(a==b)<<endl;
	
	cout<<"a>b:"<<(a>b)<<endl;
	
	cout<<"a>=b:"<<(a>=b)<<endl;
	
	cout<<"a<b:"<<(a<=b)<<endl;
	
	cout<<"a<=b:"<<(a<=b)<<endl;
	
	//LOGICAL OPERATOR//
	
	cout<<"a && b is"<<(a&&b)<<endl;
	cout<<"a || b is"<<(a||b)<<endl;
	cout<<"! b is"<<(!b)<<endl;
	 
	
	//BITWISE OPERATOR//
	
	cout<<"a & b is:"<<(a & b)<<endl;
	cout<<"a | b is:"<<(a | b)<<endl;
	
	return 0;
}
