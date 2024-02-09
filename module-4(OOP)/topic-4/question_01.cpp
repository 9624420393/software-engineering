//Assume a class cricketer is declared. Declare a derived class batsman from
//cricketer. Data member of batsman. Total runs, Average runs and best
//performance. Member functions input data, calculate average runs, Display
//data. (Single Inheritance)//
#include<iostream>
using namespace std;
// base class cricketer is created//
class cricketer{
	public:
		int name;
		int total_runs;
		
		void run(int total_runs)
		{
			cout<<"total runs:";
			cin>>total_runs;
		}	
};
// derived class batsman is created//
class batsman:public cricketer{
	public:
		 float average_runs;
		 int total_runs;
		 int best_performance;
		 
		 float avgruns()
		 {
		 	return total_runs/50.0;
		 	return average_runs;
		 }
		 
		 void display()
		 {
		 	cout<<"Average_runs"<<average_runs<<endl;
		 	cout<<"best performance"<<best_performance<<endl;
		 }
		
};
int main()
{
	batsman obj;
	obj.run(100);
	obj.avgruns();
	obj.display();
	return 0;
}
