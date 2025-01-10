//Write a C++ program that defines a class Calculator with functions for addition, subtraction, multiplication, and division. 
//Create objects to use these functions.

#include<iostream>
#include<math.h>
using namespace std;
class calculator{
	float a,b;
	public:
		// function to take input from user//
		
		void result()
		{
			cout<<"enter the value of a:";
			cin>>a;
			cout<<"enter the value of b:";
			cin>>b;
		}
		// function to add two numbers//
		float add()
		{
			return a+b;
		}
		//function to sub two numbers//
		float sub()
		{
			return a-b;
		}
		//function to mul two numbers//
		float mul()
		{
			return a*b;
		}
		//function to div two numbers//
		float div()
		{
			if(b=a)
			{
				cout<<"divison by zero";
				return INFINITY;
			}
			else
			{
				    return a/b;
			}
		}	
};
int main()
{
	int choice;
	calculator c;
	cout<<"enter '1' for '+' for addition"<<
	      "\nenter '2' for subtraction"<<
	      "\nenter '3' for multiplication"<<
	      "\nenter '4' for division"<<
	      "\nenter '0' to exit";
	      
	cout<<"\nenter the choice";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			// result function//
	      	  c.result();
		      cout<<"result"<<
		      // add function to add//
		      c.add() <<endl;
		      break;
		case 2:
			  c.result();
			  cout<<"result"<<
			  // sub function//
			  c.sub() <<endl;
			  break;
		case 3:
			  c.result();
			  cout<<"result"<<
			  //mul function//
			  c.mul()<<endl;
			  break;
		case 4:
			  c.result();
			  cout<<"result"<<
			  //div function//
			  c.div()<<endl;
			  break;	
	}
	return 0;      
}

