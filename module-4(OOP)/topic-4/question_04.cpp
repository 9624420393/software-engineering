//Write a C++ Program display Student Mark sheet using Multiple inheritance//
#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int rollno;
		
		void getstudent()
		{
			cout<<"enter the name:"<<endl;
			cin>>name;
			
			cout<<"enter the roll no:"<<endl;
			cin>>rollno;
		}
		
		string setname()
		{
			return name;
		}
		
		int setrollno()
		{
			return rollno;
		}
};

class marks:public student{
	public:
		int marks;
		
		void getmarks()
		{
			cout<<"enter the marks:"<<endl;
			cin>>marks;
		}
		
		int setmarks()
		{
			return marks;
		}
};

class grade:public marks{
	public:
		int grade;
		
		void calculategrade()
		{
			if(marks>=90)
			{
				cout<<"A+"<<endl;
			}
			else if(marks<=80 && marks>=70)
			{
				cout<<"A"<<endl;
			}
			else if(marks<=60 && marks>=50)
			{
				cout<<"B"<<endl;
			}
			else
			{
				cout<<"C"<<endl;
			}
		}	
};

int main()
{
	grade obj;
	obj.getstudent();
	obj.getmarks();
	
	cout<<"-------------student Marksheet-------------"<<endl;
	cout<<"NAME:"<<obj.setname()<<endl;
	cout<<"ROLL NO:"<<obj.setrollno()<<endl;
	cout<<"MARKS:"<<obj.setmarks()<<endl;
	cout<<"GRADE:";obj.calculategrade();
	
	return 0;
}
