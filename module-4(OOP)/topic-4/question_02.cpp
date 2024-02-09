//Write a C++ Program to find Area of Rectangle using inheritance//
#include<iostream>
using namespace std;
class shape{
	public:
		int length;
		int breadth;
		
		void input()
		{
			cout<<"input the length:"<<endl;
			cin>>length;
			cout<<"input the breadth:"<<endl;
			cin>>breadth;
		}	
};
class rectangle:public shape{
	public:
		float area()
		{
			return length*breadth;
		}
};
int main()
{
	rectangle obj;
	obj.input();
	
	cout<<"Area of rectangle:"<<obj.area();
}
