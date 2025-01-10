//Write a C++ program that accepts user input for their name and age and then
//displays a personalized greeting//

#include<iostream>
using namespace std;
int main()
{
	char name[10];
	int age;
	cout<<"Enter the Name"<<endl;
	
	cin>>name;
	
	cout<<"Enter the Age"<<endl;
	cin>>age;
	
	cout<<"Your Name is:"<<name<<endl;
	cout<<"Your Age is:"<<age<<endl;
};
