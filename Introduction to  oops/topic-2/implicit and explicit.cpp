//Write a C++ program that performs both implicit and explicit type conversions and prints the results.

#include<iostream>
using namespace std;
int main()
{
	int x = 20;  
    float  y = 5.3;  
    float z = x + y;  
    
    cout<<"Implicit Output:"<<z<<endl;
    
    int a=8;
    int b=6;
    float result= (float)a/b;
    
    cout<<"Explicit output:"<<result<<endl;
    
}
