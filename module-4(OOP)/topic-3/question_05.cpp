//Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member
//functions to determine if the triangle is equilateral, isosceles, or scalene
#include<iostream>
using namespace std;
class triangle{
	private:
		//private member to store each side//
		int side1;
		int side2;
		int side3;
	public:
		// constructor used for each side length//
		triangle(int s1,int s2,int s3):side1(s1),side2(s2),side3(s3){}
		
		// member function to determine the type of triangle//
		void type_triangle()
		{
			if(side1==side2 && side2==side3)
			{
				cout<<"equilateral triangle"<<endl;  // output if all three sides are equal///
			}
			else if(side1==side2 || side1==side3 ||side2==side3)
			{
				cout<<"isoscelses triangle"<<endl; ////output if two sides are equal////
			}
			else
			{
			     cout<<"scalene triangle";	/// output if no side is equal///
			}
		}
};

int main()
{
	/// create a triangle object////
	int s1,s2,s3;
	cout<<"Input the length of three sides"<<endl;
	cout<<"side1"<<endl;
	cin>>s1;
	cout<<"side2"<<endl;
	cin>>s2;
	cout<<"side3"<<endl;
	cin>>s3;
	
	triangle one(s1,s2,s3);
	one.type_triangle();
}
