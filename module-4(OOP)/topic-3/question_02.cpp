//Write a program of Addition, Subtraction, Division, Multiplication using constructor//
#include<iostream>
using namespace std;
class calculator{
	private:
		int var1;
		int var2;
	public:
		// constructor for two variables//
		calculator(int v1,int v2):var1(v1),var2(v2)
		{
			var1=v1;
			var2=v2;
			
			cout<<var1<<'+'<<var2<<'='<<var1+var2<<endl;  //// addition//
			cout<<var1<<'-'<<var2<<'='<<var1-var2<<endl;  /// subtraction////
			cout<<var1<<'*'<<var2<<'='<<var1*var2<<endl;  ////multiplication///
			cout<<var1<<'/'<<var2<<'='<<var1/var2<<endl;   /////division////
		}	
};

int main()
{
	int v1,v2;
	cout<<"enter the variable v1:"<<endl;
	cin>>v1;
	cout<<"enter the variable v2:"<<endl;
	cin>>v2;
	
	calculator cal(v1,v2);
	
}

