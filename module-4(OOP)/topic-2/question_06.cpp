///Write a C++ program to create a class called Person that has private
//member variables for name, age and country. Implement member
//functions to set and get the values of these variables.
#include<iostream>
#include<string>
using namespace std;
class person{          /// private class named person is created////
	private:
		string name;
		int age;
		string country;
	public:
		void setname(string n)    /// set name///
		{
			name=n;
		}
		void setage(int a)     /// set age//
		{
			age=a;
		}
		void setcountry( string c)   /// set country///
		{
			country=c;
		}
		 string getname()      /// get name ////
		{
			  return name;
		}
		 int getage()      /// get age///
		{
			 return age;
		}
		string getcountry()   /// get country///
		{
			 return country;
		}
		
};
int main()
{
	person obj;
	obj.setname("vrunda patel");
	obj.setage(27);
	obj.setcountry("India");
	cout<<"NAME"<<obj.getname()<<endl;     /// output of name///
	cout<<"AGE"<<obj.getage()<<endl;       //// output of age///
	cout<<"COUNTRY"<<obj.getcountry()<<endl;  /// output of country///
}
