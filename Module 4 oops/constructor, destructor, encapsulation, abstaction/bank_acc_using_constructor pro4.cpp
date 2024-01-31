n// Write a C++ program to implement a class called Bank Account that has
//private member variables for account number and balance. Include
//member functions to deposit and withdraw money from the account.

#include<iostream>
using namespace std;
class bank_ac{
	int ac_no;
	float bal,dp_amt,wd_amt;
	public:
		bank_ac()
		{
			cout<<"Enter your account number: ";
			cin>>ac_no;
			cout<<"Enter your bank balance: ";
			cin>>bal;
		}
		void withdraw()
		{
			cout<<"Enter withdraw amount: ";
			cin>>wd_amt;
		}
		void deposite()
		{
			cout<<"Enter amount you want to deposit: ";
			cin>>dp_amt;
		}
		void display()
		{
			cout<<"total balance available: "<<bal;
		}
	
};
int main(){
	
	bank_ac obj;
	int choice;
	
	cout<<"Enter your choice 1.deposite or 2.withdraw: ";
	cin>>choice;
	switch(choice)
	{
		case 1: 
			obj.deposite();
			break;
		case 2:
			obj.withdraw();
			break;
		default:
			cout<<"You entered invalid choice";
			break;		
	}
	obj.display();
}
