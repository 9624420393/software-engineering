//Write a C++ Program to show access to Private Public and Protected using Inheritanc//
#include<iostream>
using namespace std;
class A{
	private:
		int a=10;
	public:
		int b=20;
	protected:
		int c=30;
	public:
	void disA()
	{
		cout<<"a"<<a<<endl;
		cout<<"b"<<b<<endl;
		cout<<"c"<<c<<endl;
	}
};
class B:public A
{
	public:
		void disB()
		{
			cout<<"b"<<b<<endl;
			cout<<"c"<<c<<endl;
		}
};
int main()
{
	B obj;
	obj.disA();
	obj.disB();
	return 0;
}

