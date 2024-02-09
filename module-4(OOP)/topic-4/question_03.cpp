//Create a class person having members name and age. Derive a class student
//having member percentage. Derive another class teacher having member
//salary. Write necessary member function to initialize, read and write data.
//Write also Main function (Multiple Inheritance)

#include<iostream>
using namespace std;
class person{
	public:
		string name;
		int age;
};

class student:public person{
	public:
		float percentage;
};

class teacher:public student{
	public:
		int salary;
};


