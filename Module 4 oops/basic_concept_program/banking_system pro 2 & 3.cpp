#include<iostream>
using namespace std;
class bank{
	string name;
	int ac_num;
	string type_of_ac;
	float bal,dp_amt,wd_amt;
	public:
	void get()
	{
		cout<<"\nEnter your name: \n";
		cin>>name;
		cout<<"Enter your account number: \n";
		cin>>ac_num;
		cout<<"Enter type of account: \n";
		cin>>type_of_ac;
		cout<<"Enter your balanace: \n";
		cin>>bal;
	}
	void deposite()
	{
		cout<<"Enter amount you want to deposite: \n";
		cin>>dp_amt;
		bal = dp_amt + bal;
	}
	void withdraw()
	{
		cout<<"Enter amount you want to withdraw: \n";
		cin>>wd_amt;
		if(bal>=wd_amt)
		{
			bal = bal - wd_amt;
		}
		else
		{
			cout<<"Insufficient balance\n";
		}
	}
	void display()
	{
		cout<<"\nYour name is :" <<name;
		cout<<"\nBalance is: "<<bal;
	}
};
int main()
{
	cout<<"#######_Welcome to online banking system_######\n";
	bank obj;
	obj.get();
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
	
	return 0;
}
