//Write a program to concatenate the two strings using Operator Overloading///
#include<iostream>
using namespace std;
class concentrate{
	public:
		string s1;
		
		concentrate(string s)
		{
			s1=s;
	
		}
		
		string operator +(concentrate obj)
		{
			return s1+obj.s1;
		}
};

int main()
{
	concentrate obj("string 1");
	concentrate obj1("string 2");
	cout<<obj+obj1;
	return 0;
}
