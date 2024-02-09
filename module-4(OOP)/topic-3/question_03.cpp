//Write a C++ program to create a class called Car that has private member variables for company, model, and year. 
//Implement member functions to get and set these variables.//
#include<iostream>
using namespace std;
class car{
	private:
		string company;
		string model;
		int year;
	public:
		// get and set variable of car functions//
		void setcompany(string c)
		{
			company=c;
		}
		void setmodel(string m)
		{
			model=m;
		}
		void setyear(int y)
		{
			year=y;
		}
		string getcompany()
		{
			return company;
		}
		string getmodel()
		{
			return model;
		}
		int getyear()
		{
			return year;
		}
};

int main()
{
	car obj;
	// output of car information///
	obj.setcompany("czech car manufacturer");
	obj.setmodel("skoda");
	obj.setyear(2001);
	cout<<"car company:"<<obj.getcompany()<<endl;
	cout<<"car model:"<<obj.getmodel()<<endl;
	cout<<"car year:"<<obj.getyear()<<endl;
}
