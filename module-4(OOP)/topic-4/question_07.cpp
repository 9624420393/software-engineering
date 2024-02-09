//Write a C++ Program to illustrates the use of Constructors in multilevel inheritance///

#include<iostream> 
using namespace std; 
  
// Base class 
class A { 
    public: 
//    constructor
        A() 
        { 
            cout << "class A constructor"<<endl; 
        } 
}; 

class B: public A { 
    public: 
    
        B() 
        { 
            cout << "Class B constructor"<<endl; 
        } 
}; 
  

class C: public B { 
    public: 
    
        C() 
        { 
            cout << "Class C constructor"<<endl; 
              
        } 
}; 
  
int main() 
{ 
//	object created of last derived class///
    C obj; 
    return 0; 
}

