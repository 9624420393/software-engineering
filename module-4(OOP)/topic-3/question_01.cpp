//Write a program to find the multiplication values and the cubic values using inline function//
#include<iostream>
using namespace std;
class line{
	public:
		inline float mul(float x,float y)
		{
			return(x*y);
		}
		inline float cube(float x)
		{
			return(x*x*x);
		}
};

int main()
{
	line obj;
	float v1,v2;
	// input of values ///
	cout<<"enter two values";
	cin>>v1>>v2;
	/// output of multiplication///
	cout<<"\nmultiplication value:"<<obj.mul(v1,v2);
	// output of cube//
	cout<<"\n cube"<<obj.cube(v1);
	return 0;
}
