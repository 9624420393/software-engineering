//Write a program that implements inheritance using a base class Person and derived classes Student and Teacher. 
//Demonstrate reusability through inheritance.
#include<iostream>
using namespace std;
class person{
	private:
		string name;
		int age;
	public:
		void setPerson(int a, string n)
		{
			name=n;
			age=a;
		}
		void displayPerson()
		{
			cout<<"enter the name:"<<name<<endl;
			cout<<"enter the age:"<<age<<endl;
		}
};

class student:person{
	private:
		float percentage;
	public:
		
	      void setStudent(string n, int a, float p){
			percentage = p;
			setPerson(a,n);
		}
		void displayStudent()
		{
			cout<<"Student details are: \n";
			displayPerson();
			cout<<"Prcentage is:  "<<percentage<<endl;
		}
};

class teacher:person{
	private:
		int salary;
	public:
		void setTeacher(string n, int a, float s){
			salary = s;
			setPerson(a,n);
		}
		void displayTeacher()
		{
			cout<<"Teachers details are: \n";
			displayPerson();
			cout<<"Salary:  "<<salary<<endl;
		}
};

int main()
{
	student s;
	s.setStudent("vrunda",25 ,70);
	s.displayStudent();
	teacher t;
	t.setTeacher("Sneh", 30, 90);
	t.displayTeacher();
}
