//Write a program to Mathematic operation like Addition, Subtraction,
//Multiplication, Division Of two number using different parameters and
//Function Overloading
#include<iostream>
using namespace std;
class maths{
	public:
		int add(int a,int b)
		{
		    return a+b;
		}
		int add(int a,float b)
		{
			return a+b;
		}
		int add(float a,float b,float c)
		{
		     return a+b+c;	
		}	
};

int main()
{
	maths obj;
	cout<<"add of int:"<<obj.add(5,5)<<endl;
	cout<<"add of float:"<<obj.add(10,10)<<endl;
	cout<<"add of three:"<<obj.add(10,10,10);
	return 0;
}

