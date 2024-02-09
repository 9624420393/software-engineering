//Write a program to find the max number from given two numbers using friend function//
#include<iostream>
using namespace std;
class maximum{
	public:
		int a,b;
		
		void input()
		{
			cout<<"enter tha value of a:"<<endl;
			cin>>a;
			
			cout<<"enter the value of b:"<<endl;
			cin>>b;
		}
		friend void max_num(maximum obj);
		
};

void max_num(maximum obj)
{
	if(obj.a>obj.b)
	{
		cout<<"maximum num:"<<obj.a;
	}
	else
	{
		cout<<"maximum num:"<<obj.b;
	}
}

int main()
{
	maximum obj;
	obj.input();
	max_num(obj);
	return 0;
}
