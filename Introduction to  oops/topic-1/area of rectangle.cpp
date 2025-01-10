#include<iostream>
using namespace std;
class Rectangle{
	public:
		int length,width;
		
		int area()
		{
			cout<<"enter the length"<<length<<endl;
			cin>>length;
			cout<<"enter the width"<<width<<endl;
			cin>>width;
		   return length*width;	
		}
		
};
int main()
{
	Rectangle rectangle;
	cout<<"Area of rectangle:"<<rectangle.area();
	
}
