//Write a Program of Two 1D Matrix Addition using Operator Overloading//

#include<iostream>
using namespace std;
class add{
	public:
		int a;
		
		add(int c)
		{
			a=c;
		}
		
		int operator +(add obj)
		{
			return a+obj.a;
		}
		
};
int main()
{
	add obj(5);
	add obj1(5);
	
	cout<<obj + obj1;
	return 0;
	
}

