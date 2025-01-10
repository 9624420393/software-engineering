//Write a C++ program to perform matrix addition on two 2x2 matrices//
#include<iostream>
using namespace std;
int main()
{
	int a[2][2],b[2][2],res[2][2];
	int i,j;
	
	cout<<"Matrix-1"<<endl;
	cout<<"Enter elements of Matrix-1"<<endl;
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<i;j++)
		
	    cin>>a[i][j];
	    
	    
	}
	
	cout<<"Matrix:2"<<endl;
	cout<<"Enter elements of Matrix-2"<<endl;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<i;j++)
     	
		cin>>b[i][j];

	}
	
	cout<<"Adding two matrix:"<<endl;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<i;j++)
		{
			res[i][j]=a[i][j] + b[i][j];
		}
	}
	cout<<"Result:"<<endl;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<i;j++)
		cout<<res[i][j]<<endl;
		cout<<endl;
	}

     return 0;
}
