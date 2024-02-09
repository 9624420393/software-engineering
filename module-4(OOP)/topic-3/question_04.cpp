//Write a C++ program to implement a class called Bank Account that has
//private member variables for account number and balance. Include
//member functions to deposit and withdraw money from the account.
#include<iostream>
using namespace std;
class bank_account{
	private:
		int account_number;
		float balance;
	public:
		// constructor////
		bank_account(int acc_no,float bal)
		{
			account_number=acc_no;
			balance=bal;
		}	
		// function created///
		void deposit();
		void withdraw();
		void account_details();
				
};
/// function to deposit amount//
void bank_account::deposit()
{
	int depositamount1;
	cout<<"enter the deposit amount"<<endl;
	cin>>depositamount1;
	
}
///function to withdraw///
void bank_account::withdraw()
{
	int withdrawamount1;
	cout<<"enter the withdraw amount1"<<endl;
	cin>>withdrawamount1;
	
}

int main()
{
	int acc_no;
	float bal;
	// input the details///
	cout<<"enter the details"<<endl;
	cout<<"enter account no:"<<endl;
	cin>>acc_no;
	cout<<"balance:"<<endl;
	cin>>bal;
    bank_account b1(acc_no,bal);
    b1.deposit();
    b1.withdraw();
    return 0;
	
}
