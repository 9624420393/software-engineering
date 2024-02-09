///Write a C++ program to implement a class called Student that has private
//member variables for name, class, roll number, and marks. Include
//member functions to calculate the grade based on the marks and display
//the student's information. Accept address from each student implement
//using of aggregation//

#include<iostream>
using namespace std;
class student{
	public:
		string st_name;
		string cl;
		int rol_num;
		
		/// this function is used using constructor///
		student(string name,string c,int rol)
		{
			this->st_name=name;
			this->cl=c;
			this->rol_num=rol;		
		}
		
};
/// class grade is created//
class grade{
	public:
		int marks;
		student *Student;
	
		grade(int m,student *Student)
		{
			this->marks=m;
			this->Student=Student;
		}
		// function to calculate grade of students///
    	void calgrade()
	    {
	    	if(marks>90)
	    	{
			   cout<<"A+";
		    }
		    else if(marks>=80)
		    {
			   cout<<"A";
		    }
		    else if(marks>=70)
		    {
			   cout<< "B";
	    	}
		    else if(marks>=60)
		    {
			  cout<< "C";
	    	}
	    	else
		    {
		    	cout<< "D";
	    	}
    	}
	   //// function to display the student details///
	   void display()
	   {
		cout<<"-----------------------student details-----------------\n";
		cout<<"MARKS OF STUDENT:"<<marks<<endl;
		cout<<"NAME:"<<Student->st_name<<endl;
		cout<<"CLASS:"<<Student->cl<<endl;
		cout<<"ROLL NUMBER:"<<Student->rol_num<<endl;	
	   }
};
int main()
{
	student s("vrunda","V",126);
	grade g(60 ,&s);
	
	/// output///
	g.display();
	cout<< "GRADE :";
	g.calgrade();
	
}
