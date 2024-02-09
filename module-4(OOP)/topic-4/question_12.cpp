//Write a program to swap the two numbers using friend function without using third variable///
#include<iostream>
using namespace std;
class Swap{
	int num;
	public:
		////constructor using this function////
		swap(int num)
		{
			this->num=num;
		}
		/// friend function used///
		friend void swap(Swap&, Swap&);
		
};
// function to swap two number using three variables////
void swap(Swap&a, Swap&b)
{
	cout<<"\n before swapping:"<<a.num<<" "<<b.num;
	a.num=a.num+b.num;
	b.num=a.num-b.num;
	a.num=a.num-b.num;
	cout<<"\n after swapping:"<<a.num<<" "<<b.num;
	
}
int main()
{
	Swap a(5) ,b(6);
	swap(a,b);
	return 0;
}

