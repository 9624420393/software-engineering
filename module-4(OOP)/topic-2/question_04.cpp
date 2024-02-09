//Write a C++ program to implement a class called Circle that has private 
//member variables for radius. Include member functions to calculate the
//circle's area and circumference.

#include<iostream>
using namespace std;            // class called circle is created//
class circle{
	private:                     //private is declared for radius//
		float radius;
	public:
		circle(int r){
			radius=r;
		}
		float area()            ///function to find area of circle//
		{
			return 3.14*radius*radius;
		}
		float circumference()    //// function to find circumference of circle///
		{
		    return 2*3.14*radius;
		}
};
int main()
{
	int radius;
	cout<<"enter the radius";     /// input of radius///
	cin>>radius;
	circle obj(radius);            //// circle object///
	cout<<"area"<<obj.area()<<endl;    // output of area//
	cout<<"circumference"<<obj.circumference();   //// output of circumference///
	
}
