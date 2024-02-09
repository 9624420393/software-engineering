//Write a C++ program to implement a class called Employee that has private member variables for name, 
//employee ID, and salary. Include member functions to calculate and set salary based on employee
//performance. Using of constructor
#include<iostream>
#include<string>
using namespace std;
class Employee{
	private:
		string name;
		int employee_id;
		int salary;

	public:
		/// constructor is created///
		Employee(string empname,int empid,int empsalary):name(empname),employee_id(empid),salary(empsalary){}
		
		// function is created to calculate salary according to ratings////
		void calculatesalary(int ratings)
		{
			if(ratings>=0.0 && ratings<=1.4)
			{
				salary *=ratings;
			}
			else
			{
				cout<<"no change in salary";
			}
		}
		
		void setsalary(int empsalary)
		{
			salary=empsalary;
		}
		
		string getname()
		{
			return name;
		}
		int getemployee_id()
		{
			return  employee_id;
		}
		int getsalary()
		{
			return salary;
		}
};

int main()
{
	string empname;
	int empid;
	int empsalary;
	
	cout<<"enter employee name:"<<endl;
	cin>>empname;
	cout<<"enter employee id:"<<endl;
	cin>>empid;
	cout<<"enter the salary"<<endl;
	cin>>empsalary;
	
	Employee one(empname,empid,empsalary);
	
	cout<<"current salary"<<one.getsalary()<<endl;
	int ratings;
	cout<<"input the ratings(0-1.2)";
	cin>>ratings;
	
	one.calculatesalary(ratings);
	
	cout<<"updated salary"<<one.getsalary()<<endl;
	
	return 0;
}
