//Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
//Rectangle: Area * breadth
//Triangle: ½ *Area* breadth
//Circle: Pi * Area *Area

#include<iostream>
using namespace std;
class calculate{
	public:
		int calculatearea(int radius)
		{
			return 3.14*radius*radius;
		}
		
		int calculatearea(int length,int breadth)
		{
			return length*breadth;
		}
		
		float calculatearea(float base,float height)
		{
			return 0.5* base *height;
		}
};

int main()
{
	int radius;
	int length;
	int breadth;
	float base;
	float height;
	
	cout<<"enter the length of rectangle";
	cin>>length;
	cout<<"enter the breadth of rectangle";
	cin>>breadth;
	
	cout<<"enter the base of triangle";
	cin>>base;
	cout<<"enter the height of triangle";
	cin>>height;
	
	cout<<"enter the radius of circle";
	cin>>radius;
	
	calculate obj;
	
	cout<<"area of rectangle"<<obj.calculatearea(length,breadth)<<endl;
	cout<<"area of triangle"<<obj.calculatearea(base,height)<<endl;
	cout<<"area of circle"<<obj.calculatearea(radius)<<endl;
	
	return 0; 
}
