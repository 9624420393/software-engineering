//Write a C++ program that defines functions for basic arithmetic operations (add, subtract, multiply, divide).
// The main function should call these based on user input.

#include<iostream>
using namespace std;

int main()
{
	char op;
	float a,b;
	
	cout<<"Enter operator: + ,- ,* , /:"<<endl;
	cin>>op;
	
	cout<<"enter the value of a:"<<endl;
	cin>>a;
	
	cout<<"enter the value of b:"<<endl;
	cin>>b;
	
	switch(op)
	{
		case'+':
		{
			cout<<a <<"+"<<b<<"="<<a+b;
			break;
     	}
     	case'-':
		 {
		 	cout<<a<<"-"<<b<<"="<<a-b;
		 	break;
     	}
     	case'*':
		 {
     		cout<<a<<"*"<<b<<"="<<a*b;
     		break;
         }
         case'/':
		 {
         	cout<<a<<"/"<<b<<"="<<a/b;
         	break;
         }
         default:
         	break;
         	
         	return 0;
    }
}
