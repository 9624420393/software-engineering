///Write a C++ program to create a class called Rectangle that has private
//member variables for length and width. Implement member functions to
//calculate the rectangle's area and perimeter.
#include<iostream>
using namespace std;        /// class rectangle created//
class rectangle{
	private:
		int length;
		int width;
	public:
		rectangle(int l,int w){
			length=l;
			width=w;
		}
		int area()
		{
			return length*width;       /// area equation//
		}
		int perimeter()
		{
			return 2*(length+width);      // perimeter equation//
		}
		
};
int main()
{
	int width,length;
	cout<<"enter the length";     /// input of length//
	cin>>length;
	cout<<"enter the width";     //// input of width///
	cin>>width;
	rectangle obj(length,width);
	cout<<"area of rectangle"<<obj.area()<<endl;    // output of area//
	cout<<"permiter"<<obj.perimeter();             //// output of perimeter///
	
}
